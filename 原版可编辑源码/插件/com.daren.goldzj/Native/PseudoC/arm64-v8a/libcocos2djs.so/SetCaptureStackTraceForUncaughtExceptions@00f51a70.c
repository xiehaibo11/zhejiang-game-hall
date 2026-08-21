
/* v8::internal::Isolate::SetCaptureStackTraceForUncaughtExceptions(bool, int,
   v8::StackTrace::StackTraceOptions) */

void __thiscall
v8::internal::Isolate::SetCaptureStackTraceForUncaughtExceptions
          (Isolate *this,byte param_1,undefined4 param_2,undefined4 param_4)

{
  this[0x9588] = (Isolate)(param_1 & 1);
  *(undefined4 *)(this + 0x958c) = param_2;
  *(undefined4 *)(this + 0x9590) = param_4;
  return;
}

