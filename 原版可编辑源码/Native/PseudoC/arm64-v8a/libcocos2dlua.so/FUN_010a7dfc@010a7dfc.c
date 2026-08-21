
void FUN_010a7dfc(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  short *psVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  short *psVar17;
  long *plVar18;
  long lVar19;
  
                    /* catch() { ... } // from try @ 010a7d6c with catch @ 010a7e00 */
                    /* catch() { ... } // from try @ 010a7d28 with catch @ 010a7e38 */
  lVar9 = param_1 + (ulong)param_3 * 0x28;
  psVar17 = *(short **)(lVar9 + 0x60);
  iVar4 = *(int *)(lVar9 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + (ulong)param_3 * 0x9d8 + 0x50);
                    /* catch() { ... } // from try @ 010a7e9c with catch @ 010a7e54 */
  lVar9 = FT_MulFix((ulong)*(uint *)(param_2 + 0x48) / 0x28);
  if (0x1f < lVar9) {
    lVar9 = 0x20;
  }
  if (0 < iVar4) {
    uVar16 = (ulong)param_3;
                    /* try { // try from 010a7e88 to 011a7e9b has its CatchHandler @ 010a7ef4 */
    psVar10 = psVar17 + (long)iVar4 * 0x2c;
    lVar11 = param_2 + uVar16 * 0x9d8;
                    /* try { // try from 010a7e9c to 011a7f2b has its CatchHandler @ 010a7e54 */
    uVar8 = *(uint *)(lVar11 + 0x1fc);
    uVar12 = uVar8;
    do {
      if (uVar12 != 0) {
        uVar12 = 0;
        plVar18 = (long *)0x0;
        lVar19 = lVar9;
        do {
          lVar14 = param_2 + uVar16 * 0x9d8 + (ulong)uVar12 * 0x38;
          uVar3 = *(uint *)(lVar14 + 0x230);
          lVar6 = lVar19;
                    /* catch() { ... } // from try @ 010a7e88 with catch @ 010a7ef4 */
          if (((uVar3 & 1) != 0) &&
             ((uVar3 >> 1 & 1) !=
              (uint)(*(int *)(param_1 + uVar16 * 0x28 + 0x68) ==
                    (int)*(char *)((long)psVar17 + 0x19)))) {
            plVar1 = (long *)(lVar14 + 0x200);
            lVar13 = (long)*psVar17;
            lVar15 = param_2 + uVar16 * 0x9d8 + (ulong)uVar12 * 0x38;
            lVar14 = lVar13 - *plVar1;
            lVar6 = -lVar14;
            if (-1 < lVar14) {
              lVar6 = lVar14;
            }
            lVar5 = lVar13 - *(long *)(lVar15 + 0x218);
            lVar14 = -lVar5;
            if (-1 < lVar5) {
              lVar14 = lVar5;
            }
            plVar2 = (long *)(lVar15 + 0x218);
            if (lVar6 <= lVar14) {
              plVar2 = plVar1;
            }
            lVar13 = lVar13 - *plVar2;
            lVar6 = -lVar13;
            if (-1 < lVar13) {
              lVar6 = lVar13;
            }
            lVar6 = FT_MulFix(lVar6,uVar7);
            if (lVar19 <= lVar6) {
              lVar6 = lVar19;
              plVar2 = plVar18;
            }
            plVar18 = plVar2;
            uVar8 = *(uint *)(lVar11 + 0x1fc);
          }
          uVar12 = uVar12 + 1;
          lVar19 = lVar6;
        } while (uVar12 < uVar8);
        uVar12 = uVar8;
        if (plVar18 != (long *)0x0) {
          *(long **)(psVar17 + 0x14) = plVar18;
        }
      }
      psVar17 = psVar17 + 0x2c;
    } while (psVar17 < psVar10);
  }
  return;
}

