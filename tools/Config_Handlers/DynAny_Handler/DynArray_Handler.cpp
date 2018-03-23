#include "DynArray_Handler.h"
#include "DynAny_Handler.h"
#include "dance/Logger/Log_Macros.h"
#include "Basic_Deployment_Data.hpp"
#include "Common.h"

#include "ace/Null_Mutex.h"

#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/TypeCodeFactory/TypeCodeFactory_Adapter_Impl.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Sequence_TypeCode.h"
#include "tao/IFR_Client/IFR_BasicC.h"

namespace DAnCE
{
  namespace Config_Handlers
  {
    DynamicAny::DynAny_ptr
    DynArray_Handler::extract_into_dynany (const DataType &type,
                                           const DataValue &value,
                                           CORBA::TypeCode_ptr req_tc)
    {
      DANCE_TRACE("DynArray_Handler::extract_into_dynany");

      CORBA::TypeCode_var tc;
      if (req_tc)
        tc = req_tc;
      else
        tc = DynArray_Handler::create_typecode (type);

      // Make the actual DynArray
      DynamicAny::DynAny_var temp =
        DYNANY_HANDLER->daf ()->create_dyn_any_from_type_code (tc);
      DynamicAny::DynArray_var retval =
        DynamicAny::DynArray::_narrow (temp.in ());

      DynamicAny::DynAnySeq dynseq;
      CORBA::ULong pos = 0;

      switch (type.array ().elementType ().kind ().integral ())
        {
          // ========== BASIC TYPES
        case TCKind::tk_null_l:
        case TCKind::tk_void_l:
        case TCKind::tk_objref_l:
        case TCKind::tk_fixed_l:
        case TCKind::tk_component_l:
        case TCKind::tk_home_l:

          DANCE_DEBUG (DANCE_LOG_TERMINAL_ERROR,
            (LM_WARNING, "I don't know how to handle null or void types\n"));
          throw 1;

        case TCKind::tk_short_l:
        case TCKind::tk_long_l:
        case TCKind::tk_ushort_l:
        case TCKind::tk_ulong_l:
        case TCKind::tk_float_l:
        case TCKind::tk_double_l:
        case TCKind::tk_boolean_l:
        case TCKind::tk_octet_l:
        case TCKind::tk_string_l:
        case TCKind::tk_longlong_l:
        case TCKind::tk_ulonglong_l:
        case TCKind::tk_longdouble_l:
        case TCKind::tk_wstring_l:
        case TCKind::tk_enum_l:
        case TCKind::tk_struct_l:
        case TCKind::tk_sequence_l:
        case TCKind::tk_array_l:
          try
            {
              dynseq.length (value.count_element ());

              for (DataValue::element_const_iterator i = value.begin_element ();
                   i != value.end_element ();
                   ++i)
                {
                  DynamicAny::DynAny_var dynany
                    (DYNANY_HANDLER->extract_into_dynany (type.array ().elementType (),
                                                          **i));
                  dynseq[pos++] = dynany->copy ();
                }

              retval->set_elements_as_dyn_any (dynseq);
              return retval._retn ();
            }
          catch (DynamicAny::DynAny::InvalidValue)
            {
              DANCE_DEBUG (DANCE_LOG_TERMINAL_ERROR, (LM_ERROR, ACE_TEXT ("Invalid value provided in XML when trying to ")
                          ACE_TEXT ("populate %ith element of an array\n"),
                          pos));
              throw Config_Error (ACE_TEXT (""), ACE_TEXT ("Invalid value whilst populating the array."));
            }

        case TCKind::tk_char_l:
        case TCKind::tk_wchar_l:
          // special case where value iterator multiplicity should be one, and should
          // represent a string, each character of which becomes a element of the sequence.

        case TCKind::tk_any_l:
        case TCKind::tk_TypeCode_l:
        case TCKind::tk_Principal_l:
        case TCKind::tk_union_l:
        case TCKind::tk_alias_l:
        case TCKind::tk_except_l:
        case TCKind::tk_value_l:
        case TCKind::tk_value_box_l:
        case TCKind::tk_native_l:
        case TCKind::tk_abstract_interface_l:
        case TCKind::tk_local_interface_l:
        case TCKind::tk_event_l:
          // Special case where element association in datavalue contains another datavalue.
          DANCE_DEBUG (DANCE_LOG_TERMINAL_ERROR, (LM_ERROR, DLINFO ACE_TEXT ("DynArray_Handler::extract_into_dynany - Type not supported\n")));
          throw Config_Error (ACE_TEXT (""), ACE_TEXT ("Type not supported"));
        }

      return retval._retn ();
    }

    CORBA::TypeCode_ptr
    DynArray_Handler::create_typecode (const DataType &type)
    {
      DANCE_TRACE("DynArray_Handler::create_typecode");

      if (!type.array_p ())
        {
          DANCE_DEBUG (DANCE_LOG_TERMINAL_ERROR,
            (LM_ERROR, ACE_TEXT (
              "ERROR: Array type description required")));
          throw Config_Error (ACE_TEXT (""),
            ACE_TEXT ("Expected <array> element, incorrect tc_kind."));
        }

      CORBA::TypeCode_var etc =
        DYNANY_HANDLER->create_typecode (type.array ().elementType ());

      CORBA::ULong const length =  type.array ().length ();

      CORBA::TypeCode_var tc =
        DYNANY_HANDLER->orb ()->create_array_tc (length, etc);

      return tc._retn ();
    }
  }
}



