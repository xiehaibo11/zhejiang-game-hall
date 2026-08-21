
/* v8::StackTrace::CurrentStackTrace(v8::Isolate*, int, v8::StackTrace::StackTraceOptions) */

void v8::StackTrace::CurrentStackTrace(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::Isolate::CaptureCurrentStackTrace();
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return;
}

