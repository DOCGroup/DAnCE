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
#include "XMI.hpp"

#include "ace/Null_Mutex.h"
#include "ace/TSS_T.h"
#include "ace/ace_wchar.h"
#include "ace/Singleton.h"

namespace XMI
{
  // Extension

  Extension::Extension () :
  regulator__ ()
  {
  }

  Extension::Extension (Extension const& s) :
  ::XSCRT::Type (s),
  id_ (s.id_.get () ? new ::XMLSchema::ID<ACE_TCHAR> (*s.id_) : 0),
  label_ (s.label_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.label_) : 0),
  uuid_ (s.uuid_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.uuid_) : 0),
  href_ (s.href_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.href_) : 0),
  idref_ (s.idref_.get () ? new ::XMLSchema::IDREF<ACE_TCHAR> (*s.idref_) : 0),
  version_ (s.version_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.version_) : 0),
  extender_ (s.extender_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.extender_) : 0),
  extenderID_ (s.extenderID_.get () ? new ::XMLSchema::string<ACE_TCHAR> (*s.extenderID_) : 0),
  regulator__ ()
  {
    if (id_.get ()) id_->container (this);
    if (label_.get ()) label_->container (this);
    if (uuid_.get ()) uuid_->container (this);
    if (href_.get ()) href_->container (this);
    if (idref_.get ()) idref_->container (this);
    if (version_.get ()) version_->container (this);
    if (extender_.get ()) extender_->container (this);
    if (extenderID_.get ()) extenderID_->container (this);
  }

  Extension&
  Extension::operator= (Extension const& s)
  {
    if (&s != this)
    {
      if (s.id_.get ()) id (*(s.id_));
      else id_.reset (0);

      if (s.label_.get ()) label (*(s.label_));
      else label_.reset (0);

      if (s.uuid_.get ()) uuid (*(s.uuid_));
      else uuid_.reset (0);

      if (s.href_.get ()) href (*(s.href_));
      else href_.reset (0);

      if (s.idref_.get ()) idref (*(s.idref_));
      else idref_.reset (0);

      if (s.version_.get ()) version (*(s.version_));
      else version_.reset (0);

      if (s.extender_.get ()) extender (*(s.extender_));
      else extender_.reset (0);

      if (s.extenderID_.get ()) extenderID (*(s.extenderID_));
      else extenderID_.reset (0);
    }

    return *this;
  }


  // Extension
  bool Extension::
  id_p () const
  {
    return id_.get () != 0;
  }

  ::XMLSchema::ID<ACE_TCHAR> const& Extension::
  id () const
  {
    return *id_;
  }

  ::XMLSchema::ID<ACE_TCHAR>& Extension::
  id ()
  {
    return *id_;
  }

  void Extension::
  id (::XMLSchema::ID<ACE_TCHAR> const& e)
  {
    if (id_.get ())
    {
      *id_ = e;
    }

    else
    {
      id_ = Extension::id_auto_ptr_type (new ::XMLSchema::ID<ACE_TCHAR> (e));
      id_->container (this);
    }
  }

  // Extension
  bool Extension::
  label_p () const
  {
    return label_.get () != 0;
  }

  ::XMLSchema::string<ACE_TCHAR> const& Extension::
  label () const
  {
    return *label_;
  }

  ::XMLSchema::string<ACE_TCHAR>& Extension::
  label ()
  {
    return *label_;
  }

  void Extension::
  label (::XMLSchema::string<ACE_TCHAR> const& e)
  {
    if (label_.get ())
    {
      *label_ = e;
    }

    else
    {
      label_ = Extension::label_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
      label_->container (this);
    }
  }

  // Extension
  bool Extension::
  uuid_p () const
  {
    return uuid_.get () != 0;
  }

  ::XMLSchema::string<ACE_TCHAR> const& Extension::
  uuid () const
  {
    return *uuid_;
  }

  ::XMLSchema::string<ACE_TCHAR>& Extension::
  uuid ()
  {
    return *uuid_;
  }

  void Extension::
  uuid (::XMLSchema::string<ACE_TCHAR> const& e)
  {
    if (uuid_.get ())
    {
      *uuid_ = e;
    }

    else
    {
      uuid_ = Extension::uuid_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
      uuid_->container (this);
    }
  }

  // Extension
  bool Extension::
  href_p () const
  {
    return href_.get () != 0;
  }

  ::XMLSchema::string<ACE_TCHAR> const& Extension::
  href () const
  {
    return *href_;
  }

  ::XMLSchema::string<ACE_TCHAR>& Extension::
  href ()
  {
    return *href_;
  }

  void Extension::
  href (::XMLSchema::string<ACE_TCHAR> const& e)
  {
    if (href_.get ())
    {
      *href_ = e;
    }

    else
    {
      href_ = Extension::href_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
      href_->container (this);
    }
  }

  // Extension
  bool Extension::
  idref_p () const
  {
    return idref_.get () != 0;
  }

  ::XMLSchema::IDREF<ACE_TCHAR> const& Extension::
  idref () const
  {
    return *idref_;
  }

  ::XMLSchema::IDREF<ACE_TCHAR>& Extension::
  idref ()
  {
    return *idref_;
  }

  ::XSCRT::Type* Extension::get_idref_ptr ()
  {
    std::basic_string<ACE_TCHAR> temp (idref().id());
    return this->get_idref(temp.c_str ());
  }


  void Extension::set_idref_ptr (const std::basic_string<ACE_TCHAR>& idref)
  {
      ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());
      (*TSS_ID_Map)->resolve_single_idref(idref, this);
  }


  void Extension::
  idref (::XMLSchema::IDREF<ACE_TCHAR> const& e)
  {
    if (idref_.get ())
    {
      *idref_ = e;
    }

    else
    {
      idref_ = Extension::idref_auto_ptr_type (new ::XMLSchema::IDREF<ACE_TCHAR> (e));
      idref_->container (this);
    }
  }

  // Extension
  bool Extension::
  version_p () const
  {
    return version_.get () != 0;
  }

  ::XMLSchema::string<ACE_TCHAR> const& Extension::
  version () const
  {
    return *version_;
  }

  ::XMLSchema::string<ACE_TCHAR>& Extension::
  version ()
  {
    return *version_;
  }

  void Extension::
  version (::XMLSchema::string<ACE_TCHAR> const& e)
  {
    if (version_.get ())
    {
      *version_ = e;
    }

    else
    {
      version_ = Extension::version_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
      version_->container (this);
    }
  }

  // Extension
  bool Extension::
  extender_p () const
  {
    return extender_.get () != 0;
  }

  ::XMLSchema::string<ACE_TCHAR> const& Extension::
  extender () const
  {
    return *extender_;
  }

  ::XMLSchema::string<ACE_TCHAR>& Extension::
  extender ()
  {
    return *extender_;
  }

  void Extension::
  extender (::XMLSchema::string<ACE_TCHAR> const& e)
  {
    if (extender_.get ())
    {
      *extender_ = e;
    }

    else
    {
      extender_ = Extension::extender_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
      extender_->container (this);
    }
  }

  // Extension
  bool Extension::
  extenderID_p () const
  {
    return extenderID_.get () != 0;
  }

  ::XMLSchema::string<ACE_TCHAR> const& Extension::
  extenderID () const
  {
    return *extenderID_;
  }

  ::XMLSchema::string<ACE_TCHAR>& Extension::
  extenderID ()
  {
    return *extenderID_;
  }

  void Extension::
  extenderID (::XMLSchema::string<ACE_TCHAR> const& e)
  {
    if (extenderID_.get ())
    {
      *extenderID_ = e;
    }

    else
    {
      extenderID_ = Extension::extenderID_auto_ptr_type (new ::XMLSchema::string<ACE_TCHAR> (e));
      extenderID_->container (this);
    }
  }
}

