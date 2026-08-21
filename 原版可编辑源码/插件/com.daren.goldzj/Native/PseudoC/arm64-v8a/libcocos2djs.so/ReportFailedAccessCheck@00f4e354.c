
/* v8::internal::Isolate::ReportFailedAccessCheck(v8::internal::Handle<v8::internal::JSObject>) */

void __thiscall v8::internal::Isolate::ReportFailedAccessCheck(Isolate *this,undefined8 param_2)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  
  if (*(long *)(this + 0x2c68) == 0) {
    puVar7 = (undefined8 *)Factory::NewTypeError((Factory *)this,0x4e,0,0,0);
    Throw(this,*puVar7,0);
    PropagatePendingExceptionToExternalTryCatch(this);
    uVar5 = *(ulong *)(this + 0x2bd8);
    if (((uVar5 & 1) == 0) || ((int)uVar5 != (int)*(undefined8 *)(this + 0xa8))) {
      *(ulong *)(this + 0x2c20) = uVar5;
      this[0x2c19] = (Isolate)0x0;
      *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
    }
  }
  else {
    pIVar1 = this + 0x95a0;
    lVar2 = *(long *)pIVar1;
    lVar3 = *(long *)(this + 0x95a8);
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    uVar5 = AccessCheckInfo::Get(this);
    if ((int)uVar5 == 0) {
      puVar7 = (undefined8 *)Factory::NewTypeError((Factory *)this,0x4e,0,0,0);
      Throw(this,*puVar7,0);
      PropagatePendingExceptionToExternalTryCatch(this);
      uVar5 = *(ulong *)(this + 0x2bd8);
      if (((uVar5 & 1) == 0) || ((int)uVar5 != (int)*(undefined8 *)(this + 0xa8))) {
        *(ulong *)(this + 0x2c20) = uVar5;
        this[0x2c19] = (Isolate)0x0;
        *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
      }
    }
    else {
      uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xf);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar1;
        if (puVar6 == *(ulong **)(this + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)pIVar1 = puVar6 + 1;
        *puVar6 = uVar5;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
      }
      uVar4 = *(undefined4 *)(this + 0x2c60);
      *(undefined4 *)(this + 0x2c60) = 6;
      (**(code **)(this + 0x2c68))(param_2,2,puVar6);
      *(undefined4 *)(this + 0x2c60) = uVar4;
    }
    *(long *)pIVar1 = lVar2;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar3) {
      *(long *)(this + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(this);
      return;
    }
  }
  return;
}

