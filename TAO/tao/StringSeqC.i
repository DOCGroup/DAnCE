// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html


#if !defined (_CORBA_STRINGSEQ_CI_)
#define _CORBA_STRINGSEQ_CI_

// *************************************************************
// Inline operations for class CORBA::StringSeq_var
// *************************************************************

ACE_INLINE
CORBA_StringSeq_var::CORBA_StringSeq_var (void) // default constructor
  : ptr_ (0)
{}

ACE_INLINE
CORBA_StringSeq_var::CORBA_StringSeq_var (CORBA_StringSeq *p)
  : ptr_ (p)
{}

ACE_INLINE
CORBA_StringSeq_var::CORBA_StringSeq_var (const ::CORBA_StringSeq_var &p) // copy constructor
{
  if (p.ptr_)
    ACE_NEW (this->ptr_, ::CORBA_StringSeq (*p.ptr_));
  else
    this->ptr_ = 0;
}

ACE_INLINE
CORBA_StringSeq_var::~CORBA_StringSeq_var (void) // destructor
{
  delete this->ptr_;
}

ACE_INLINE CORBA_StringSeq_var &
CORBA_StringSeq_var::operator= (CORBA_StringSeq *p)
{
  delete this->ptr_;
  this->ptr_ = p;
  return *this;
}

ACE_INLINE ::CORBA_StringSeq_var &
CORBA_StringSeq_var::operator= (const ::CORBA_StringSeq_var &p)
{
  if (this != &p)
    {
      if (p.ptr_ == 0)
        {
          delete this->ptr_;
          this->ptr_ = 0;
        }
      else
        {
          CORBA_StringSeq *deep_copy =
            new CORBA_StringSeq (*p.ptr_);
          
          if (deep_copy != 0)
            {
              CORBA_StringSeq *tmp = deep_copy;
              deep_copy = this->ptr_;
              this->ptr_ = tmp;
              delete deep_copy;
            }
        }
    }
  
  return *this;
}

ACE_INLINE const ::CORBA_StringSeq *
CORBA_StringSeq_var::operator-> (void) const
{
  return this->ptr_;
}

ACE_INLINE ::CORBA_StringSeq *
CORBA_StringSeq_var::operator-> (void)
{
  return this->ptr_;
}

ACE_INLINE 
CORBA_StringSeq_var::operator const ::CORBA_StringSeq &() const // cast
{
  return *this->ptr_;
}

ACE_INLINE 
CORBA_StringSeq_var::operator ::CORBA_StringSeq &() // cast 
{
  return *this->ptr_;
}

ACE_INLINE 
CORBA_StringSeq_var::operator ::CORBA_StringSeq &() const // cast 
{
  return *this->ptr_;
}

// variable-size types only
ACE_INLINE
CORBA_StringSeq_var::operator ::CORBA_StringSeq *&() // cast 
{
  return this->ptr_;
}

ACE_INLINE TAO_SeqElem_String_Manager
CORBA_StringSeq_var::operator[] (CORBA::ULong index)
{
  return this->ptr_->operator[] (index);
}

ACE_INLINE const ::CORBA_StringSeq &
CORBA_StringSeq_var::in (void) const
{
  return *this->ptr_;
}

ACE_INLINE ::CORBA_StringSeq &
CORBA_StringSeq_var::inout (void)
{
  return *this->ptr_;
}

// mapping for variable size 
ACE_INLINE ::CORBA_StringSeq *&
CORBA_StringSeq_var::out (void)
{
  delete this->ptr_;
  this->ptr_ = 0;
  return this->ptr_;
}

ACE_INLINE ::CORBA_StringSeq *
CORBA_StringSeq_var::_retn (void)
{
  ::CORBA_StringSeq *tmp = this->ptr_;
  this->ptr_ = 0;
  return tmp;
}

ACE_INLINE ::CORBA_StringSeq *
CORBA_StringSeq_var::ptr (void) const
{
  return this->ptr_;
}

// *************************************************************
// Inline operations for class CORBA::StringSeq_out
// *************************************************************

ACE_INLINE
CORBA_StringSeq_out::CORBA_StringSeq_out (CORBA_StringSeq *&p)
  : ptr_ (p)
{
  this->ptr_ = 0;
}

