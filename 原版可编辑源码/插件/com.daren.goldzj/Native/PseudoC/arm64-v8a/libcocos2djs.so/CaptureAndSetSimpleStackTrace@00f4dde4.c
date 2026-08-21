
/* v8::internal::Isolate::CaptureAndSetSimpleStackTrace(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::FrameSkipMode, v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::Isolate::CaptureAndSetSimpleStackTrace
          (Isolate *this,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  Isolate *pIVar3;
  long lVar4;
  uint local_24;
  
  uVar2 = GetStackTraceLimit(this,(int *)&local_24);
  if ((uVar2 & 1) == 0) {
    pIVar3 = this + 0xa0;
  }
  else {
    pIVar3 = (Isolate *)
             FUN_00f4d738(this,param_4,(ulong)local_24 | param_3 << 0x20,
                          (ulong)FLAG_async_stack_traces << 0x30 | 0x100000001);
  }
  lVar4 = Object::SetProperty(this,param_2,this + 0xbe8,pIVar3,0,1);
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}

