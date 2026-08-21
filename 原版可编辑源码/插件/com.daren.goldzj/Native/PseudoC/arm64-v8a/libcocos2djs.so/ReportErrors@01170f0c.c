
/* v8::internal::PendingCompilationErrorHandler::ReportErrors(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>, v8::internal::AstValueFactory*) */

void __thiscall
v8::internal::PendingCompilationErrorHandler::ReportErrors
          (PendingCompilationErrorHandler *this,Isolate *param_1,undefined8 param_3,
          AstValueFactory *param_4)

{
  if (this[1] != (PendingCompilationErrorHandler)0x0) {
    Isolate::StackOverflow(param_1);
    return;
  }
  AstValueFactory::Internalize(param_4,param_1);
  ThrowPendingError(this,param_1,param_3);
  return;
}

