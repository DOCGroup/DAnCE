/* -*- C++ -*- */
// $Id$

// ============================================================================
//
// = LIBRARY
//    TAO/orbsvcs/IFR_Service
//
// = FILENAME
//    ProvidesDef_i.h
//
// = DESCRIPTION
//    ProvidesDef servant class.
//
// = AUTHOR
//    Jeff Parsons <parsons@cs.wustl.edu>
//
// ============================================================================

#ifndef TAO_PROVIDESDEF_I_H
#define TAO_PROVIDESDEF_I_H

#include "Contained_i.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif /* _MSC_VER >= 1200 */
#pragma warning(disable:4250)
#endif /* _MSC_VER */

class TAO_ProvidesDef_i : public virtual TAO_Contained_i
{
  // = TITLE
  //    TAO_ProvidesDef_i
  //
  // = DESCRIPTION
  //    Represents an interface that is provided by a component.
  //
public:
    TAO_ProvidesDef_i (TAO_Repository_i *repo,
                       ACE_Configuration_Section_Key section_key);
  // Constructor

  virtual ~TAO_ProvidesDef_i (void);
  // Destructor

  virtual CORBA::DefinitionKind def_kind (
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Return our definition kind.

  virtual void destroy (
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // Remove the repository entry.

  virtual void destroy_i (
      CORBA::Environment &ACE_TRY_ENV =
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual CORBA_Contained::Description *describe (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // From Contained_i's pure virtual function.

  virtual CORBA_Contained::Description *describe_i (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
  // From Contained_i's pure virtual function.

  virtual CORBA_InterfaceDef_ptr interface_type (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  CORBA_InterfaceDef_ptr interface_type_i (
      CORBA::Environment &ACE_TRY_ENV = 
        TAO_default_environment ()
    )
    ACE_THROW_SPEC ((CORBA::SystemException));
};

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* TAO_PROVIDESDEF_I_H */