ACE_INLINE
CORBA_StringSeq_out::CORBA_StringSeq_out (CORBA_StringSeq_var &p) // constructor from _var
  : ptr_ (p.out ())
{
  delete this->ptr_;
  this->ptr_ = 0;
}

ACE_INLINE
CORBA_StringSeq_out::CORBA_StringSeq_out (const ::CORBA_StringSeq_out &p) // copy constructor
  : ptr_ (ACE_const_cast (CORBA_StringSeq_out&, p).ptr_)
{}

ACE_INLINE ::CORBA_StringSeq_out &
CORBA_StringSeq_out::operator= (const ::CORBA_StringSeq_out &p)
{
  this->ptr_ = ACE_const_cast (CORBA_StringSeq_out&, p).ptr_;
  return *this;
}

ACE_INLINE ::CORBA_StringSeq_out &
CORBA_StringSeq_out::operator= (CORBA_StringSeq *p)
{
  this->ptr_ = p;
  return *this;
}

ACE_INLINE 
CORBA_StringSeq_out::operator ::CORBA_StringSeq *&() // cast
{
  return this->ptr_;
}

ACE_INLINE ::CORBA_StringSeq *&
CORBA_StringSeq_out::ptr (void) // ptr
{
  return this->ptr_;
}

ACE_INLINE ::CORBA_StringSeq *
CORBA_StringSeq_out::operator-> (void)
{
  return this->ptr_;
}

ACE_INLINE TAO_SeqElem_String_Manager
CORBA_StringSeq_out::operator[] (CORBA::ULong index)
{
  return this->ptr_->operator[] (index);
}


#endif /* end #if !defined */


#if !defined (_CORBA_WSTRINGSEQ_CI_)
#define _CORBA_WSTRINGSEQ_CI_

// *************************************************************
// Inline operations for class CORBA::WStringSeq_var
// *************************************************************

ACE_INLINE
CORBA_WStringSeq_var::CORBA_WStringSeq_var (void) // default constructor
  : ptr_ (0)
{}

ACE_INLINE
CORBA_WStringSeq_var::CORBA_WStringSeq_var (CORBA_WStringSeq *p)
  : ptr_ (p)
{}

ACE_INLINE
CORBA_WStringSeq_var::CORBA_WStringSeq_var (const ::CORBA_WStringSeq_var &p) // copy constructor
{
  if (p.ptr_)
    ACE_NEW (this->ptr_, ::CORBA_WStringSeq (*p.ptr_));
  else
    this->ptr_ = 0;
}

ACE_INLINE
CORBA_WStringSeq_var::~CORBA_WStringSeq_var (void) // destructor
{
  delete this->ptr_;
}

ACE_INLINE CORBA_WStringSeq_var &
CORBA_WStringSeq_var::operator= (CORBA_WStringSeq *p)
{
  delete this->ptr_;
  this->ptr_ = p;
  return *this;
}

ACE_INLINE ::CORBA_WStringSeq_var &
CORBA_WStringSeq_var::operator= (const ::CORBA_WStringSeq_var &p)
{
  if (this != &p)
    {
      if (p.ptr_ == 0)
        {
          delete this->ptr_;
          this->ptr_ = 0;
        }
      else
        {
          CORBA_WStringSeq *deep_copy =
            new CORBA_WStringSeq (*p.ptr_);
          
          if (deep_copy != 0)
            {
              CORBA_WStringSeq *tmp = deep_copy;
              deep_copy = this->ptr_;
              this->ptr_ = tmp;
              delete deep_copy;
            }
        }
    }
  
  return *this;
}

ACE_INLINE const ::CORBA_WStringSeq *
CORBA_WStringSeq_var::operator-> (void) const
{
  return this->ptr_;
}

ACE_INLINE ::CORBA_WStringSeq *
CORBA_WStringSeq_var::operator-> (void)
{
  return this->ptr_;
}

ACE_INLINE 
CORBA_WStringSeq_var::operator const ::CORBA_WStringSeq &() const // cast
{
  return *this->ptr_;
}

ACE_INLINE 
CORBA_WStringSeq_var::operator ::CORBA_WStringSeq &() // cast 
{
  return *this->ptr_;
}

ACE_INLINE 
CORBA_WStringSeq_var::operator ::CORBA_WStringSeq &() const // cast 
{
  return *this->ptr_;
}

