
/* void cocos2d::volumeMulti<1, 5, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<1,5,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  undefined1 (*pauVar1) [12];
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined1 (*pauVar10) [12];
  float *pfVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [12];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_q17 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      auVar29._8_8_ = 0;
      auVar29._0_8_ = param_2 - 1;
      uVar12 = (param_2 - 1) * 0x14;
                    /* catch() { ... } // from try @ 00a86c34 with catch @ 00a86d00 */
                    /* catch() { ... } // from try @ 00a86c4c with catch @ 00a86d18 */
      if (((((uVar12 < ~(ulong)(param_1 + 4) || uVar12 - ~(ulong)(param_1 + 4) == 0) &&
            (SUB168(auVar29 * ZEXT816(0x14),8) == 0)) &&
           (uVar12 < ~(ulong)(param_1 + 3) || uVar12 - ~(ulong)(param_1 + 3) == 0)) &&
          ((uVar12 < ~(ulong)(param_1 + 2) || uVar12 - ~(ulong)(param_1 + 2) == 0 &&
           (uVar12 < ~(ulong)(param_1 + 1) || uVar12 - ~(ulong)(param_1 + 1) == 0)))) &&
         (uVar12 < ~(ulong)param_1 || uVar12 - ~(ulong)param_1 == 0)) {
                    /* catch() { ... } // from try @ 00a86c0c with catch @ 00a86d1c */
                    /* catch() { ... } // from try @ 00a86c54 with catch @ 00a86d20 */
                    /* catch() { ... } // from try @ 00a86c3c with catch @ 00a86d30 */
                    /* catch() { ... } // from try @ 00a86bf8 with catch @ 00a86d48 */
                    /* catch() { ... } // from try @ 00a86bcc with catch @ 00a86d4c */
        if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 5 <= param_3) &&
           ((float *)((long)param_5 + 0x11U) <= param_1 || param_1 + param_2 * 5 <= param_5 + 4)) {
          uVar18 = param_2 & 0xfffffffffffffffc;
          pauVar10 = (undefined1 (*) [12])param_1;
          pfVar11 = param_3;
          uVar12 = uVar18;
          do {
            fVar6 = *pfVar11;
            fVar33 = pfVar11[1];
            fVar7 = pfVar11[2];
            fVar8 = pfVar11[3];
            fVar2 = *param_5;
            pauVar1 = pauVar10 + 4;
            uVar37 = (undefined4)((ulong)*(undefined8 *)(pauVar10[4] + 8) >> 0x20);
            auVar29 = *(undefined1 (*) [16])(pauVar10[5] + 4);
            auVar55 = *(undefined1 (*) [16])(pauVar10[1] + 4);
            auVar3 = *(undefined1 (*) [16])(pauVar10[2] + 8);
            uVar35 = (undefined4)((ulong)*(undefined8 *)(*pauVar10 + 8) >> 0x20);
            auVar54._12_4_ = uVar37;
            auVar54._0_12_ = *pauVar1;
            auVar57 = NEON_ext(auVar29,auVar54,4,1);
                    /* try { // try from 00a86d9c to 00b86ddf has its CatchHandler @ 00a86d9c
                       catch() { ... } // from try @ 00a86d9c with catch @ 00a86d9c
                       catch() { ... } // from try @ 00a86dec with catch @ 00a86d9c */
            auVar58 = NEON_ext(auVar57,auVar57,4,1);
            auVar50._4_12_ = in_q17._4_12_;
            auVar50._0_4_ = auVar55._8_4_;
            auVar52._12_4_ = in_q17._12_4_;
            auVar52._0_8_ = auVar50._0_8_;
            auVar52._8_4_ = auVar55._12_4_;
            auVar51._8_8_ = auVar52._8_8_;
            auVar51._4_4_ = SUB124(*pauVar10,8);
            auVar51._0_4_ = auVar55._8_4_;
            auVar53._0_12_ = auVar51._0_12_;
            auVar53._12_4_ = uVar35;
            auVar57._12_4_ = uVar35;
            auVar57._0_12_ = *pauVar10;
            auVar44 = NEON_ext(auVar55,auVar57,8,1);
            auVar45._12_4_ = uVar35;
            auVar45._0_12_ = *pauVar10;
            auVar54 = NEON_ext(auVar53,auVar45,4,1);
            auVar57 = NEON_ext(auVar3,auVar29,4,1);
            auVar45 = NEON_ext(auVar44,auVar44,0xc,1);
            auVar54 = NEON_ext(auVar58,auVar54,8,1);
            auVar58._12_4_ = uVar37;
            auVar58._0_12_ = *pauVar1;
            auVar58 = NEON_ext(auVar29,auVar58,8,1);
            auVar45 = NEON_ext(auVar57,auVar45,8,1);
            auVar44._12_4_ = uVar35;
            auVar44._0_12_ = *pauVar10;
            auVar57 = NEON_ext(auVar44,auVar3,0xc,1);
            auVar44 = NEON_ext(auVar58,auVar58,4,1);
            auVar28._8_8_ = auVar55._8_8_;
            auVar28._0_4_ = auVar55._0_4_;
            auVar28._4_4_ = auVar3._4_4_;
            auVar44 = NEON_ext(auVar44,auVar57,8,1);
            auVar32._0_12_ = auVar3._0_12_;
            auVar32._12_4_ = uVar37;
            fVar21 = param_5[2];
            fVar56 = param_5[3];
            auVar55._4_4_ = auVar55._4_4_;
            auVar55._0_4_ = (int)*(undefined8 *)*pauVar10;
            auVar55._8_4_ = (int)*(undefined8 *)(*pauVar10 + 8);
            auVar55._12_4_ = uVar35;
                    /* try { // try from 00a86de0 to 00b86deb has its CatchHandler @ 00a86e1c */
            auVar57 = NEON_ext(auVar32,auVar55,8,1);
            fVar34 = param_5[4];
            auVar4._12_4_ = auVar29._12_4_;
            auVar4._0_12_ = *pauVar1;
            auVar29 = NEON_ext(auVar4,auVar28,8,1);
                    /* try { // try from 00a86dec to 00b86e2f has its CatchHandler @ 00a86d9c */
            fVar36 = param_5[1];
            auVar59._0_4_ = fVar6 * fVar56;
            auVar59._4_4_ = fVar33 * fVar56;
            auVar59._8_4_ = fVar7 * fVar56;
            auVar59._12_4_ = fVar8 * fVar56;
            auVar55 = NEON_ext(auVar54,auVar54,8,1);
            auVar44 = NEON_ext(auVar44,auVar44,8,1);
            auVar45 = NEON_ext(auVar45,auVar45,8,1);
            auVar22._0_4_ = auVar55._0_4_ + fVar6 * fVar21;
            auVar22._4_4_ = auVar55._4_4_ + fVar33 * fVar21;
            auVar22._8_4_ = auVar55._8_4_ + fVar7 * fVar21;
            auVar22._12_4_ = auVar55._12_4_ + fVar8 * fVar21;
            fVar21 = auVar44._4_4_ + auVar59._4_4_;
            fVar56 = auVar44._8_4_ + auVar59._8_4_;
            auVar48._12_4_ = auVar44._12_4_;
            fVar38 = auVar48._12_4_ + auVar59._12_4_;
            auVar57 = NEON_ext(auVar57,auVar57,8,1);
            auVar29 = NEON_ext(auVar29,auVar29,8,1);
                    /* catch() { ... } // from try @ 00a86de0 with catch @ 00a86e1c */
            auVar19._0_4_ = auVar45._0_4_ + fVar6 * fVar36;
            auVar19._4_4_ = auVar45._4_4_ + fVar33 * fVar36;
            auVar19._8_4_ = auVar45._8_4_ + fVar7 * fVar36;
            auVar41._12_4_ = auVar45._12_4_;
            auVar19._12_4_ = auVar41._12_4_ + fVar8 * fVar36;
            auVar39._4_12_ = auVar45._4_12_;
            auVar39._0_4_ = auVar22._0_4_;
            auVar41._0_8_ = auVar39._0_8_;
            auVar41._8_4_ = auVar22._4_4_;
            auVar40._8_8_ = auVar41._8_8_;
            auVar40._4_4_ = auVar44._0_4_ + auVar59._0_4_;
            auVar40._0_4_ = auVar22._0_4_;
            auVar42._0_12_ = auVar40._0_12_;
            auVar42._12_4_ = fVar21;
            auVar20._0_4_ = auVar57._0_4_ + fVar6 * fVar2;
            auVar20._4_4_ = auVar57._4_4_ + fVar33 * fVar2;
            auVar20._8_4_ = auVar57._8_4_ + fVar7 * fVar2;
            auVar27._0_4_ = auVar29._0_4_ + fVar6 * fVar34;
            auVar27._4_4_ = auVar29._4_4_ + fVar33 * fVar34;
            auVar27._8_4_ = auVar29._8_4_ + fVar7 * fVar34;
            auVar30._12_4_ = auVar29._12_4_ + fVar8 * fVar34;
            auVar30._0_12_ = auVar27;
            auVar46._4_12_ = auVar44._4_12_;
            auVar46._0_4_ = auVar22._8_4_;
            auVar48._0_8_ = auVar46._0_8_;
            auVar48._8_4_ = auVar22._12_4_;
            auVar47._8_8_ = auVar48._8_8_;
            auVar47._4_4_ = fVar56;
            auVar47._0_4_ = auVar22._8_4_;
            auVar49._0_12_ = auVar47._0_12_;
            auVar49._12_4_ = fVar38;
                    /* try { // try from 00a86e30 to 00b86e83 has its CatchHandler @ 00a86e30
                       catch() { ... } // from try @ 00a86e30 with catch @ 00a86e30
                       catch() { ... } // from try @ 00a86f00 with catch @ 00a86e30 */
            auVar45 = NEON_ext(auVar22,auVar42,8,1);
            auVar23._4_12_ = auVar22._4_12_;
            auVar23._0_4_ = auVar19._4_4_;
            auVar25._0_8_ = auVar23._0_8_;
            auVar25._8_4_ = auVar19._12_4_;
            auVar25._12_4_ = auVar22._12_4_;
            auVar24._8_8_ = auVar25._8_8_;
            auVar24._4_4_ = auVar22._4_4_;
            auVar24._0_4_ = auVar19._4_4_;
            auVar26._0_12_ = auVar24._0_12_;
            auVar26._12_4_ = auVar22._12_4_;
            in_q17 = NEON_ext(auVar19,auVar26,8,1);
            auVar60._4_12_ = auVar59._4_12_;
            auVar60._0_4_ = fVar56;
            auVar62._0_8_ = auVar60._0_8_;
            auVar62._8_4_ = fVar38;
            auVar62._12_4_ = auVar59._12_4_;
            auVar61._8_8_ = auVar62._8_8_;
            auVar61._4_4_ = auVar27._8_4_;
            auVar61._0_4_ = fVar56;
            auVar63._0_12_ = auVar61._0_12_;
            auVar63._12_4_ = auVar30._12_4_;
            auVar29 = NEON_ext(auVar26,auVar19,8,1);
            auVar31._12_4_ = auVar57._12_4_ + fVar8 * fVar2;
            auVar31._0_12_ = auVar27;
            auVar3._4_4_ = auVar19._0_4_;
            auVar3._0_4_ = auVar20._0_4_;
            auVar3._8_4_ = auVar20._4_4_;
            auVar3._12_4_ = auVar19._4_4_;
            auVar57 = NEON_ext(auVar45,auVar3,8,1);
            auVar43._4_4_ = auVar20._4_4_;
            auVar43._0_4_ = auVar27._0_4_;
            auVar43._8_8_ = auVar30._8_8_;
            auVar20._12_4_ = auVar19._8_4_;
            auVar45 = NEON_ext(auVar63,auVar29,8,1);
            auVar29 = NEON_ext(auVar31,auVar49,8,1);
            auVar44 = NEON_ext(auVar57,auVar57,8,1);
            auVar55 = NEON_ext(in_q17,auVar43,8,1);
            auVar5._4_4_ = auVar27._4_4_;
            auVar5._0_4_ = fVar21;
            auVar5._8_4_ = fVar38;
            auVar5._12_4_ = auVar30._12_4_;
            auVar57 = NEON_ext(auVar20,auVar5,8,1);
            auVar45 = NEON_ext(auVar45,auVar45,8,1);
            auVar29 = NEON_ext(auVar29,auVar29,8,1);
            auVar55 = NEON_ext(auVar55,auVar55,8,1);
            auVar57 = NEON_ext(auVar57,auVar57,8,1);
                    /* try { // try from 00a86e84 to 00b86e9b has its CatchHandler @ 00a86f7c */
            uVar12 = uVar12 - 4;
            *(long *)(pauVar10[4] + 8) = auVar29._8_8_;
            *(long *)pauVar10[4] = auVar29._0_8_;
            *(long *)pauVar10[6] = auVar45._8_8_;
            *(long *)(pauVar10[5] + 4) = auVar45._0_8_;
            *(long *)pauVar10[2] = auVar55._8_8_;
            *(long *)(pauVar10[1] + 4) = auVar55._0_8_;
            *(long *)(pauVar10[3] + 4) = auVar57._8_8_;
            *(long *)(pauVar10[2] + 8) = auVar57._0_8_;
            *(long *)(*pauVar10 + 8) = auVar44._8_8_;
            *(long *)*pauVar10 = auVar44._0_8_;
            pauVar10 = (undefined1 (*) [12])(pauVar10[6] + 8);
            pfVar11 = pfVar11 + 4;
          } while (uVar12 != 0);
          bVar9 = uVar18 == param_2;
          param_3 = param_3 + uVar18;
          param_2 = param_2 - uVar18;
          param_1 = param_1 + uVar18 * 5;
          if (bVar9) {
            return;
          }
        }
      }
    }
    do {
      param_2 = param_2 - 1;
                    /* try { // try from 00a86c34 to 00b86c3b has its CatchHandler @ 00a86d00 */
                    /* try { // try from 00a86c3c to 00b86c4b has its CatchHandler @ 00a86d30 */
      *param_1 = *param_1 + *param_3 * *param_5;
                    /* try { // try from 00a86c4c to 00b86c53 has its CatchHandler @ 00a86d18 */
      param_1[1] = param_1[1] + *param_3 * param_5[1];
                    /* try { // try from 00a86c54 to 00b86c83 has its CatchHandler @ 00a86d20 */
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_1[3] = param_1[3] + *param_3 * param_5[3];
                    /* try { // try from 00a86c84 to 00b86d9b has its CatchHandler @ 00a86b7c */
      param_1[4] = param_1[4] + *param_3 * param_5[4];
      param_3 = param_3 + 1;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar33 = *param_3;
      fVar2 = -0.5;
      fVar6 = 0.5;
      if (fVar33 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar33) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar7 = fVar6;
        if (fVar33 * 1.3421773e+08 <= 0.0) {
          fVar7 = fVar2;
        }
        iVar13 = (int)(fVar7 + fVar33 * 1.3421773e+08);
      }
      *param_1 = fVar33 * *param_5 + *param_1;
      fVar33 = *param_3;
                    /* try { // try from 00a86a98 to 00b86b7b has its CatchHandler @ 00a8695c */
      if (fVar33 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar33) {
        iVar14 = 0x7fffffff;
      }
      else {
        fVar7 = fVar6;
        if (fVar33 * 1.3421773e+08 <= 0.0) {
          fVar7 = fVar2;
        }
        iVar14 = (int)(fVar7 + fVar33 * 1.3421773e+08);
      }
      param_1[1] = fVar33 * param_5[1] + param_1[1];
      fVar33 = *param_3;
      if (fVar33 <= -16.0) {
                    /* catch() { ... } // from try @ 00a869b0 with catch @ 00a86b14 */
        iVar15 = -0x80000000;
      }
      else if (16.0 <= fVar33) {
        iVar15 = 0x7fffffff;
      }
      else {
        fVar7 = fVar6;
        if (fVar33 * 1.3421773e+08 <= 0.0) {
          fVar7 = fVar2;
        }
                    /* catch() { ... } // from try @ 00a869dc with catch @ 00a86b0c */
        iVar15 = (int)(fVar7 + fVar33 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a869d0 with catch @ 00a86b10 */
      }
                    /* catch() { ... } // from try @ 00a869e8 with catch @ 00a86b24 */
      param_1[2] = fVar33 * param_5[2] + param_1[2];
      fVar33 = *param_3;
      if (fVar33 <= -16.0) {
        iVar16 = -0x80000000;
      }
      else if (16.0 <= fVar33) {
        iVar16 = 0x7fffffff;
      }
      else {
        fVar7 = fVar6;
        if (fVar33 * 1.3421773e+08 <= 0.0) {
          fVar7 = fVar2;
        }
        iVar16 = (int)(fVar7 + fVar33 * 1.3421773e+08);
      }
                    /* try { // try from 00a86b7c to 00b86bcb has its CatchHandler @ 00a86b7c
                       catch() { ... } // from try @ 00a86b7c with catch @ 00a86b7c
                       catch() { ... } // from try @ 00a86c84 with catch @ 00a86b7c */
      param_1[3] = fVar33 * param_5[3] + param_1[3];
      fVar33 = *param_3;
      if (fVar33 <= -16.0) {
        iVar17 = -0x80000000;
      }
      else if (16.0 <= fVar33) {
        iVar17 = 0x7fffffff;
      }
      else {
        if (fVar33 * 1.3421773e+08 <= 0.0) {
          fVar6 = fVar2;
        }
        iVar17 = (int)(fVar6 + fVar33 * 1.3421773e+08);
      }
                    /* try { // try from 00a86bcc to 00b86be3 has its CatchHandler @ 00a86d4c */
      param_1[4] = fVar33 * param_5[4] + param_1[4];
      param_3 = param_3 + 1;
                    /* try { // try from 00a86bf8 to 00b86c0b has its CatchHandler @ 00a86d48 */
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar17 + iVar16 + iVar15 + iVar14 + iVar13) / 5 >> 0xc) * (int)param_6
      ;
      param_1 = param_1 + 5;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

