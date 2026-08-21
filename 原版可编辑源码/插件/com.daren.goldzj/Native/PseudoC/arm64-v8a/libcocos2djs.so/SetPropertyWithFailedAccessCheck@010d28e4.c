
/* v8::internal::JSObject::SetPropertyWithFailedAccessCheck(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>) */

ushort v8::internal::JSObject::SetPropertyWithFailedAccessCheck
                 (LookupIterator *param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  Isolate *this;
  undefined8 uVar5;
  
  this = *(Isolate **)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  lVar2 = LookupIterator::GetInterceptorForFailedAccessCheck(param_1);
  if (lVar2 != 0) {
    uVar1 = FUN_010d29f8(param_1,lVar2,param_3,param_2);
    if (((*(ulong *)(this + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(this + 0x2bd8) == *(int *)(this + 0xa8))) {
      if ((uVar1 & 0xff) != 0) {
        return uVar1;
      }
LAB_010d29b0:
      Isolate::ReportFailedAccessCheck(this,uVar5);
      if (*(int *)(this + 0x2c20) == *(int *)(this + 0xa8)) {
        return 0x101;
      }
      Isolate::PromoteScheduledException(this);
    }
    return 0;
  }
  do {
    if (*(int *)(param_1 + 4) == 5) {
      puVar3 = (ulong *)LookupIterator::GetAccessors();
      uVar4 = *puVar3;
      if ((((uVar4 & 1) != 0) &&
          (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x51)) &&
         ((*(byte *)(uVar4 + 7) >> 2 & 1) != 0)) {
        uVar1 = Object::SetPropertyWithAccessor(param_1,param_2,param_3);
        return uVar1;
      }
    }
    else if (*(int *)(param_1 + 4) - 3U < 2) goto LAB_010d29b0;
    LookupIterator::Next(param_1);
  } while( true );
}

