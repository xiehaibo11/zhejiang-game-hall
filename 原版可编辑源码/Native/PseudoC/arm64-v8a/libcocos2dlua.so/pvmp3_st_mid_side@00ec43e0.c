
void pvmp3_st_mid_side(long param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar9 = -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2;
  iVar8 = (int)param_4 >> 1;
  piVar11 = (int *)(param_1 + uVar9);
  piVar10 = (int *)(param_2 + uVar9);
  piVar2 = piVar11;
  piVar3 = piVar10;
  if (iVar8 != 0) {
    uVar9 = (ulong)(iVar8 - 1) + 1;
                    /* try { // try from 00ec441c to 00fc4423 has its CatchHandler @ 00ec4434 */
                    /* try { // try from 00ec4424 to 00fc446f has its CatchHandler @ 00ec43bc */
    if ((3 < uVar9) &&
       ((lVar1 = ((long)(int)param_3 + (ulong)(iVar8 - 1) * 2) * 4 + 8,
        (int *)(param_2 + lVar1) <= piVar11 || ((int *)(param_1 + lVar1) <= piVar10)))) {
      uVar12 = uVar9 & 0x1fffffffc;
                    /* catch() { ... } // from try @ 00ec44d0 with catch @ 00ec44e8 */
      iVar8 = iVar8 - (int)uVar12;
      piVar2 = piVar11 + uVar12 * 2;
      piVar3 = piVar10 + uVar12 * 2;
      uVar13 = uVar12;
      do {
        uVar13 = uVar13 - 4;
                    /* catch() { ... } // from try @ 00ec458c with catch @ 00ec4524 */
        iVar19 = *piVar10 * 2 + *piVar11 * 2;
        iVar20 = piVar10[2] * 2 + piVar11[2] * 2;
        iVar21 = piVar10[4] * 2 + piVar11[4] * 2;
        iVar22 = piVar10[6] * 2 + piVar11[6] * 2;
        iVar23 = piVar10[1] * 2 + piVar11[1] * 2;
        iVar24 = piVar10[3] * 2 + piVar11[3] * 2;
        iVar25 = piVar10[5] * 2 + piVar11[5] * 2;
        iVar26 = piVar10[7] * 2 + piVar11[7] * 2;
        iVar27 = *piVar11 * 2 + *piVar10 * -2;
        iVar28 = piVar11[2] * 2 + piVar10[2] * -2;
        iVar29 = piVar11[4] * 2 + piVar10[4] * -2;
        iVar30 = piVar11[6] * 2 + piVar10[6] * -2;
        iVar14 = piVar11[1] * 2 + piVar10[1] * -2;
        iVar15 = piVar11[3] * 2 + piVar10[3] * -2;
        iVar16 = piVar11[5] * 2 + piVar10[5] * -2;
        iVar17 = piVar11[7] * 2 + piVar10[7] * -2;
        auVar18._4_4_ = iVar20;
        auVar18._0_4_ = iVar19;
        auVar18._8_4_ = iVar21;
        auVar18._12_4_ = iVar22;
        auVar31._4_4_ = iVar20;
        auVar31._0_4_ = iVar19;
        auVar31._8_4_ = iVar21;
        auVar31._12_4_ = iVar22;
        auVar18 = NEON_ext(auVar18,auVar31,8,1);
        auVar32._4_4_ = iVar24;
        auVar32._0_4_ = iVar23;
        auVar32._8_4_ = iVar25;
        auVar32._12_4_ = iVar26;
        auVar5._4_4_ = iVar24;
        auVar5._0_4_ = iVar23;
        auVar5._8_4_ = iVar25;
        auVar5._12_4_ = iVar26;
        auVar31 = NEON_ext(auVar32,auVar5,8,1);
        auVar6._4_4_ = iVar28;
        auVar6._0_4_ = iVar27;
        auVar6._8_4_ = iVar29;
        auVar6._12_4_ = iVar30;
        auVar7._4_4_ = iVar28;
        auVar7._0_4_ = iVar27;
        auVar7._8_4_ = iVar29;
        auVar7._12_4_ = iVar30;
        auVar32 = NEON_ext(auVar6,auVar7,8,1);
        auVar33._4_4_ = iVar15;
        auVar33._0_4_ = iVar14;
        auVar33._8_4_ = iVar16;
        auVar33._12_4_ = iVar17;
        auVar4._4_4_ = iVar15;
        auVar4._0_4_ = iVar14;
        auVar4._8_4_ = iVar16;
        auVar4._12_4_ = iVar17;
        auVar33 = NEON_ext(auVar33,auVar4,8,1);
                    /* try { // try from 00ec4584 to 00fc458b has its CatchHandler @ 00ec459c */
        *piVar11 = (int)((ulong)((long)iVar19 * 0x5a827999) >> 0x20);
        piVar11[1] = (int)((ulong)((long)iVar23 * 0x5a827999) >> 0x20);
        piVar11[2] = (int)((ulong)((long)iVar20 * 0x5a827999) >> 0x20);
        piVar11[3] = (int)((ulong)((long)iVar24 * 0x5a827999) >> 0x20);
        piVar11[4] = (int)((ulong)((long)auVar18._0_4_ * 0x5a827999) >> 0x20);
        piVar11[5] = (int)((ulong)((long)auVar31._0_4_ * 0x5a827999) >> 0x20);
        piVar11[6] = (int)((ulong)((long)auVar18._4_4_ * 0x5a827999) >> 0x20);
        piVar11[7] = (int)((ulong)((long)auVar31._4_4_ * 0x5a827999) >> 0x20);
        piVar11 = piVar11 + 8;
        *piVar10 = (int)((ulong)((long)iVar27 * 0x5a827999) >> 0x20);
        piVar10[1] = (int)((ulong)((long)iVar14 * 0x5a827999) >> 0x20);
        piVar10[2] = (int)((ulong)((long)iVar28 * 0x5a827999) >> 0x20);
        piVar10[3] = (int)((ulong)((long)iVar15 * 0x5a827999) >> 0x20);
        piVar10[4] = (int)((ulong)((long)auVar32._0_4_ * 0x5a827999) >> 0x20);
        piVar10[5] = (int)((ulong)((long)auVar33._0_4_ * 0x5a827999) >> 0x20);
        piVar10[6] = (int)((ulong)((long)auVar32._4_4_ * 0x5a827999) >> 0x20);
        piVar10[7] = (int)((ulong)((long)auVar33._4_4_ * 0x5a827999) >> 0x20);
        piVar10 = piVar10 + 8;
                    /* try { // try from 00ec458c to 00fc45d7 has its CatchHandler @ 00ec4524 */
      } while (uVar13 != 0);
      piVar10 = piVar3;
      piVar11 = piVar2;
      if (uVar9 == uVar12) goto joined_r0x00ec4598;
    }
    do {
      iVar14 = *piVar11;
      iVar15 = *piVar10;
      iVar8 = iVar8 + -1;
                    /* catch() { ... } // from try @ 00ec44d8 with catch @ 00ec4470 */
      *piVar11 = (int)((ulong)((long)(iVar15 * 2 + iVar14 * 2) * 0x5a827999) >> 0x20);
      *piVar10 = (int)((ulong)((long)(iVar14 * 2 + iVar15 * -2) * 0x5a827999) >> 0x20);
      iVar14 = piVar11[1];
      iVar15 = piVar10[1];
      piVar2 = piVar11 + 2;
      piVar3 = piVar10 + 2;
      piVar11[1] = (int)((ulong)((long)(iVar15 * 2 + iVar14 * 2) * 0x5a827999) >> 0x20);
      piVar10[1] = (int)((ulong)((long)(iVar14 * 2 + iVar15 * -2) * 0x5a827999) >> 0x20);
      piVar10 = piVar3;
      piVar11 = piVar2;
    } while (iVar8 != 0);
  }
joined_r0x00ec4598:
  if ((param_4 & 1) == 0) {
                    /* catch() { ... } // from try @ 00ec4584 with catch @ 00ec459c */
    return;
  }
  iVar8 = *piVar2;
  iVar14 = *piVar3;
  *piVar2 = (int)((ulong)((long)(iVar14 * 2 + iVar8 * 2) * 0x5a827999) >> 0x20);
  *piVar3 = (int)((ulong)((long)(iVar8 * 2 + iVar14 * -2) * 0x5a827999) >> 0x20);
                    /* catch() { ... } // from try @ 00ec4640 with catch @ 00ec45d8 */
  return;
}

