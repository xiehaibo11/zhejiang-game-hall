
void FUN_01072450(long param_1,long param_2)

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
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x2a8) + param_2 * 8);
  if (*(long *)(param_1 + 0x1d8) == 0) {
    sVar6 = *(short *)(param_1 + 0x21c);
    if (sVar6 == 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x1c0);
    }
    else {
      sVar7 = *(short *)(param_1 + 0x21a);
      if (sVar7 == 0) {
        uVar12 = *(undefined8 *)(param_1 + 0x1c8);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x1c0);
        uVar13 = (uint)sVar6;
        uVar10 = -uVar13;
        if (-1 < sVar6) {
          uVar10 = uVar13;
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
        if (-1 < (int)(uVar5 ^ uVar13)) {
          iVar3 = iVar11;
        }
        uVar12 = FT_Hypot((long)iVar2,(long)iVar3);
                    /* try { // try from 01072524 to 0117252f has its CatchHandler @ 01072be8 */
      }
    }
    *(undefined8 *)(param_1 + 0x1d8) = uVar12;
  }
                    /* try { // try from 0107253c to 01172547 has its CatchHandler @ 01072bc0 */
  FT_MulFix(uVar15);
  return;
}

