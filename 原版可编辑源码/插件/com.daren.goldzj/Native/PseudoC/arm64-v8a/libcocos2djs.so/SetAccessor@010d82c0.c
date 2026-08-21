
/* v8::internal::JSObject::SetAccessor(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::AccessorInfo>,
   v8::internal::PropertyAttributes) */

ulong * v8::internal::JSObject::SetAccessor
                  (ulong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  ulong uVar2;
  Isolate *this;
  LookupIterator aLStack_88 [4];
  int local_84;
  byte local_78;
  long local_70;
  long local_40;
  
  this = (Isolate *)((ulong)*(uint *)((long)param_1 + 4) << 0x20);
  LookupIterator::PropertyOrElement(aLStack_88,this,param_1,param_2,0);
  if (local_84 == 0) {
    uVar2 = LookupIterator::HasAccess(aLStack_88);
    if ((uVar2 & 1) == 0) {
      Isolate::ReportFailedAccessCheck(this,param_1);
      if (*(int *)(this + 0x2c20) != *(int *)(this + 0xa8)) {
        Isolate::PromoteScheduledException(this);
        return (ulong *)0x0;
      }
      goto LAB_010d83a4;
    }
    LookupIterator::Next(aLStack_88);
  }
  if ((local_40 == -1) ||
     (10 < (byte)((*(byte *)((*param_1 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(*param_1 - 1))
                  >> 3) - 0x11))) {
    cVar1 = JSReceiver::GetPropertyAttributes(aLStack_88);
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","GetPropertyAttributes(&it).IsJust()");
    }
    if ((local_84 == 4) || ((local_78 >> 5 & 1) == 0)) {
      LookupIterator::TransitionToAccessorPair(aLStack_88,param_3,param_4);
      return param_1;
    }
  }
LAB_010d83a4:
  return (ulong *)(local_70 + 0xa0);
}

