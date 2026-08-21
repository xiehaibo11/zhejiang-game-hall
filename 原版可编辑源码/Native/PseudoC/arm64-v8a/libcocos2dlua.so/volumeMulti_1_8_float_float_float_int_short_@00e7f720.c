
/* void cocos2d::experimental::volumeMulti<1, 8, float, float, float, int, short>(float*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<1,8,float,float,float,int,short>
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
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar27;
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  undefined1 in_q20 [16];
  undefined1 auVar80 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 in_q21 [16];
  undefined1 auVar90 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 auVar103 [16];
  undefined1 in_q22 [16];
  undefined1 auVar107 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar116 [16];
  float fVar120;
  undefined1 in_q23 [16];
  undefined1 auVar121 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar130 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar44 [16];
  undefined1 auVar40 [16];
  undefined1 auVar45 [16];
  undefined1 auVar41 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar54 [16];
  undefined1 auVar50 [16];
  undefined1 auVar55 [16];
  undefined1 auVar51 [16];
  undefined1 auVar56 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar81 [16];
  undefined1 auVar87 [16];
  undefined1 auVar82 [16];
  undefined1 auVar88 [16];
  undefined1 auVar83 [16];
  undefined1 auVar89 [16];
  undefined1 auVar91 [16];
  undefined1 auVar96 [16];
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar92 [16];
  undefined1 auVar97 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  undefined1 auVar93 [16];
  undefined1 auVar98 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [16];
  undefined1 auVar113 [16];
  undefined1 auVar117 [16];
  undefined1 auVar109 [16];
  undefined1 auVar114 [16];
  undefined1 auVar118 [16];
  undefined1 auVar110 [16];
  undefined1 auVar115 [16];
  undefined1 auVar119 [16];
  undefined1 auVar122 [16];
  undefined1 auVar127 [16];
  undefined1 auVar131 [16];
  undefined1 auVar136 [16];
  undefined1 auVar123 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar137 [16];
  undefined1 auVar124 [16];
  undefined1 auVar129 [16];
  undefined1 auVar133 [16];
  undefined1 auVar138 [16];
  
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      if ((param_3 + param_2 <= param_1 || param_1 + param_2 * 8 <= param_3) &&
         ((float *)((long)param_5 + 0x1dU) <= param_1 || param_1 + param_2 * 8 <= param_5 + 7)) {
        uVar15 = param_2 & 0xfffffffffffffffc;
        pauVar5 = (undefined1 (*) [16])param_1;
        pfVar6 = param_3;
        uVar16 = uVar15;
        do {
          fVar1 = *pfVar6;
          fVar27 = pfVar6[1];
          fVar2 = pfVar6[2];
          fVar3 = pfVar6[3];
          fVar79 = *param_5;
          auVar22 = pauVar5[6];
          auVar57 = pauVar5[4];
          auVar30 = pauVar5[5];
          auVar134 = pauVar5[2];
          auVar85 = pauVar5[3];
          auVar58 = *pauVar5;
          auVar77 = pauVar5[1];
          fVar71 = param_5[2];
          fVar78 = param_5[3];
          auVar90._4_12_ = in_q21._4_12_;
          auVar90._0_4_ = auVar57._0_4_;
          uVar17 = auVar57._4_4_;
          auVar92._12_4_ = in_q21._12_4_;
          auVar92._0_8_ = auVar90._0_8_;
          auVar92._8_4_ = uVar17;
          auVar91._8_8_ = auVar92._8_8_;
          auVar91._4_4_ = auVar22._0_4_;
          auVar91._0_4_ = auVar57._0_4_;
          auVar93._0_12_ = auVar91._0_12_;
          auVar93._12_4_ = auVar22._4_4_;
          auVar121._4_12_ = in_q23._4_12_;
          auVar121._0_4_ = uVar17;
          auVar123._12_4_ = in_q23._12_4_;
          auVar123._0_8_ = auVar121._0_8_;
          auVar123._8_4_ = auVar57._12_4_;
          auVar122._8_8_ = auVar123._8_8_;
          auVar122._4_4_ = auVar22._4_4_;
          auVar122._0_4_ = uVar17;
          uVar20 = auVar22._12_4_;
          auVar124._0_12_ = auVar122._0_12_;
          auVar124._12_4_ = uVar20;
          auVar80._4_12_ = in_q20._4_12_;
          auVar80._0_4_ = auVar58._0_4_;
          uVar17 = auVar58._4_4_;
          auVar82._12_4_ = in_q20._12_4_;
          auVar82._0_8_ = auVar80._0_8_;
          auVar82._8_4_ = uVar17;
          auVar81._8_8_ = auVar82._8_8_;
          auVar81._4_4_ = auVar134._0_4_;
          auVar81._0_4_ = auVar58._0_4_;
          auVar83._0_12_ = auVar81._0_12_;
          auVar83._12_4_ = auVar134._4_4_;
          auVar94 = NEON_ext(auVar57,auVar93,8,1);
          auVar107._4_12_ = in_q22._4_12_;
          auVar107._0_4_ = uVar17;
          auVar109._12_4_ = in_q22._12_4_;
          auVar109._0_8_ = auVar107._0_8_;
          auVar109._8_4_ = auVar58._12_4_;
          auVar108._8_8_ = auVar109._8_8_;
          auVar108._4_4_ = auVar134._4_4_;
          auVar108._0_4_ = uVar17;
          uVar18 = auVar134._12_4_;
          auVar110._0_12_ = auVar108._0_12_;
          auVar110._12_4_ = uVar18;
          auVar84 = NEON_ext(auVar94,auVar83,8,1);
          auVar95._4_12_ = auVar94._4_12_;
          auVar95._0_4_ = auVar57._8_4_;
          auVar97._12_4_ = auVar94._12_4_;
          auVar97._0_8_ = auVar95._0_8_;
          auVar97._8_4_ = auVar57._12_4_;
          auVar96._8_8_ = auVar97._8_8_;
          auVar96._4_4_ = auVar22._8_4_;
          auVar96._0_4_ = auVar57._8_4_;
          auVar98._0_12_ = auVar96._0_12_;
          auVar98._12_4_ = uVar20;
          auVar125 = NEON_ext(auVar57,auVar124,8,1);
          auVar29._0_12_ = auVar57._0_12_;
          auVar29._12_4_ = auVar22._8_4_;
          auVar94._4_12_ = auVar22._4_12_;
          auVar94._0_4_ = auVar30._0_4_;
          uVar17 = auVar30._4_4_;
          auVar64._0_8_ = auVar94._0_8_;
          auVar64._8_4_ = uVar17;
          auVar64._12_4_ = uVar20;
          auVar111._8_8_ = auVar64._8_8_;
          auVar111._4_4_ = *(undefined4 *)pauVar5[7];
          auVar111._0_4_ = auVar30._0_4_;
          auVar21._0_12_ = auVar111._0_12_;
          auVar21._12_4_ = *(undefined4 *)(pauVar5[7] + 4);
          auVar38._4_12_ = auVar134._4_12_;
          auVar38._0_4_ = auVar58._8_4_;
          auVar40._0_8_ = auVar38._0_8_;
          auVar40._8_4_ = auVar58._12_4_;
          auVar40._12_4_ = uVar18;
          auVar39._8_8_ = auVar40._8_8_;
          auVar39._4_4_ = auVar134._8_4_;
          auVar39._0_4_ = auVar58._8_4_;
          auVar41._0_12_ = auVar39._0_12_;
          auVar41._12_4_ = uVar18;
          auVar57 = NEON_ext(auVar110,auVar58,8,1);
          auVar111 = NEON_ext(auVar125,auVar110,8,1);
          auVar126._4_12_ = auVar125._4_12_;
          auVar126._0_4_ = auVar77._0_4_;
          uVar18 = auVar77._4_4_;
          auVar128._12_4_ = auVar125._12_4_;
          auVar128._0_8_ = auVar126._0_8_;
          auVar128._8_4_ = uVar18;
          auVar127._8_8_ = auVar128._8_8_;
          auVar127._4_4_ = auVar85._0_4_;
          auVar127._0_4_ = auVar77._0_4_;
          uVar19 = auVar85._4_4_;
          auVar129._0_12_ = auVar127._0_12_;
          auVar129._12_4_ = uVar19;
          auVar22 = NEON_ext(auVar30,auVar21,8,1);
          auVar22 = NEON_ext(auVar22,auVar129,8,1);
          auVar130._4_12_ = auVar129._4_12_;
          auVar130._0_4_ = uVar17;
          auVar132._0_8_ = auVar130._0_8_;
          auVar132._8_4_ = auVar30._12_4_;
          auVar132._12_4_ = uVar19;
          auVar131._8_8_ = auVar132._8_8_;
          auVar131._4_4_ = *(undefined4 *)(pauVar5[7] + 4);
          auVar131._0_4_ = uVar17;
          auVar133._0_12_ = auVar131._0_12_;
          auVar133._12_4_ = *(undefined4 *)(pauVar5[7] + 0xc);
          auVar58 = NEON_ext(auVar98,auVar57,8,1);
          auVar99._4_12_ = auVar98._4_12_;
          auVar99._0_4_ = uVar18;
          auVar101._0_8_ = auVar99._0_8_;
          auVar101._8_4_ = auVar77._12_4_;
          auVar101._12_4_ = uVar20;
          auVar100._8_8_ = auVar101._8_8_;
          auVar100._4_4_ = uVar19;
          auVar100._0_4_ = uVar18;
          uVar17 = auVar85._12_4_;
          auVar102._0_12_ = auVar100._0_12_;
          auVar102._12_4_ = uVar17;
          auVar134 = NEON_ext(auVar30,auVar133,8,1);
          auVar48._4_12_ = auVar85._4_12_;
          auVar48._0_4_ = auVar77._8_4_;
          auVar50._0_8_ = auVar48._0_8_;
          auVar50._8_4_ = auVar77._12_4_;
          auVar50._12_4_ = uVar17;
          auVar49._8_8_ = auVar50._8_8_;
          auVar49._4_4_ = auVar85._8_4_;
          auVar49._0_4_ = auVar77._8_4_;
          auVar51._0_12_ = auVar49._0_12_;
          auVar51._12_4_ = uVar17;
          auVar57 = NEON_ext(auVar102,auVar77,8,1);
          auVar94 = NEON_ext(auVar134,auVar102,8,1);
          auVar135._4_12_ = auVar134._4_12_;
          auVar135._0_4_ = auVar30._8_4_;
          auVar137._12_4_ = auVar134._12_4_;
          auVar137._0_8_ = auVar135._0_8_;
          auVar137._8_4_ = auVar30._12_4_;
          auVar136._8_8_ = auVar137._8_8_;
          auVar136._4_4_ = *(undefined4 *)(pauVar5[7] + 8);
          auVar136._0_4_ = auVar30._8_4_;
          auVar138._0_12_ = auVar136._0_12_;
          auVar138._12_4_ = *(undefined4 *)(pauVar5[7] + 0xc);
          auVar34._0_12_ = auVar30._0_12_;
          auVar34._12_4_ = *(undefined4 *)(pauVar5[7] + 8);
          auVar57 = NEON_ext(auVar138,auVar57,8,1);
          fVar65 = param_5[4];
          fVar120 = param_5[5];
          auVar30 = NEON_ext(auVar29,auVar41,8,1);
          auVar134 = NEON_ext(auVar34,auVar51,8,1);
          fVar37 = param_5[6];
          fVar47 = param_5[7];
          auVar85 = NEON_ext(auVar84,auVar84,8,1);
          auVar77._0_4_ = auVar85._0_4_ + fVar1 * fVar79;
          auVar77._4_4_ = auVar85._4_4_ + fVar27 * fVar79;
          auVar77._8_4_ = auVar85._8_4_ + fVar2 * fVar79;
          auVar77._12_4_ = auVar85._12_4_ + fVar3 * fVar79;
          fVar79 = param_5[1];
          in_q23._0_4_ = fVar1 * fVar120;
          in_q23._4_4_ = fVar27 * fVar120;
          in_q23._8_4_ = fVar2 * fVar120;
          in_q23._12_4_ = fVar3 * fVar120;
          auVar22 = NEON_ext(auVar22,auVar22,8,1);
          auVar94 = NEON_ext(auVar94,auVar94,8,1);
          auVar42._0_4_ = fVar1 * fVar37;
          auVar42._4_4_ = fVar27 * fVar37;
          auVar42._8_4_ = fVar2 * fVar37;
          auVar42._12_4_ = fVar3 * fVar37;
          auVar52._0_4_ = fVar1 * fVar47;
          auVar52._4_4_ = fVar27 * fVar47;
          auVar52._8_4_ = fVar2 * fVar47;
          auVar52._12_4_ = fVar3 * fVar47;
          auVar57 = NEON_ext(auVar57,auVar57,8,1);
          auVar134 = NEON_ext(auVar134,auVar134,8,1);
          auVar84._0_4_ = auVar22._0_4_ + fVar1 * fVar65;
          auVar84._4_4_ = auVar22._4_4_ + fVar27 * fVar65;
          auVar84._8_4_ = auVar22._8_4_ + fVar2 * fVar65;
          auVar84._12_4_ = auVar22._12_4_ + fVar3 * fVar65;
          auVar66._0_4_ = auVar94._0_4_ + in_q23._0_4_;
          auVar66._4_4_ = auVar94._4_4_ + in_q23._4_4_;
          auVar66._8_4_ = auVar94._8_4_ + in_q23._8_4_;
          auVar105._12_4_ = auVar94._12_4_;
          auVar66._12_4_ = auVar105._12_4_ + in_q23._12_4_;
          auVar72._0_4_ = fVar1 * fVar71;
          auVar72._4_4_ = fVar27 * fVar71;
          auVar72._8_4_ = fVar2 * fVar71;
          auVar72._12_4_ = fVar3 * fVar71;
          auVar85 = NEON_ext(auVar58,auVar58,8,1);
          auVar22 = NEON_ext(auVar30,auVar30,8,1);
          auVar125._0_4_ = auVar57._0_4_ + auVar52._0_4_;
          auVar125._4_4_ = auVar57._4_4_ + auVar52._4_4_;
          auVar125._8_4_ = auVar57._8_4_ + auVar52._8_4_;
          auVar125._12_4_ = auVar57._12_4_ + auVar52._12_4_;
          auVar33._0_4_ = auVar134._0_4_ + auVar42._0_4_;
          auVar33._4_4_ = auVar134._4_4_ + auVar42._4_4_;
          auVar33._8_4_ = auVar134._8_4_ + auVar42._8_4_;
          auVar35._12_4_ = auVar134._12_4_ + auVar42._12_4_;
          auVar35._0_12_ = auVar33;
          auVar53._4_12_ = auVar52._4_12_;
          auVar53._0_4_ = auVar84._4_4_;
          auVar55._0_8_ = auVar53._0_8_;
          auVar55._8_4_ = auVar84._12_4_;
          auVar55._12_4_ = auVar52._12_4_;
          auVar54._8_8_ = auVar55._8_8_;
          auVar54._4_4_ = auVar66._4_4_;
          auVar54._0_4_ = auVar84._4_4_;
          auVar56._0_12_ = auVar54._0_12_;
          auVar56._12_4_ = auVar66._12_4_;
          auVar30 = NEON_ext(auVar111,auVar111,8,1);
          auVar59._0_4_ = auVar85._0_4_ + fVar1 * fVar78;
          auVar59._4_4_ = auVar85._4_4_ + fVar27 * fVar78;
          auVar59._8_4_ = auVar85._8_4_ + fVar2 * fVar78;
          auVar59._12_4_ = auVar85._12_4_ + fVar3 * fVar78;
          auVar28._0_4_ = auVar22._0_4_ + auVar72._0_4_;
          auVar28._4_4_ = auVar22._4_4_ + auVar72._4_4_;
          auVar28._8_4_ = auVar22._8_4_ + auVar72._8_4_;
          auVar31._12_4_ = auVar22._12_4_ + auVar72._12_4_;
          auVar31._0_12_ = auVar28;
          auVar43._4_12_ = auVar42._4_12_;
          auVar43._0_4_ = auVar84._0_4_;
          auVar45._0_8_ = auVar43._0_8_;
          auVar45._8_4_ = auVar84._4_4_;
          auVar45._12_4_ = auVar42._12_4_;
          auVar44._8_8_ = auVar45._8_8_;
          auVar44._4_4_ = auVar66._0_4_;
          auVar44._0_4_ = auVar84._0_4_;
          auVar46._0_12_ = auVar44._0_12_;
          auVar46._12_4_ = auVar66._4_4_;
          auVar67._4_12_ = auVar66._4_12_;
          auVar67._0_4_ = auVar84._8_4_;
          auVar69._0_8_ = auVar67._0_8_;
          auVar69._8_4_ = auVar84._12_4_;
          auVar69._12_4_ = auVar66._12_4_;
          auVar68._8_8_ = auVar69._8_8_;
          auVar68._4_4_ = auVar66._8_4_;
          auVar68._0_4_ = auVar84._8_4_;
          auVar70._0_12_ = auVar68._0_12_;
          auVar70._12_4_ = auVar66._12_4_;
          auVar112._4_12_ = auVar111._4_12_;
          auVar112._0_4_ = auVar33._8_4_;
          auVar114._12_4_ = auVar111._12_4_;
          auVar114._0_8_ = auVar112._0_8_;
          auVar114._8_4_ = auVar35._12_4_;
          auVar113._8_8_ = auVar114._8_8_;
          auVar113._4_4_ = auVar125._8_4_;
          auVar113._0_4_ = auVar33._8_4_;
          auVar115._0_12_ = auVar113._0_12_;
          auVar115._12_4_ = auVar125._12_4_;
          auVar22 = NEON_ext(auVar56,auVar84,8,1);
          auVar57._0_4_ = auVar30._0_4_ + fVar1 * fVar79;
          auVar57._4_4_ = auVar30._4_4_ + fVar27 * fVar79;
          auVar57._8_4_ = auVar30._8_4_ + fVar2 * fVar79;
          auVar88._12_4_ = auVar30._12_4_;
          auVar57._12_4_ = auVar88._12_4_ + fVar3 * fVar79;
          auVar73._4_12_ = auVar72._4_12_;
          auVar73._0_4_ = auVar33._0_4_;
          auVar75._0_8_ = auVar73._0_8_;
          auVar75._8_4_ = auVar33._4_4_;
          auVar75._12_4_ = auVar72._12_4_;
          auVar74._8_8_ = auVar75._8_8_;
          auVar74._4_4_ = auVar125._0_4_;
          auVar74._0_4_ = auVar33._0_4_;
          auVar76._0_12_ = auVar74._0_12_;
          auVar76._12_4_ = auVar125._4_4_;
          auVar86._4_12_ = auVar30._4_12_;
          auVar86._0_4_ = auVar28._0_4_;
          auVar88._0_8_ = auVar86._0_8_;
          auVar88._8_4_ = auVar28._4_4_;
          auVar87._8_8_ = auVar88._8_8_;
          auVar87._4_4_ = auVar59._0_4_;
          auVar87._0_4_ = auVar28._0_4_;
          auVar89._0_12_ = auVar87._0_12_;
          auVar89._12_4_ = auVar59._4_4_;
          auVar103._4_12_ = auVar94._4_12_;
          auVar103._0_4_ = auVar33._4_4_;
          auVar105._0_8_ = auVar103._0_8_;
          auVar105._8_4_ = auVar35._12_4_;
          auVar104._8_8_ = auVar105._8_8_;
          auVar104._4_4_ = auVar125._4_4_;
          auVar104._0_4_ = auVar33._4_4_;
          auVar106._0_12_ = auVar104._0_12_;
          auVar106._12_4_ = auVar125._12_4_;
          auVar94 = NEON_ext(auVar115,auVar22,8,1);
          auVar116._4_12_ = auVar115._4_12_;
          auVar116._0_4_ = auVar28._4_4_;
          auVar118._0_8_ = auVar116._0_8_;
          auVar118._8_4_ = auVar31._12_4_;
          auVar118._12_4_ = auVar125._12_4_;
          auVar117._8_8_ = auVar118._8_8_;
          auVar117._4_4_ = auVar59._4_4_;
          auVar117._0_4_ = auVar28._4_4_;
          auVar119._0_12_ = auVar117._0_12_;
          auVar119._12_4_ = auVar59._12_4_;
          auVar22 = NEON_ext(auVar35,auVar76,8,1);
          in_q21 = NEON_ext(auVar35,auVar106,8,1);
          auVar36._12_4_ = auVar125._8_4_;
          auVar36._0_12_ = auVar33;
          auVar23._4_12_ = auVar125._4_12_;
          auVar23._0_4_ = auVar28._8_4_;
          auVar25._0_8_ = auVar23._0_8_;
          auVar25._8_4_ = auVar31._12_4_;
          auVar25._12_4_ = auVar125._12_4_;
          auVar24._8_8_ = auVar25._8_8_;
          auVar24._4_4_ = auVar59._8_4_;
          auVar24._0_4_ = auVar28._8_4_;
          auVar26._0_12_ = auVar24._0_12_;
          auVar26._12_4_ = auVar59._12_4_;
          in_q20 = NEON_ext(auVar31,auVar89,8,1);
          in_q22 = NEON_ext(auVar31,auVar119,8,1);
          auVar32._12_4_ = auVar59._8_4_;
          auVar32._0_12_ = auVar28;
          auVar60._4_12_ = auVar59._4_12_;
          auVar60._0_4_ = auVar77._4_4_;
          auVar62._0_8_ = auVar60._0_8_;
          auVar62._8_4_ = auVar77._12_4_;
          auVar62._12_4_ = auVar59._12_4_;
          auVar61._8_8_ = auVar62._8_8_;
          auVar61._4_4_ = auVar57._4_4_;
          auVar61._0_4_ = auVar77._4_4_;
          auVar63._0_12_ = auVar61._0_12_;
          auVar63._12_4_ = auVar57._12_4_;
          auVar85._4_12_ = auVar57._4_12_;
          auVar85._0_4_ = auVar77._8_4_;
          auVar30._0_8_ = auVar85._0_8_;
          auVar30._8_4_ = auVar77._12_4_;
          auVar30._12_4_ = auVar57._12_4_;
          auVar58._8_8_ = auVar30._8_8_;
          auVar58._4_4_ = auVar57._8_4_;
          auVar58._0_4_ = auVar77._8_4_;
          auVar134._0_12_ = auVar58._0_12_;
          auVar134._12_4_ = auVar57._12_4_;
          auVar30 = NEON_ext(auVar63,auVar77,8,1);
          auVar58 = NEON_ext(auVar22,auVar46,8,1);
          auVar22._4_4_ = auVar57._0_4_;
          auVar22._0_4_ = auVar77._0_4_;
          auVar22._8_4_ = auVar77._4_4_;
          auVar22._12_4_ = auVar57._4_4_;
          auVar77 = NEON_ext(in_q20,auVar22,8,1);
          auVar111 = NEON_ext(in_q21,auVar56,8,1);
          auVar64 = NEON_ext(in_q22,auVar63,8,1);
          auVar57 = NEON_ext(auVar26,auVar30,8,1);
          auVar85 = NEON_ext(auVar36,auVar70,8,1);
          auVar22 = NEON_ext(auVar32,auVar134,8,1);
          auVar30 = NEON_ext(auVar94,auVar94,8,1);
          auVar58 = NEON_ext(auVar58,auVar58,8,1);
          auVar77 = NEON_ext(auVar77,auVar77,8,1);
          auVar94 = NEON_ext(auVar111,auVar111,8,1);
          auVar111 = NEON_ext(auVar64,auVar64,8,1);
          auVar57 = NEON_ext(auVar57,auVar57,8,1);
          auVar134 = NEON_ext(auVar85,auVar85,8,1);
          auVar22 = NEON_ext(auVar22,auVar22,8,1);
          uVar16 = uVar16 - 4;
          *(long *)(pauVar5[4] + 8) = auVar22._8_8_;
          *(long *)pauVar5[4] = auVar22._0_8_;
          *(long *)(pauVar5[5] + 8) = auVar134._8_8_;
          *(long *)pauVar5[5] = auVar134._0_8_;
          *(long *)(pauVar5[6] + 8) = auVar57._8_8_;
          *(long *)pauVar5[6] = auVar57._0_8_;
          *(long *)(pauVar5[7] + 8) = auVar30._8_8_;
          *(long *)pauVar5[7] = auVar30._0_8_;
          *(long *)(pauVar5[2] + 8) = auVar111._8_8_;
          *(long *)pauVar5[2] = auVar111._0_8_;
          *(long *)(pauVar5[3] + 8) = auVar94._8_8_;
          *(long *)pauVar5[3] = auVar94._0_8_;
          *(long *)(*pauVar5 + 8) = auVar77._8_8_;
          *(long *)*pauVar5 = auVar77._0_8_;
          *(long *)(pauVar5[1] + 8) = auVar58._8_8_;
          *(long *)pauVar5[1] = auVar58._0_8_;
          pauVar5 = pauVar5 + 8;
          pfVar6 = pfVar6 + 4;
        } while (uVar16 != 0);
        bVar4 = uVar15 == param_2;
        param_3 = param_3 + uVar15;
        param_2 = param_2 - uVar15;
        param_1 = param_1 + uVar15 * 8;
        if (bVar4) {
          return;
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
      param_1[6] = param_1[6] + *param_3 * param_5[6];
      param_1[7] = param_1[7] + *param_3 * param_5[7];
      param_1 = param_1 + 8;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar27 = *param_3;
      fVar79 = -0.5;
      fVar1 = 0.5;
      if (fVar27 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar79;
        }
        iVar7 = (int)(fVar2 + fVar27 * 1.3421773e+08);
      }
      *param_1 = fVar27 * *param_5 + *param_1;
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar79;
        }
        iVar8 = (int)(fVar2 + fVar27 * 1.3421773e+08);
      }
      param_1[1] = fVar27 * param_5[1] + param_1[1];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar79;
        }
        iVar9 = (int)(fVar2 + fVar27 * 1.3421773e+08);
      }
      param_1[2] = fVar27 * param_5[2] + param_1[2];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar79;
        }
        iVar10 = (int)(fVar2 + fVar27 * 1.3421773e+08);
      }
      param_1[3] = fVar27 * param_5[3] + param_1[3];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar11 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar79;
        }
        iVar11 = (int)(fVar2 + fVar27 * 1.3421773e+08);
      }
      param_1[4] = fVar27 * param_5[4] + param_1[4];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar12 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar79;
        }
        iVar12 = (int)(fVar2 + fVar27 * 1.3421773e+08);
      }
      param_1[5] = fVar27 * param_5[5] + param_1[5];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar2 = fVar1;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar2 = fVar79;
        }
        iVar13 = (int)(fVar2 + fVar27 * 1.3421773e+08);
      }
      param_1[6] = fVar27 * param_5[6] + param_1[6];
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar14 = 0x7fffffff;
      }
      else {
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar1 = fVar79;
        }
        iVar14 = (int)(fVar1 + fVar27 * 1.3421773e+08);
      }
      iVar14 = iVar14 + iVar13 + iVar12 + iVar11 + iVar10 + iVar9 + iVar8 + iVar7;
      param_1[7] = fVar27 * param_5[7] + param_1[7];
      iVar7 = iVar14 + 7;
      if (-1 < iVar14) {
        iVar7 = iVar14;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar7 >> 0xf) * (int)param_6;
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

