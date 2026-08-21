
/* v8::internal::ScopeInfo::FunctionDebugName() const */

ulong __thiscall v8::internal::ScopeInfo::FunctionDebugName(ScopeInfo *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)this;
  if ((*(int *)(uVar5 + 3) < 2) || ((*(uint *)(uVar5 + 7) & 0x6000) == 0)) {
    return *(ulong *)((uVar5 & 0xffffffff00000000) + 200);
  }
  iVar2 = (*(uint *)(uVar5 + 0xf) >> 1) + (*(uint *)(uVar5 + 0xf) >> 1) +
          (*(uint *)(uVar5 + 7) >> 0xb & 1);
  if ((*(uint *)(uVar5 + 7) >> 8 & 3) - 1 < 2) {
    iVar2 = iVar2 + 1;
  }
  puVar1 = (uint *)(uVar5 + 7);
  uVar3 = *(uint *)((long)puVar1 + (long)(iVar2 * 4 + 0xc));
  uVar6 = uVar5 & 0xffffffff00000000;
  if ((((uVar3 & 1) == 0) ||
      (uVar4 = uVar6 | uVar3, 0x3f < *(ushort *)((uVar6 | 7) + (ulong)*(uint *)(uVar4 - 1)))) ||
     (*(int *)(uVar4 + 7) < 1)) {
    if ((*puVar1 >> 0xf & 1) != 0) {
      iVar2 = (*(uint *)(uVar5 + 0xf) >> 1) + (*(uint *)(uVar5 + 0xf) >> 1) +
              (*(uint *)(uVar5 + 7) >> 0xb & 1) + (uint)((*(uint *)(uVar5 + 7) & 0x6000) != 0) * 2;
      if ((*(uint *)(uVar5 + 7) >> 8 & 3) - 1 < 2) {
        iVar2 = iVar2 + 1;
      }
      uVar3 = *(uint *)((long)puVar1 + (long)(iVar2 * 4 + 0xc));
      if (((uVar3 & 1) != 0) &&
         (uVar5 = uVar6 | uVar3, *(ushort *)((uVar6 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0x40)) {
        return uVar5;
      }
    }
    uVar4 = *(ulong *)(uVar6 + 200);
  }
  return uVar4;
}

