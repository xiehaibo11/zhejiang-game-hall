
/* ClipperLib::SlopesEqual(ClipperLib::TEdge const&, ClipperLib::TEdge const&, bool) */

bool ClipperLib::SlopesEqual(TEdge *param_1,TEdge *param_2,bool param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar5 = *(ulong *)(param_1 + 0x38);
  uVar2 = *(ulong *)(param_2 + 0x30);
  if (!param_3) {
    return uVar2 * uVar5 - *(long *)(param_2 + 0x38) * *(long *)(param_1 + 0x30) == 0;
  }
  uVar8 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar8 = uVar5;
  }
  uVar6 = -uVar2;
  if (-1 < (long)uVar2) {
    uVar6 = uVar2;
  }
  uVar9 = (uVar6 & 0xffffffff) * (uVar8 & 0xffffffff);
  uVar3 = (uVar6 >> 0x20) * (uVar8 & 0xffffffff) + (uVar6 & 0xffffffff) * (uVar8 >> 0x20);
  uVar8 = (uVar6 >> 0x20) * (uVar8 >> 0x20) + (uVar3 >> 0x20);
  uVar3 = uVar3 << 0x20;
  lVar4 = uVar9 + uVar3;
  if (CARRY8(uVar9,uVar3)) {
    uVar8 = uVar8 + 1;
  }
  uVar6 = uVar8;
  if (-(int)((long)uVar5 >> 0x3f) != -(int)((long)uVar2 >> 0x3f)) {
    bVar1 = lVar4 != 0;
    uVar6 = -uVar8;
    lVar4 = -lVar4;
    if (bVar1) {
      uVar6 = ~uVar8;
    }
  }
  uVar5 = *(ulong *)(param_1 + 0x30);
  uVar8 = *(ulong *)(param_2 + 0x38);
  uVar2 = -uVar5;
  if (-1 < (long)uVar5) {
    uVar2 = uVar5;
  }
  uVar3 = -uVar8;
  if (-1 < (long)uVar8) {
    uVar3 = uVar8;
  }
  uVar10 = (uVar3 & 0xffffffff) * (uVar2 & 0xffffffff);
  uVar9 = (uVar3 >> 0x20) * (uVar2 & 0xffffffff) + (uVar3 & 0xffffffff) * (uVar2 >> 0x20);
  uVar2 = (uVar3 >> 0x20) * (uVar2 >> 0x20) + (uVar9 >> 0x20);
  uVar9 = uVar9 << 0x20;
  lVar7 = uVar10 + uVar9;
  if (CARRY8(uVar10,uVar9)) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = uVar2;
  if (-(int)((long)uVar5 >> 0x3f) != -(int)((long)uVar8 >> 0x3f)) {
    bVar1 = lVar7 != 0;
    uVar3 = -uVar2;
    lVar7 = -lVar7;
    if (bVar1) {
      uVar3 = ~uVar2;
    }
  }
  if (uVar6 != uVar3) {
    return false;
  }
  return lVar4 == lVar7;
}

