
/* v8::Isolate::SetCaptureStackTraceForUncaughtExceptions(bool, int,
   v8::StackTrace::StackTraceOptions) */

void v8::Isolate::SetCaptureStackTraceForUncaughtExceptions(Isolate *param_1,uint param_2)

{
  internal::Isolate::SetCaptureStackTraceForUncaughtExceptions(param_1,param_2 & 1);
  return;
}

