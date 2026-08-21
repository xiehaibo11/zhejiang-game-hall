
/* v8::internal::IdentityMapBase::Resize(int) */

void __thiscall v8::internal::IdentityMapBase::Resize(IdentityMapBase *this,int param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  void *__s;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (this[0x38] != (IdentityMapBase)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!is_iterable()");
  }
  uVar3 = *(uint *)(this + 0x20);
  uVar7 = (ulong)uVar3;
  *(int *)(this + 0x20) = param_1;
  *(int *)(this + 0x24) = param_1 + -1;
  puVar1 = *(ulong **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(*(long *)(this + 0x10) + 0x1b4);
  *(undefined4 *)(this + 0x1c) = 0;
  puVar5 = (ulong *)(**(code **)(*(long *)this + 0x10))(this,(long)param_1);
  *(ulong **)(this + 0x28) = puVar5;
  iVar4 = *(int *)(this + 0x20);
  uVar8 = *(ulong *)(*(long *)(this + 0x10) + -0x7cb0);
  if (0 < iVar4) {
    *puVar5 = uVar8;
    iVar4 = *(int *)(this + 0x20);
    if (1 < iVar4) {
      lVar6 = 1;
      do {
        *(ulong *)(*(long *)(this + 0x28) + lVar6 * 8) = uVar8;
        iVar4 = *(int *)(this + 0x20);
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
    }
  }
  __s = (void *)(**(code **)(*(long *)this + 0x10))(this,(long)iVar4);
  *(void **)(this + 0x30) = __s;
  memset(__s,0,(long)*(int *)(this + 0x20) << 3);
  puVar5 = puVar1;
  puVar9 = puVar2;
  if (0 < (int)uVar3) {
    do {
      if (*puVar5 != uVar8) {
        iVar4 = InsertKey(this,*puVar5);
        *(undefined8 *)(*(long *)(this + 0x30) + (long)iVar4 * 8) = *puVar9;
      }
      uVar7 = uVar7 - 1;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar7 != 0);
  }
  Heap::UnregisterStrongRoots(*(Heap **)(this + 0x10),puVar1);
  Heap::RegisterStrongRoots
            (*(Heap **)(this + 0x10),*(long *)(this + 0x28),
             *(long *)(this + 0x28) + (long)*(int *)(this + 0x20) * 8);
  (**(code **)(*(long *)this + 0x18))(this,puVar1);
                    /* WARNING: Could not recover jumptable at 0x011fba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x18))(this,puVar2);
  return;
}

