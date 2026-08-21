
/* void cocos2d::volumeMulti<1, 6, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<1,6,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 in_q16 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  float fVar56;
  undefined1 in_q17 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 in_q20 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar87 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar45 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar46 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar47 [16];
  undefined1 auVar52 [16];
  undefined1 auVar58 [16];
  undefined1 auVar64 [16];
  undefined1 auVar59 [16];
  undefined1 auVar65 [16];
  undefined1 auVar60 [16];
  undefined1 auVar66 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar79 [16];
  undefined1 auVar84 [16];
  undefined1 auVar80 [16];
  undefined1 auVar85 [16];
  undefined1 auVar81 [16];
  undefined1 auVar86 [16];
  
                    /* try { // try from 00a86ea4 to 00b86eaf has its CatchHandler @ 00a86f78 */
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = param_2 - 1;
      uVar8 = (param_2 - 1) * 0x18;
      if (((((uVar8 < ~(ulong)(param_1 + 5) || uVar8 - ~(ulong)(param_1 + 5) == 0) &&
            (SUB168(auVar19 * ZEXT816(0x18),8) == 0)) &&
           (uVar8 < ~(ulong)(param_1 + 4) || uVar8 - ~(ulong)(param_1 + 4) == 0)) &&
          ((uVar8 < ~(ulong)(param_1 + 3) || uVar8 - ~(ulong)(param_1 + 3) == 0 &&
           (uVar8 < ~(ulong)(param_1 + 2) || uVar8 - ~(ulong)(param_1 + 2) == 0)))) &&
         ((uVar8 < ~(ulong)(param_1 + 1) || uVar8 - ~(ulong)(param_1 + 1) == 0 &&
          (uVar8 < ~(ulong)param_1 || uVar8 - ~(ulong)param_1 == 0)))) {
        if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 6 <= param_3) &&
           ((float *)((long)param_5 + 0x15U) <= param_1 || param_1 + param_2 * 6 <= param_5 + 5)) {
          uVar15 = param_2 & 0xfffffffffffffffc;
          pauVar6 = (undefined1 (*) [16])param_1;
          pfVar7 = param_3;
          uVar8 = uVar15;
          do {
            fVar2 = *pfVar7;
            fVar27 = pfVar7[1];
            fVar3 = pfVar7[2];
            fVar4 = pfVar7[3];
            fVar1 = *param_5;
            auVar19 = pauVar6[3];
            auVar61 = pauVar6[4];
            auVar87 = pauVar6[5];
            auVar22 = *pauVar6;
            auVar31 = pauVar6[1];
            auVar38 = pauVar6[2];
            uVar16 = auVar61._0_4_;
            auVar44._4_12_ = in_q16._4_12_;
            auVar44._0_4_ = uVar16;
            auVar46._12_4_ = in_q16._12_4_;
            auVar46._0_8_ = auVar44._0_8_;
            auVar46._8_4_ = auVar61._8_4_;
            auVar45._8_8_ = auVar46._8_8_;
            auVar45._4_4_ = auVar19._0_4_;
            auVar45._0_4_ = uVar16;
            auVar47._0_12_ = auVar45._0_12_;
            auVar47._12_4_ = auVar19._8_4_;
            auVar75._4_4_ = auVar19._12_4_;
            auVar75._0_4_ = auVar19._4_4_;
            auVar75._8_4_ = auVar87._4_4_;
            auVar75._12_4_ = auVar87._12_4_;
            uVar17 = auVar87._0_4_;
            auVar78._4_12_ = in_q20._4_12_;
            auVar78._0_4_ = uVar17;
            auVar80._12_4_ = in_q20._12_4_;
            auVar80._0_8_ = auVar78._0_8_;
            auVar80._8_4_ = auVar87._8_4_;
            auVar79._8_8_ = auVar80._8_8_;
            auVar79._4_4_ = uVar16;
            auVar79._0_4_ = uVar17;
            auVar81._0_12_ = auVar79._0_12_;
            auVar81._12_4_ = auVar61._8_4_;
            auVar48 = NEON_ext(auVar61,auVar47,0xc,1);
            auVar67._0_12_ = auVar19._0_12_;
            auVar67._12_4_ = uVar17;
            auVar82 = NEON_ext(auVar87,auVar81,0xc,1);
            auVar30._0_8_ = auVar87._0_8_;
            auVar30._8_4_ = auVar61._4_4_;
            auVar30._12_4_ = auVar87._12_4_;
            auVar76 = NEON_ext(auVar19,auVar75,0xc,1);
            auVar20._12_4_ = auVar61._12_4_;
            auVar20._0_8_ = auVar61._0_8_;
            auVar20._8_4_ = auVar19._4_4_;
            uVar16 = auVar22._0_4_;
            auVar69._4_4_ = auVar22._8_4_;
            auVar69._0_4_ = uVar16;
            auVar69._8_4_ = uVar16;
            auVar69._12_4_ = auVar22._8_4_;
            auVar19 = NEON_ext(auVar69,auVar38,0xc,1);
            auVar19 = NEON_ext(auVar67,auVar19,8,1);
            auVar68._0_4_ = auVar31._0_4_;
            auVar68._4_4_ = auVar38._8_4_;
            auVar68._8_8_ = auVar31._8_8_;
            uVar17 = auVar31._4_4_;
            auVar57._4_12_ = in_q17._4_12_;
            auVar57._0_4_ = uVar17;
            auVar59._12_4_ = in_q17._12_4_;
            auVar59._0_8_ = auVar57._0_8_;
            auVar59._8_4_ = auVar31._12_4_;
            auVar58._8_8_ = auVar59._8_8_;
            auVar58._4_4_ = auVar22._4_4_;
            auVar58._0_4_ = uVar17;
            auVar60._0_12_ = auVar58._0_12_;
            auVar60._12_4_ = auVar22._12_4_;
            auVar69 = NEON_ext(auVar82,auVar68,8,1);
            auVar83._4_12_ = auVar82._4_12_;
            auVar83._0_4_ = auVar38._4_4_;
            auVar85._12_4_ = auVar82._12_4_;
            auVar85._0_8_ = auVar83._0_8_;
            auVar85._8_4_ = auVar38._12_4_;
            auVar84._8_8_ = auVar85._8_8_;
            auVar84._4_4_ = uVar17;
            auVar84._0_4_ = auVar38._4_4_;
            auVar86._0_12_ = auVar84._0_12_;
            auVar86._12_4_ = auVar31._12_4_;
            auVar61 = NEON_ext(auVar60,auVar22,4,1);
            auVar87 = NEON_ext(auVar86,auVar31,4,1);
            auVar37._4_12_ = auVar38._4_12_;
            auVar37._0_4_ = auVar22._12_4_;
            auVar21._8_8_ = auVar22._8_8_;
            auVar21._4_4_ = auVar31._8_4_;
            auVar21._0_4_ = uVar16;
            auVar87 = NEON_ext(auVar30,auVar87,8,1);
            fVar28 = param_5[2];
            fVar77 = param_5[3];
            auVar61 = NEON_ext(auVar20,auVar61,8,1);
            auVar38 = NEON_ext(auVar76,auVar37,8,1);
            fVar56 = param_5[4];
            fVar74 = param_5[5];
            auVar22 = NEON_ext(auVar48,auVar21,8,1);
            fVar43 = param_5[1];
            in_q20._0_4_ = fVar2 * fVar77;
            in_q20._4_4_ = fVar27 * fVar77;
            in_q20._8_4_ = fVar3 * fVar77;
            in_q20._12_4_ = fVar4 * fVar77;
            auVar62._0_4_ = fVar2 * fVar56;
            auVar62._4_4_ = fVar27 * fVar56;
            auVar62._8_4_ = fVar3 * fVar56;
            auVar62._12_4_ = fVar4 * fVar56;
            auVar19 = NEON_ext(auVar19,auVar19,8,1);
            auVar48 = NEON_ext(auVar69,auVar69,8,1);
            auVar31 = NEON_ext(auVar87,auVar87,8,1);
            auVar87 = NEON_ext(auVar61,auVar61,8,1);
            auVar82 = NEON_ext(auVar38,auVar38,8,1);
            auVar18._0_4_ = auVar19._0_4_ + fVar2 * fVar28;
            auVar18._4_4_ = auVar19._4_4_ + fVar27 * fVar28;
            auVar18._8_4_ = auVar19._8_4_ + fVar3 * fVar28;
            auVar76._12_4_ = auVar19._12_4_ + fVar4 * fVar28;
            auVar76._0_12_ = auVar18;
            auVar29._0_4_ = auVar48._0_4_ + auVar62._0_4_;
            auVar29._4_4_ = auVar48._4_4_ + auVar62._4_4_;
            auVar29._8_4_ = auVar48._8_4_ + auVar62._8_4_;
            auVar51._12_4_ = auVar48._12_4_;
            auVar29._12_4_ = auVar51._12_4_ + auVar62._12_4_;
            auVar32._0_4_ = auVar31._0_4_ + fVar2 * fVar74;
            auVar32._4_4_ = auVar31._4_4_ + fVar27 * fVar74;
            auVar32._8_4_ = auVar31._8_4_ + fVar3 * fVar74;
            auVar32._12_4_ = auVar31._12_4_ + fVar4 * fVar74;
            auVar19 = NEON_ext(auVar22,auVar22,8,1);
            auVar61._0_4_ = auVar87._0_4_ + fVar2 * fVar43;
            auVar61._4_4_ = auVar87._4_4_ + fVar27 * fVar43;
            auVar61._8_4_ = auVar87._8_4_ + fVar3 * fVar43;
            auVar61._12_4_ = auVar87._12_4_ + fVar4 * fVar43;
            fVar28 = auVar82._4_4_ + in_q20._4_4_;
            auVar41._12_4_ = auVar82._12_4_;
            auVar49._4_12_ = auVar48._4_12_;
            auVar49._0_4_ = auVar29._4_4_;
            auVar51._0_8_ = auVar49._0_8_;
            auVar51._8_4_ = auVar29._12_4_;
            auVar50._8_8_ = auVar51._8_8_;
            auVar50._4_4_ = auVar32._4_4_;
            auVar50._0_4_ = auVar29._4_4_;
            auVar52._0_12_ = auVar50._0_12_;
            auVar52._12_4_ = auVar32._12_4_;
            auVar48._0_4_ = auVar19._0_4_ + fVar2 * fVar1;
            auVar48._4_4_ = auVar19._4_4_ + fVar27 * fVar1;
            auVar48._8_4_ = auVar19._8_4_ + fVar3 * fVar1;
            auVar25._12_4_ = auVar19._12_4_;
            auVar48._12_4_ = auVar25._12_4_ + fVar4 * fVar1;
            auVar39._4_12_ = auVar82._4_12_;
            auVar39._0_4_ = auVar29._0_4_;
            auVar41._0_8_ = auVar39._0_8_;
            auVar41._8_4_ = auVar29._4_4_;
            auVar40._8_8_ = auVar41._8_8_;
            auVar40._4_4_ = auVar32._0_4_;
            auVar40._0_4_ = auVar29._0_4_;
            auVar42._0_12_ = auVar40._0_12_;
            auVar42._12_4_ = auVar32._4_4_;
                    /* catch() { ... } // from try @ 00a87028 with catch @ 00a8736c */
            auVar33._4_12_ = auVar32._4_12_;
            auVar33._0_4_ = auVar29._8_4_;
            auVar35._0_8_ = auVar33._0_8_;
            auVar35._8_4_ = auVar29._12_4_;
            auVar35._12_4_ = auVar32._12_4_;
            auVar34._8_8_ = auVar35._8_8_;
            auVar34._4_4_ = auVar32._8_4_;
            auVar34._0_4_ = auVar29._8_4_;
            auVar36._0_12_ = auVar34._0_12_;
            auVar36._12_4_ = auVar32._12_4_;
            auVar23._4_12_ = auVar19._4_12_;
            auVar23._0_4_ = auVar18._0_4_;
            auVar25._0_8_ = auVar23._0_8_;
            auVar25._8_4_ = auVar18._4_4_;
            auVar24._8_8_ = auVar25._8_8_;
            auVar24._4_4_ = auVar82._0_4_ + in_q20._0_4_;
            auVar24._0_4_ = auVar18._0_4_;
            auVar26._0_12_ = auVar24._0_12_;
            auVar26._12_4_ = fVar28;
            auVar63._4_12_ = auVar62._4_12_;
            auVar63._0_4_ = auVar18._4_4_;
            auVar65._0_8_ = auVar63._0_8_;
            auVar65._8_4_ = auVar76._12_4_;
            auVar65._12_4_ = auVar62._12_4_;
            auVar64._8_8_ = auVar65._8_8_;
            auVar64._4_4_ = fVar28;
            auVar64._0_4_ = auVar18._4_4_;
            auVar66._0_12_ = auVar64._0_12_;
            auVar66._12_4_ = auVar41._12_4_ + in_q20._12_4_;
            auVar87 = NEON_ext(auVar29,auVar52,8,1);
            auVar70._4_12_ = auVar69._4_12_;
            auVar70._0_4_ = auVar48._4_4_;
            auVar72._12_4_ = auVar69._12_4_;
            auVar72._0_8_ = auVar70._0_8_;
            auVar72._8_4_ = auVar48._12_4_;
            auVar71._8_8_ = auVar72._8_8_;
            auVar71._4_4_ = auVar61._4_4_;
            auVar71._0_4_ = auVar48._4_4_;
            auVar73._0_12_ = auVar71._0_12_;
            auVar73._12_4_ = auVar61._12_4_;
            auVar53._4_12_ = auVar52._4_12_;
            auVar53._0_4_ = auVar48._0_4_;
            auVar55._0_8_ = auVar53._0_8_;
            auVar55._8_4_ = auVar48._4_4_;
            auVar55._12_4_ = auVar32._12_4_;
            auVar54._8_8_ = auVar55._8_8_;
            auVar54._4_4_ = auVar61._0_4_;
            auVar54._0_4_ = auVar48._0_4_;
            in_q16._0_12_ = auVar54._0_12_;
            in_q16._12_4_ = auVar61._4_4_;
            auVar19 = NEON_ext(auVar76,auVar26,8,1);
                    /* try { // try from 00a87388 to 00b873af has its CatchHandler @ 00a87388
                       catch() { ... } // from try @ 00a87388 with catch @ 00a87388
                       catch() { ... } // from try @ 00a87410 with catch @ 00a87388 */
            auVar69 = NEON_ext(auVar87,auVar66,8,1);
            in_q17 = NEON_ext(auVar66,auVar76,8,1);
            auVar87._4_12_ = auVar61._4_12_;
            auVar87._0_4_ = auVar48._8_4_;
            auVar31._0_8_ = auVar87._0_8_;
            auVar31._8_4_ = auVar48._12_4_;
            auVar31._12_4_ = auVar61._12_4_;
            auVar22._8_8_ = auVar31._8_8_;
            auVar22._4_4_ = auVar61._8_4_;
            auVar22._0_4_ = auVar48._8_4_;
            auVar38._0_12_ = auVar22._0_12_;
            auVar38._12_4_ = auVar61._12_4_;
            auVar82._12_4_ = auVar82._8_4_ + in_q20._8_4_;
            auVar82._0_12_ = auVar18;
            auVar61 = NEON_ext(auVar48,auVar73,8,1);
            auVar22 = NEON_ext(auVar19,in_q16,8,1);
            auVar31 = NEON_ext(auVar69,auVar69,8,1);
            auVar48 = NEON_ext(auVar36,in_q17,8,1);
            auVar87 = NEON_ext(auVar82,auVar38,8,1);
            auVar19 = NEON_ext(auVar38,auVar36,8,1);
                    /* try { // try from 00a873b0 to 00b873c3 has its CatchHandler @ 00a87454 */
            auVar61 = NEON_ext(auVar61,auVar42,8,1);
            auVar22 = NEON_ext(auVar22,auVar22,8,1);
            auVar38 = NEON_ext(auVar48,auVar48,8,1);
            auVar87 = NEON_ext(auVar87,auVar87,8,1);
            auVar19 = NEON_ext(auVar19,auVar19,8,1);
            auVar61 = NEON_ext(auVar61,auVar61,8,1);
                    /* try { // try from 00a873c8 to 00b873d7 has its CatchHandler @ 00a87450 */
            uVar8 = uVar8 - 4;
            *(long *)(pauVar6[2] + 8) = auVar31._8_8_;
            *(long *)pauVar6[2] = auVar31._0_8_;
            *(long *)(pauVar6[3] + 8) = auVar87._8_8_;
            *(long *)pauVar6[3] = auVar87._0_8_;
            *(long *)(pauVar6[4] + 8) = auVar19._8_8_;
            *(long *)pauVar6[4] = auVar19._0_8_;
            *(long *)(pauVar6[5] + 8) = auVar38._8_8_;
            *(long *)pauVar6[5] = auVar38._0_8_;
            *(long *)(*pauVar6 + 8) = auVar22._8_8_;
            *(long *)*pauVar6 = auVar22._0_8_;
            *(long *)(pauVar6[1] + 8) = auVar61._8_8_;
            *(long *)pauVar6[1] = auVar61._0_8_;
            pauVar6 = pauVar6 + 6;
            pfVar7 = pfVar7 + 4;
                    /* try { // try from 00a873d8 to 00b873fb has its CatchHandler @ 00a87440 */
          } while (uVar8 != 0);
          bVar5 = uVar15 == param_2;
          param_3 = param_3 + uVar15;
          param_2 = param_2 - uVar15;
          param_1 = param_1 + uVar15 * 6;
          if (bVar5) {
            return;
          }
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_1[3] = param_1[3] + *param_3 * param_5[3];
      param_1[4] = param_1[4] + *param_3 * param_5[4];
      param_1[5] = param_1[5] + *param_3 * param_5[5];
      param_3 = param_3 + 1;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a86eb0 to 00b86ebb has its CatchHandler @ 00a86f74 */
                    /* try { // try from 00a86ebc to 00b86eff has its CatchHandler @ 00a86f8c */
    do {
      fVar27 = *param_3;
      fVar1 = -0.5;
      fVar2 = 0.5;
      if (fVar27 <= -16.0) {
                    /* try { // try from 00a86f00 to 00b86fe3 has its CatchHandler @ 00a86e30 */
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar3 = fVar2;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar9 = (int)(fVar3 + fVar27 * 1.3421773e+08);
      }
      *param_1 = fVar27 * *param_5 + *param_1;
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar3 = fVar2;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar10 = (int)(fVar3 + fVar27 * 1.3421773e+08);
      }
      param_1[1] = fVar27 * param_5[1] + param_1[1];
      fVar27 = *param_3;
                    /* catch() { ... } // from try @ 00a86eb0 with catch @ 00a86f74 */
                    /* catch() { ... } // from try @ 00a86ea4 with catch @ 00a86f78 */
                    /* catch() { ... } // from try @ 00a86e84 with catch @ 00a86f7c */
      if (fVar27 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar11 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a86ebc with catch @ 00a86f8c */
        fVar3 = fVar2;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar11 = (int)(fVar3 + fVar27 * 1.3421773e+08);
      }
      param_1[2] = fVar27 * param_5[2] + param_1[2];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar12 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a8703c with catch @ 00a86fe4 */
        fVar3 = fVar2;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar3 = fVar1;
        }
        iVar12 = (int)(fVar3 + fVar27 * 1.3421773e+08);
      }
      param_1[3] = fVar27 * param_5[3] + param_1[3];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else {
                    /* try { // try from 00a87028 to 00b8703b has its CatchHandler @ 00a8736c */
        if (16.0 <= fVar27) {
          iVar13 = 0x7fffffff;
        }
        else {
                    /* try { // try from 00a8703c to 00b87387 has its CatchHandler @ 00a86fe4 */
          fVar3 = fVar2;
          if (fVar27 * 1.3421773e+08 <= 0.0) {
            fVar3 = fVar1;
          }
          iVar13 = (int)(fVar3 + fVar27 * 1.3421773e+08);
        }
      }
      param_1[4] = fVar27 * param_5[4] + param_1[4];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar14 = 0x7fffffff;
      }
      else {
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar1;
        }
        iVar14 = (int)(fVar2 + fVar27 * 1.3421773e+08);
      }
      param_1[5] = fVar27 * param_5[5] + param_1[5];
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((iVar14 + iVar13 + iVar12 + iVar11 + iVar10 + iVar9) / 6 >> 0xc) * (int)param_6;
      param_1 = param_1 + 6;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

