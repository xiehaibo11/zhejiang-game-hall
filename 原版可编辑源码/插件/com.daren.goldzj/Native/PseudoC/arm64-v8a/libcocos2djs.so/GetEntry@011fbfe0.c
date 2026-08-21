
/* v8::internal::IdentityMapBase::GetEntry(unsigned long) */

long __thiscall v8::internal::IdentityMapBase::GetEntry(IdentityMapBase *this,ulong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *__s;
  undefined8 uVar3;
  long lVar4;
  
  if (this[0x38] == (IdentityMapBase)0x0) {
    if (*(int *)(this + 0x20) == 0) {
      *(undefined8 *)(this + 0x20) = 0x300000004;
      *(undefined4 *)(this + 0x18) = *(undefined4 *)(*(long *)(this + 0x10) + 0x1b4);
      puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x10))(this,4);
      iVar1 = *(int *)(this + 0x20);
      *(undefined8 **)(this + 0x28) = puVar2;
      if (0 < iVar1) {
        uVar3 = *(undefined8 *)(*(long *)(this + 0x10) + -0x7cb0);
        *puVar2 = uVar3;
        iVar1 = *(int *)(this + 0x20);
        if (1 < iVar1) {
          lVar4 = 1;
          do {
            *(undefined8 *)(*(long *)(this + 0x28) + lVar4 * 8) = uVar3;
            iVar1 = *(int *)(this + 0x20);
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar1);
        }
      }
      __s = (void *)(**(code **)(*(long *)this + 0x10))(this,(long)iVar1);
      *(void **)(this + 0x30) = __s;
      memset(__s,0,(long)*(int *)(this + 0x20) << 3);
      Heap::RegisterStrongRoots
                (*(Heap **)(this + 0x10),*(long *)(this + 0x28),
                 *(long *)(this + 0x28) + (long)*(int *)(this + 0x20) * 8);
    }
    iVar1 = LookupOrInsert(this,param_1);
    return *(long *)(this + 0x30) + (long)iVar1 * 8;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!is_iterable()");
}

