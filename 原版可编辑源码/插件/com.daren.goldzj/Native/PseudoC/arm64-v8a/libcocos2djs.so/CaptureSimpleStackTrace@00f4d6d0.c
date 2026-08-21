
/* v8::internal::Isolate::CaptureSimpleStackTrace(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::FrameSkipMode, v8::internal::Handle<v8::internal::Object>) */

Isolate * __thiscall
v8::internal::Isolate::CaptureSimpleStackTrace
          (Isolate *this,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  uint local_14;
  
  uVar1 = GetStackTraceLimit(this,(int *)&local_14);
  if ((uVar1 & 1) == 0) {
    this = this + 0xa0;
  }
  else {
    this = (Isolate *)
           FUN_00f4d738(this,param_4,(ulong)local_14 | param_3 << 0x20,
                        (ulong)FLAG_async_stack_traces << 0x30 | 0x100000001);
  }
  return this;
}