// variable-size types only
ACE_INLINE
CORBA_WStringSeq_var::operator ::CORBA_WStringSeq *&() // cast 
{
  return this->ptr_;
}

ACE_INLINE TAO_SeqElem_WString_Manager
CORBA_WStringSeq_var::operator[] (CORBA::ULong index)
{
  return this->ptr_->operator[] (index);
}

ACE_INLINE const ::CORBA_WStringSeq &
CORBA_WStringSeq_var::in (void) const
{
  return *this->ptr_;
}

ACE_INLINE ::CORBA_WStringSeq &
CORBA_WStringSeq_var::inout (void)
{
  return *this->ptr_;
}

// mapping for variable size 
ACE_INLINE ::CORBA_WStringSeq *&
CORBA_WStringSeq_var::out (void)
{
  delete this->ptr_;
  this->ptr_ = 0;
  return this->ptr_;
}

ACE_INLINE ::CORBA_WStringSeq *
CORBA_WStringSeq_var::_retn (void)
{
  ::CORBA_WStringSeq *tmp = this->ptr_;
  this->ptr_ = 0;
  return tmp;
}

ACE_INLINE ::CORBA_WStringSeq *
CORBA_WStringSeq_var::ptr (void) const
{
  return this->ptr_;
}

// *************************************************************
// Inline operations for class CORBA::WStringSeq_out
// *************************************************************

ACE_INLINE
CORBA_WStringSeq_out::CORBA_WStringSeq_out (CORBA_WStringSeq *&p)
  : ptr_ (p)
{
  this->ptr_ = 0;
}

ACE_INLINE
CORBA_WStringSeq_out::CORBA_WStringSeq_out (CORBA_WStringSeq_var &p) // constructor from _var
  : ptr_ (p.out ())
{
  delete this->ptr_;
  this->ptr_ = 0;
}

ACE_INLINE
CORBA_WStringSeq_out::CORBA_WStringSeq_out (const ::CORBA_WStringSeq_out &p) // copy constructor
  : ptr_ (ACE_const_cast (CORBA_WStringSeq_out&, p).ptr_)
{}

ACE_INLINE ::CORBA_WStringSeq_out &
CORBA_WStringSeq_out::operator= (const ::CORBA_WStringSeq_out &p)
{
  this->ptr_ = ACE_const_cast (CORBA_WStringSeq_out&, p).ptr_;
  return *this;
}

ACE_INLINE ::CORBA_WStringSeq_out &
CORBA_WStringSeq_out::operator= (CORBA_WStringSeq *p)
{
  this->ptr_ = p;
  return *this;
}

ACE_INLINE 
CORBA_WStringSeq_out::operator ::CORBA_WStringSeq *&() // cast
{
  return this->ptr_;
}

ACE_INLINE ::CORBA_WStringSeq *&
CORBA_WStringSeq_out::ptr (void) // ptr
{
  return this->ptr_;
}

ACE_INLINE ::CORBA_WStringSeq *
CORBA_WStringSeq_out::operator-> (void)
{
  return this->ptr_;
}

ACE_INLINE TAO_SeqElem_WString_Manager
CORBA_WStringSeq_out::operator[] (CORBA::ULong index)
{
  return this->ptr_->operator[] (index);
}


#endif /* end #if !defined */


#if !defined _TAO_CDR_OP_CORBA_StringSeq_I_
#define _TAO_CDR_OP_CORBA_StringSeq_I_

CORBA::Boolean TAO_Export operator<< (
    TAO_OutputCDR &,
    const CORBA::StringSeq &
  );
CORBA::Boolean TAO_Export operator>> (
    TAO_InputCDR &,
    CORBA::StringSeq &
  );

#endif /* _TAO_CDR_OP_CORBA_StringSeq_I_ */


#if !defined _TAO_CDR_OP_CORBA_WStringSeq_I_
#define _TAO_CDR_OP_CORBA_WStringSeq_I_

CORBA::Boolean TAO_Export operator<< (
    TAO_OutputCDR &,
    const CORBA_WStringSeq &
  );
CORBA::Boolean TAO_Export operator>> (
    TAO_InputCDR &,
    CORBA_WStringSeq &
  );

#endif /* _TAO_CDR_OP_CORBA_WStringSeq_I_ */

