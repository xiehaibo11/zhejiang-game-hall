
void FUN_01072654(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  
  lVar13 = *(long *)(param_1 + 0x1d8);
  if (lVar13 == 0) {
    sVar6 = *(short *)(param_1 + 0x21c);
    if (sVar6 == 0) {
      lVar13 = *(long *)(param_1 + 0x1c0);
    }
    else {
      sVar7 = *(short *)(param_1 + 0x21a);
      if (sVar7 == 0) {
        lVar13 = *(long *)(param_1 + 0x1c8);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x1c0);
        uVar12 = (uint)sVar6;
        uVar10 = -uVar12;
        if (-1 < sVar6) {
          uVar10 = uVar12;
        }
        uVar14 = (uint)sVar7;
        uVar9 = -uVar14;
        if (-1 < sVar7) {
          uVar9 = uVar14;
        }
        uVar1 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        uVar8 = (uVar1 & 0xffff) * uVar9;
        uVar9 = (uVar1 >> 0x10) * uVar9;
        uVar5 = *(uint *)(param_1 + 0x1c8);
        uVar1 = uVar9 * 0x10000 | 0x2000;
        uVar9 = uVar9 >> 0x10;
        if (CARRY4(uVar1,uVar8)) {
          uVar9 = uVar9 + 1;
        }
        iVar3 = (int)(CONCAT44(uVar9,uVar1 + uVar8) >> 0xe);
        iVar2 = -iVar3;
        if (-1 < (int)(uVar4 ^ uVar14)) {
          iVar2 = iVar3;
        }
        uVar4 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar4 = uVar5;
        }
        uVar9 = (uVar4 >> 0x10) * uVar10;
        uVar10 = (uVar4 & 0xffff) * uVar10;
        uVar4 = uVar9 * 0x10000 | 0x2000;
        uVar9 = uVar9 >> 0x10;
        if (CARRY4(uVar4,uVar10)) {
          uVar9 = uVar9 + 1;
        }
        iVar11 = (int)(CONCAT44(uVar9,uVar4 + uVar10) >> 0xe);
        iVar3 = -iVar11;
        if (-1 < (int)(uVar5 ^ uVar12)) {
          iVar3 = iVar11;
        }
        lVar13 = FT_Hypot((long)iVar2,(long)iVar3);
      }
    }
    *(long *)(param_1 + 0x1d8) = lVar13;
  }
  lVar13 = FT_DivFix(param_3,lVar13);
  *(long *)(*(long *)(param_1 + 0x2a8) + param_2 * 8) =
       *(long *)(*(long *)(param_1 + 0x2a8) + param_2 * 8) + lVar13;
  return;
}

