
/* v8::internal::compiler::LiveRange::ShouldBeAllocatedBefore(v8::internal::compiler::LiveRange
   const*) const */

bool __thiscall
v8::internal::compiler::LiveRange::ShouldBeAllocatedBefore(LiveRange *this,LiveRange *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = **(int **)(this + 0x10);
  iVar2 = **(int **)(param_1 + 0x10);
  bVar5 = SBORROW4(iVar1,iVar2);
  bVar6 = iVar1 - iVar2 < 0;
  if (iVar1 == iVar2) {
    uVar3 = *(uint *)(this + 4) >> 0x16 & 0x3f;
    uVar4 = *(uint *)(param_1 + 4) >> 0x16 & 0x3f;
    if (uVar3 < uVar4) {
      return true;
    }
    if (uVar3 != uVar4) {
      return false;
    }
    lVar7 = *(long *)(this + 0x18);
    lVar8 = *(long *)(param_1 + 0x18);
    if (lVar7 != lVar8) {
      if (lVar7 == 0) {
        return false;
      }
      if (lVar8 == 0) {
        return true;
      }
      iVar1 = *(int *)(lVar7 + 0x18);
      iVar2 = *(int *)(lVar8 + 0x18);
      bVar5 = SBORROW4(iVar1,iVar2);
      bVar6 = iVar1 - iVar2 < 0;
      if (iVar1 != iVar2) goto LAB_01655fe4;
    }
    bVar5 = SBORROW4(*(int *)(*(long *)(this + 0x20) + 0x5c),
                     *(int *)(*(long *)(param_1 + 0x20) + 0x5c));
    bVar6 = *(int *)(*(long *)(this + 0x20) + 0x5c) - *(int *)(*(long *)(param_1 + 0x20) + 0x5c) < 0
    ;
  }
LAB_01655fe4:
  return bVar6 != bVar5;
}

