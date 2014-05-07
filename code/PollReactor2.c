#include “ReactorEventLoop.h”
  /* The code from Listing 4 go here (omitted)... */
  /* Add a copy of all registered handlers to the given array. */
  static size_t buildPollArray(struct pollfd* fds);
  /* Identify the event handler corresponding to the given descriptor in the registeredHandlers. */
  static EventHandler* findHandler(int fd);
  static void dispatchSignalledHandles(const struct pollfd* fds,
                                       size_t noOfHandles)
{
/* Loop through all handles. Upon detection of a handle signalled by poll,
   its corresponding event handler is fetched and invoked. */
size_t i = 0;
for(i = 0; i < noOfHandles; ++i) {
   /* Detect all signalled handles and invoke their corresponding event handlers. */
   if((POLLRDNORM | POLLERR) & fds[i].revents) {
      EventHandler* signalledHandler = findHandler(fds[i].fd);
      if(NULL != signalledHandler){
         signalledHandler-> handleEvent(signalledHandler->instance);
} }
} }
  /* Implementation of the reactive event loop. */
  void HandleEvents(void)
  {
     /* Build the array required to interact with poll().*/
     struct pollfd fds[MAX_NO_OF_HANDLES] = {0};
     const size_t noOfHandles = buildPollArray(fds);
     /* Inoke the synchronous event demultiplexer.*/
     if(0 < poll(fds, noOfHandles, INFTIM)){
        /* Identify all signalled handles and invoke the event handler associated with each one. */
        dispatchSignalledHandles(fds, noOfHandles);
     }
     else{
        error("Poll failure");
} }
