#ifndef EXCEPTION_HANDLER_LINUX
#define EXCEPTION_HANDLER_LINUX

#include <thread>
#include "sys/exception_handler.h"

namespace dreavm {
namespace sys {

class ExceptionHandlerLinux : public ExceptionHandler {
 public:
  ~ExceptionHandlerLinux();

  bool Init();
};
}
}

#endif
