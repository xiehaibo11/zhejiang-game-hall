
void FUN_010a59c0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  
  uVar13 = (ulong)param_3;
  plVar8 = (long *)(param_2 + 8);
  if (param_3 != 0) {
    plVar8 = (long *)(param_2 + 0x10);
  }
  lVar9 = param_1 + (ulong)param_3 * 0x9d8;
  lVar12 = *plVar8;
  plVar8 = (long *)(param_2 + 0x18);
  if (param_3 != 0) {
    plVar8 = (long *)(param_2 + 0x20);
  }
  lVar14 = *plVar8;
  if ((*(long *)(lVar9 + 0xa18) != lVar12) || (*(long *)(lVar9 + 0xa20) != lVar14)) {
    *(long *)(lVar9 + 0xa18) = lVar12;
    *(long *)(lVar9 + 0xa20) = lVar14;
    if (*(uint *)(param_1 + 0xbd4) != 0) {
      uVar10 = 0;
      puVar11 = (undefined8 *)(param_1 + 0xbf0);
      do {
        if ((*(byte *)(puVar11 + 3) >> 3 & 1) != 0) {
          uVar5 = FT_MulFix(*puVar11,*(long *)(param_2 + 0x10));
          uVar10 = *(uint *)(*(long *)(param_1 + 0x40) + 0x18);
          if (uVar10 == 0) {
            lVar9 = 0x28;
          }
          else {
            uVar4 = *(ushort *)(*(long *)(*(long *)(param_1 + 8) + 0xa0) + 0x18);
            lVar9 = 0x34;
            if (uVar10 < uVar4 || uVar4 < 6) {
              lVar9 = 0x28;
            }
          }
          if ((param_3 == 1) && (uVar7 = lVar9 + uVar5 & 0xffffffffffffffc0, uVar5 != uVar7)) {
            lVar12 = FT_MulDiv(lVar12,uVar7,uVar5);
          }
          break;
        }
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 7;
      } while (uVar10 < *(uint *)(param_1 + 0xbd4));
    }
    lVar9 = param_1 + uVar13 * 0x9d8;
    *(long *)(lVar9 + 0x50) = lVar12;
    *(long *)(lVar9 + 0x58) = lVar14;
    if (param_3 == 0) {
      *(long *)(param_1 + 0x10) = lVar12;
      plVar8 = (long *)(param_1 + 0x20);
    }
    else {
      plVar8 = (long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x18) = lVar12;
    }
    *plVar8 = lVar14;
    puVar15 = (uint *)(param_1 + uVar13 * 0x9d8 + 0x60);
    if (*puVar15 != 0) {
      uVar10 = 0;
      do {
        lVar9 = param_1 + uVar13 * 0x9d8 + (ulong)uVar10 * 0x18;
        uVar6 = FT_MulFix(*(undefined8 *)(lVar9 + 0x68),lVar12);
        *(undefined8 *)(lVar9 + 0x70) = uVar6;
        *(undefined8 *)(lVar9 + 0x78) = uVar6;
        uVar10 = uVar10 + 1;
      } while (uVar10 < *puVar15);
    }
    lVar16 = param_1 + uVar13 * 0x9d8;
    lVar9 = FT_MulFix(*(undefined8 *)(lVar16 + 0x1f0),lVar12);
    *(bool *)(lVar16 + 0x1f8) = lVar9 < 0x28;
                    /* try { // try from 010a5b70 to 011a5ce3 has its CatchHandler @ 010a5b70
                       catch() { ... } // from try @ 010a5b70 with catch @ 010a5b70
                       catch() { ... } // from try @ 010a5cec with catch @ 010a5b70 */
    if ((param_3 == 1) && (*(int *)(param_1 + 0xbd4) != 0)) {
      uVar10 = 0;
      do {
        lVar16 = param_1 + 0x9d8 + (ulong)uVar10 * 0x38;
        lVar9 = FT_MulFix(*(undefined8 *)(lVar16 + 0x200),lVar12);
        *(long *)(lVar16 + 0x208) = lVar9 + lVar14;
        *(long *)(lVar16 + 0x210) = lVar9 + lVar14;
        lVar9 = FT_MulFix(*(undefined8 *)(lVar16 + 0x218),lVar12);
        *(long *)(lVar16 + 0x220) = lVar9 + lVar14;
        *(long *)(lVar16 + 0x228) = lVar9 + lVar14;
        *(uint *)(lVar16 + 0x230) = *(uint *)(lVar16 + 0x230) & 0xfffffffe;
        lVar9 = FT_MulFix(*(long *)(lVar16 + 0x200) - *(long *)(lVar16 + 0x218),lVar12);
        if (lVar9 + 0x30U < 0x61) {
          lVar1 = -lVar9;
          if (-1 < lVar9) {
            lVar1 = lVar9;
          }
          lVar2 = 0x20;
          if (0x2f < lVar1) {
            lVar2 = 0x40;
          }
          lVar3 = 0;
          if (0x1f < lVar1) {
            lVar3 = lVar2;
          }
          lVar1 = -lVar3;
          if (-1 < lVar9) {
            lVar1 = lVar3;
          }
          uVar13 = *(long *)(lVar16 + 0x208) + 0x20U & 0xffffffffffffffc0;
          *(ulong *)(lVar16 + 0x210) = uVar13;
          *(ulong *)(lVar16 + 0x228) = uVar13 - lVar1;
          *(uint *)(lVar16 + 0x230) = *(uint *)(lVar16 + 0x230) | 1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0xbd4));
    }
  }
  return;
}

