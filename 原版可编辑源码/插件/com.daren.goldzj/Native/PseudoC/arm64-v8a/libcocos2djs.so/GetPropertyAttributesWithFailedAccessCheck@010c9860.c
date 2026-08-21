
/* v8::internal::JSObject::GetPropertyAttributesWithFailedAccessCheck(v8::internal::LookupIterator*)
    */

ulong v8::internal::JSObject::GetPropertyAttributesWithFailedAccessCheck(LookupIterator *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  Isolate *this;
  undefined8 uVar4;
  
  this = *(Isolate **)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar1 = LookupIterator::GetInterceptorForFailedAccessCheck(param_1);
  if (lVar1 == 0) {
    while (uVar2 = AllCanRead(param_1), (uVar2 & 1) != 0) {
      if (*(int *)(param_1 + 4) == 5) {
        return (ulong)(*(uint *)(param_1 + 0x10) >> 3 & 7) << 0x20 | 1;
      }
      uVar3 = LookupIterator::GetInterceptor(param_1);
      uVar2 = FUN_010d248c(param_1,uVar3);
      if (*(int *)(this + 0x2c20) != *(int *)(this + 0xa8)) break;
      if (((uVar2 & 0xff) != 0) && ((uVar2 & 0xffffffff00000000) != 0x4000000000)) {
        return uVar2;
      }
    }
  }
  else {
    uVar2 = FUN_010d248c(param_1,lVar1);
    if ((*(ulong *)(this + 0x2bd8) & 1) == 0) {
      return 0;
    }
    if ((int)*(ulong *)(this + 0x2bd8) != *(int *)(this + 0xa8)) {
      return 0;
    }
    if (((uVar2 & 0xff) != 0) && ((uVar2 & 0xffffffff00000000) != 0x4000000000)) {
      return uVar2;
    }
  }
  Isolate::ReportFailedAccessCheck(this,uVar4);
  if (*(int *)(this + 0x2c20) != *(int *)(this + 0xa8)) {
    Isolate::PromoteScheduledException(this);
    return 0;
  }
  return 0x4000000001;
}

