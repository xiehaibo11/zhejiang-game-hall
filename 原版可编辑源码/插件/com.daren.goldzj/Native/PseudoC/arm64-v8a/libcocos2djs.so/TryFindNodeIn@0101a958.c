
/* v8::internal::FreeList::TryFindNodeIn(int, unsigned long, unsigned long*) */

ulong __thiscall
v8::internal::FreeList::TryFindNodeIn(FreeList *this,int param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(*(long *)(this + 0x20) + (long)param_1 * 8);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(lVar3 + 8);
    if ((ulong)((long)((ulong)*(uint *)(uVar4 + 3) << 0x20) >> 0x21) < param_2) {
      uVar4 = 0;
      *param_3 = 0;
      iVar1 = *(int *)(lVar3 + 8);
    }
    else {
      *(ulong *)(lVar3 + 8) = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7);
      uVar2 = *(uint *)(uVar4 + 3);
      *param_3 = (long)((ulong)uVar2 << 0x20) >> 0x21;
      *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) - ((int)uVar2 >> 1);
      if ((int)uVar4 != 0) {
        *(ulong *)(this + 0x28) = *(long *)(this + 0x28) - *param_3;
      }
      iVar1 = *(int *)(lVar3 + 8);
    }
    if (iVar1 == 0) {
      (**(code **)(*(long *)this + 0x40))();
    }
  }
  return uVar4;
}

