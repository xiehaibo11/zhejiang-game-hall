
/* void cocos2d::volumeMulti<1, 8, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<1,8,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined1 (*pauVar5) [16];
  float *pfVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auVar32 [12];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar81;
  undefined1 in_q20 [16];
  undefined1 auVar82 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 in_q21 [16];
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 in_q22 [16];
  undefined1 auVar111 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar120 [16];
  float fVar123;
  undefined1 in_q23 [16];
  undefined1 auVar124 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar133 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  undefined1 auVar43 [16];
  undefined1 auVar39 [16];
  undefined1 auVar44 [16];
  undefined1 auVar40 [16];
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar53 [16];
  undefined1 auVar49 [16];
  undefined1 auVar54 [16];
  undefined1 auVar50 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar83 [16];
  undefined1 auVar89 [16];
  undefined1 auVar84 [16];
  undefined1 auVar90 [16];
  undefined1 auVar85 [16];
  undefined1 auVar91 [16];
  undefined1 auVar93 [16];
  undefined1 auVar98 [16];
  undefined1 auVar102 [16];
  undefined1 auVar108 [16];
  undefined1 auVar94 [16];
  undefined1 auVar99 [16];
  undefined1 auVar103 [16];
  undefined1 auVar109 [16];
  undefined1 auVar95 [16];
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar110 [16];
  undefined1 auVar112 [16];
  undefined1 auVar117 [16];
  undefined1 auVar121 [16];
  undefined1 auVar113 [16];
  undefined1 auVar118 [16];
  undefined1 auVar122 [16];
  undefined1 auVar114 [16];
  undefined1 auVar119 [16];
  undefined1 auVar125 [16];
  undefined1 auVar130 [16];
  undefined1 auVar134 [16];
  undefined1 auVar139 [16];
  undefined1 auVar126 [16];
  undefined1 auVar131 [16];
  undefined1 auVar135 [16];
  undefined1 auVar140 [16];
  undefined1 auVar127 [16];
  undefined1 auVar132 [16];
  undefined1 auVar136 [16];
  undefined1 auVar141 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      uVar8 = (param_2 - 1) * 0x20;
                    /* try { // try from 00a87dec to 00b87e17 has its CatchHandler @ 00a87efc */
                    /* try { // try from 00a87e18 to 00b87e1f has its CatchHandler @ 00a87ee0 */
                    /* try { // try from 00a87e30 to 00b87e33 has its CatchHandler @ 00a87ed8 */
                    /* try { // try from 00a87e44 to 00b87e47 has its CatchHandler @ 00a87edc */
                    /* try { // try from 00a87e48 to 00b87e63 has its CatchHandler @ 00a87ee4 */
      if ((((((uVar8 < ~(ulong)(param_1 + 7) || uVar8 - ~(ulong)(param_1 + 7) == 0) &&
             (param_2 - 1 >> 0x3b == 0)) &&
            (uVar8 < ~(ulong)(param_1 + 6) || uVar8 - ~(ulong)(param_1 + 6) == 0)) &&
           ((uVar8 < ~(ulong)(param_1 + 5) || uVar8 - ~(ulong)(param_1 + 5) == 0 &&
            (uVar8 < ~(ulong)(param_1 + 4) || uVar8 - ~(ulong)(param_1 + 4) == 0)))) &&
          ((uVar8 < ~(ulong)(param_1 + 3) || uVar8 - ~(ulong)(param_1 + 3) == 0 &&
           ((uVar8 < ~(ulong)(param_1 + 2) || uVar8 - ~(ulong)(param_1 + 2) == 0 &&
            (uVar8 < ~(ulong)(param_1 + 1) || uVar8 - ~(ulong)(param_1 + 1) == 0)))))) &&
         (uVar8 < ~(ulong)param_1 || uVar8 - ~(ulong)param_1 == 0)) {
                    /* try { // try from 00a87e64 to 00b87f4b has its CatchHandler @ 00a87da0 */
        if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 8 <= param_3) &&
           ((float *)((long)param_5 + 0x1dU) <= param_1 || param_1 + param_2 * 8 <= param_5 + 7)) {
          uVar16 = param_2 & 0xfffffffffffffffc;
          pauVar5 = (undefined1 (*) [16])param_1;
          pfVar6 = param_3;
          uVar8 = uVar16;
          do {
            fVar1 = *pfVar6;
            fVar31 = pfVar6[1];
            fVar2 = pfVar6[2];
            fVar3 = pfVar6[3];
            fVar81 = *param_5;
            auVar22 = pauVar5[6];
            auVar56 = pauVar5[4];
            auVar28 = pauVar5[5];
            auVar137 = pauVar5[2];
            auVar87 = pauVar5[3];
            auVar74 = *pauVar5;
            auVar105 = pauVar5[1];
            fVar68 = param_5[2];
            fVar75 = param_5[3];
            auVar92._4_12_ = in_q21._4_12_;
            auVar92._0_4_ = auVar56._0_4_;
            uVar17 = auVar56._4_4_;
            auVar94._12_4_ = in_q21._12_4_;
            auVar94._0_8_ = auVar92._0_8_;
            auVar94._8_4_ = uVar17;
            auVar93._8_8_ = auVar94._8_8_;
            auVar93._4_4_ = auVar22._0_4_;
            auVar93._0_4_ = auVar56._0_4_;
            auVar95._0_12_ = auVar93._0_12_;
            auVar95._12_4_ = auVar22._4_4_;
            auVar124._4_12_ = in_q23._4_12_;
            auVar124._0_4_ = uVar17;
            auVar126._12_4_ = in_q23._12_4_;
            auVar126._0_8_ = auVar124._0_8_;
            auVar126._8_4_ = auVar56._12_4_;
            auVar125._8_8_ = auVar126._8_8_;
            auVar125._4_4_ = auVar22._4_4_;
            auVar125._0_4_ = uVar17;
            uVar20 = auVar22._12_4_;
            auVar127._0_12_ = auVar125._0_12_;
            auVar127._12_4_ = uVar20;
                    /* catch() { ... } // from try @ 00a87e30 with catch @ 00a87ed8 */
            auVar82._4_12_ = in_q20._4_12_;
            auVar82._0_4_ = auVar74._0_4_;
            uVar17 = auVar74._4_4_;
            auVar84._12_4_ = in_q20._12_4_;
            auVar84._0_8_ = auVar82._0_8_;
            auVar84._8_4_ = uVar17;
            auVar83._8_8_ = auVar84._8_8_;
            auVar83._4_4_ = auVar137._0_4_;
            auVar83._0_4_ = auVar74._0_4_;
            auVar85._0_12_ = auVar83._0_12_;
            auVar85._12_4_ = auVar137._4_4_;
                    /* catch() { ... } // from try @ 00a87e44 with catch @ 00a87edc */
            auVar96 = NEON_ext(auVar56,auVar95,8,1);
            auVar111._4_12_ = in_q22._4_12_;
            auVar111._0_4_ = uVar17;
                    /* catch() { ... } // from try @ 00a87e18 with catch @ 00a87ee0 */
            auVar113._12_4_ = in_q22._12_4_;
            auVar113._0_8_ = auVar111._0_8_;
            auVar113._8_4_ = auVar74._12_4_;
            auVar112._8_8_ = auVar113._8_8_;
            auVar112._4_4_ = auVar137._4_4_;
            auVar112._0_4_ = uVar17;
            uVar18 = auVar137._12_4_;
            auVar114._0_12_ = auVar112._0_12_;
            auVar114._12_4_ = uVar18;
                    /* catch() { ... } // from try @ 00a87e48 with catch @ 00a87ee4 */
            auVar86 = NEON_ext(auVar96,auVar85,8,1);
            auVar97._4_12_ = auVar96._4_12_;
            auVar97._0_4_ = auVar56._8_4_;
            auVar99._12_4_ = auVar96._12_4_;
            auVar99._0_8_ = auVar97._0_8_;
            auVar99._8_4_ = auVar56._12_4_;
            auVar98._8_8_ = auVar99._8_8_;
            auVar98._4_4_ = auVar22._8_4_;
            auVar98._0_4_ = auVar56._8_4_;
            auVar100._0_12_ = auVar98._0_12_;
            auVar100._12_4_ = uVar20;
            auVar128 = NEON_ext(auVar56,auVar127,8,1);
            auVar27._0_12_ = auVar56._0_12_;
            auVar27._12_4_ = auVar22._8_4_;
            auVar96._4_12_ = auVar22._4_12_;
            auVar96._0_4_ = auVar28._0_4_;
            uVar17 = auVar28._4_4_;
            auVar115._0_8_ = auVar96._0_8_;
            auVar115._8_4_ = uVar17;
            auVar115._12_4_ = uVar20;
            auVar106._8_8_ = auVar115._8_8_;
            auVar106._4_4_ = *(undefined4 *)pauVar5[7];
            auVar106._0_4_ = auVar28._0_4_;
            auVar21._0_12_ = auVar106._0_12_;
            auVar21._12_4_ = *(undefined4 *)(pauVar5[7] + 4);
            auVar37._4_12_ = auVar137._4_12_;
            auVar37._0_4_ = auVar74._8_4_;
            auVar39._0_8_ = auVar37._0_8_;
            auVar39._8_4_ = auVar74._12_4_;
            auVar39._12_4_ = uVar18;
            auVar38._8_8_ = auVar39._8_8_;
            auVar38._4_4_ = auVar137._8_4_;
            auVar38._0_4_ = auVar74._8_4_;
            auVar40._0_12_ = auVar38._0_12_;
            auVar40._12_4_ = uVar18;
                    /* catch() { ... } // from try @ 00a87dec with catch @ 00a87efc */
            auVar56 = NEON_ext(auVar114,auVar74,8,1);
            auVar115 = NEON_ext(auVar128,auVar114,8,1);
            auVar129._4_12_ = auVar128._4_12_;
            auVar129._0_4_ = auVar105._0_4_;
            uVar18 = auVar105._4_4_;
            auVar131._12_4_ = auVar128._12_4_;
            auVar131._0_8_ = auVar129._0_8_;
            auVar131._8_4_ = uVar18;
            auVar130._8_8_ = auVar131._8_8_;
            auVar130._4_4_ = auVar87._0_4_;
            auVar130._0_4_ = auVar105._0_4_;
            uVar19 = auVar87._4_4_;
            auVar132._0_12_ = auVar130._0_12_;
            auVar132._12_4_ = uVar19;
            auVar22 = NEON_ext(auVar28,auVar21,8,1);
            auVar22 = NEON_ext(auVar22,auVar132,8,1);
            auVar133._4_12_ = auVar132._4_12_;
            auVar133._0_4_ = uVar17;
            auVar135._0_8_ = auVar133._0_8_;
            auVar135._8_4_ = auVar28._12_4_;
            auVar135._12_4_ = uVar19;
            auVar134._8_8_ = auVar135._8_8_;
            auVar134._4_4_ = *(undefined4 *)(pauVar5[7] + 4);
            auVar134._0_4_ = uVar17;
            auVar136._0_12_ = auVar134._0_12_;
            auVar136._12_4_ = *(undefined4 *)(pauVar5[7] + 0xc);
            auVar96 = NEON_ext(auVar100,auVar56,8,1);
            auVar101._4_12_ = auVar100._4_12_;
            auVar101._0_4_ = uVar18;
            auVar103._0_8_ = auVar101._0_8_;
            auVar103._8_4_ = auVar105._12_4_;
            auVar103._12_4_ = uVar20;
            auVar102._8_8_ = auVar103._8_8_;
            auVar102._4_4_ = uVar19;
            auVar102._0_4_ = uVar18;
            uVar17 = auVar87._12_4_;
            auVar104._0_12_ = auVar102._0_12_;
            auVar104._12_4_ = uVar17;
            auVar137 = NEON_ext(auVar28,auVar136,8,1);
            auVar47._4_12_ = auVar87._4_12_;
            auVar47._0_4_ = auVar105._8_4_;
            auVar49._0_8_ = auVar47._0_8_;
            auVar49._8_4_ = auVar105._12_4_;
            auVar49._12_4_ = uVar17;
            auVar48._8_8_ = auVar49._8_8_;
            auVar48._4_4_ = auVar87._8_4_;
            auVar48._0_4_ = auVar105._8_4_;
            auVar50._0_12_ = auVar48._0_12_;
            auVar50._12_4_ = uVar17;
            auVar56 = NEON_ext(auVar104,auVar105,8,1);
            auVar105 = NEON_ext(auVar137,auVar104,8,1);
            auVar138._4_12_ = auVar137._4_12_;
            auVar138._0_4_ = auVar28._8_4_;
            auVar140._12_4_ = auVar137._12_4_;
            auVar140._0_8_ = auVar138._0_8_;
            auVar140._8_4_ = auVar28._12_4_;
            auVar139._8_8_ = auVar140._8_8_;
            auVar139._4_4_ = *(undefined4 *)(pauVar5[7] + 8);
            auVar139._0_4_ = auVar28._8_4_;
            auVar141._0_12_ = auVar139._0_12_;
            auVar141._12_4_ = *(undefined4 *)(pauVar5[7] + 0xc);
            auVar33._0_12_ = auVar28._0_12_;
            auVar33._12_4_ = *(undefined4 *)(pauVar5[7] + 8);
            auVar56 = NEON_ext(auVar141,auVar56,8,1);
            fVar62 = param_5[4];
            fVar123 = param_5[5];
            auVar28 = NEON_ext(auVar27,auVar40,8,1);
            auVar137 = NEON_ext(auVar33,auVar50,8,1);
            fVar36 = param_5[6];
            fVar46 = param_5[7];
            auVar87 = NEON_ext(auVar86,auVar86,8,1);
            auVar74._0_4_ = auVar87._0_4_ + fVar1 * fVar81;
            auVar74._4_4_ = auVar87._4_4_ + fVar31 * fVar81;
            auVar74._8_4_ = auVar87._8_4_ + fVar2 * fVar81;
            auVar74._12_4_ = auVar87._12_4_ + fVar3 * fVar81;
            fVar81 = param_5[1];
            in_q23._0_4_ = fVar1 * fVar123;
            in_q23._4_4_ = fVar31 * fVar123;
            in_q23._8_4_ = fVar2 * fVar123;
            in_q23._12_4_ = fVar3 * fVar123;
            auVar22 = NEON_ext(auVar22,auVar22,8,1);
            auVar106 = NEON_ext(auVar105,auVar105,8,1);
            auVar69._0_4_ = fVar1 * fVar68;
            auVar69._4_4_ = fVar31 * fVar68;
            auVar69._8_4_ = fVar2 * fVar68;
            auVar69._12_4_ = fVar3 * fVar68;
            auVar76._0_4_ = fVar1 * fVar75;
            auVar76._4_4_ = fVar31 * fVar75;
            auVar76._8_4_ = fVar2 * fVar75;
            auVar76._12_4_ = fVar3 * fVar75;
            auVar41._0_4_ = fVar1 * fVar36;
            auVar41._4_4_ = fVar31 * fVar36;
            auVar41._8_4_ = fVar2 * fVar36;
            auVar41._12_4_ = fVar3 * fVar36;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a87fe4 with catch @ 00a87f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00a88014 with catch @ 00a87f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00a88044 with catch @ 00a87f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8806c with catch @ 00a87f74
                       catch(type#1 @ 00000000) { ... } // from try @ 00a88098 with catch @ 00a87f74
                        */
            auVar51._0_4_ = fVar1 * fVar46;
            auVar51._4_4_ = fVar31 * fVar46;
            auVar51._8_4_ = fVar2 * fVar46;
            auVar51._12_4_ = fVar3 * fVar46;
            auVar87 = NEON_ext(auVar96,auVar96,8,1);
            auVar56 = NEON_ext(auVar56,auVar56,8,1);
            auVar28 = NEON_ext(auVar28,auVar28,8,1);
            auVar137 = NEON_ext(auVar137,auVar137,8,1);
            auVar105._0_4_ = auVar22._0_4_ + fVar1 * fVar62;
            auVar105._4_4_ = auVar22._4_4_ + fVar31 * fVar62;
            auVar105._8_4_ = auVar22._8_4_ + fVar2 * fVar62;
            auVar105._12_4_ = auVar22._12_4_ + fVar3 * fVar62;
            auVar63._0_4_ = auVar106._0_4_ + in_q23._0_4_;
            auVar63._4_4_ = auVar106._4_4_ + in_q23._4_4_;
            auVar63._8_4_ = auVar106._8_4_ + in_q23._8_4_;
            auVar109._12_4_ = auVar106._12_4_;
            auVar63._12_4_ = auVar109._12_4_ + in_q23._12_4_;
            auVar57._0_4_ = auVar87._0_4_ + auVar76._0_4_;
            auVar57._4_4_ = auVar87._4_4_ + auVar76._4_4_;
            auVar57._8_4_ = auVar87._8_4_ + auVar76._8_4_;
            auVar57._12_4_ = auVar87._12_4_ + auVar76._12_4_;
            auVar86._0_4_ = auVar56._0_4_ + auVar51._0_4_;
            auVar86._4_4_ = auVar56._4_4_ + auVar51._4_4_;
            auVar86._8_4_ = auVar56._8_4_ + auVar51._8_4_;
            auVar86._12_4_ = auVar56._12_4_ + auVar51._12_4_;
            auVar26._0_4_ = auVar28._0_4_ + auVar69._0_4_;
            auVar26._4_4_ = auVar28._4_4_ + auVar69._4_4_;
            auVar26._8_4_ = auVar28._8_4_ + auVar69._8_4_;
            auVar29._12_4_ = auVar28._12_4_ + auVar69._12_4_;
            auVar29._0_12_ = auVar26;
            auVar32._0_4_ = auVar137._0_4_ + auVar41._0_4_;
            auVar32._4_4_ = auVar137._4_4_ + auVar41._4_4_;
            auVar32._8_4_ = auVar137._8_4_ + auVar41._8_4_;
            auVar34._12_4_ = auVar137._12_4_ + auVar41._12_4_;
            auVar34._0_12_ = auVar32;
            auVar52._4_12_ = auVar51._4_12_;
            auVar52._0_4_ = auVar105._4_4_;
            auVar54._0_8_ = auVar52._0_8_;
            auVar54._8_4_ = auVar105._12_4_;
            auVar54._12_4_ = auVar51._12_4_;
            auVar53._8_8_ = auVar54._8_8_;
            auVar53._4_4_ = auVar63._4_4_;
            auVar53._0_4_ = auVar105._4_4_;
            auVar55._0_12_ = auVar53._0_12_;
            auVar55._12_4_ = auVar63._12_4_;
            auVar28 = NEON_ext(auVar115,auVar115,8,1);
            auVar42._4_12_ = auVar41._4_12_;
            auVar42._0_4_ = auVar105._0_4_;
            auVar44._0_8_ = auVar42._0_8_;
            auVar44._8_4_ = auVar105._4_4_;
            auVar44._12_4_ = auVar41._12_4_;
            auVar43._8_8_ = auVar44._8_8_;
            auVar43._4_4_ = auVar63._0_4_;
            auVar43._0_4_ = auVar105._0_4_;
            auVar45._0_12_ = auVar43._0_12_;
            auVar45._12_4_ = auVar63._4_4_;
            auVar64._4_12_ = auVar63._4_12_;
            auVar64._0_4_ = auVar105._8_4_;
            auVar66._0_8_ = auVar64._0_8_;
            auVar66._8_4_ = auVar105._12_4_;
            auVar66._12_4_ = auVar63._12_4_;
            auVar65._8_8_ = auVar66._8_8_;
            auVar65._4_4_ = auVar63._8_4_;
            auVar65._0_4_ = auVar105._8_4_;
            auVar67._0_12_ = auVar65._0_12_;
            auVar67._12_4_ = auVar63._12_4_;
            auVar77._4_12_ = auVar76._4_12_;
            auVar77._0_4_ = auVar26._0_4_;
            auVar79._0_8_ = auVar77._0_8_;
            auVar79._8_4_ = auVar26._4_4_;
            auVar79._12_4_ = auVar76._12_4_;
            auVar78._8_8_ = auVar79._8_8_;
            auVar78._4_4_ = auVar57._0_4_;
            auVar78._0_4_ = auVar26._0_4_;
            auVar80._0_12_ = auVar78._0_12_;
            auVar80._12_4_ = auVar57._4_4_;
            auVar107._4_12_ = auVar106._4_12_;
            auVar107._0_4_ = auVar26._4_4_;
            auVar109._0_8_ = auVar107._0_8_;
            auVar109._8_4_ = auVar29._12_4_;
            auVar108._8_8_ = auVar109._8_8_;
            auVar108._4_4_ = auVar57._4_4_;
            auVar108._0_4_ = auVar26._4_4_;
            auVar110._0_12_ = auVar108._0_12_;
            auVar110._12_4_ = auVar57._12_4_;
            auVar116._4_12_ = auVar115._4_12_;
            auVar116._0_4_ = auVar32._8_4_;
            auVar118._12_4_ = auVar115._12_4_;
            auVar118._0_8_ = auVar116._0_8_;
            auVar118._8_4_ = auVar34._12_4_;
            auVar117._8_8_ = auVar118._8_8_;
            auVar117._4_4_ = auVar86._8_4_;
            auVar117._0_4_ = auVar32._8_4_;
            auVar119._0_12_ = auVar117._0_12_;
            auVar119._12_4_ = auVar86._12_4_;
            auVar56 = NEON_ext(auVar55,auVar105,8,1);
            auVar22._0_4_ = auVar28._0_4_ + fVar1 * fVar81;
            auVar22._4_4_ = auVar28._4_4_ + fVar31 * fVar81;
            auVar22._8_4_ = auVar28._8_4_ + fVar2 * fVar81;
            auVar90._12_4_ = auVar28._12_4_;
            auVar22._12_4_ = auVar90._12_4_ + fVar3 * fVar81;
            auVar88._4_12_ = auVar28._4_12_;
            auVar88._0_4_ = auVar32._0_4_;
            auVar90._0_8_ = auVar88._0_8_;
            auVar90._8_4_ = auVar32._4_4_;
            auVar89._8_8_ = auVar90._8_8_;
            auVar89._4_4_ = auVar86._0_4_;
            auVar89._0_4_ = auVar32._0_4_;
            auVar91._0_12_ = auVar89._0_12_;
            auVar91._12_4_ = auVar86._4_4_;
            auVar105 = NEON_ext(auVar119,auVar56,8,1);
            auVar120._4_12_ = auVar119._4_12_;
            auVar120._0_4_ = auVar26._8_4_;
            auVar122._0_8_ = auVar120._0_8_;
            auVar122._8_4_ = auVar29._12_4_;
            auVar122._12_4_ = auVar86._12_4_;
            auVar121._8_8_ = auVar122._8_8_;
            auVar121._4_4_ = auVar57._8_4_;
            auVar121._0_4_ = auVar26._8_4_;
            in_q22._0_12_ = auVar121._0_12_;
            in_q22._12_4_ = auVar57._12_4_;
            auVar96 = NEON_ext(auVar29,auVar80,8,1);
            in_q21 = NEON_ext(auVar29,auVar110,8,1);
            auVar30._12_4_ = auVar57._8_4_;
            auVar30._0_12_ = auVar26;
                    /* try { // try from 00a87fdc to 00b87fe3 has its CatchHandler @ 00a880d8 */
            auVar58._4_12_ = auVar57._4_12_;
            auVar58._0_4_ = auVar32._4_4_;
            auVar60._0_8_ = auVar58._0_8_;
            auVar60._8_4_ = auVar34._12_4_;
            auVar60._12_4_ = auVar57._12_4_;
            auVar59._8_8_ = auVar60._8_8_;
            auVar59._4_4_ = auVar86._4_4_;
            auVar59._0_4_ = auVar32._4_4_;
            auVar61._0_12_ = auVar59._0_12_;
            auVar61._12_4_ = auVar86._12_4_;
                    /* try { // try from 00a87fe4 to 00b88007 has its CatchHandler @ 00a87f74 */
            in_q20 = NEON_ext(auVar34,auVar91,8,1);
            auVar106 = NEON_ext(auVar34,auVar61,8,1);
            auVar35._12_4_ = auVar86._8_4_;
            auVar35._0_12_ = auVar32;
            auVar128._4_12_ = auVar86._4_12_;
            auVar128._0_4_ = auVar74._4_4_;
            auVar24._0_8_ = auVar128._0_8_;
            auVar24._8_4_ = auVar74._12_4_;
            auVar24._12_4_ = auVar86._12_4_;
            auVar23._8_8_ = auVar24._8_8_;
            auVar23._4_4_ = auVar22._4_4_;
            auVar23._0_4_ = auVar74._4_4_;
            auVar25._0_12_ = auVar23._0_12_;
            auVar25._12_4_ = auVar22._12_4_;
            auVar70._4_12_ = auVar69._4_12_;
            auVar70._0_4_ = auVar74._0_4_;
            auVar72._0_8_ = auVar70._0_8_;
            auVar72._8_4_ = auVar74._4_4_;
            auVar72._12_4_ = auVar69._12_4_;
            auVar71._8_8_ = auVar72._8_8_;
            auVar71._4_4_ = auVar22._0_4_;
            auVar71._0_4_ = auVar74._0_4_;
            auVar73._0_12_ = auVar71._0_12_;
            auVar73._12_4_ = auVar22._4_4_;
            auVar56._4_12_ = auVar22._4_12_;
            auVar56._0_4_ = auVar74._8_4_;
            auVar137._0_8_ = auVar56._0_8_;
            auVar137._8_4_ = auVar74._12_4_;
            auVar137._12_4_ = auVar22._12_4_;
            auVar28._8_8_ = auVar137._8_8_;
            auVar28._4_4_ = auVar22._8_4_;
            auVar28._0_4_ = auVar74._8_4_;
            auVar87._0_12_ = auVar28._0_12_;
            auVar87._12_4_ = auVar22._12_4_;
            auVar22 = NEON_ext(auVar25,auVar74,8,1);
            auVar74 = NEON_ext(auVar96,auVar73,8,1);
            auVar96 = NEON_ext(in_q20,auVar45,8,1);
                    /* try { // try from 00a88008 to 00b88013 has its CatchHandler @ 00a880d8 */
            auVar137 = NEON_ext(in_q21,auVar25,8,1);
            auVar106 = NEON_ext(auVar106,auVar55,8,1);
            auVar56 = NEON_ext(in_q22,auVar22,8,1);
                    /* try { // try from 00a88014 to 00b8803b has its CatchHandler @ 00a87f74 */
            auVar22 = NEON_ext(auVar30,auVar87,8,1);
            auVar87 = NEON_ext(auVar35,auVar67,8,1);
            auVar28 = NEON_ext(auVar105,auVar105,8,1);
            auVar74 = NEON_ext(auVar74,auVar74,8,1);
            auVar105 = NEON_ext(auVar96,auVar96,8,1);
            auVar137 = NEON_ext(auVar137,auVar137,8,1);
            auVar96 = NEON_ext(auVar106,auVar106,8,1);
            auVar56 = NEON_ext(auVar56,auVar56,8,1);
            auVar22 = NEON_ext(auVar22,auVar22,8,1);
            auVar87 = NEON_ext(auVar87,auVar87,8,1);
                    /* try { // try from 00a8803c to 00b88043 has its CatchHandler @ 00a880d4 */
            uVar8 = uVar8 - 4;
            *(long *)(pauVar5[4] + 8) = auVar22._8_8_;
            *(long *)pauVar5[4] = auVar22._0_8_;
            *(long *)(pauVar5[5] + 8) = auVar87._8_8_;
            *(long *)pauVar5[5] = auVar87._0_8_;
                    /* try { // try from 00a88044 to 00b88063 has its CatchHandler @ 00a87f74 */
            *(long *)(pauVar5[6] + 8) = auVar56._8_8_;
            *(long *)pauVar5[6] = auVar56._0_8_;
            *(long *)(pauVar5[7] + 8) = auVar28._8_8_;
            *(long *)pauVar5[7] = auVar28._0_8_;
            *(long *)(pauVar5[2] + 8) = auVar137._8_8_;
            *(long *)pauVar5[2] = auVar137._0_8_;
            *(long *)(pauVar5[3] + 8) = auVar96._8_8_;
            *(long *)pauVar5[3] = auVar96._0_8_;
            *(long *)(*pauVar5 + 8) = auVar74._8_8_;
            *(long *)*pauVar5 = auVar74._0_8_;
            *(long *)(pauVar5[1] + 8) = auVar105._8_8_;
            *(long *)pauVar5[1] = auVar105._0_8_;
            pauVar5 = pauVar5 + 8;
            pfVar6 = pfVar6 + 4;
          } while (uVar8 != 0);
          bVar4 = uVar16 == param_2;
          param_3 = param_3 + uVar16;
          param_2 = param_2 - uVar16;
          param_1 = param_1 + uVar16 * 8;
          if (bVar4) {
            return;
          }
        }
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
                    /* try { // try from 00a87d18 to 00b87d1f has its CatchHandler @ 00a87d30 */
      param_1[1] = param_1[1] + *param_3 * param_5[1];
                    /* try { // try from 00a87d20 to 00b87d43 has its CatchHandler @ 00a87ce0 */
                    /* catch() { ... } // from try @ 00a87d18 with catch @ 00a87d30 */
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_1[3] = param_1[3] + *param_3 * param_5[3];
      param_1[4] = param_1[4] + *param_3 * param_5[4];
      param_1[5] = param_1[5] + *param_3 * param_5[5];
      param_1[6] = param_1[6] + *param_3 * param_5[6];
                    /* try { // try from 00a87da0 to 00b87deb has its CatchHandler @ 00a87da0
                       catch() { ... } // from try @ 00a87da0 with catch @ 00a87da0
                       catch() { ... } // from try @ 00a87e64 with catch @ 00a87da0 */
      param_1[7] = param_1[7] + *param_3 * param_5[7];
      param_3 = param_3 + 1;
      param_1 = param_1 + 8;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a87a00 to 00b87a07 has its CatchHandler @ 00a87a6c */
                    /* try { // try from 00a87a08 to 00b87a8b has its CatchHandler @ 00a8791c */
    do {
      fVar31 = *param_3;
      fVar81 = -0.5;
      fVar1 = 0.5;
      if (fVar31 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar31) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar31 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar81;
        }
        iVar7 = (int)(fVar2 + fVar31 * 1.3421773e+08);
      }
      *param_1 = fVar31 * *param_5 + *param_1;
      fVar31 = *param_3;
      if (fVar31 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a87a00 with catch @ 00a87a6c */
                    /* catch() { ... } // from try @ 00a879cc with catch @ 00a87a70 */
        if (16.0 <= fVar31) {
          iVar9 = 0x7fffffff;
        }
        else {
          fVar2 = fVar1;
          if (fVar31 * 1.3421773e+08 <= 0.0) {
            fVar2 = fVar81;
          }
          iVar9 = (int)(fVar2 + fVar31 * 1.3421773e+08);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a87afc with catch @ 00a87a8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a87b2c with catch @ 00a87a8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a87b5c with catch @ 00a87a8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a87b84 with catch @ 00a87a8c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a87bb0 with catch @ 00a87a8c
                        */
        }
      }
      param_1[1] = fVar31 * param_5[1] + param_1[1];
      fVar31 = *param_3;
      if (fVar31 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar31) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar31 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar81;
        }
        iVar10 = (int)(fVar2 + fVar31 * 1.3421773e+08);
      }
                    /* try { // try from 00a87af4 to 00b87afb has its CatchHandler @ 00a87bf0 */
                    /* try { // try from 00a87afc to 00b87b1f has its CatchHandler @ 00a87a8c */
      param_1[2] = fVar31 * param_5[2] + param_1[2];
      fVar31 = *param_3;
      if (fVar31 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar31) {
        iVar11 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a87b20 to 00b87b2b has its CatchHandler @ 00a87bf0 */
        fVar2 = fVar1;
        if (fVar31 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar81;
        }
                    /* try { // try from 00a87b2c to 00b87b53 has its CatchHandler @ 00a87a8c */
        iVar11 = (int)(fVar2 + fVar31 * 1.3421773e+08);
      }
                    /* try { // try from 00a87b54 to 00b87b5b has its CatchHandler @ 00a87bec */
      param_1[3] = fVar31 * param_5[3] + param_1[3];
      fVar31 = *param_3;
                    /* try { // try from 00a87b5c to 00b87b7b has its CatchHandler @ 00a87a8c */
      if (fVar31 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar31) {
        iVar12 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a87b7c to 00b87b83 has its CatchHandler @ 00a87bec */
        fVar2 = fVar1;
        if (fVar31 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar81;
        }
                    /* try { // try from 00a87b84 to 00b87ba3 has its CatchHandler @ 00a87a8c */
        iVar12 = (int)(fVar2 + fVar31 * 1.3421773e+08);
      }
                    /* try { // try from 00a87ba4 to 00b87baf has its CatchHandler @ 00a87bec */
      param_1[4] = fVar31 * param_5[4] + param_1[4];
      fVar31 = *param_3;
                    /* try { // try from 00a87bb0 to 00b87bf3 has its CatchHandler @ 00a87a8c */
      if (fVar31 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar31) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar31 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar81;
        }
        iVar13 = (int)(fVar2 + fVar31 * 1.3421773e+08);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a87b54 with catch @ 00a87bec
                       catch(type#1 @ 00000000) { ... } // from try @ 00a87b7c with catch @ 00a87bec
                       catch(type#1 @ 00000000) { ... } // from try @ 00a87ba4 with catch @ 00a87bec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a87af4 with catch @ 00a87bf0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a87b20 with catch @ 00a87bf0
                        */
      param_1[5] = fVar31 * param_5[5] + param_1[5];
      fVar31 = *param_3;
      if (fVar31 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar31) {
        iVar14 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar31 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar81;
        }
        iVar14 = (int)(fVar2 + fVar31 * 1.3421773e+08);
      }
      param_1[6] = fVar31 * param_5[6] + param_1[6];
      fVar31 = *param_3;
                    /* try { // try from 00a87c60 to 00b87c93 has its CatchHandler @ 00a87c60
                       catch() { ... } // from try @ 00a87c60 with catch @ 00a87c60
                       catch() { ... } // from try @ 00a87ca8 with catch @ 00a87c60 */
      if (fVar31 <= -16.0) {
        iVar15 = -0x80000000;
      }
      else if (16.0 <= fVar31) {
        iVar15 = 0x7fffffff;
      }
      else {
        if (fVar31 * 1.3421773e+08 <= 0.0) {
          fVar1 = fVar81;
        }
        iVar15 = (int)(fVar1 + fVar31 * 1.3421773e+08);
      }
                    /* try { // try from 00a87c94 to 00b87c9b has its CatchHandler @ 00a87ccc */
      iVar15 = iVar15 + iVar14 + iVar13 + iVar12 + iVar11 + iVar10 + iVar9 + iVar7;
                    /* try { // try from 00a87ca4 to 00b87ca7 has its CatchHandler @ 00a87cbc */
                    /* try { // try from 00a87ca8 to 00b87cdf has its CatchHandler @ 00a87c60 */
      param_1[7] = fVar31 * param_5[7] + param_1[7];
      iVar7 = iVar15 + 7;
      if (-1 < iVar15) {
        iVar7 = iVar15;
      }
                    /* catch() { ... } // from try @ 00a87ca4 with catch @ 00a87cbc */
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar7 >> 0xf) * (int)param_6;
                    /* catch() { ... } // from try @ 00a87c94 with catch @ 00a87ccc */
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

