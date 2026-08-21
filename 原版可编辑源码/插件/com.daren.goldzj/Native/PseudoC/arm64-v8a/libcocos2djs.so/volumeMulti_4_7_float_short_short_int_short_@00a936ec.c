
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::volumeMulti<4, 7, float, short, short, int, short>(float*, unsigned long, short
   const*, int*, short const*, short) */

void cocos2d::volumeMulti<4,7,float,short,short,int,short>
               (float *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  float fVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  float *pfVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined2 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  undefined1 auVar47 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  int iVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar59;
  undefined8 uVar60;
  undefined1 auVar61 [16];
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar68;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar108 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar50 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar105 [16];
  undefined1 auVar109 [16];
  undefined1 auVar106 [16];
  undefined1 auVar110 [16];
  undefined1 auVar107 [16];
  undefined1 auVar111 [16];
  
  auVar13 = _DAT_0189cd80;
  auVar12 = _DAT_0189cd70;
  auVar11 = _DAT_0189cd60;
  auVar10 = _DAT_0189cd50;
  auVar9 = _DAT_0189cd40;
  auVar32 = _DAT_0189cd30;
  auVar33 = _DAT_0189cd20;
  auVar8 = _DAT_0189cd10;
  fVar4 = (float)(int)*param_5;
  if (param_4 == (int *)0x0) {
    do {
      uVar31 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      auVar33._0_4_ = (int)(short)uVar31;
      auVar33._4_4_ = (int)(short)((ulong)uVar31 >> 0x10);
      auVar33._8_4_ = (int)(short)((ulong)uVar31 >> 0x20);
      auVar33._12_4_ = (int)(short)((ulong)uVar31 >> 0x30);
      auVar33 = NEON_scvtf(auVar33,4);
      param_1[2] = fVar4 * auVar33._8_4_ * 7.450581e-09;
      param_1[3] = fVar4 * auVar33._12_4_ * 7.450581e-09;
      *param_1 = fVar4 * auVar33._0_4_ * 7.450581e-09;
      param_1[1] = fVar4 * auVar33._4_4_ * 7.450581e-09;
                    /* try { // try from 00a93814 to 00b9381b has its CatchHandler @ 00a93b78 */
                    /* try { // try from 00a93820 to 00b9384f has its CatchHandler @ 00a93bbc */
      param_1[4] = (float)(int)param_3[4] * fVar4 * 7.450581e-09;
      param_1[5] = (float)(int)param_3[5] * fVar4 * 7.450581e-09;
      psVar1 = param_3 + 6;
      param_3 = param_3 + 7;
                    /* try { // try from 00a9385c to 00b9386b has its CatchHandler @ 00a93b2c */
      param_1[6] = (float)(int)*psVar1 * fVar4 * 7.450581e-09;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
    iVar2 = (int)param_6;
    if (3 < param_2) {
      auVar69._8_8_ = 0;
      auVar69._0_8_ = param_2 - 1;
                    /* try { // try from 00a93878 to 00b9387f has its CatchHandler @ 00a93b14 */
      uVar17 = (param_2 - 1) * 0x1c;
                    /* try { // try from 00a93890 to 00b938a7 has its CatchHandler @ 00a93bbc */
                    /* try { // try from 00a938f4 to 00b938ff has its CatchHandler @ 00a93b14 */
      if (((((uVar17 < ~(ulong)(param_1 + 5) || uVar17 - ~(ulong)(param_1 + 5) == 0) &&
            (SUB168(auVar69 * ZEXT816(0x1c),8) == 0)) &&
           (uVar17 < ~(ulong)(param_1 + 6) || uVar17 - ~(ulong)(param_1 + 6) == 0)) &&
          ((uVar17 < ~(ulong)(param_1 + 4) || uVar17 - ~(ulong)(param_1 + 4) == 0 &&
           (uVar17 < ~(ulong)(param_1 + 3) || uVar17 - ~(ulong)(param_1 + 3) == 0)))) &&
         ((uVar17 < ~(ulong)(param_1 + 2) || uVar17 - ~(ulong)(param_1 + 2) == 0 &&
          ((uVar17 < ~(ulong)(param_1 + 1) || uVar17 - ~(ulong)(param_1 + 1) == 0 &&
           (uVar17 < ~(ulong)param_1 || uVar17 - ~(ulong)param_1 == 0)))))) {
                    /* try { // try from 00a93914 to 00b93923 has its CatchHandler @ 00a93b30 */
                    /* try { // try from 00a93928 to 00b93937 has its CatchHandler @ 00a93afc */
                    /* try { // try from 00a93938 to 00b9394b has its CatchHandler @ 00a93aec */
        uVar18 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a93960 to 00b93967 has its CatchHandler @ 00a93adc */
                    /* try { // try from 00a93974 to 00b93993 has its CatchHandler @ 00a93ae0 */
        psVar1 = param_3 + uVar18 * 7;
        pfVar15 = param_1;
        piVar16 = param_4;
        uVar17 = uVar18;
        do {
          auVar48._0_8_ = *(ulong *)*(undefined1 (*) [16])((long)param_3 + 0x30);
          auVar48._8_8_ = 0;
          auVar69 = *(undefined1 (*) [16])((long)param_3 + 0x10);
          pauVar3 = (undefined1 (*) [16])((long)param_3 + 0x20);
          uVar31 = *(undefined8 *)(*(undefined1 (*) [16])((long)param_3 + 0x20) + 8);
          sVar45 = (short)((ulong)uVar31 >> 0x10);
          sVar46 = (short)((ulong)uVar31 >> 0x20);
          uVar36 = (undefined2)((ulong)uVar31 >> 0x30);
          auVar66 = *(undefined1 (*) [16])param_3;
                    /* try { // try from 00a9399c to 00b939a7 has its CatchHandler @ 00a93ad8 */
          uVar17 = uVar17 - 4;
          auVar34._12_4_ = 0xfffefffe;
          auVar34._0_12_ = auVar8;
          auVar65 = a64_TBL(ZEXT816(0),auVar66,auVar69,auVar34);
          auVar37._10_2_ = sVar45;
          auVar37._0_10_ = *(unkbyte10 *)*pauVar3;
          auVar37._12_2_ = sVar46;
          auVar37._14_2_ = uVar36;
          auVar63._10_2_ = sVar45;
          auVar63._0_10_ = *(unkbyte10 *)*pauVar3;
          auVar63._12_2_ = sVar46;
          auVar63._14_2_ = uVar36;
                    /* try { // try from 00a939a8 to 00b939bb has its CatchHandler @ 00a93ac8 */
          auVar83 = NEON_ext(auVar37,auVar63,8,1);
          auVar76 = a64_TBL(ZEXT816(0),auVar66,auVar69,auVar33);
          auVar100 = a64_TBL(ZEXT816(0),auVar66,auVar69,auVar32);
          auVar94._10_2_ = sVar45;
          auVar94._0_10_ = *(unkbyte10 *)*pauVar3;
          auVar94._12_2_ = sVar46;
          auVar94._14_2_ = uVar36;
          auVar34 = a64_TBL(ZEXT816(0),auVar94,auVar48,auVar9);
          auVar37 = a64_TBL(ZEXT816(0),auVar66,auVar69,auVar11);
          auVar95._10_2_ = sVar45;
          auVar95._0_10_ = *(unkbyte10 *)*pauVar3;
          auVar95._12_2_ = sVar46;
          auVar95._14_2_ = uVar36;
          auVar63 = a64_TBL(ZEXT816(0),auVar95,auVar48,auVar12);
                    /* try { // try from 00a939cc to 00b939e3 has its CatchHandler @ 00a93b34 */
          auVar84._6_10_ = auVar83._6_10_;
          auVar84._0_4_ = auVar83._0_4_;
          auVar84._4_2_ = (short)*(undefined8 *)*pauVar3;
          auVar92._2_14_ = auVar69._2_14_;
          auVar92._0_2_ = auVar66._4_2_;
          auVar83 = a64_TBL(ZEXT816(0),auVar66,auVar69,auVar10);
          auVar69 = a64_TBL(ZEXT816(0),auVar66,auVar69,auVar13);
          uVar53 = NEON_ext(auVar34._0_8_,auVar100._0_8_,4,1);
          uVar60 = NEON_ext(auVar63._0_8_,auVar37._0_8_,4,1);
          uVar62 = NEON_ext(auVar84._0_8_,auVar92._0_8_,4,1);
          uVar53 = NEON_ext(uVar53,uVar53,4,1);
          uVar82 = NEON_ext(CONCAT26((short)(auVar48._0_8_ >> 0x10),(int6)*(undefined8 *)*pauVar3),
                            auVar83._0_8_,4,1);
          uVar60 = NEON_ext(uVar60,uVar60,4,1);
          uVar31 = NEON_ext(CONCAT26((short)(auVar48._0_8_ >> 0x30),
                                     CONCAT24((short)uVar31,(int)auVar48._0_8_)),auVar69._0_8_,4,1);
          auVar49._0_4_ = (int)auVar65._0_2_;
          auVar49._4_4_ = (int)auVar65._2_2_;
          auVar49._8_4_ = (int)auVar65._4_2_;
          auVar49._12_4_ = (int)sVar45;
          uVar62 = NEON_ext(uVar62,uVar62,4,1);
          auVar70._0_4_ = (int)auVar76._0_2_;
          auVar70._4_4_ = (int)auVar76._2_2_;
          auVar70._8_4_ = (int)auVar76._4_2_;
          auVar70._12_4_ = (int)sVar46;
          uVar82 = NEON_ext(uVar82,uVar82,4,1);
          uVar31 = NEON_ext(uVar31,uVar31,4,1);
          sVar42 = (short)((ulong)uVar31 >> 0x10);
          sVar43 = (short)((ulong)uVar31 >> 0x20);
          sVar44 = (short)((ulong)uVar31 >> 0x30);
          auVar85._0_4_ = (int)(short)uVar53;
          sVar20 = (short)((ulong)uVar53 >> 0x10);
          auVar85._4_4_ = (int)sVar20;
          sVar23 = (short)((ulong)uVar53 >> 0x20);
          auVar85._8_4_ = (int)sVar23;
          sVar27 = (short)((ulong)uVar53 >> 0x30);
          auVar85._12_4_ = (int)sVar27;
          auVar93._0_4_ = (int)(short)uVar60;
          sVar21 = (short)((ulong)uVar60 >> 0x10);
          auVar93._4_4_ = (int)sVar21;
          sVar24 = (short)((ulong)uVar60 >> 0x20);
          auVar93._8_4_ = (int)sVar24;
          sVar28 = (short)((ulong)uVar60 >> 0x30);
          auVar93._12_4_ = (int)sVar28;
          auVar101._0_4_ = (int)(short)uVar62;
          sVar22 = (short)((ulong)uVar62 >> 0x10);
          auVar101._4_4_ = (int)sVar22;
          sVar25 = (short)((ulong)uVar62 >> 0x20);
          auVar101._8_4_ = (int)sVar25;
          sVar29 = (short)((ulong)uVar62 >> 0x30);
          auVar101._12_4_ = (int)sVar29;
          auVar34 = NEON_scvtf(auVar85,4);
          auVar86._0_4_ = (int)(short)uVar82;
          sVar19 = (short)((ulong)uVar82 >> 0x10);
          auVar86._4_4_ = (int)sVar19;
          sVar26 = (short)((ulong)uVar82 >> 0x20);
          auVar86._8_4_ = (int)sVar26;
          sVar30 = (short)((ulong)uVar82 >> 0x30);
          auVar86._12_4_ = (int)sVar30;
          auVar94 = NEON_scvtf(auVar93,4);
          auVar100._0_4_ = (int)(short)uVar31;
          auVar100._4_4_ = (int)sVar42;
          auVar100._8_4_ = (int)sVar43;
          auVar100._12_4_ = (int)sVar44;
          auVar102 = NEON_scvtf(auVar101,4);
          auVar69 = NEON_scvtf(auVar49,4);
          auVar63 = NEON_scvtf(auVar70,4);
          auVar66 = NEON_scvtf(auVar86,4);
          auVar95 = NEON_scvtf(auVar100,4);
                    /* try { // try from 00a93a5c to 00b93a63 has its CatchHandler @ 00a93aac */
                    /* try { // try from 00a93a64 to 00b93a87 has its CatchHandler @ 00a93730 */
          auVar64._0_4_ = fVar4 * auVar34._0_4_ * 7.450581e-09;
          auVar64._4_4_ = fVar4 * auVar34._4_4_ * 7.450581e-09;
          auVar64._8_4_ = fVar4 * auVar34._8_4_ * 7.450581e-09;
          auVar64._12_4_ = fVar4 * auVar34._12_4_ * 7.450581e-09;
          auVar77._0_4_ = fVar4 * auVar94._0_4_ * 7.450581e-09;
          auVar77._4_4_ = fVar4 * auVar94._4_4_ * 7.450581e-09;
          auVar77._8_4_ = fVar4 * auVar94._8_4_ * 7.450581e-09;
          auVar77._12_4_ = fVar4 * auVar94._12_4_ * 7.450581e-09;
          auVar87._0_4_ = fVar4 * auVar95._0_4_;
          auVar87._4_4_ = fVar4 * auVar95._4_4_;
          auVar87._8_4_ = fVar4 * auVar95._8_4_;
          auVar98._12_4_ = auVar95._12_4_;
          auVar87._12_4_ = fVar4 * auVar98._12_4_;
          auVar103._0_4_ = fVar4 * auVar102._0_4_ * 7.450581e-09;
          auVar103._4_4_ = fVar4 * auVar102._4_4_ * 7.450581e-09;
          auVar103._8_4_ = fVar4 * auVar102._8_4_ * 7.450581e-09;
          auVar103._12_4_ = fVar4 * auVar102._12_4_ * 7.450581e-09;
          auVar54._0_4_ =
               (int)auVar76._0_2_ + (int)auVar65._0_2_ + (int)(short)uVar62 + (int)(short)uVar53 +
               (int)(short)uVar82 + (int)(short)uVar60;
          auVar54._4_4_ =
               (int)auVar76._2_2_ + (int)auVar65._2_2_ + (int)sVar22 + (int)sVar20 + (int)sVar19 +
               (int)sVar21;
          auVar54._8_4_ =
               (int)auVar76._4_2_ + (int)auVar65._4_2_ + (int)sVar25 + (int)sVar23 + (int)sVar26 +
               (int)sVar24;
          auVar54._12_4_ =
               (int)sVar46 + (int)sVar45 + (int)sVar29 + (int)sVar27 + (int)sVar30 + (int)sVar28;
          auVar47._0_4_ = fVar4 * auVar69._0_4_ * 7.450581e-09;
          auVar47._4_4_ = fVar4 * auVar69._4_4_ * 7.450581e-09;
          auVar47._8_4_ = fVar4 * auVar69._8_4_ * 7.450581e-09;
          auVar50._12_4_ = fVar4 * auVar69._12_4_ * 7.450581e-09;
          auVar50._0_12_ = auVar47;
                    /* try { // try from 00a93a88 to 00b93a93 has its CatchHandler @ 00a93ab0 */
          auVar71._0_4_ = fVar4 * auVar63._0_4_ * 7.450581e-09;
          auVar71._4_4_ = fVar4 * auVar63._4_4_ * 7.450581e-09;
          auVar71._8_4_ = fVar4 * auVar63._8_4_ * 7.450581e-09;
          auVar71._12_4_ = fVar4 * auVar63._12_4_ * 7.450581e-09;
          auVar67._0_4_ = fVar4 * auVar66._0_4_ * 7.450581e-09;
          auVar67._4_4_ = fVar4 * auVar66._4_4_ * 7.450581e-09;
          auVar67._8_4_ = fVar4 * auVar66._8_4_ * 7.450581e-09;
          fVar68 = fVar4 * auVar66._12_4_ * 7.450581e-09;
          auVar61._0_4_ = auVar87._0_4_ * 7.450581e-09;
          auVar61._4_4_ = auVar87._4_4_ * 7.450581e-09;
          auVar61._8_4_ = auVar87._8_4_ * 7.450581e-09;
          auVar61._12_4_ = auVar87._12_4_ * 7.450581e-09;
                    /* try { // try from 00a93a94 to 00b93be7 has its CatchHandler @ 00a93730 */
          uVar5 = auVar54._0_4_ + (short)uVar31;
          auVar55._4_12_ = auVar54._4_12_;
          auVar55._0_4_ = auVar103._0_4_;
          auVar57._0_8_ = auVar55._0_8_;
          auVar57._8_4_ = auVar103._4_4_;
          auVar57._12_4_ = auVar54._12_4_;
          auVar56._8_8_ = auVar57._8_8_;
          auVar56._4_4_ = auVar64._0_4_;
          auVar56._0_4_ = auVar103._0_4_;
          auVar58._0_12_ = auVar56._0_12_;
          auVar58._12_4_ = auVar64._4_4_;
          auVar96._4_12_ = auVar95._4_12_;
          auVar96._0_4_ = auVar47._0_4_;
          auVar98._0_8_ = auVar96._0_8_;
          auVar98._8_4_ = auVar47._4_4_;
          auVar97._8_8_ = auVar98._8_8_;
          auVar97._4_4_ = auVar71._0_4_;
          auVar97._0_4_ = auVar47._0_4_;
          auVar99._0_12_ = auVar97._0_12_;
          auVar99._12_4_ = auVar71._4_4_;
          auVar88._4_12_ = auVar87._4_12_;
          auVar88._0_4_ = auVar67._0_4_;
          auVar90._0_8_ = auVar88._0_8_;
          auVar90._8_4_ = auVar67._4_4_;
          auVar90._12_4_ = auVar87._12_4_;
          auVar89._8_8_ = auVar90._8_8_;
          auVar89._4_4_ = auVar77._0_4_;
          auVar89._0_4_ = auVar67._0_4_;
          auVar91._0_12_ = auVar89._0_12_;
          auVar91._12_4_ = auVar77._4_4_;
          auVar69 = NEON_ext(auVar50,auVar61,4,1);
          auVar65._4_12_ = auVar83._4_12_;
          auVar65._0_4_ = auVar71._4_4_;
          auVar102._12_4_ = auVar83._12_4_;
          auVar102._0_8_ = auVar65._0_8_;
          auVar102._8_4_ = auVar71._12_4_;
          auVar76._8_8_ = auVar102._8_8_;
          auVar76._4_4_ = auVar103._4_4_;
          auVar76._0_4_ = auVar71._4_4_;
          auVar35._0_12_ = auVar76._0_12_;
          auVar35._12_4_ = auVar103._12_4_;
                    /* catch() { ... } // from try @ 00a93a5c with catch @ 00a93aac */
          uVar36 = (undefined2)((uint)auVar67._4_4_ >> 0x10);
          auVar67._12_4_ = auVar77._8_4_;
                    /* catch() { ... } // from try @ 00a93a88 with catch @ 00a93ab0 */
          auVar38._4_12_ = auVar37._4_12_;
          auVar38._0_4_ = auVar47._8_4_;
          auVar40._12_4_ = auVar37._12_4_;
          auVar40._0_8_ = auVar38._0_8_;
          auVar40._8_4_ = auVar50._12_4_;
          auVar39._8_8_ = auVar40._8_8_;
          auVar39._4_4_ = auVar61._8_4_;
          auVar39._0_4_ = auVar47._8_4_;
          auVar41._0_12_ = auVar39._0_12_;
          auVar41._12_4_ = auVar61._12_4_;
          auVar51._12_4_ = auVar71._8_4_;
          auVar51._0_12_ = auVar47;
          auVar72._4_12_ = auVar71._4_12_;
          auVar72._0_4_ = auVar71._8_4_;
          auVar74._0_8_ = auVar72._0_8_;
          auVar74._8_4_ = auVar71._12_4_;
          auVar74._12_4_ = auVar71._12_4_;
          auVar73._8_8_ = auVar74._8_8_;
          auVar73._4_4_ = auVar103._8_4_;
          auVar73._0_4_ = auVar71._8_4_;
          auVar75._0_12_ = auVar73._0_12_;
          auVar75._12_4_ = auVar103._12_4_;
          auVar37 = NEON_ext(auVar103,auVar58,8,1);
          auVar104._4_12_ = auVar103._4_12_;
          auVar104._0_4_ = auVar103._8_4_;
          auVar106._0_8_ = auVar104._0_8_;
          auVar106._8_4_ = auVar103._12_4_;
          auVar106._12_4_ = auVar103._12_4_;
          auVar105._8_8_ = auVar106._8_8_;
          auVar105._4_4_ = auVar64._8_4_;
          auVar105._0_4_ = auVar103._8_4_;
          auVar107._0_12_ = auVar105._0_12_;
          auVar107._12_4_ = auVar64._12_4_;
                    /* catch() { ... } // from try @ 00a939a8 with catch @ 00a93ac8 */
          auVar95 = NEON_ext(auVar67,auVar107,8,1);
          auVar108._4_12_ = auVar107._4_12_;
          auVar108._0_4_ = auVar77._8_4_;
          auVar110._0_8_ = auVar108._0_8_;
          auVar110._8_4_ = auVar77._12_4_;
          auVar110._12_4_ = auVar64._12_4_;
          auVar109._8_8_ = auVar110._8_8_;
          auVar109._4_4_ = auVar61._8_4_;
          auVar109._0_4_ = auVar77._8_4_;
          auVar111._0_12_ = auVar109._0_12_;
          auVar111._12_4_ = auVar61._12_4_;
          auVar78._4_12_ = auVar77._4_12_;
          auVar78._0_4_ = auVar77._4_4_;
          auVar80._0_8_ = auVar78._0_8_;
          auVar80._8_4_ = auVar77._12_4_;
          auVar80._12_4_ = auVar77._12_4_;
          auVar79._8_8_ = auVar80._8_8_;
          auVar79._4_4_ = auVar61._4_4_;
          auVar79._0_4_ = auVar77._4_4_;
          auVar81._0_12_ = auVar79._0_12_;
          auVar81._12_4_ = auVar61._12_4_;
          auVar63 = NEON_ext(auVar41,auVar61,4,1);
          auVar66._4_2_ = SUB42(auVar67._4_4_,0);
          auVar66._0_4_ = auVar64._4_4_;
          auVar66._6_2_ = uVar36;
          auVar66._8_4_ = auVar64._12_4_;
          auVar66._12_4_ = fVar68;
                    /* catch() { ... } // from try @ 00a9399c with catch @ 00a93ad8 */
          auVar34 = NEON_ext(auVar64,auVar66,8,1);
          auVar83._4_2_ = SUB42(auVar67._4_4_,0);
          auVar83._0_4_ = auVar64._4_4_;
          auVar83._6_2_ = uVar36;
          auVar83._8_4_ = auVar64._12_4_;
          auVar83._12_4_ = fVar68;
                    /* catch() { ... } // from try @ 00a93960 with catch @ 00a93adc */
          auVar94 = NEON_ext(auVar83,auVar64,8,1);
                    /* catch() { ... } // from try @ 00a93974 with catch @ 00a93ae0 */
          auVar66 = NEON_ext(auVar51,auVar81,8,1);
          auVar69 = NEON_ext(auVar69,auVar69,4,1);
          iVar52 = uVar5 * 0x1000;
          iVar6 = (auVar54._8_4_ + sVar43) * 0x1000;
          iVar59 = (auVar54._12_4_ + sVar44) * 0x1000;
                    /* catch() { ... } // from try @ 00a93938 with catch @ 00a93aec */
          auVar83 = NEON_ext(auVar37,auVar99,8,1);
          auVar100 = NEON_ext(auVar69,auVar91,8,1);
          auVar65 = NEON_ext(auVar34,auVar35,8,1);
          auVar37 = NEON_ext(auVar75,auVar63,8,1);
                    /* catch() { ... } // from try @ 00a93928 with catch @ 00a93afc */
          auVar63 = NEON_ext(auVar111,auVar94,8,1);
          auVar94 = NEON_ext(auVar95,auVar95,8,1);
          auVar69 = NEON_ext(auVar66,auVar66,8,1);
          auVar34 = NEON_ext(auVar83,auVar83,8,1);
                    /* catch() { ... } // from try @ 00a93878 with catch @ 00a93b14
                       catch() { ... } // from try @ 00a938f4 with catch @ 00a93b14 */
          auVar95 = NEON_ext(auVar100,auVar100,8,1);
          auVar100 = NEON_ext(auVar65,auVar65,8,1);
          auVar66 = NEON_ext(auVar37,auVar37,8,1);
          auVar83 = NEON_ext(auVar63,auVar63,8,1);
          *(long *)(pfVar15 + 10) = auVar100._8_8_;
          *(long *)(pfVar15 + 8) = auVar100._0_8_;
          *(long *)(pfVar15 + 0xe) = auVar69._8_8_;
          *(long *)(pfVar15 + 0xc) = auVar69._0_8_;
                    /* catch() { ... } // from try @ 00a9385c with catch @ 00a93b2c */
          *(long *)(pfVar15 + 0x16) = auVar66._8_8_;
          *(long *)(pfVar15 + 0x14) = auVar66._0_8_;
          *(long *)(pfVar15 + 0x1a) = auVar83._8_8_;
          *(long *)(pfVar15 + 0x18) = auVar83._0_8_;
                    /* catch() { ... } // from try @ 00a93914 with catch @ 00a93b30 */
          *(long *)(pfVar15 + 0x12) = auVar94._8_8_;
          *(long *)(pfVar15 + 0x10) = auVar94._0_8_;
                    /* catch() { ... } // from try @ 00a939cc with catch @ 00a93b34 */
          *(long *)(pfVar15 + 2) = auVar34._8_8_;
          *(long *)pfVar15 = auVar34._0_8_;
          *(long *)(pfVar15 + 6) = auVar95._8_8_;
          *(long *)(pfVar15 + 4) = auVar95._0_8_;
          iVar59 = (int)((ulong)((long)(int)(CONCAT26((short)((uint)iVar59 >> 0x10),
                                                      CONCAT24((short)iVar59,iVar6)) >> 0x20) *
                                -0x6db6db6d) >> 0x20) + iVar59;
          iVar7 = ((auVar54._4_4_ + sVar42) * 0x1000) / 7;
          iVar6 = iVar6 / 7;
          iVar52 = iVar52 / 7 + (iVar52 >> 0x1f) + ((uVar5 & 0xfffff) >> 0x13);
          iVar59 = (iVar59 >> 2) - (iVar59 >> 0x1f);
          piVar16[2] = piVar16[2] + CONCAT22((short)(iVar6 >> 0x1c),(short)(iVar6 >> 0xc)) * iVar2;
          piVar16[3] = piVar16[3] + CONCAT22((short)(iVar59 >> 0x1c),(short)(iVar59 >> 0xc)) * iVar2
          ;
          *piVar16 = *piVar16 + CONCAT22((short)(iVar52 >> 0x1c),(short)(iVar52 >> 0xc)) * iVar2;
          piVar16[1] = piVar16[1] + CONCAT22((short)(iVar7 >> 0x1c),(short)(iVar7 >> 0xc)) * iVar2;
          param_3 = (short *)(*(undefined1 (*) [16])((long)param_3 + 0x30) + 8);
          pfVar15 = pfVar15 + 0x1c;
          piVar16 = piVar16 + 4;
        } while (uVar17 != 0);
        bVar14 = uVar18 == param_2;
        param_3 = psVar1;
        param_4 = param_4 + uVar18;
        param_2 = param_2 - uVar18;
        param_1 = param_1 + uVar18 * 7;
        if (bVar14) {
          return;
        }
      }
    }
    do {
                    /* try { // try from 00a93730 to 00b9378b has its CatchHandler @ 00a93730
                       catch() { ... } // from try @ 00a93730 with catch @ 00a93730
                       catch() { ... } // from try @ 00a93a64 with catch @ 00a93730
                       catch() { ... } // from try @ 00a93a94 with catch @ 00a93730 */
      uVar31 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      auVar32._0_4_ = (int)(short)uVar31;
      sVar19 = (short)((ulong)uVar31 >> 0x10);
      auVar32._4_4_ = (int)sVar19;
      sVar23 = (short)((ulong)uVar31 >> 0x20);
      auVar32._8_4_ = (int)sVar23;
      sVar24 = (short)((ulong)uVar31 >> 0x30);
      auVar32._12_4_ = (int)sVar24;
      auVar33 = NEON_scvtf(auVar32,4);
      param_1[2] = fVar4 * auVar33._8_4_ * 7.450581e-09;
      param_1[3] = fVar4 * auVar33._12_4_ * 7.450581e-09;
      *param_1 = fVar4 * auVar33._0_4_ * 7.450581e-09;
      param_1[1] = fVar4 * auVar33._4_4_ * 7.450581e-09;
      sVar20 = param_3[4];
      param_1[4] = (float)(int)sVar20 * fVar4 * 7.450581e-09;
      sVar21 = param_3[5];
      param_1[5] = (float)(int)sVar21 * fVar4 * 7.450581e-09;
                    /* try { // try from 00a9378c to 00b93793 has its CatchHandler @ 00a93ba4 */
      sVar22 = param_3[6];
                    /* try { // try from 00a93798 to 00b9379b has its CatchHandler @ 00a93b9c */
                    /* try { // try from 00a937a8 to 00b937b7 has its CatchHandler @ 00a93bb4 */
                    /* try { // try from 00a937bc to 00b937cb has its CatchHandler @ 00a93b94 */
      param_1[6] = (float)(int)sVar22 * fVar4 * 7.450581e-09;
                    /* try { // try from 00a937cc to 00b937df has its CatchHandler @ 00a93b88 */
      *param_4 = *param_4 +
                 ((((int)sVar19 + (int)(short)uVar31 + (int)sVar23 + (int)sVar24 + (int)sVar20 +
                    (int)sVar21 + (int)sVar22) * 0x1000) / 7 >> 0xc) * iVar2;
      param_3 = param_3 + 7;
      param_4 = param_4 + 1;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x0189cd10) is written */
                    /* WARNING: Read-only address (ram,0x0189cd20) is written */
                    /* WARNING: Read-only address (ram,0x0189cd30) is written */
                    /* WARNING: Read-only address (ram,0x0189cd40) is written */
                    /* WARNING: Read-only address (ram,0x0189cd50) is written */
                    /* WARNING: Read-only address (ram,0x0189cd60) is written */
                    /* WARNING: Read-only address (ram,0x0189cd70) is written */
                    /* WARNING: Read-only address (ram,0x0189cd80) is written */
  return;
}

