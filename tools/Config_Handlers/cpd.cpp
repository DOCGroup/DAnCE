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
#include "cpd.hpp"

#include "ace/Null_Mutex.h"
#include "ace/TSS_T.h"
#include "ace/ace_wchar.h"
#include "ace/Singleton.h"

namespace DAnCE
{
  namespace Config_Handlers
  {
    // PackagedComponentImplementation

    PackagedComponentImplementation::PackagedComponentImplementation (::XMLSchema::string<ACE_TCHAR> const& name__,
                                                                      ::DAnCE::Config_Handlers::ComponentImplementationDescription const& referencedImplementation__) :
    ::XSCRT::Type (),
    name_ (new ::XMLSchema::string<ACE_TCHAR> (name__)),
    referencedImplementation_ (new ::DAnCE::Config_Handlers::ComponentImplementationDescription (referencedImplementation__)),
    regulator__ ()
    {
      name_->container (this);
      referencedImplementation_->container (this);
    }

    PackagedComponentImplementation::PackagedComponentImplementation (PackagedComponentImplementation const& s) :
    ::XSCRT::Type (s),
    name_ (new ::XMLSchema::string<ACE_TCHAR> (*s.name_)),
    referencedImplementation_ (new ::DAnCE::Config_Handlers::ComponentImplementationDescription (*s.referencedImplementation_)),
    regulator__ ()
    {
      name_->container (this);
      referencedImplementation_->container (this);
    }

    PackagedComponentImplementation&
    PackagedComponentImplementation::operator= (PackagedComponentImplementation const& s)
    {
      if (&s != this)
      {
        name (*s.name_);

        referencedImplementation (*s.referencedImplementation_);
      }

      return *this;
    }


    // PackagedComponentImplementation
    ::XMLSchema::string<ACE_TCHAR> const& PackagedComponentImplementation::
    name () const
    {
      return *name_;
    }

    void PackagedComponentImplementation::
    name (::XMLSchema::string<ACE_TCHAR> const& e)
    {
      *name_ = e;
    }

    // PackagedComponentImplementation
    ::DAnCE::Config_Handlers::ComponentImplementationDescription const& PackagedComponentImplementation::
    referencedImplementation () const
    {
      return *referencedImplementation_;
    }

    void PackagedComponentImplementation::
    referencedImplementation (::DAnCE::Config_Handlers::ComponentImplementationDescription const& e)
    {
      *referencedImplementation_ = e;
    }


    // ComponentPackageDescription

    ComponentPackageDescription::ComponentPackageDescription () :
    ::XSCRT::Type (),
    regulator__ ()
    {
    }

