
/* v8::internal::JSObject::DefineAccessor(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyAttributes) */

Isolate * v8::internal::JSObject::DefineAccessor
                    (LookupIterator *param_1,undefined8 param_2,undefined8 param_3,
                    undefined4 param_4)

{
  int iVar1;
  ulong uVar2;
  Isolate *this;
  
  this = *(Isolate **)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x48) == -1) {
    iVar1 = **(int **)(param_1 + 0x20);
    if (((((iVar1 == *(int *)(this + 0xc70)) || (iVar1 == *(int *)(this + 0x5d0))) ||
         (iVar1 == *(int *)(this + 0x848))) ||
        ((iVar1 == *(int *)(this + 0xc48) || (iVar1 == *(int *)(this + 0xc18))))) ||
       ((iVar1 == *(int *)(this + 0x960) || (iVar1 == *(int *)(this + 0xa38))))) {
      LookupIterator::InternalUpdateProtector(this,*(undefined8 *)(param_1 + 0x30));
    }
  }
  if (*(int *)(param_1 + 4) == 0) {
    uVar2 = LookupIterator::HasAccess(param_1);
    if ((uVar2 & 1) == 0) {
      Isolate::ReportFailedAccessCheck(this,*(undefined8 *)(param_1 + 0x38));
      if (*(int *)(this + 0x2c20) != *(int *)(this + 0xa8)) {
        Isolate::PromoteScheduledException(this);
        return (Isolate *)0x0;
      }
      goto LAB_010cdbac;
    }
    LookupIterator::Next(param_1);
  }
  if ((*(long *)(param_1 + 0x48) != -1) &&
     ((byte)((*(byte *)((**(ulong **)(param_1 + 0x30) & 0xffffffff00000000 | 10) +
                       (ulong)*(uint *)(**(ulong **)(param_1 + 0x30) - 1)) >> 3) - 0x11) < 0xb)) {
    return (Isolate *)(*(long *)(param_1 + 0x18) + 0xa0);
  }
  LookupIterator::TransitionToAccessorProperty(param_1,param_2,param_3,param_4);
LAB_010cdbac:
  return this + 0xa0;
}

