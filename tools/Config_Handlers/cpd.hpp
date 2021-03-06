/*
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 *
 * If you find errors or feel that there are bugfixes to be made,
 * please report this to the XSC project at
 * https://github.com/DOCGroup/XSC
 */
#ifndef CPD_HPP
#define CPD_HPP

#include "XSC_XML_Handlers_Export.h"
// Forward declarations.
namespace DAnCE
{
  namespace Config_Handlers
  {
    class PackagedComponentImplementation;
    class ComponentPackageDescription;
    class ConnectorPackageDescription;
  }
}

#include <memory>
#include <string>
#include <list>
#include "ace/XML_Utils/XMLSchema/Types.hpp"
#include "ace/XML_Utils/XMLSchema/id_map.hpp"
#include "ace/Refcounted_Auto_Ptr.h"
#include "ace/Null_Mutex.h"
#include "ace/ace_wchar.h"

#if !defined(XML_XSC_SMART_PTR)
# if defined(ACE_HAS_CPP11)
#   define XML_XSC_SMART_PTR(X) std::unique_ptr<X>
# else
#   define XML_XSC_SMART_PTR(X) std::auto_ptr<X>
# endif
#endif

#include "cid.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    class XSC_XML_Handlers_Export PackagedComponentImplementation : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PackagedComponentImplementation, ACE_Null_Mutex> _ptr;

      // name
      public:
      ::XMLSchema::string<ACE_TCHAR> const& name () const;
      void name (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::XMLSchema::string<ACE_TCHAR> ) name_auto_ptr_type;
      name_auto_ptr_type name_;

      // referencedImplementation
      public:
      ::DAnCE::Config_Handlers::ComponentImplementationDescription const& referencedImplementation () const;
      void referencedImplementation (::DAnCE::Config_Handlers::ComponentImplementationDescription const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::DAnCE::Config_Handlers::ComponentImplementationDescription ) referencedImplementation_auto_ptr_type;
      referencedImplementation_auto_ptr_type referencedImplementation_;

      public:
      PackagedComponentImplementation (::XMLSchema::string<ACE_TCHAR> const& name__,
                                       ::DAnCE::Config_Handlers::ComponentImplementationDescription const& referencedImplementation__);

      explicit PackagedComponentImplementation (::XSCRT::XML::Element<ACE_TCHAR> const&);
      PackagedComponentImplementation (PackagedComponentImplementation const& s);
      PackagedComponentImplementation& operator= (PackagedComponentImplementation const& s);
    };


    class XSC_XML_Handlers_Export ComponentPackageDescription : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ComponentPackageDescription, ACE_Null_Mutex> _ptr;

      // label
      public:
      bool label_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& label () const;
      void label (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::XMLSchema::string<ACE_TCHAR> ) label_auto_ptr_type;
      label_auto_ptr_type label_;

      // UUID
      public:
      bool UUID_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& UUID () const;
      void UUID (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::XMLSchema::string<ACE_TCHAR> ) UUID_auto_ptr_type;
      UUID_auto_ptr_type UUID_;

      // realizes
      public:
      bool realizes_p () const;
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& realizes () const;
      void realizes (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::DAnCE::Config_Handlers::ComponentInterfaceDescription ) realizes_auto_ptr_type;
      realizes_auto_ptr_type realizes_;

      // configProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> configProperty_value_type;
      typedef std::list<configProperty_value_type> configProperty_container_type;
      typedef configProperty_container_type::iterator configProperty_iterator;
      typedef configProperty_container_type::const_iterator configProperty_const_iterator;
      configProperty_iterator begin_configProperty ();
      configProperty_iterator end_configProperty ();
      configProperty_const_iterator begin_configProperty () const;
      configProperty_const_iterator end_configProperty () const;
      void add_configProperty (configProperty_value_type const&);
      size_t count_configProperty () const;

      protected:
      configProperty_container_type configProperty_;

      // implementation
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::PackagedComponentImplementation, ACE_Null_Mutex> implementation_value_type;
      typedef std::list<implementation_value_type> implementation_container_type;
      typedef implementation_container_type::iterator implementation_iterator;
      typedef implementation_container_type::const_iterator implementation_const_iterator;
      implementation_iterator begin_implementation ();
      implementation_iterator end_implementation ();
      implementation_const_iterator begin_implementation () const;
      implementation_const_iterator end_implementation () const;
      void add_implementation (implementation_value_type const&);
      size_t count_implementation () const;

      protected:
      implementation_container_type implementation_;

      // infoProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> infoProperty_value_type;
      typedef std::list<infoProperty_value_type> infoProperty_container_type;
      typedef infoProperty_container_type::iterator infoProperty_iterator;
      typedef infoProperty_container_type::const_iterator infoProperty_const_iterator;
      infoProperty_iterator begin_infoProperty ();
      infoProperty_iterator end_infoProperty ();
      infoProperty_const_iterator begin_infoProperty () const;
      infoProperty_const_iterator end_infoProperty () const;
      void add_infoProperty (infoProperty_value_type const&);
      size_t count_infoProperty () const;

      protected:
      infoProperty_container_type infoProperty_;

      // href
      public:
      bool href_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& href () const;
      ::XMLSchema::string<ACE_TCHAR>& href ();
      void href (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::XMLSchema::string<ACE_TCHAR> ) href_auto_ptr_type;
      href_auto_ptr_type href_;

      public:
      ComponentPackageDescription ();

      explicit ComponentPackageDescription (::XSCRT::XML::Element<ACE_TCHAR> const&);
      ComponentPackageDescription (ComponentPackageDescription const& s);
      ComponentPackageDescription& operator= (ComponentPackageDescription const& s);
    };


    class XSC_XML_Handlers_Export ConnectorPackageDescription : public ::XSCRT::Type
    {
      typedef ::XSCRT::Type Base;

      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ConnectorPackageDescription, ACE_Null_Mutex> _ptr;

      // label
      public:
      bool label_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& label () const;
      void label (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::XMLSchema::string<ACE_TCHAR> ) label_auto_ptr_type;
      label_auto_ptr_type label_;

      // UUID
      public:
      bool UUID_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& UUID () const;
      void UUID (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::XMLSchema::string<ACE_TCHAR> ) UUID_auto_ptr_type;
      UUID_auto_ptr_type UUID_;

      // realizes
      public:
      bool realizes_p () const;
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& realizes () const;
      void realizes (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::DAnCE::Config_Handlers::ComponentInterfaceDescription ) realizes_auto_ptr_type;
      realizes_auto_ptr_type realizes_;

      // configProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> configProperty_value_type;
      typedef std::list<configProperty_value_type> configProperty_container_type;
      typedef configProperty_container_type::iterator configProperty_iterator;
      typedef configProperty_container_type::const_iterator configProperty_const_iterator;
      configProperty_iterator begin_configProperty ();
      configProperty_iterator end_configProperty ();
      configProperty_const_iterator begin_configProperty () const;
      configProperty_const_iterator end_configProperty () const;
      void add_configProperty (configProperty_value_type const&);
      size_t count_configProperty () const;

      protected:
      configProperty_container_type configProperty_;

      // implementation
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::ConnectorImplementationDescription, ACE_Null_Mutex> implementation_value_type;
      typedef std::list<implementation_value_type> implementation_container_type;
      typedef implementation_container_type::iterator implementation_iterator;
      typedef implementation_container_type::const_iterator implementation_const_iterator;
      implementation_iterator begin_implementation ();
      implementation_iterator end_implementation ();
      implementation_const_iterator begin_implementation () const;
      implementation_const_iterator end_implementation () const;
      void add_implementation (implementation_value_type const&);
      size_t count_implementation () const;

      protected:
      implementation_container_type implementation_;

      // infoProperty
      public:
      typedef ACE_Refcounted_Auto_Ptr < ::DAnCE::Config_Handlers::Property, ACE_Null_Mutex> infoProperty_value_type;
      typedef std::list<infoProperty_value_type> infoProperty_container_type;
      typedef infoProperty_container_type::iterator infoProperty_iterator;
      typedef infoProperty_container_type::const_iterator infoProperty_const_iterator;
      infoProperty_iterator begin_infoProperty ();
      infoProperty_iterator end_infoProperty ();
      infoProperty_const_iterator begin_infoProperty () const;
      infoProperty_const_iterator end_infoProperty () const;
      void add_infoProperty (infoProperty_value_type const&);
      size_t count_infoProperty () const;

      protected:
      infoProperty_container_type infoProperty_;

      // href
      public:
      bool href_p () const;
      ::XMLSchema::string<ACE_TCHAR> const& href () const;
      ::XMLSchema::string<ACE_TCHAR>& href ();
      void href (::XMLSchema::string<ACE_TCHAR> const& );

      protected:
      typedef XML_XSC_SMART_PTR( ::XMLSchema::string<ACE_TCHAR> ) href_auto_ptr_type;
      href_auto_ptr_type href_;

      public:
      ConnectorPackageDescription ();

      explicit ConnectorPackageDescription (::XSCRT::XML::Element<ACE_TCHAR> const&);
      ConnectorPackageDescription (ConnectorPackageDescription const& s);
      ConnectorPackageDescription& operator= (ConnectorPackageDescription const& s);
    };
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

#endif // CPD_HPP
