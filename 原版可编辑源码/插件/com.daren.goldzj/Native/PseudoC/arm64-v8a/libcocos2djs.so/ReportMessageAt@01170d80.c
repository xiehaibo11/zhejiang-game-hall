
/* v8::internal::PendingCompilationErrorHandler::ReportMessageAt(int, int,
   v8::internal::MessageTemplate, char const*) */

void __thiscall
v8::internal::PendingCompilationErrorHandler::ReportMessageAt
          (PendingCompilationErrorHandler *this,undefined4 param_1,undefined4 param_2,
          undefined4 param_4,undefined8 param_5)

{
  if (*this != (PendingCompilationErrorHandler)0x0) {
    return;
  }
  *(undefined4 *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x10) = param_4;
  *this = (PendingCompilationErrorHandler)0x1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = param_5;
  return;
}

