
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::volumeMulti<4, 6, float, short, short, int, short>(float*, unsigned long, short
   const*, int*, short const*, short) */

void cocos2d::volumeMulti<4,6,float,short,short,int,short>
               (float *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  float *pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  undefined1 (*pauVar11) [16];
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  int iVar25;
  short sVar26;
  short sVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [12];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar44 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar76 [16];
  undefined1 auVar81 [16];
  undefined1 auVar77 [16];
  undefined1 auVar82 [16];
  undefined1 auVar78 [16];
  undefined1 auVar83 [16];
  
  auVar9 = _DAT_0189cd00;
  auVar8 = _DAT_0189ccf0;
  auVar7 = _DAT_0189cce0;
  auVar22 = _DAT_0189ccd0;
  auVar23 = _DAT_0189ccc0;
  auVar6 = _DAT_0189ccb0;
  fVar5 = (float)(int)*param_5;
  if (param_4 == (int *)0x0) {
    do {
                    /* try { // try from 00a93420 to 00b93433 has its CatchHandler @ 00a93600 */
      uVar21 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      auVar23._0_4_ = (int)(short)uVar21;
      auVar23._4_4_ = (int)(short)((ulong)uVar21 >> 0x10);
      auVar23._8_4_ = (int)(short)((ulong)uVar21 >> 0x20);
      auVar23._12_4_ = (int)(short)((ulong)uVar21 >> 0x30);
      auVar23 = NEON_scvtf(auVar23,4);
      param_1[2] = fVar5 * auVar23._8_4_ * 7.450581e-09;
      param_1[3] = fVar5 * auVar23._12_4_ * 7.450581e-09;
      *param_1 = fVar5 * auVar23._0_4_ * 7.450581e-09;
      param_1[1] = fVar5 * auVar23._4_4_ * 7.450581e-09;
                    /* try { // try from 00a9343c to 00b93443 has its CatchHandler @ 00a935f8 */
                    /* try { // try from 00a93444 to 00b93467 has its CatchHandler @ 00a93634 */
      param_1[4] = (float)(int)param_3[4] * fVar5 * 7.450581e-09;
      psVar1 = param_3 + 5;
      param_3 = param_3 + 6;
                    /* try { // try from 00a93468 to 00b9346f has its CatchHandler @ 00a935f0 */
      param_1[5] = (float)(int)*psVar1 * fVar5 * 7.450581e-09;
      param_1 = param_1 + 6;
                    /* try { // try from 00a93474 to 00b934a3 has its CatchHandler @ 00a9364c */
    } while (param_2 != 0);
  }
  else {
    iVar3 = (int)param_6;
    if (3 < param_2) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2 - 1;
      uVar13 = (param_2 - 1) * 0x18;
                    /* try { // try from 00a934b0 to 00b934bf has its CatchHandler @ 00a935a8 */
                    /* try { // try from 00a934c0 to 00b934cb has its CatchHandler @ 00a93590 */
                    /* try { // try from 00a934d4 to 00b934eb has its CatchHandler @ 00a935ac */
      if ((((uVar13 < ~(ulong)(param_1 + 4) || uVar13 - ~(ulong)(param_1 + 4) == 0) &&
           (SUB168(auVar4 * ZEXT816(0x18),8) == 0)) &&
          (uVar13 < ~(ulong)(param_1 + 5) || uVar13 - ~(ulong)(param_1 + 5) == 0)) &&
         (((uVar13 < ~(ulong)(param_1 + 3) || uVar13 - ~(ulong)(param_1 + 3) == 0 &&
           (uVar13 < ~(ulong)(param_1 + 2) || uVar13 - ~(ulong)(param_1 + 2) == 0)) &&
          ((uVar13 < ~(ulong)(param_1 + 1) || uVar13 - ~(ulong)(param_1 + 1) == 0 &&
           (uVar13 < ~(ulong)param_1 || uVar13 - ~(ulong)param_1 == 0)))))) {
                    /* try { // try from 00a9351c to 00b93533 has its CatchHandler @ 00a9364c */
                    /* try { // try from 00a93534 to 00b93677 has its CatchHandler @ 00a9335c */
        uVar14 = param_2 & 0xfffffffffffffffc;
        pfVar2 = param_1 + uVar14 * 6;
        pauVar11 = (undefined1 (*) [16])param_3;
        piVar12 = param_4;
        uVar13 = uVar14;
        do {
          auVar79 = pauVar11[1];
          auVar4 = pauVar11[2];
          auVar29 = *pauVar11;
          uVar13 = uVar13 - 4;
          sVar26 = auVar4._4_2_;
          auVar30._12_4_ = 0xfffefffe;
          auVar30._0_12_ = auVar6;
          auVar46 = a64_TBL(ZEXT816(0),auVar29,auVar79,auVar30);
          auVar54 = a64_TBL(ZEXT816(0),auVar29,auVar79,auVar23);
          auVar62 = a64_TBL(ZEXT816(0),auVar29,auVar79,auVar22);
          auVar69 = a64_TBL(ZEXT816(0),auVar29,auVar79,auVar7);
                    /* catch() { ... } // from try @ 00a934c0 with catch @ 00a93590 */
          auVar74 = a64_TBL(ZEXT816(0),auVar29,auVar79,auVar8);
          auVar29 = a64_TBL(ZEXT816(0),auVar29,auVar79,auVar9);
          auVar30 = NEON_ext(auVar4,auVar4,8,1);
          auVar32._0_6_ =
               (undefined6)
               CONCAT44(CONCAT22(sVar26,auVar30._4_2_),CONCAT22(auVar4._0_2_,auVar30._0_2_));
          auVar32._6_2_ = sVar26;
          auVar32._8_8_ = 0;
                    /* catch() { ... } // from try @ 00a934b0 with catch @ 00a935a8 */
          sVar27 = auVar4._10_2_;
                    /* catch() { ... } // from try @ 00a934d4 with catch @ 00a935ac */
          auVar38._6_10_ = auVar30._6_10_;
          auVar38._0_4_ = auVar30._0_4_;
          auVar38._4_2_ = auVar4._2_2_;
          auVar30 = NEON_ext(auVar4,auVar32,0xe,1);
          auVar79._2_8_ = auVar69._8_8_;
          auVar79._0_2_ = sVar27;
          auVar79._10_6_ = 0;
          uVar28 = NEON_ext(auVar38._0_8_,auVar29._0_8_,4,1);
          uVar21 = NEON_ext(auVar30._0_8_,auVar74._0_8_,4,1);
          uVar28 = NEON_ext(uVar28,uVar28,4,1);
          auVar68._0_4_ = (int)auVar46._0_2_;
          auVar68._4_4_ = (int)auVar46._2_2_;
          auVar68._8_4_ = (int)auVar46._4_2_;
          auVar68._12_4_ = (int)sVar26;
          auVar33._0_4_ = (int)auVar54._0_2_;
          auVar33._4_4_ = (int)auVar54._2_2_;
          auVar33._8_4_ = (int)auVar54._4_2_;
          auVar33._12_4_ = (int)auVar4._6_2_;
          auVar42._0_4_ = (int)auVar62._0_2_;
          auVar42._4_4_ = (int)auVar62._2_2_;
          auVar42._8_4_ = (int)auVar62._4_2_;
          auVar42._12_4_ = (int)auVar4._8_2_;
          auVar47._0_4_ = (int)auVar69._0_2_;
          auVar47._4_4_ = (int)auVar69._2_2_;
          auVar47._8_4_ = (int)auVar69._4_2_;
          auVar47._12_4_ = (int)sVar27;
          uVar21 = NEON_ext(uVar21,uVar21,4,1);
          auVar30 = NEON_scvtf(auVar68,4);
          auVar29 = NEON_scvtf(auVar33,4);
                    /* catch() { ... } // from try @ 00a93468 with catch @ 00a935f0 */
          auVar43 = NEON_scvtf(auVar42,4);
          auVar48 = NEON_scvtf(auVar47,4);
                    /* catch() { ... } // from try @ 00a9343c with catch @ 00a935f8 */
          auVar55._0_4_ = (int)(short)uVar28;
          sVar16 = (short)((ulong)uVar28 >> 0x10);
          auVar55._4_4_ = (int)sVar16;
          sVar15 = (short)((ulong)uVar28 >> 0x20);
          auVar55._8_4_ = (int)sVar15;
          sVar19 = (short)((ulong)uVar28 >> 0x30);
          auVar55._12_4_ = (int)sVar19;
                    /* catch() { ... } // from try @ 00a93420 with catch @ 00a93600 */
          auVar63._0_4_ = (int)(short)uVar21;
          sVar17 = (short)((ulong)uVar21 >> 0x10);
          auVar63._4_4_ = (int)sVar17;
          sVar18 = (short)((ulong)uVar21 >> 0x20);
          auVar63._8_4_ = (int)sVar18;
          sVar20 = (short)((ulong)uVar21 >> 0x30);
          auVar63._12_4_ = (int)sVar20;
                    /* catch() { ... } // from try @ 00a93410 with catch @ 00a9360c */
                    /* catch() { ... } // from try @ 00a933e0 with catch @ 00a93614 */
          auVar56 = NEON_scvtf(auVar55,4);
          auVar39 = NEON_scvtf(auVar63,4);
          auVar31._0_4_ = fVar5 * auVar30._0_4_ * 7.450581e-09;
          auVar31._4_4_ = fVar5 * auVar30._4_4_ * 7.450581e-09;
          auVar31._8_4_ = fVar5 * auVar30._8_4_ * 7.450581e-09;
          auVar31._12_4_ = fVar5 * auVar30._12_4_ * 7.450581e-09;
                    /* catch() { ... } // from try @ 00a933bc with catch @ 00a93624 */
          auVar34._0_4_ = fVar5 * auVar29._0_4_ * 7.450581e-09;
          auVar34._4_4_ = fVar5 * auVar29._4_4_ * 7.450581e-09;
          auVar34._8_4_ = fVar5 * auVar29._8_4_ * 7.450581e-09;
          auVar34._12_4_ = fVar5 * auVar29._12_4_ * 7.450581e-09;
          auVar41._0_4_ = fVar5 * auVar43._0_4_ * 7.450581e-09;
          auVar41._4_4_ = fVar5 * auVar43._4_4_ * 7.450581e-09;
          auVar41._8_4_ = fVar5 * auVar43._8_4_ * 7.450581e-09;
          auVar44._12_4_ = fVar5 * auVar43._12_4_ * 7.450581e-09;
          auVar44._0_12_ = auVar41;
                    /* catch() { ... } // from try @ 00a933b0 with catch @ 00a9362c */
          auVar49._0_4_ = fVar5 * auVar48._0_4_ * 7.450581e-09;
          auVar49._4_4_ = fVar5 * auVar48._4_4_ * 7.450581e-09;
          auVar49._8_4_ = fVar5 * auVar48._8_4_ * 7.450581e-09;
          auVar49._12_4_ = fVar5 * auVar48._12_4_ * 7.450581e-09;
          auVar57._0_4_ = fVar5 * auVar56._0_4_;
          auVar57._4_4_ = fVar5 * auVar56._4_4_;
          auVar57._8_4_ = fVar5 * auVar56._8_4_;
          auVar57._12_4_ = fVar5 * auVar56._12_4_;
                    /* catch() { ... } // from try @ 00a93444 with catch @ 00a93634 */
          uVar24 = (int)auVar54._0_2_ + (int)auVar46._0_2_ + (int)auVar62._0_2_ + (int)auVar69._0_2_
                   + (int)(short)uVar21 + (int)(short)uVar28;
                    /* catch() { ... } // from try @ 00a933fc with catch @ 00a9363c */
          auVar29._0_4_ = auVar57._0_4_ * 7.450581e-09;
          auVar29._4_4_ = auVar57._4_4_ * 7.450581e-09;
          auVar29._8_4_ = auVar57._8_4_ * 7.450581e-09;
          auVar29._12_4_ = auVar57._12_4_ * 7.450581e-09;
          auVar58._4_12_ = auVar57._4_12_;
          auVar58._0_4_ = auVar41._4_4_;
          auVar60._0_8_ = auVar58._0_8_;
          auVar60._8_4_ = auVar44._12_4_;
          auVar60._12_4_ = auVar57._12_4_;
          auVar59._8_8_ = auVar60._8_8_;
          auVar59._4_4_ = auVar49._4_4_;
          auVar59._0_4_ = auVar41._4_4_;
          auVar61._0_12_ = auVar59._0_12_;
          auVar61._12_4_ = auVar49._12_4_;
                    /* catch() { ... } // from try @ 00a933cc with catch @ 00a93644 */
          auVar64._4_12_ = auVar63._4_12_;
          auVar64._0_4_ = auVar31._4_4_;
          auVar66._0_8_ = auVar64._0_8_;
          auVar66._8_4_ = auVar31._12_4_;
          auVar66._12_4_ = auVar63._12_4_;
          auVar65._8_8_ = auVar66._8_8_;
          auVar65._4_4_ = auVar34._4_4_;
          auVar65._0_4_ = auVar31._4_4_;
          auVar67._0_12_ = auVar65._0_12_;
          auVar67._12_4_ = auVar34._12_4_;
          auVar75._4_12_ = auVar74._4_12_;
          auVar75._0_4_ = auVar41._0_4_;
          auVar77._12_4_ = auVar74._12_4_;
          auVar77._0_8_ = auVar75._0_8_;
          auVar77._8_4_ = auVar41._4_4_;
          auVar76._8_8_ = auVar77._8_8_;
          auVar76._4_4_ = auVar49._0_4_;
          auVar76._0_4_ = auVar41._0_4_;
          auVar78._0_12_ = auVar76._0_12_;
          auVar78._12_4_ = auVar49._4_4_;
                    /* catch() { ... } // from try @ 00a93474 with catch @ 00a9364c
                       catch() { ... } // from try @ 00a9351c with catch @ 00a9364c */
          auVar40._0_4_ = fVar5 * auVar39._0_4_ * 7.450581e-09;
          auVar40._4_4_ = fVar5 * auVar39._4_4_ * 7.450581e-09;
          auVar40._8_4_ = fVar5 * auVar39._8_4_ * 7.450581e-09;
          auVar40._12_4_ = fVar5 * auVar39._12_4_ * 7.450581e-09;
          auVar70._4_12_ = SUB1612(auVar79 << 0x30,4);
          auVar70._0_4_ = auVar31._8_4_;
          auVar72._12_4_ = auVar69._12_4_;
          auVar72._0_8_ = auVar70._0_8_;
          auVar72._8_4_ = auVar31._12_4_;
          auVar71._8_8_ = auVar72._8_8_;
          auVar71._4_4_ = auVar34._8_4_;
          auVar71._0_4_ = auVar31._8_4_;
          auVar73._0_12_ = auVar71._0_12_;
          auVar73._12_4_ = auVar34._12_4_;
          auVar35._4_12_ = auVar34._4_12_;
          auVar35._0_4_ = auVar31._0_4_;
          auVar37._0_8_ = auVar35._0_8_;
          auVar37._8_4_ = auVar31._4_4_;
          auVar37._12_4_ = auVar34._12_4_;
          auVar36._8_8_ = auVar37._8_8_;
          auVar36._4_4_ = auVar34._0_4_;
          auVar36._0_4_ = auVar31._0_4_;
          auVar74._0_12_ = auVar36._0_12_;
          auVar74._12_4_ = auVar34._4_4_;
          auVar30 = NEON_ext(auVar31,auVar67,8,1);
          auVar68 = NEON_ext(auVar61,auVar44,8,1);
          auVar79 = NEON_ext(auVar44,auVar78,8,1);
          auVar45._12_4_ = auVar49._8_4_;
          auVar45._0_12_ = auVar41;
          auVar50._4_12_ = auVar49._4_12_;
          auVar50._0_4_ = auVar40._4_4_;
          auVar52._0_8_ = auVar50._0_8_;
          auVar52._8_4_ = auVar40._12_4_;
          auVar52._12_4_ = auVar49._12_4_;
          auVar51._8_8_ = auVar52._8_8_;
          auVar51._4_4_ = auVar29._4_4_;
          auVar51._0_4_ = auVar40._4_4_;
          auVar53._0_12_ = auVar51._0_12_;
          auVar53._12_4_ = auVar29._12_4_;
          iVar25 = uVar24 * 0x1000;
          auVar38 = NEON_ext(auVar79,auVar74,8,1);
          auVar80._4_12_ = auVar79._4_12_;
          auVar80._0_4_ = auVar40._0_4_;
          auVar82._12_4_ = auVar79._12_4_;
          auVar82._0_8_ = auVar80._0_8_;
          auVar82._8_4_ = auVar40._4_4_;
          auVar81._8_8_ = auVar82._8_8_;
          auVar81._4_4_ = auVar29._0_4_;
          auVar81._0_4_ = auVar40._0_4_;
          auVar83._0_12_ = auVar81._0_12_;
          auVar83._12_4_ = auVar29._4_4_;
          auVar39._4_12_ = auVar29._4_12_;
          auVar39._0_4_ = auVar40._8_4_;
          auVar48._0_8_ = auVar39._0_8_;
          auVar48._8_4_ = auVar40._12_4_;
          auVar48._12_4_ = auVar29._12_4_;
          auVar43._8_8_ = auVar48._8_8_;
          auVar43._4_4_ = auVar29._8_4_;
          auVar43._0_4_ = auVar40._8_4_;
          auVar56._0_12_ = auVar43._0_12_;
          auVar56._12_4_ = auVar29._12_4_;
          auVar29 = NEON_ext(auVar40,auVar53,8,1);
          auVar43 = NEON_ext(auVar45,auVar73,8,1);
          auVar79 = NEON_ext(auVar30,auVar83,8,1);
          auVar48 = NEON_ext(auVar73,auVar56,8,1);
          auVar30 = NEON_ext(auVar56,auVar68,8,1);
          auVar39 = NEON_ext(auVar29,auVar61,8,1);
          auVar29 = NEON_ext(auVar38,auVar38,8,1);
          auVar43 = NEON_ext(auVar43,auVar43,8,1);
          auVar79 = NEON_ext(auVar79,auVar79,8,1);
          auVar48 = NEON_ext(auVar48,auVar48,8,1);
          auVar30 = NEON_ext(auVar30,auVar30,8,1);
          auVar39 = NEON_ext(auVar39,auVar39,8,1);
          *(long *)(param_1 + 0x12) = auVar48._8_8_;
          *(long *)(param_1 + 0x10) = auVar48._0_8_;
          *(long *)(param_1 + 0x16) = auVar30._8_8_;
          *(long *)(param_1 + 0x14) = auVar30._0_8_;
          *(long *)(param_1 + 2) = auVar29._8_8_;
          *(long *)param_1 = auVar29._0_8_;
          *(long *)(param_1 + 6) = auVar79._8_8_;
          *(long *)(param_1 + 4) = auVar79._0_8_;
          *(long *)(param_1 + 10) = auVar39._8_8_;
          *(long *)(param_1 + 8) = auVar39._0_8_;
          *(long *)(param_1 + 0xe) = auVar43._8_8_;
          *(long *)(param_1 + 0xc) = auVar43._0_8_;
          param_1 = param_1 + 0x18;
          piVar12[2] = piVar12[2] +
                       ((((int)auVar54._4_2_ + (int)auVar46._4_2_ + (int)auVar62._4_2_ +
                          (int)auVar69._4_2_ + (int)sVar18 + (int)sVar15) * 0x1000) / 6 >> 0xc) *
                       iVar3;
          piVar12[3] = piVar12[3] +
                       ((((int)auVar4._6_2_ + (int)sVar26 + (int)auVar4._8_2_ + (int)sVar27 +
                          (int)sVar20 + (int)sVar19) * 0x1000) / 6 >> 0xc) * iVar3;
          *piVar12 = *piVar12 +
                     ((int)(iVar25 / 6 + (iVar25 >> 0x1f) + ((uVar24 & 0xfffff) >> 0x13)) >> 0xc) *
                     iVar3;
          piVar12[1] = piVar12[1] +
                       ((((int)auVar54._2_2_ + (int)auVar46._2_2_ + (int)auVar62._2_2_ +
                          (int)auVar69._2_2_ + (int)sVar17 + (int)sVar16) * 0x1000) / 6 >> 0xc) *
                       iVar3;
          pauVar11 = pauVar11 + 3;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
        bVar10 = uVar14 == param_2;
        param_3 = param_3 + uVar14 * 6;
        param_4 = param_4 + uVar14;
        param_2 = param_2 - uVar14;
        param_1 = pfVar2;
        if (bVar10) {
          return;
        }
      }
    }
    do {
      uVar21 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      auVar22._0_4_ = (int)(short)uVar21;
      sVar15 = (short)((ulong)uVar21 >> 0x10);
      auVar22._4_4_ = (int)sVar15;
      sVar18 = (short)((ulong)uVar21 >> 0x20);
      auVar22._8_4_ = (int)sVar18;
      sVar19 = (short)((ulong)uVar21 >> 0x30);
      auVar22._12_4_ = (int)sVar19;
      auVar23 = NEON_scvtf(auVar22,4);
      param_1[2] = fVar5 * auVar23._8_4_ * 7.450581e-09;
      param_1[3] = fVar5 * auVar23._12_4_ * 7.450581e-09;
      *param_1 = fVar5 * auVar23._0_4_ * 7.450581e-09;
      param_1[1] = fVar5 * auVar23._4_4_ * 7.450581e-09;
      sVar16 = param_3[4];
      param_1[4] = (float)(int)sVar16 * fVar5 * 7.450581e-09;
                    /* try { // try from 00a933b0 to 00b933b7 has its CatchHandler @ 00a9362c */
      sVar17 = param_3[5];
                    /* try { // try from 00a933bc to 00b933bf has its CatchHandler @ 00a93624 */
                    /* try { // try from 00a933cc to 00b933df has its CatchHandler @ 00a93644 */
                    /* try { // try from 00a933e0 to 00b933f3 has its CatchHandler @ 00a93614 */
      param_1[5] = (float)(int)sVar17 * fVar5 * 7.450581e-09;
                    /* try { // try from 00a933fc to 00b9340b has its CatchHandler @ 00a9363c */
      *param_4 = *param_4 +
                 ((((int)sVar15 + (int)(short)uVar21 + (int)sVar18 + (int)sVar19 + (int)sVar16 +
                   (int)sVar17) * 0x1000) / 6 >> 0xc) * iVar3;
      param_3 = param_3 + 6;
      param_4 = param_4 + 1;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x0189ccb0) is written */
                    /* WARNING: Read-only address (ram,0x0189ccc0) is written */
                    /* WARNING: Read-only address (ram,0x0189ccd0) is written */
                    /* WARNING: Read-only address (ram,0x0189cce0) is written */
                    /* WARNING: Read-only address (ram,0x0189ccf0) is written */
                    /* WARNING: Read-only address (ram,0x0189cd00) is written */
  return;
}

