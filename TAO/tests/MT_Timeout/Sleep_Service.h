//
// $Id$
//

#ifndef SLEEP_SERVICE_H
#define SLEEP_SERVICE_H
#include /**/ "ace/pre.h"

#include "TestS.h"

#if defined (_MSC_VER)
# pragma warning(push)
# pragma warning (disable:4250)
#endif /* _MSC_VER */

/// Implement the Test::Sleep_Service interface
class Sleep_Service
  : public virtual POA_Test::Sleep_Service
  , public virtual PortableServer::RefCountServantBase
{
public:
  /// Constructor
  Sleep_Service (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual void go_to_sleep (CORBA::ULong microseconds
                            ACE_ENV_ARG_DECL)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void shutdown (ACE_ENV_SINGLE_ARG_DECL)
    ACE_THROW_SPEC ((CORBA::SystemException));

private:
  /// Use an ORB reference to conver strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
};

#if defined(_MSC_VER)
# pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"
#endif /* SLEEP_SERVICE_H */