    ComponentPackageDescription::ComponentPackageDescription (ComponentPackageDescription const& s) :
    ::XSCRT::Type (s),
    label_ (s.label_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.label_) : 0),
    UUID_ (s.UUID_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.UUID_) : 0),
    realizes_ (s.realizes_.get () ? new ::DAnCE::Config_Handlers::ComponentInterfaceDescription (*s.realizes_) : 0),
    configProperty_ (s.configProperty_),
    implementation_ (s.implementation_),
    infoProperty_ (s.infoProperty_),
    href_ (s.href_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.href_) : 0),
    regulator__ ()
    {
      if (label_.get ()) label_->container (this);
      if (UUID_.get ()) UUID_->container (this);
      if (realizes_.get ()) realizes_->container (this);
      if (href_.get ()) href_->container (this);
    }

    ComponentPackageDescription&
    ComponentPackageDescription::operator= (ComponentPackageDescription const& s)
    {
      if (&s != this)
      {
        if (s.label_.get ())
          label (*(s.label_));
        else
          label_.reset (0);

        if (s.UUID_.get ())
          UUID (*(s.UUID_));
        else
          UUID_.reset (0);

        if (s.realizes_.get ())
          realizes (*(s.realizes_));
        else
          realizes_.reset (0);

        configProperty_ = s.configProperty_;

        implementation_ = s.implementation_;

        infoProperty_ = s.infoProperty_;

        if (s.href_.get ()) href (*(s.href_));
        else href_.reset (0);
      }

      return *this;
    }


    // ComponentPackageDescription
    bool ComponentPackageDescription::
    label_p () const
    {
      return label_.get () != 0;
    }

    ::XMLSchema::string<ACE_TCHAR> const& ComponentPackageDescription::
    label () const
    {
      return *label_;
    }

    void ComponentPackageDescription::
    label (::XMLSchema::string<ACE_TCHAR> const& e)
    {
      if (label_.get ())
      {
        *label_ = e;
      }

      else
      {
        label_ = ComponentPackageDescription::label_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
        label_->container (this);
      }
    }

    // ComponentPackageDescription
    bool ComponentPackageDescription::
    UUID_p () const
    {
      return UUID_.get () != 0;
    }

    ::XMLSchema::string<ACE_TCHAR> const& ComponentPackageDescription::
    UUID () const
    {
      return *UUID_;
    }

    void ComponentPackageDescription::
    UUID (::XMLSchema::string<ACE_TCHAR> const& e)
    {
      if (UUID_.get ())
      {
        *UUID_ = e;
      }

      else
      {
        UUID_ = ComponentPackageDescription::UUID_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
        UUID_->container (this);
      }
    }

    // ComponentPackageDescription
    bool ComponentPackageDescription::
    realizes_p () const
    {
      return realizes_.get () != 0;
    }

    ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& ComponentPackageDescription::
    realizes () const
    {
      return *realizes_;
    }

    void ComponentPackageDescription::
    realizes (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& e)
    {
      if (realizes_.get ())
      {
        *realizes_ = e;
      }

      else
      {
        realizes_ = ComponentPackageDescription::realizes_auto_ptr_type (new ::DAnCE::Config_Handlers::ComponentInterfaceDescription (e));
        realizes_->container (this);
      }
    }

    // ComponentPackageDescription
    ComponentPackageDescription::configProperty_iterator ComponentPackageDescription::
    begin_configProperty ()
    {
      return configProperty_.begin ();
    }

    ComponentPackageDescription::configProperty_iterator ComponentPackageDescription::
    end_configProperty ()
    {
      return configProperty_.end ();
    }

    ComponentPackageDescription::configProperty_const_iterator ComponentPackageDescription::
    begin_configProperty () const
    {
      return configProperty_.begin ();
    }

    ComponentPackageDescription::configProperty_const_iterator ComponentPackageDescription::
    end_configProperty () const
    {
      return configProperty_.end ();
    }

    void ComponentPackageDescription::
    add_configProperty (ComponentPackageDescription::configProperty_value_type const& e)
    {
      configProperty_.push_back (e);
    }

    size_t ComponentPackageDescription::
    count_configProperty(void) const
    {
      return configProperty_.size ();
    }

    // ComponentPackageDescription
    ComponentPackageDescription::implementation_iterator ComponentPackageDescription::
    begin_implementation ()
    {
      return implementation_.begin ();
    }

    ComponentPackageDescription::implementation_iterator ComponentPackageDescription::
    end_implementation ()
    {
      return implementation_.end ();
    }

    ComponentPackageDescription::implementation_const_iterator ComponentPackageDescription::
    begin_implementation () const
    {
      return implementation_.begin ();
    }

    ComponentPackageDescription::implementation_const_iterator ComponentPackageDescription::
    end_implementation () const
    {
      return implementation_.end ();
    }

    void ComponentPackageDescription::
    add_implementation (ComponentPackageDescription::implementation_value_type const& e)
    {
      implementation_.push_back (e);
    }

    size_t ComponentPackageDescription::
    count_implementation(void) const
    {
      return implementation_.size ();
    }

    // ComponentPackageDescription
    ComponentPackageDescription::infoProperty_iterator ComponentPackageDescription::
    begin_infoProperty ()
    {
      return infoProperty_.begin ();
    }

    ComponentPackageDescription::infoProperty_iterator ComponentPackageDescription::
    end_infoProperty ()
    {
      return infoProperty_.end ();
    }

    ComponentPackageDescription::infoProperty_const_iterator ComponentPackageDescription::
    begin_infoProperty () const
    {
      return infoProperty_.begin ();
    }

    ComponentPackageDescription::infoProperty_const_iterator ComponentPackageDescription::
    end_infoProperty () const
    {
      return infoProperty_.end ();
    }

    void ComponentPackageDescription::
    add_infoProperty (ComponentPackageDescription::infoProperty_value_type const& e)
    {
      infoProperty_.push_back (e);
    }

    size_t ComponentPackageDescription::
    count_infoProperty(void) const
    {
      return infoProperty_.size ();
    }

    // ComponentPackageDescription
    bool ComponentPackageDescription::
    href_p () const
    {
      return href_.get () != 0;
    }

    ::XMLSchema::string<ACE_TCHAR> const& ComponentPackageDescription::
    href () const
    {
      return *href_;
    }

    ::XMLSchema::string<ACE_TCHAR>& ComponentPackageDescription::
    href ()
    {
      return *href_;
    }

    void ComponentPackageDescription::
    href (::XMLSchema::string<ACE_TCHAR> const& e)
    {
      if (href_.get ())
      {
        *href_ = e;
      }

      else
      {
        href_ = ComponentPackageDescription::href_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
        href_->container (this);
      }
    }


    // ConnectorPackageDescription

    ConnectorPackageDescription::ConnectorPackageDescription () :
    ::XSCRT::Type (),
    regulator__ ()
    {
    }

    ConnectorPackageDescription::ConnectorPackageDescription (ConnectorPackageDescription const& s) :
    ::XSCRT::Type (s),
    label_ (s.label_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.label_) : 0),
    UUID_ (s.UUID_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.UUID_) : 0),
    realizes_ (s.realizes_.get () ? new ::DAnCE::Config_Handlers::ComponentInterfaceDescription (*s.realizes_) : 0),
    configProperty_ (s.configProperty_),
    implementation_ (s.implementation_),
    infoProperty_ (s.infoProperty_),
    href_ (s.href_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.href_) : 0),
    regulator__ ()
    {
      if (label_.get ()) label_->container (this);
      if (UUID_.get ()) UUID_->container (this);
      if (realizes_.get ()) realizes_->container (this);
      if (href_.get ()) href_->container (this);
    }

    ConnectorPackageDescription&
    ConnectorPackageDescription::operator= (ConnectorPackageDescription const& s)
    {
      if (&s != this)
      {
        if (s.label_.get ())
          label (*(s.label_));
        else
          label_.reset (0);

        if (s.UUID_.get ())
          UUID (*(s.UUID_));
        else
          UUID_.reset (0);

        if (s.realizes_.get ())
          realizes (*(s.realizes_));
        else
          realizes_.reset (0);

        configProperty_ = s.configProperty_;

        implementation_ = s.implementation_;

        infoProperty_ = s.infoProperty_;

        if (s.href_.get ()) href (*(s.href_));
        else href_.reset (0);
      }

      return *this;
    }


    // ConnectorPackageDescription
    bool ConnectorPackageDescription::
    label_p () const
    {
      return label_.get () != 0;
    }

    ::XMLSchema::string<ACE_TCHAR> const& ConnectorPackageDescription::
    label () const
    {
      return *label_;
    }

    void ConnectorPackageDescription::
    label (::XMLSchema::string<ACE_TCHAR> const& e)
    {
      if (label_.get ())
      {
        *label_ = e;
      }

      else
      {
        label_ = ConnectorPackageDescription::label_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
        label_->container (this);
      }
    }

    // ConnectorPackageDescription
    bool ConnectorPackageDescription::
    UUID_p () const
    {
      return UUID_.get () != 0;
    }

    ::XMLSchema::string<ACE_TCHAR> const& ConnectorPackageDescription::
    UUID () const
    {
      return *UUID_;
    }

    void ConnectorPackageDescription::
    UUID (::XMLSchema::string<ACE_TCHAR> const& e)
    {
      if (UUID_.get ())
      {
        *UUID_ = e;
      }

      else
      {
        UUID_ = ConnectorPackageDescription::UUID_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
        UUID_->container (this);
      }
    }

    // ConnectorPackageDescription
    bool ConnectorPackageDescription::
    realizes_p () const
    {
      return realizes_.get () != 0;
    }

    ::DAnCE::Config_Handlers::ComponentInterfaceDescription const& ConnectorPackageDescription::
    realizes () const
    {
      return *realizes_;
    }

    void ConnectorPackageDescription::
    realizes (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& e)
    {
      if (realizes_.get ())
      {
        *realizes_ = e;
      }

      else
      {
        realizes_ = ConnectorPackageDescription::realizes_auto_ptr_type (new ::DAnCE::Config_Handlers::ComponentInterfaceDescription (e));
        realizes_->container (this);
      }
    }

    // ConnectorPackageDescription
    ConnectorPackageDescription::configProperty_iterator ConnectorPackageDescription::
    begin_configProperty ()
    {
      return configProperty_.begin ();
    }

    ConnectorPackageDescription::configProperty_iterator ConnectorPackageDescription::
    end_configProperty ()
    {
      return configProperty_.end ();
    }

    ConnectorPackageDescription::configProperty_const_iterator ConnectorPackageDescription::
    begin_configProperty () const
    {
      return configProperty_.begin ();
    }

    ConnectorPackageDescription::configProperty_const_iterator ConnectorPackageDescription::
    end_configProperty () const
    {
      return configProperty_.end ();
    }

    void ConnectorPackageDescription::
    add_configProperty (ConnectorPackageDescription::configProperty_value_type const& e)
    {
      configProperty_.push_back (e);
    }

    size_t ConnectorPackageDescription::
    count_configProperty(void) const
    {
      return configProperty_.size ();
    }

    // ConnectorPackageDescription
    ConnectorPackageDescription::implementation_iterator ConnectorPackageDescription::
    begin_implementation ()
    {
      return implementation_.begin ();
    }

    ConnectorPackageDescription::implementation_iterator ConnectorPackageDescription::
    end_implementation ()
    {
      return implementation_.end ();
    }

    ConnectorPackageDescription::implementation_const_iterator ConnectorPackageDescription::
    begin_implementation () const
    {
      return implementation_.begin ();
    }

    ConnectorPackageDescription::implementation_const_iterator ConnectorPackageDescription::
    end_implementation () const
    {
      return implementation_.end ();
    }

    void ConnectorPackageDescription::
    add_implementation (ConnectorPackageDescription::implementation_value_type const& e)
    {
      implementation_.push_back (e);
    }

    size_t ConnectorPackageDescription::
    count_implementation(void) const
    {
      return implementation_.size ();
    }

    // ConnectorPackageDescription
    ConnectorPackageDescription::infoProperty_iterator ConnectorPackageDescription::
    begin_infoProperty ()
    {
      return infoProperty_.begin ();
    }

    ConnectorPackageDescription::infoProperty_iterator ConnectorPackageDescription::
    end_infoProperty ()
    {
      return infoProperty_.end ();
    }

    ConnectorPackageDescription::infoProperty_const_iterator ConnectorPackageDescription::
    begin_infoProperty () const
    {
      return infoProperty_.begin ();
    }

    ConnectorPackageDescription::infoProperty_const_iterator ConnectorPackageDescription::
    end_infoProperty () const
    {
      return infoProperty_.end ();
    }

    void ConnectorPackageDescription::
    add_infoProperty (ConnectorPackageDescription::infoProperty_value_type const& e)
    {
      infoProperty_.push_back (e);
    }

    size_t ConnectorPackageDescription::
    count_infoProperty(void) const
    {
      return infoProperty_.size ();
    }

    // ConnectorPackageDescription
    bool ConnectorPackageDescription::
    href_p () const
    {
      return href_.get () != 0;
    }

    ::XMLSchema::string<ACE_TCHAR> const& ConnectorPackageDescription::
    href () const
    {
      return *href_;
    }

    ::XMLSchema::string<ACE_TCHAR>& ConnectorPackageDescription::
    href ()
    {
      return *href_;
    }

    void ConnectorPackageDescription::
    href (::XMLSchema::string<ACE_TCHAR> const& e)
    {
      if (href_.get ())
      {
        *href_ = e;
      }

      else
      {
        href_ = ConnectorPackageDescription::href_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
        href_->container (this);
      }
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
    // PackagedComponentImplementation

    PackagedComponentImplementation::
    PackagedComponentImplementation (::XSCRT::XML::Element<ACE_TCHAR> const& e)
    :Base (e), regulator__ ()
    {

      ::XSCRT::Parser<ACE_TCHAR> p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element<ACE_TCHAR> e (p.next_element ());
        std::basic_string<ACE_TCHAR> n (::XSCRT::XML::uq_name (e.name ()));

        if (n == ACE_TEXT("name"))
        {
          name_ = PackagedComponentImplementation::name_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
          name_->container (this);
        }

        else if (n == ACE_TEXT("referencedImplementation"))
        {
          referencedImplementation_ = PackagedComponentImplementation::referencedImplementation_auto_ptr_type (new ::DAnCE::Config_Handlers::ComponentImplementationDescription (e));
          referencedImplementation_->container (this);
        }

        else
        {
        }
      }
    }

    // ComponentPackageDescription

    ComponentPackageDescription::
    ComponentPackageDescription (::XSCRT::XML::Element<ACE_TCHAR> const& e)
    :Base (e), regulator__ ()
    {

      ::XSCRT::Parser<ACE_TCHAR> p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element<ACE_TCHAR> e (p.next_element ());
        std::basic_string<ACE_TCHAR> n (::XSCRT::XML::uq_name (e.name ()));

        if (n == ACE_TEXT("label"))
        {
          ::XMLSchema::string<ACE_TCHAR> t (e);
          label (t);
        }

        else if (n == ACE_TEXT("UUID"))
        {
          ::XMLSchema::string<ACE_TCHAR> t (e);
          UUID (t);
        }

        else if (n == ACE_TEXT("realizes"))
        {
          ::DAnCE::Config_Handlers::ComponentInterfaceDescription t (e);
          realizes (t);
        }

        else if (n == ACE_TEXT("configProperty"))
        {
          configProperty_value_type t (new ::DAnCE::Config_Handlers::Property (e));
          add_configProperty (t);
        }

        else if (n == ACE_TEXT("implementation"))
        {
          implementation_value_type t (new ::DAnCE::Config_Handlers::PackagedComponentImplementation (e));
          add_implementation (t);
        }

        else if (n == ACE_TEXT("infoProperty"))
        {
          infoProperty_value_type t (new ::DAnCE::Config_Handlers::Property (e));
          add_infoProperty (t);
        }

        else
        {
        }
      }

      while (p.more_attributes ())
      {
        ::XSCRT::XML::Attribute<ACE_TCHAR> a (p.next_attribute ());
        std::basic_string<ACE_TCHAR> n (::XSCRT::XML::uq_name (a.name ()));
        if (n == ACE_TEXT ("href"))
        {
          ::XMLSchema::string<ACE_TCHAR> t (a);
          href (t);
        }

        else
        {
        }
      }
    }

    // ConnectorPackageDescription

    ConnectorPackageDescription::
    ConnectorPackageDescription (::XSCRT::XML::Element<ACE_TCHAR> const& e)
    :Base (e), regulator__ ()
    {

      ::XSCRT::Parser<ACE_TCHAR> p (e);

      while (p.more_elements ())
      {
        ::XSCRT::XML::Element<ACE_TCHAR> e (p.next_element ());
        std::basic_string<ACE_TCHAR> n (::XSCRT::XML::uq_name (e.name ()));

        if (n == ACE_TEXT("label"))
        {
          ::XMLSchema::string<ACE_TCHAR> t (e);
          label (t);
        }

        else if (n == ACE_TEXT("UUID"))
        {
          ::XMLSchema::string<ACE_TCHAR> t (e);
          UUID (t);
        }

        else if (n == ACE_TEXT("realizes"))
        {
          ::DAnCE::Config_Handlers::ComponentInterfaceDescription t (e);
          realizes (t);
        }

        else if (n == ACE_TEXT("configProperty"))
        {
          configProperty_value_type t (new ::DAnCE::Config_Handlers::Property (e));
          add_configProperty (t);
        }

        else if (n == ACE_TEXT("implementation"))
        {
          implementation_value_type t (new ::DAnCE::Config_Handlers::ConnectorImplementationDescription (e));
          add_implementation (t);
        }

        else if (n == ACE_TEXT("infoProperty"))
        {
          infoProperty_value_type t (new ::DAnCE::Config_Handlers::Property (e));
          add_infoProperty (t);
        }

        else
        {
        }
      }

      while (p.more_attributes ())
      {
        ::XSCRT::XML::Attribute<ACE_TCHAR> a (p.next_attribute ());
        std::basic_string<ACE_TCHAR> n (::XSCRT::XML::uq_name (a.name ()));
        if (n == ACE_TEXT ("href"))
        {
          ::XMLSchema::string<ACE_TCHAR> t (a);
          href (t);
        }

        else
        {
        }
      }
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

