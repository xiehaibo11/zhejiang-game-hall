
void FUN_01072360(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  
                    /* catch() { ... } // from try @ 01071fd0 with catch @ 01072364 */
                    /* catch() { ... } // from try @ 01071f50 with catch @ 01072368 */
  uVar6 = *(undefined2 *)(param_1 + 0x1d0);
  if (*(long *)(param_1 + 0x1d8) == 0) {
    sVar7 = *(short *)(param_1 + 0x21c);
    if (sVar7 == 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x1c0);
                    /* try { // try from 01072434 to 01172523 has its CatchHandler @ 01072434
                       catch() { ... } // from try @ 01072434 with catch @ 01072434
                       catch() { ... } // from try @ 01072b40 with catch @ 01072434 */
    }
    else {
      sVar8 = *(short *)(param_1 + 0x21a);
      if (sVar8 == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x1c8);
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x1c0);
        uVar14 = (uint)sVar7;
        uVar11 = -uVar14;
        if (-1 < sVar7) {
          uVar11 = uVar14;
        }
        uVar15 = (uint)sVar8;
        uVar10 = -uVar15;
        if (-1 < sVar8) {
          uVar10 = uVar15;
        }
        uVar1 = -uVar4;
        if (-1 < (int)uVar4) {
          uVar1 = uVar4;
        }
        uVar9 = (uVar1 & 0xffff) * uVar10;
        uVar10 = (uVar1 >> 0x10) * uVar10;
                    /* catch() { ... } // from try @ 01071cf0 with catch @ 010723c0 */
        uVar5 = *(uint *)(param_1 + 0x1c8);
        uVar1 = uVar10 * 0x10000 | 0x2000;
        uVar10 = uVar10 >> 0x10;
        if (CARRY4(uVar1,uVar9)) {
          uVar10 = uVar10 + 1;
        }
        iVar3 = (int)(CONCAT44(uVar10,uVar1 + uVar9) >> 0xe);
        iVar2 = -iVar3;
        if (-1 < (int)(uVar4 ^ uVar15)) {
          iVar2 = iVar3;
        }
        uVar4 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar4 = uVar5;
        }
        uVar10 = (uVar4 >> 0x10) * uVar11;
        uVar11 = (uVar4 & 0xffff) * uVar11;
        uVar4 = uVar10 * 0x10000 | 0x2000;
        uVar10 = uVar10 >> 0x10;
        if (CARRY4(uVar4,uVar11)) {
          uVar10 = uVar10 + 1;
        }
                    /* catch() { ... } // from try @ 010720d8 with catch @ 01072414 */
        iVar12 = (int)(CONCAT44(uVar10,uVar4 + uVar11) >> 0xe);
                    /* catch() { ... } // from try @ 010721a0 with catch @ 01072418 */
        iVar3 = -iVar12;
        if (-1 < (int)(uVar5 ^ uVar14)) {
          iVar3 = iVar12;
        }
        uVar13 = FT_Hypot((long)iVar2,(long)iVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x1d8) = uVar13;
  }
  FT_MulFix(uVar6);
  return;
}

