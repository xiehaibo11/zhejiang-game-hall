
/* v8::internal::Isolate::CaptureAndSetDetailedStackTrace(v8::internal::Handle<v8::internal::JSReceiver>)
    */

undefined8 __thiscall
v8::internal::Isolate::CaptureAndSetDetailedStackTrace(Isolate *this,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (this[0x9588] != (Isolate)0x0) {
    uVar1 = FUN_00f4d738(this,this + 0xa0,
                         (ulong)(*(uint *)(this + 0x958c) &
                                ((int)*(uint *)(this + 0x958c) >> 0x1f ^ 0xffffffffU)) | 0x200000000
                         ,(ulong)(*(uint *)(this + 0x9590) >> 8 ^ 0xffffffff) & 1 |
                          0x100010000000000);
    lVar2 = Object::SetProperty(this,param_2,this + 0xb40,uVar1,0,1);
    if (lVar2 == 0) {
      param_2 = 0;
    }
  }
  return param_2;
}

