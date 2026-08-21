
void FUN_00e2d5c4(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  
  uVar5 = *(undefined2 *)(param_1 + 0x1d8);
  if (*(long *)(param_1 + 0x1e0) != 0) {
    FT_MulFix(uVar5);
    return;
  }
  sVar6 = *(short *)(param_1 + 0x224);
  if (sVar6 == 0) {
    uVar10 = *(undefined8 *)(param_1 + 0x1c8);
  }
  else {
    sVar7 = *(short *)(param_1 + 0x222);
    if ((int)sVar7 == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x1d0);
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x1c8);
      uVar4 = *(uint *)(param_1 + 0x1d0);
      uVar1 = -uVar3;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      iVar12 = (int)sVar7;
      iVar2 = -iVar12;
      if (-1 < iVar12) {
        iVar2 = iVar12;
      }
      uVar8 = (uVar1 & 0xffff) * iVar2;
      uVar11 = (uVar1 >> 0x10) * iVar2;
      uVar1 = uVar11 * 0x10000 | 0x2000;
      uVar11 = uVar11 >> 0x10;
      if (CARRY4(uVar1,uVar8)) {
        uVar11 = uVar11 + 1;
      }
      iVar12 = (int)(CONCAT44(uVar11,uVar1 + uVar8) >> 0xe);
      iVar2 = -iVar12;
      if (-1 < (int)(uVar3 ^ (int)sVar7)) {
        iVar2 = iVar12;
      }
      uVar1 = -uVar4;
      if (-1 < (int)uVar4) {
        uVar1 = uVar4;
      }
      uVar11 = (uint)sVar6;
      uVar3 = -uVar11;
      if (-1 < sVar6) {
        uVar3 = uVar11;
      }
      uVar8 = (uVar1 & 0xffff) * uVar3;
      uVar3 = (uVar1 >> 0x10) * uVar3;
      uVar1 = uVar3 * 0x10000 | 0x2000;
      uVar3 = uVar3 >> 0x10;
      if (CARRY4(uVar1,uVar8)) {
        uVar3 = uVar3 + 1;
      }
      iVar9 = (int)(CONCAT44(uVar3,uVar1 + uVar8) >> 0xe);
      iVar12 = -iVar9;
      if (-1 < (int)(uVar4 ^ uVar11)) {
        iVar12 = iVar9;
      }
      uVar10 = FUN_00e12a84((long)iVar2,(long)iVar12);
    }
  }
  *(undefined8 *)(param_1 + 0x1e0) = uVar10;
  FT_MulFix(uVar5);
  return;
}

