
void FUN_00e2d6c4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x2b0) + param_2 * 8);
  if (*(long *)(param_1 + 0x1e0) != 0) {
    FT_MulFix(uVar12);
    return;
  }
  sVar5 = *(short *)(param_1 + 0x224);
  if (sVar5 == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x1c8);
  }
  else {
    sVar6 = *(short *)(param_1 + 0x222);
    if ((int)sVar6 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x1d0);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x1c8);
      uVar4 = *(uint *)(param_1 + 0x1d0);
      uVar1 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      iVar11 = (int)sVar6;
      iVar2 = -iVar11;
      if (-1 < iVar11) {
        iVar2 = iVar11;
      }
      uVar7 = (uVar1 & 0xffff) * iVar2;
      uVar10 = (uVar1 >> 0x10) * iVar2;
      uVar1 = uVar10 * 0x10000 | 0x2000;
      uVar10 = uVar10 >> 0x10;
      if (CARRY4(uVar1,uVar7)) {
        uVar10 = uVar10 + 1;
      }
      iVar11 = (int)(CONCAT44(uVar10,uVar1 + uVar7) >> 0xe);
      iVar2 = -iVar11;
      if (-1 < (int)(uVar3 ^ (int)sVar6)) {
        iVar2 = iVar11;
      }
      uVar1 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar10 = (uint)sVar5;
      uVar3 = -uVar10;
      if (-1 < sVar5) {
        uVar3 = uVar10;
      }
      uVar7 = (uVar1 & 0xffff) * uVar3;
      uVar3 = (uVar1 >> 0x10) * uVar3;
      uVar1 = uVar3 * 0x10000 | 0x2000;
      uVar3 = uVar3 >> 0x10;
      if (CARRY4(uVar1,uVar7)) {
        uVar3 = uVar3 + 1;
      }
      iVar8 = (int)(CONCAT44(uVar3,uVar1 + uVar7) >> 0xe);
      iVar11 = -iVar8;
      if (-1 < (int)(uVar4 ^ uVar10)) {
        iVar11 = iVar8;
      }
      uVar9 = FUN_00e12a84((long)iVar2,(long)iVar11);
    }
  }
  *(undefined8 *)(param_1 + 0x1e0) = uVar9;
  FT_MulFix(uVar12);
  return;
}

