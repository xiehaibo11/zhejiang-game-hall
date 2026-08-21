
/* v8::internal::HandleScopeImplementer::IterateThis(v8::internal::RootVisitor*) */

void __thiscall
v8::internal::HandleScopeImplementer::IterateThis(HandleScopeImplementer *this,RootVisitor *param_1)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(this + 0x18);
  uVar2 = (int)lVar6 - 2;
  if (-1 < (int)uVar2) {
    uVar7 = (ulong)uVar2;
    do {
      uVar5 = *(ulong *)(this + 0x70);
      uVar4 = *(ulong *)(*(long *)(this + 8) + uVar7 * 8);
      if (((uVar5 < uVar4) || (uVar5 == 0)) || (uVar4 + 0x1ff0 < uVar5)) {
        (**(code **)(*(long *)param_1 + 0x10))(param_1,10,0,uVar4,uVar4 + 0x1ff0);
      }
      else {
        (**(code **)(*(long *)param_1 + 0x10))(param_1,10,0);
      }
      bVar1 = 0 < (long)uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar1);
    lVar6 = *(long *)(this + 0x18);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,10,0,*(undefined8 *)(*(long *)(this + 8) + lVar6 * 8 + -8),
               *(undefined8 *)(this + 0x78));
  }
  uVar4 = *(ulong *)(this + 0x60);
  uVar7 = 8;
  if (7 < uVar4) {
    uVar7 = uVar4;
  }
  if (uVar7 < *(ulong *)(this + 0x58) >> 1) {
    uVar5 = uVar7 << 3;
    if (uVar7 >> 0x3d != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar5);
    if (uVar7 != 0) {
      memset(pvVar3,0,uVar7 << 3);
    }
    if (uVar4 != 0) {
      memmove(pvVar3,*(void **)(this + 0x50),uVar4 << 3);
    }
    if (*(void **)(this + 0x50) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x50));
    }
    uVar4 = *(ulong *)(this + 0x60);
    *(void **)(this + 0x50) = pvVar3;
    *(ulong *)(this + 0x58) = uVar7;
  }
  if (uVar4 != 0) {
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,10,0,*(long *)(this + 0x50),
               *(long *)(this + 0x50) + ((long)(uVar4 << 0x20) >> 0x1d));
  }
  uVar4 = *(ulong *)(this + 0x30);
  uVar7 = 8;
  if (7 < uVar4) {
    uVar7 = uVar4;
  }
  if (uVar7 < *(ulong *)(this + 0x28) >> 1) {
    uVar5 = uVar7 << 3;
    if (uVar7 >> 0x3d != 0) {
      uVar5 = 0xffffffffffffffff;
    }
    pvVar3 = operator_new__(uVar5);
    if (uVar7 != 0) {
      memset(pvVar3,0,uVar7 << 3);
    }
    if (uVar4 != 0) {
      memmove(pvVar3,*(void **)(this + 0x20),uVar4 << 3);
    }
    if (*(void **)(this + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    uVar4 = *(ulong *)(this + 0x30);
    *(void **)(this + 0x20) = pvVar3;
    *(ulong *)(this + 0x28) = uVar7;
  }
  if (uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ed4d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x10))
              (param_1,10,0,*(long *)(this + 0x20),
               *(long *)(this + 0x20) + ((long)(uVar4 << 0x20) >> 0x1d));
    return;
  }
  return;
}

