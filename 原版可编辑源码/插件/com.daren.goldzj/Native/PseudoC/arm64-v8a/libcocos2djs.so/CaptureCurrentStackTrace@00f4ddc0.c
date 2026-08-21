
/* v8::internal::Isolate::CaptureCurrentStackTrace(int, v8::StackTrace::StackTraceOptions) */

void __thiscall
v8::internal::Isolate::CaptureCurrentStackTrace(Isolate *this,uint param_1,uint param_3)

{
  FUN_00f4d738(this,this + 0xa0,
               (ulong)(param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU)) | 0x200000000,
               (ulong)((param_3 >> 8 ^ 0xffffffff) & 1) | 0x100010000000000);
  return;
}