namespace XMI
{
  // Extension

  Extension::
  Extension (::XSCRT::XML::Element<ACE_TCHAR> const& e)
  :Base (e), regulator__ ()
  {

    ::XSCRT::Parser<ACE_TCHAR> p (e);

    while (p.more_attributes ())
    {
      ::XSCRT::XML::Attribute<ACE_TCHAR> a (p.next_attribute ());
      std::basic_string<ACE_TCHAR> n (::XSCRT::XML::uq_name (a.name ()));
      if (n == ACE_TEXT ("id"))
      {
        ::XMLSchema::ID<ACE_TCHAR> t (a);
        id (t);
        std::basic_string<ACE_TCHAR> temp ((*id_).c_str());
        (*ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance())->
        add_id(temp, dynamic_cast<XSCRT::Type*> (this));
      }

      else if (n == ACE_TEXT ("label"))
      {
        ::XMLSchema::string<ACE_TCHAR> t (a);
        label (t);
      }

      else if (n == ACE_TEXT ("uuid"))
      {
        ::XMLSchema::string<ACE_TCHAR> t (a);
        uuid (t);
      }

      else if (n == ACE_TEXT ("href"))
      {
        ::XMLSchema::string<ACE_TCHAR> t (a);
        href (t);
      }

      else if (n == ACE_TEXT ("idref"))
      {
        ::XMLSchema::IDREF<ACE_TCHAR> t (a);
        idref (t);
        std::basic_string<ACE_TCHAR> temp ((*idref_).id().c_str());

        (*ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance())->
        add_idref(temp, dynamic_cast<XSCRT::Type*> (this));
      }

      else if (n == ACE_TEXT ("version"))
      {
        ::XMLSchema::string<ACE_TCHAR> t (a);
        version (t);
      }

      else if (n == ACE_TEXT ("extender"))
      {
        ::XMLSchema::string<ACE_TCHAR> t (a);
        extender (t);
      }

      else if (n == ACE_TEXT ("extenderID"))
      {
        ::XMLSchema::string<ACE_TCHAR> t (a);
        extenderID (t);
      }

      else
      {
      }
    }
  }
}

namespace XMI
{
  namespace reader
  {
    ::XMI::Extension
    extension (xercesc::DOMDocument const* d)
    {
      // Initiate our Singleton as an ACE_TSS object (ensures thread
      // specific storage
      ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());
      xercesc::DOMElement* dom_element = d->getDocumentElement ();
      if (!dom_element)
      {
        throw 1;
      }

      ::XSCRT::XML::Element<ACE_TCHAR> e (dom_element);
      if (e.name () == ACE_TEXT("extension"))
      {
        ::XMI::Extension r (e);

        (*TSS_ID_Map)->resolve_idref();

        return r;
      }

      else
      {
        throw 1;
      }
    }
  }
}

