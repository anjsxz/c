#include “Reactor.h”
#include <poll.h>
/* Other include files omitted... */
  /* Bind an event handler to the struct used to interface poll(). */
  typedef struct
  {
     EventHandler handler;
     struct pollfd fd;
  } HandlerRegistration;
  static HandlerRegistration registeredHandlers[MAX_NO_OF_HANDLES];
  /* Add a copy of the given handler to the first free position in registeredHandlers. */
  static void addToRegistry(EventHandler* handler);
  /* Identify the event handler in the registeredHandlers and remove it. */
  static void removeFromRegistry(EventHandler* handler);
  /* Implementation of the Reactor interface used for registrations.*/
  void Register(EventHandler* handler)
  {
     assert(NULL != handler);
     addToRegistry(handler);
  }
  void Unregister(EventHandler* handler)
  {
     assert(NULL != handler);
     removeFromRegistry(handler);
  }
