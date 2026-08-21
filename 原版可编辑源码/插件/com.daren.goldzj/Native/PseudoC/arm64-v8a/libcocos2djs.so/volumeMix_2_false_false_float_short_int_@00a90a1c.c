
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::AudioMixer::volumeMix<2, false, false, float, short, int>(float*, unsigned long,
   short const*, int*, bool, cocos2d::AudioMixer::track_t*) */

void cocos2d::AudioMixer::volumeMix<2,false,false,float,short,int>
               (float *param_1,ulong param_2,short *param_3,int *param_4,bool param_5,
               track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  short *psVar11;
  short *psVar22;
  float *pfVar26;
  short *psVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  undefined8 uVar39;
  int iVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar43;
  short sVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  short sVar65;
  short sVar66;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  short sVar67;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  short sVar68;
  short sVar70;
  short sVar71;
  short sVar72;
  undefined1 auVar69 [16];
  short sVar73;
  short sVar78;
  short sVar79;
  short sVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  short sVar83;
  short sVar86;
  short sVar87;
  short sVar88;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [12];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  undefined1 auVar107 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  
  auVar77 = _DAT_0189cca0;
  auVar75 = _DAT_0189cc90;
  auVar69 = _DAT_0189cc80;
  auVar63 = _DAT_0189cc70;
  auVar47 = _DAT_0189cc60;
  uVar4 = *(int *)(param_6 + 0xbc) - 1;
  if (!param_5) {
    if (uVar4 < 8) {
      sVar44 = *(short *)(param_6 + 0x20);
      ptVar1 = param_6 + 4;
      iVar29 = (int)sVar44;
      switch(uVar4) {
      case 0:
        if (param_4 == (int *)0x0) {
          fVar43 = (float)(int)*(short *)ptVar1;
          if (7 < param_2) {
            uVar32 = param_2 & 0xfffffffffffffff8;
            pfVar26 = param_1 + 4;
                    /* try { // try from 00a91a4c to 00b91a6f has its CatchHandler @ 00a91c20 */
            psVar27 = param_3 + 4;
            param_3 = param_3 + uVar32;
            param_1 = param_1 + uVar32;
            uVar31 = uVar32;
            do {
              uVar39 = *(undefined8 *)(psVar27 + -4);
              uVar45 = *(undefined8 *)psVar27;
              uVar31 = uVar31 - 8;
              psVar27 = psVar27 + 8;
              auVar53._0_4_ = (int)(short)uVar39;
              auVar53._4_4_ = (int)(short)((ulong)uVar39 >> 0x10);
              auVar53._8_4_ = (int)(short)((ulong)uVar39 >> 0x20);
              auVar53._12_4_ = (int)(short)((ulong)uVar39 >> 0x30);
              auVar60._0_4_ = (int)(short)uVar45;
              auVar60._4_4_ = (int)(short)((ulong)uVar45 >> 0x10);
              auVar60._8_4_ = (int)(short)((ulong)uVar45 >> 0x20);
              auVar60._12_4_ = (int)(short)((ulong)uVar45 >> 0x30);
              auVar47 = NEON_scvtf(auVar53,4);
                    /* try { // try from 00a91a7c to 00b91aa7 has its CatchHandler @ 00a91c24 */
              auVar63 = NEON_scvtf(auVar60,4);
              pfVar26[-2] = fVar43 * auVar47._8_4_ * 7.450581e-09;
              pfVar26[-1] = fVar43 * auVar47._12_4_ * 7.450581e-09;
              pfVar26[-4] = fVar43 * auVar47._0_4_ * 7.450581e-09;
              pfVar26[-3] = fVar43 * auVar47._4_4_ * 7.450581e-09;
              pfVar26[2] = fVar43 * auVar63._8_4_ * 7.450581e-09;
              pfVar26[3] = fVar43 * auVar63._12_4_ * 7.450581e-09;
              *pfVar26 = fVar43 * auVar63._0_4_ * 7.450581e-09;
              pfVar26[1] = fVar43 * auVar63._4_4_ * 7.450581e-09;
              pfVar26 = pfVar26 + 8;
            } while (uVar31 != 0);
            bVar10 = uVar32 == param_2;
            param_2 = param_2 - uVar32;
            if (bVar10) {
              return;
            }
          }
          do {
            param_2 = param_2 - 1;
                    /* try { // try from 00a91ab8 to 00b91ad7 has its CatchHandler @ 00a91c20 */
            *param_1 = fVar43 * (float)(int)*param_3 * 7.450581e-09;
            param_1 = param_1 + 1;
            param_3 = param_3 + 1;
          } while (param_2 != 0);
        }
        else {
          fVar43 = (float)(int)*(short *)ptVar1;
          if (3 < param_2) {
            uVar32 = param_2 & 0xfffffffffffffffc;
            pfVar26 = param_1;
            psVar27 = param_3;
            piVar28 = param_4;
            uVar31 = uVar32;
            do {
              uVar39 = *(undefined8 *)psVar27;
              uVar31 = uVar31 - 4;
              auVar58._0_4_ = (int)(short)uVar39;
              auVar58._4_4_ = (int)(short)((ulong)uVar39 >> 0x10);
              auVar58._8_4_ = (int)(short)((ulong)uVar39 >> 0x20);
              auVar58._12_4_ = (int)(short)((ulong)uVar39 >> 0x30);
              auVar47 = NEON_scvtf(auVar58,4);
              pfVar26[2] = fVar43 * auVar47._8_4_ * 7.450581e-09;
              pfVar26[3] = fVar43 * auVar47._12_4_ * 7.450581e-09;
              *pfVar26 = fVar43 * auVar47._0_4_ * 7.450581e-09;
              pfVar26[1] = fVar43 * auVar47._4_4_ * 7.450581e-09;
              piVar28[2] = piVar28[2] + iVar29 * auVar58._8_4_;
              piVar28[3] = piVar28[3] + iVar29 * auVar58._12_4_;
              *piVar28 = *piVar28 + iVar29 * auVar58._0_4_;
              piVar28[1] = piVar28[1] + iVar29 * auVar58._4_4_;
              pfVar26 = pfVar26 + 4;
              psVar27 = psVar27 + 4;
              piVar28 = piVar28 + 4;
            } while (uVar31 != 0);
            bVar10 = uVar32 == param_2;
            param_3 = param_3 + uVar32;
            param_4 = param_4 + uVar32;
            param_2 = param_2 - uVar32;
            param_1 = param_1 + uVar32;
            if (bVar10) {
              return;
            }
          }
          do {
            sVar44 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = fVar43 * (float)(int)sVar44 * 7.450581e-09;
            *param_4 = *param_4 + sVar44 * iVar29;
            param_3 = param_3 + 1;
            param_4 = param_4 + 1;
            param_1 = param_1 + 1;
          } while (param_2 != 0);
        }
        break;
      case 1:
        if (param_4 == (int *)0x0) {
          uVar39 = NEON_scvtf(CONCAT44((int)*(short *)(param_6 + 6),(int)*(short *)ptVar1),4);
          fVar37 = (float)((ulong)uVar39 >> 0x20);
          fVar43 = (float)uVar39;
          if (3 < param_2) {
            uVar31 = (param_2 - 1) * 8;
            if (((uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0) &&
                (param_2 - 1 >> 0x3d == 0)) &&
               (uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0)) {
                    /* try { // try from 00a91cc0 to 00b91d13 has its CatchHandler @ 00a91cc0
                       catch() { ... } // from try @ 00a91cc0 with catch @ 00a91cc0
                       catch() { ... } // from try @ 00a91dbc with catch @ 00a91cc0 */
              uVar32 = param_2 & 0xfffffffffffffffc;
              psVar27 = param_3 + uVar32 * 2;
              pfVar26 = param_1 + uVar32 * 2;
              uVar31 = uVar32;
              do {
                sVar44 = *param_3;
                psVar19 = param_3 + 1;
                psVar20 = param_3 + 2;
                psVar21 = param_3 + 3;
                psVar14 = param_3 + 4;
                psVar13 = param_3 + 5;
                psVar12 = param_3 + 6;
                psVar11 = param_3 + 7;
                param_3 = param_3 + 8;
                uVar31 = uVar31 - 4;
                auVar76._0_4_ = (int)sVar44;
                auVar76._4_4_ = (int)*psVar20;
                auVar76._8_4_ = (int)*psVar14;
                auVar76._12_4_ = (int)*psVar12;
                auVar64._0_4_ = (int)*psVar19;
                auVar64._4_4_ = (int)*psVar21;
                auVar64._8_4_ = (int)*psVar13;
                auVar64._12_4_ = (int)*psVar11;
                auVar63 = NEON_scvtf(auVar76,4);
                auVar47 = NEON_scvtf(auVar64,4);
                *param_1 = fVar43 * auVar63._0_4_ * 7.450581e-09;
                param_1[1] = fVar37 * auVar47._0_4_ * 7.450581e-09;
                param_1[2] = fVar43 * auVar63._4_4_ * 7.450581e-09;
                param_1[3] = fVar37 * auVar47._4_4_ * 7.450581e-09;
                param_1[4] = fVar43 * auVar63._8_4_ * 7.450581e-09;
                param_1[5] = fVar37 * auVar47._8_4_ * 7.450581e-09;
                param_1[6] = fVar43 * auVar63._12_4_ * 7.450581e-09;
                param_1[7] = fVar37 * auVar47._12_4_ * 7.450581e-09;
                param_1 = param_1 + 8;
              } while (uVar31 != 0);
                    /* try { // try from 00a91d14 to 00b91d2b has its CatchHandler @ 00a91e38 */
              bVar10 = uVar32 == param_2;
              param_2 = param_2 - uVar32;
              param_1 = pfVar26;
              param_3 = psVar27;
              if (bVar10) {
                return;
              }
            }
          }
          do {
            param_2 = param_2 - 1;
            uVar39 = NEON_scvtf(CONCAT44((int)param_3[1],(int)*param_3),4);
            *(ulong *)param_1 =
                 CONCAT44(fVar37 * (float)((ulong)uVar39 >> 0x20) * 7.450581e-09,
                          fVar43 * (float)uVar39 * 7.450581e-09);
            param_1 = param_1 + 2;
            param_3 = param_3 + 2;
          } while (param_2 != 0);
        }
        else {
          fVar43 = (float)(int)*(short *)ptVar1;
          fVar37 = (float)(int)*(short *)(param_6 + 6);
          if (3 < param_2) {
            uVar31 = (param_2 - 1) * 8;
                    /* try { // try from 00a91338 to 00b9138b has its CatchHandler @ 00a91338
                       catch() { ... } // from try @ 00a91338 with catch @ 00a91338
                       catch() { ... } // from try @ 00a91444 with catch @ 00a91338 */
            if (((uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0) &&
                (param_2 - 1 >> 0x3d == 0)) &&
               (uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0)) {
              uVar32 = param_2 & 0xfffffffffffffffc;
              pfVar26 = param_1 + uVar32 * 2;
              psVar27 = param_3 + uVar32 * 2;
              piVar28 = param_4;
              uVar31 = uVar32;
              do {
                sVar44 = *param_3;
                sVar68 = param_3[1];
                sVar65 = param_3[2];
                sVar70 = param_3[3];
                sVar66 = param_3[4];
                sVar71 = param_3[5];
                sVar67 = param_3[6];
                sVar72 = param_3[7];
                param_3 = param_3 + 8;
                uVar31 = uVar31 - 4;
                auVar89._0_4_ = (int)sVar44;
                auVar89._4_4_ = (int)sVar65;
                auVar89._8_4_ = (int)sVar66;
                auVar89._12_4_ = (int)sVar67;
                auVar94._0_4_ = (int)sVar68;
                auVar94._4_4_ = (int)sVar70;
                auVar94._8_4_ = (int)sVar71;
                auVar94._12_4_ = (int)sVar72;
                auVar47 = NEON_scvtf(auVar89,4);
                auVar63 = NEON_scvtf(auVar94,4);
                    /* try { // try from 00a9138c to 00b913a3 has its CatchHandler @ 00a914c0 */
                *param_1 = fVar43 * auVar47._0_4_ * 7.450581e-09;
                param_1[1] = fVar37 * auVar63._0_4_ * 7.450581e-09;
                param_1[2] = fVar43 * auVar47._4_4_ * 7.450581e-09;
                param_1[3] = fVar37 * auVar63._4_4_ * 7.450581e-09;
                param_1[4] = fVar43 * auVar47._8_4_ * 7.450581e-09;
                param_1[5] = fVar37 * auVar63._8_4_ * 7.450581e-09;
                param_1[6] = fVar43 * auVar47._12_4_ * 7.450581e-09;
                param_1[7] = fVar37 * auVar63._12_4_ * 7.450581e-09;
                param_1 = param_1 + 8;
                    /* try { // try from 00a913ac to 00b913b7 has its CatchHandler @ 00a914bc */
                piVar28[2] = piVar28[2] + ((int)sVar71 + (int)sVar66 >> 1) * iVar29;
                piVar28[3] = piVar28[3] + ((int)sVar72 + (int)sVar67 >> 1) * iVar29;
                *piVar28 = *piVar28 + ((int)sVar68 + (int)sVar44 >> 1) * iVar29;
                piVar28[1] = piVar28[1] + ((int)sVar70 + (int)sVar65 >> 1) * iVar29;
                piVar28 = piVar28 + 4;
              } while (uVar31 != 0);
              bVar10 = uVar32 == param_2;
              param_3 = psVar27;
              param_4 = param_4 + uVar32;
              param_2 = param_2 - uVar32;
              param_1 = pfVar26;
                    /* try { // try from 00a913b8 to 00b913c3 has its CatchHandler @ 00a914b8 */
              if (bVar10) {
                return;
              }
            }
          }
          do {
            sVar44 = *param_3;
            param_2 = param_2 - 1;
            *param_1 = fVar43 * (float)(int)sVar44 * 7.450581e-09;
            sVar65 = param_3[1];
            param_1[1] = fVar37 * (float)(int)sVar65 * 7.450581e-09;
            *param_4 = *param_4 + ((int)sVar65 + (int)sVar44 >> 1) * iVar29;
            param_3 = param_3 + 2;
            param_4 = param_4 + 1;
            param_1 = param_1 + 2;
          } while (param_2 != 0);
        }
        break;
      case 2:
        fVar43 = (float)(int)*(short *)ptVar1;
        if (param_4 == (int *)0x0) {
          if (3 < param_2) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = param_2 - 1;
            uVar31 = (param_2 - 1) * 0xc;
                    /* try { // try from 00a918ec to 00b9196b has its CatchHandler @ 00a91c30 */
            if (((uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0) &&
                (SUB168(auVar7 * ZEXT816(0xc),8) == 0)) &&
               ((uVar31 < ~(ulong)(param_1 + 2) || uVar31 - ~(ulong)(param_1 + 2) == 0 &&
                (uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0)))) {
              uVar32 = param_2 & 0xfffffffffffffffc;
              psVar27 = param_3 + uVar32 * 3;
              pfVar26 = param_1 + uVar32 * 3;
              uVar31 = uVar32;
              do {
                sVar44 = *param_3;
                psVar12 = param_3 + 1;
                psVar13 = param_3 + 2;
                psVar14 = param_3 + 3;
                psVar21 = param_3 + 4;
                psVar20 = param_3 + 5;
                psVar19 = param_3 + 6;
                psVar11 = param_3 + 7;
                psVar18 = param_3 + 8;
                psVar17 = param_3 + 9;
                psVar16 = param_3 + 10;
                psVar15 = param_3 + 0xb;
                param_3 = param_3 + 0xc;
                uVar31 = uVar31 - 4;
                auVar74._0_4_ = (int)sVar44;
                auVar74._4_4_ = (int)*psVar14;
                auVar74._8_4_ = (int)*psVar19;
                auVar74._12_4_ = (int)*psVar17;
                auVar85._0_4_ = (int)*psVar12;
                auVar85._4_4_ = (int)*psVar21;
                auVar85._8_4_ = (int)*psVar11;
                auVar85._12_4_ = (int)*psVar16;
                auVar50._0_4_ = (int)*psVar13;
                auVar50._4_4_ = (int)*psVar20;
                auVar50._8_4_ = (int)*psVar18;
                auVar50._12_4_ = (int)*psVar15;
                auVar63 = NEON_scvtf(auVar74,4);
                auVar69 = NEON_scvtf(auVar85,4);
                auVar47 = NEON_scvtf(auVar50,4);
                *param_1 = fVar43 * auVar63._0_4_ * 7.450581e-09;
                param_1[1] = fVar43 * auVar69._0_4_ * 7.450581e-09;
                param_1[2] = fVar43 * auVar47._0_4_ * 7.450581e-09;
                param_1[3] = fVar43 * auVar63._4_4_ * 7.450581e-09;
                param_1[4] = fVar43 * auVar69._4_4_ * 7.450581e-09;
                param_1[5] = fVar43 * auVar47._4_4_ * 7.450581e-09;
                param_1[6] = fVar43 * auVar63._8_4_ * 7.450581e-09;
                param_1[7] = fVar43 * auVar69._8_4_ * 7.450581e-09;
                param_1[8] = fVar43 * auVar47._8_4_ * 7.450581e-09;
                param_1[9] = fVar43 * auVar63._12_4_ * 7.450581e-09;
                param_1[10] = fVar43 * auVar69._12_4_ * 7.450581e-09;
                param_1[0xb] = fVar43 * auVar47._12_4_ * 7.450581e-09;
                param_1 = param_1 + 0xc;
              } while (uVar31 != 0);
              bVar10 = uVar32 == param_2;
              param_3 = psVar27;
              param_2 = param_2 - uVar32;
              param_1 = pfVar26;
                    /* try { // try from 00a91970 to 00b91987 has its CatchHandler @ 00a91c68 */
              if (bVar10) {
                return;
              }
            }
          }
          do {
            param_2 = param_2 - 1;
            uVar39 = NEON_scvtf(CONCAT44((int)param_3[1],(int)*param_3),4);
            *(ulong *)param_1 =
                 CONCAT44(fVar43 * (float)((ulong)uVar39 >> 0x20) * 7.450581e-09,
                          fVar43 * (float)uVar39 * 7.450581e-09);
            param_1[2] = fVar43 * (float)(int)param_3[2] * 7.450581e-09;
            param_3 = param_3 + 3;
            param_1 = param_1 + 3;
          } while (param_2 != 0);
        }
        else {
          if (3 < param_2) {
                    /* try { // try from 00a913c4 to 00b91443 has its CatchHandler @ 00a914d0 */
            auVar5._8_8_ = 0;
            auVar5._0_8_ = param_2 - 1;
            uVar31 = (param_2 - 1) * 0xc;
            if ((((uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0) &&
                 (SUB168(auVar5 * ZEXT816(0xc),8) == 0)) &&
                (uVar31 < ~(ulong)(param_1 + 2) || uVar31 - ~(ulong)(param_1 + 2) == 0)) &&
               (uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0)) {
              uVar32 = param_2 & 0xfffffffffffffffc;
              psVar27 = param_3 + uVar32 * 3;
              pfVar26 = param_1 + uVar32 * 3;
                    /* try { // try from 00a91444 to 00b91527 has its CatchHandler @ 00a91338 */
              piVar28 = param_4;
              uVar31 = uVar32;
              do {
                sVar44 = *param_3;
                sVar68 = param_3[1];
                sVar73 = param_3[2];
                sVar65 = param_3[3];
                sVar70 = param_3[4];
                sVar78 = param_3[5];
                sVar66 = param_3[6];
                sVar71 = param_3[7];
                sVar79 = param_3[8];
                sVar67 = param_3[9];
                sVar72 = param_3[10];
                sVar80 = param_3[0xb];
                param_3 = param_3 + 0xc;
                uVar31 = uVar31 - 4;
                auVar90._0_4_ = (int)sVar44;
                auVar90._4_4_ = (int)sVar65;
                auVar90._8_4_ = (int)sVar66;
                auVar90._12_4_ = (int)sVar67;
                auVar95._0_4_ = (int)sVar68;
                auVar95._4_4_ = (int)sVar70;
                auVar95._8_4_ = (int)sVar71;
                auVar95._12_4_ = (int)sVar72;
                auVar98._0_4_ = (int)sVar73;
                auVar98._4_4_ = (int)sVar78;
                auVar98._8_4_ = (int)sVar79;
                auVar98._12_4_ = (int)sVar80;
                auVar47 = NEON_scvtf(auVar90,4);
                auVar63 = NEON_scvtf(auVar95,4);
                auVar69 = NEON_scvtf(auVar98,4);
                *param_1 = fVar43 * auVar47._0_4_ * 7.450581e-09;
                param_1[1] = fVar43 * auVar63._0_4_ * 7.450581e-09;
                param_1[2] = fVar43 * auVar69._0_4_ * 7.450581e-09;
                param_1[3] = fVar43 * auVar47._4_4_ * 7.450581e-09;
                param_1[4] = fVar43 * auVar63._4_4_ * 7.450581e-09;
                param_1[5] = fVar43 * auVar69._4_4_ * 7.450581e-09;
                param_1[6] = fVar43 * auVar47._8_4_ * 7.450581e-09;
                param_1[7] = fVar43 * auVar63._8_4_ * 7.450581e-09;
                param_1[8] = fVar43 * auVar69._8_4_ * 7.450581e-09;
                param_1[9] = fVar43 * auVar47._12_4_ * 7.450581e-09;
                param_1[10] = fVar43 * auVar63._12_4_ * 7.450581e-09;
                param_1[0xb] = fVar43 * auVar69._12_4_ * 7.450581e-09;
                param_1 = param_1 + 0xc;
                piVar28[2] = piVar28[2] +
                             ((((int)sVar71 + (int)sVar66 + (int)sVar79) * 0x1000) / 3 >> 0xc) *
                             iVar29;
                piVar28[3] = piVar28[3] +
                             ((((int)sVar72 + (int)sVar67 + (int)sVar80) * 0x1000) / 3 >> 0xc) *
                             iVar29;
                *piVar28 = *piVar28 +
                           ((((int)sVar68 + (int)sVar44 + (int)sVar73) * 0x1000) / 3 >> 0xc) *
                           iVar29;
                piVar28[1] = piVar28[1] +
                             ((((int)sVar70 + (int)sVar65 + (int)sVar78) * 0x1000) / 3 >> 0xc) *
                             iVar29;
                piVar28 = piVar28 + 4;
              } while (uVar31 != 0);
              bVar10 = uVar32 == param_2;
              param_3 = psVar27;
              param_4 = param_4 + uVar32;
              param_2 = param_2 - uVar32;
              param_1 = pfVar26;
                    /* catch() { ... } // from try @ 00a913b8 with catch @ 00a914b8 */
              if (bVar10) {
                return;
              }
            }
          }
          do {
            sVar44 = *param_3;
            sVar65 = param_3[1];
            param_2 = param_2 - 1;
            uVar39 = NEON_scvtf(CONCAT44((int)sVar65,(int)sVar44),4);
            *(ulong *)param_1 =
                 CONCAT44(fVar43 * (float)((ulong)uVar39 >> 0x20) * 7.450581e-09,
                          fVar43 * (float)uVar39 * 7.450581e-09);
            sVar66 = param_3[2];
            param_1[2] = fVar43 * (float)(int)sVar66 * 7.450581e-09;
            *param_4 = *param_4 +
                       ((((int)sVar65 + (int)sVar44 + (int)sVar66) * 0x1000) / 3 >> 0xc) * iVar29;
            param_3 = param_3 + 3;
            param_4 = param_4 + 1;
            param_1 = param_1 + 3;
          } while (param_2 != 0);
        }
        break;
      case 3:
        fVar43 = (float)(int)*(short *)ptVar1;
        if (param_4 == (int *)0x0) {
          if (3 < param_2) {
            uVar31 = (param_2 - 1) * 0x10;
                    /* try { // try from 00a91d34 to 00b91d3f has its CatchHandler @ 00a91e34 */
                    /* try { // try from 00a91d40 to 00b91d4b has its CatchHandler @ 00a91e30 */
                    /* try { // try from 00a91d4c to 00b91dbb has its CatchHandler @ 00a91e48 */
            if (((uVar31 < ~(ulong)(param_1 + 2) || uVar31 - ~(ulong)(param_1 + 2) == 0) &&
                (param_2 - 1 >> 0x3c == 0)) &&
               ((uVar31 < ~(ulong)(param_1 + 3) || uVar31 - ~(ulong)(param_1 + 3) == 0 &&
                ((uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0 &&
                 (uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0)))))) {
              uVar32 = param_2 & 0xfffffffffffffffc;
              psVar27 = param_3 + uVar32 * 4;
              pfVar26 = param_1 + uVar32 * 4;
              uVar31 = uVar32;
              do {
                sVar44 = *param_3;
                psVar17 = param_3 + 1;
                psVar18 = param_3 + 2;
                psVar19 = param_3 + 3;
                psVar20 = param_3 + 4;
                psVar21 = param_3 + 5;
                psVar14 = param_3 + 6;
                psVar13 = param_3 + 7;
                psVar22 = param_3 + 8;
                psVar16 = param_3 + 9;
                psVar15 = param_3 + 10;
                psVar23 = param_3 + 0xb;
                psVar24 = param_3 + 0xc;
                psVar25 = param_3 + 0xd;
                psVar12 = param_3 + 0xe;
                psVar11 = param_3 + 0xf;
                param_3 = param_3 + 0x10;
                uVar31 = uVar31 - 4;
                auVar75._0_4_ = (int)sVar44;
                auVar75._4_4_ = (int)*psVar20;
                auVar75._8_4_ = (int)*psVar22;
                auVar75._12_4_ = (int)*psVar24;
                auVar77._0_4_ = (int)*psVar17;
                auVar77._4_4_ = (int)*psVar21;
                auVar77._8_4_ = (int)*psVar16;
                auVar77._12_4_ = (int)*psVar25;
                auVar69._0_4_ = (int)*psVar19;
                auVar69._4_4_ = (int)*psVar13;
                auVar69._8_4_ = (int)*psVar23;
                auVar69._12_4_ = (int)*psVar11;
                auVar63 = NEON_scvtf(auVar75,4);
                auVar101._0_4_ = (int)*psVar18;
                auVar101._4_4_ = (int)*psVar14;
                auVar101._8_4_ = (int)*psVar15;
                auVar101._12_4_ = (int)*psVar12;
                auVar75 = NEON_scvtf(auVar77,4);
                    /* try { // try from 00a91dbc to 00b91e9f has its CatchHandler @ 00a91cc0 */
                auVar77 = NEON_scvtf(auVar101,4);
                auVar47 = NEON_scvtf(auVar69,4);
                *param_1 = fVar43 * auVar63._0_4_ * 7.450581e-09;
                param_1[1] = fVar43 * auVar75._0_4_ * 7.450581e-09;
                param_1[2] = fVar43 * auVar77._0_4_ * 7.450581e-09;
                param_1[3] = fVar43 * auVar47._0_4_ * 7.450581e-09;
                param_1[4] = fVar43 * auVar63._4_4_ * 7.450581e-09;
                param_1[5] = fVar43 * auVar75._4_4_ * 7.450581e-09;
                param_1[6] = fVar43 * auVar77._4_4_ * 7.450581e-09;
                param_1[7] = fVar43 * auVar47._4_4_ * 7.450581e-09;
                param_1[8] = fVar43 * auVar63._8_4_ * 7.450581e-09;
                param_1[9] = fVar43 * auVar75._8_4_ * 7.450581e-09;
                param_1[10] = fVar43 * auVar77._8_4_ * 7.450581e-09;
                param_1[0xb] = fVar43 * auVar47._8_4_ * 7.450581e-09;
                param_1[0xc] = fVar43 * auVar63._12_4_ * 7.450581e-09;
                param_1[0xd] = fVar43 * auVar75._12_4_ * 7.450581e-09;
                param_1[0xe] = fVar43 * auVar77._12_4_ * 7.450581e-09;
                param_1[0xf] = fVar43 * auVar47._12_4_ * 7.450581e-09;
                param_1 = param_1 + 0x10;
              } while (uVar31 != 0);
              bVar10 = uVar32 == param_2;
              param_3 = psVar27;
              param_2 = param_2 - uVar32;
              param_1 = pfVar26;
              if (bVar10) {
                return;
              }
            }
          }
          do {
            uVar39 = *(undefined8 *)param_3;
            param_2 = param_2 - 1;
            auVar121._0_4_ = (int)(short)uVar39;
            auVar121._4_4_ = (int)(short)((ulong)uVar39 >> 0x10);
            auVar121._8_4_ = (int)(short)((ulong)uVar39 >> 0x20);
            auVar121._12_4_ = (int)(short)((ulong)uVar39 >> 0x30);
            auVar47 = NEON_scvtf(auVar121,4);
            param_1[2] = fVar43 * auVar47._8_4_ * 7.450581e-09;
            param_1[3] = fVar43 * auVar47._12_4_ * 7.450581e-09;
            *param_1 = fVar43 * auVar47._0_4_ * 7.450581e-09;
            param_1[1] = fVar43 * auVar47._4_4_ * 7.450581e-09;
            param_3 = param_3 + 4;
            param_1 = param_1 + 4;
          } while (param_2 != 0);
        }
        else {
          if (3 < param_2) {
                    /* catch() { ... } // from try @ 00a9138c with catch @ 00a914c0 */
            uVar31 = (param_2 - 1) * 0x10;
                    /* catch() { ... } // from try @ 00a913c4 with catch @ 00a914d0 */
            if ((((uVar31 < ~(ulong)(param_1 + 2) || uVar31 - ~(ulong)(param_1 + 2) == 0) &&
                 (param_2 - 1 >> 0x3c == 0)) &&
                (uVar31 < ~(ulong)(param_1 + 3) || uVar31 - ~(ulong)(param_1 + 3) == 0)) &&
               ((uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0 &&
                (uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0)))) {
              uVar32 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a91528 to 00b9157f has its CatchHandler @ 00a91528
                       catch() { ... } // from try @ 00a91528 with catch @ 00a91528
                       catch() { ... } // from try @ 00a9170c with catch @ 00a91528 */
              psVar27 = param_3 + uVar32 * 4;
              pfVar26 = param_1 + uVar32 * 4;
              piVar28 = param_4;
              uVar31 = uVar32;
              do {
                sVar44 = *param_3;
                sVar68 = param_3[1];
                sVar73 = param_3[2];
                sVar83 = param_3[3];
                sVar65 = param_3[4];
                sVar70 = param_3[5];
                sVar78 = param_3[6];
                sVar86 = param_3[7];
                sVar66 = param_3[8];
                sVar71 = param_3[9];
                sVar79 = param_3[10];
                sVar87 = param_3[0xb];
                sVar67 = param_3[0xc];
                sVar72 = param_3[0xd];
                sVar80 = param_3[0xe];
                sVar88 = param_3[0xf];
                param_3 = param_3 + 0x10;
                uVar31 = uVar31 - 4;
                auVar130._0_4_ = (int)sVar44;
                auVar130._4_4_ = (int)sVar65;
                auVar130._8_4_ = (int)sVar66;
                auVar130._12_4_ = (int)sVar67;
                auVar47 = NEON_scvtf(auVar130,4);
                auVar96._0_4_ = (int)sVar68;
                auVar96._4_4_ = (int)sVar70;
                auVar96._8_4_ = (int)sVar71;
                auVar96._12_4_ = (int)sVar72;
                auVar75 = NEON_scvtf(auVar96,4);
                auVar135._0_4_ = (int)sVar73;
                auVar135._4_4_ = (int)sVar78;
                auVar135._8_4_ = (int)sVar79;
                auVar135._12_4_ = (int)sVar80;
                auVar63 = NEON_scvtf(auVar135,4);
                auVar140._0_4_ = (int)sVar83;
                auVar140._4_4_ = (int)sVar86;
                auVar140._8_4_ = (int)sVar87;
                auVar140._12_4_ = (int)sVar88;
                auVar69 = NEON_scvtf(auVar140,4);
                    /* try { // try from 00a91580 to 00b91597 has its CatchHandler @ 00a917c0 */
                *param_1 = fVar43 * auVar47._0_4_ * 7.450581e-09;
                param_1[1] = fVar43 * auVar75._0_4_ * 7.450581e-09;
                param_1[2] = fVar43 * auVar63._0_4_ * 7.450581e-09;
                param_1[3] = fVar43 * auVar69._0_4_ * 7.450581e-09;
                param_1[4] = fVar43 * auVar47._4_4_ * 7.450581e-09;
                param_1[5] = fVar43 * auVar75._4_4_ * 7.450581e-09;
                param_1[6] = fVar43 * auVar63._4_4_ * 7.450581e-09;
                param_1[7] = fVar43 * auVar69._4_4_ * 7.450581e-09;
                param_1[8] = fVar43 * auVar47._8_4_ * 7.450581e-09;
                param_1[9] = fVar43 * auVar75._8_4_ * 7.450581e-09;
                param_1[10] = fVar43 * auVar63._8_4_ * 7.450581e-09;
                param_1[0xb] = fVar43 * auVar69._8_4_ * 7.450581e-09;
                param_1[0xc] = fVar43 * auVar47._12_4_ * 7.450581e-09;
                param_1[0xd] = fVar43 * auVar75._12_4_ * 7.450581e-09;
                param_1[0xe] = fVar43 * auVar63._12_4_ * 7.450581e-09;
                param_1[0xf] = fVar43 * auVar69._12_4_ * 7.450581e-09;
                param_1 = param_1 + 0x10;
                    /* try { // try from 00a915a0 to 00b915ab has its CatchHandler @ 00a917bc */
                piVar28[2] = piVar28[2] +
                             ((int)sVar71 + (int)sVar66 + (int)sVar79 + (int)sVar87 >> 2) * iVar29;
                piVar28[3] = piVar28[3] +
                             ((int)sVar72 + (int)sVar67 + (int)sVar80 + (int)sVar88 >> 2) * iVar29;
                *piVar28 = *piVar28 +
                           ((int)sVar68 + (int)sVar44 + (int)sVar73 + (int)sVar83 >> 2) * iVar29;
                piVar28[1] = piVar28[1] +
                             ((int)sVar70 + (int)sVar65 + (int)sVar78 + (int)sVar86 >> 2) * iVar29;
                piVar28 = piVar28 + 4;
              } while (uVar31 != 0);
                    /* try { // try from 00a915ac to 00b915b7 has its CatchHandler @ 00a917b8 */
              bVar10 = uVar32 == param_2;
              param_3 = psVar27;
              param_4 = param_4 + uVar32;
              param_2 = param_2 - uVar32;
              param_1 = pfVar26;
              if (bVar10) {
                return;
              }
            }
          }
          do {
            uVar39 = *(undefined8 *)param_3;
            param_2 = param_2 - 1;
            auVar48._0_4_ = (int)(short)uVar39;
            sVar44 = (short)((ulong)uVar39 >> 0x10);
            auVar48._4_4_ = (int)sVar44;
            sVar65 = (short)((ulong)uVar39 >> 0x20);
            auVar48._8_4_ = (int)sVar65;
            sVar66 = (short)((ulong)uVar39 >> 0x30);
            auVar48._12_4_ = (int)sVar66;
            auVar47 = NEON_scvtf(auVar48,4);
            param_1[2] = fVar43 * auVar47._8_4_ * 7.450581e-09;
            param_1[3] = fVar43 * auVar47._12_4_ * 7.450581e-09;
            *param_1 = fVar43 * auVar47._0_4_ * 7.450581e-09;
            param_1[1] = fVar43 * auVar47._4_4_ * 7.450581e-09;
            *param_4 = *param_4 +
                       ((int)sVar44 + (int)(short)uVar39 + (int)sVar65 + (int)sVar66 >> 2) * iVar29;
            param_3 = param_3 + 4;
            param_4 = param_4 + 1;
            param_1 = param_1 + 4;
          } while (param_2 != 0);
        }
        break;
      case 4:
        fVar43 = (float)(int)*(short *)ptVar1;
        if (param_4 == (int *)0x0) {
          do {
            uVar39 = *(undefined8 *)param_3;
            param_2 = param_2 - 1;
            auVar47._0_4_ = (int)(short)uVar39;
            auVar47._4_4_ = (int)(short)((ulong)uVar39 >> 0x10);
            auVar47._8_4_ = (int)(short)((ulong)uVar39 >> 0x20);
            auVar47._12_4_ = (int)(short)((ulong)uVar39 >> 0x30);
            auVar47 = NEON_scvtf(auVar47,4);
            param_1[2] = fVar43 * auVar47._8_4_ * 7.450581e-09;
            param_1[3] = fVar43 * auVar47._12_4_ * 7.450581e-09;
            *param_1 = fVar43 * auVar47._0_4_ * 7.450581e-09;
            param_1[1] = fVar43 * auVar47._4_4_ * 7.450581e-09;
            psVar27 = param_3 + 4;
            param_3 = param_3 + 5;
            param_1[4] = fVar43 * (float)(int)*psVar27 * 7.450581e-09;
            param_1 = param_1 + 5;
          } while (param_2 != 0);
        }
        else {
          if (3 < param_2) {
                    /* try { // try from 00a915b8 to 00b915cf has its CatchHandler @ 00a917d0 */
            auVar99._8_8_ = 0;
            auVar99._0_8_ = param_2 - 1;
            uVar31 = (param_2 - 1) * 0x14;
                    /* try { // try from 00a915f0 to 00b915f7 has its CatchHandler @ 00a917a0 */
                    /* try { // try from 00a91610 to 00b91627 has its CatchHandler @ 00a9179c */
                    /* try { // try from 00a9162c to 00b9163b has its CatchHandler @ 00a91784 */
            if ((((uVar31 < ~(ulong)(param_1 + 3) || uVar31 - ~(ulong)(param_1 + 3) == 0) &&
                 (SUB168(auVar99 * ZEXT816(0x14),8) == 0)) &&
                (uVar31 < ~(ulong)(param_1 + 4) || uVar31 - ~(ulong)(param_1 + 4) == 0)) &&
               (((uVar31 < ~(ulong)(param_1 + 2) || uVar31 - ~(ulong)(param_1 + 2) == 0 &&
                 (uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0)) &&
                (uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0)))) {
              uVar32 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a91654 to 00b9166f has its CatchHandler @ 00a917d0 */
                    /* try { // try from 00a91674 to 00b916b7 has its CatchHandler @ 00a917a0 */
              psVar27 = param_3 + uVar32 * 5;
              pfVar26 = param_1;
              piVar28 = param_4;
              uVar31 = uVar32;
              do {
                uVar39 = *(undefined8 *)*(undefined1 (*) [16])((long)param_3 + 0x20);
                auVar99 = *(undefined1 (*) [16])param_3;
                auVar102 = *(undefined1 (*) [16])((long)param_3 + 0x10);
                uVar31 = uVar31 - 4;
                param_3 = (short *)(*(undefined1 (*) [16])((long)param_3 + 0x20) + 8);
                sVar44 = (short)uVar39;
                sVar65 = (short)((ulong)uVar39 >> 0x10);
                sVar66 = (short)((ulong)uVar39 >> 0x20);
                auVar121 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar47);
                auVar130 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar63);
                auVar135 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar69);
                auVar140 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar75);
                auVar101 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar77);
                auVar104._2_8_ = auVar130._8_8_;
                auVar104._0_2_ = sVar44;
                auVar104._10_6_ = 0;
                auVar109._2_8_ = auVar135._8_8_;
                auVar109._0_2_ = sVar65;
                auVar109._10_6_ = 0;
                auVar113._2_8_ = auVar140._8_8_;
                auVar113._0_2_ = sVar66;
                auVar113._10_6_ = 0;
                    /* try { // try from 00a916d0 to 00b9170b has its CatchHandler @ 00a917d0 */
                sVar67 = (short)((ulong)uVar39 >> 0x30);
                auVar129._0_4_ = (int)auVar121._0_2_;
                auVar129._4_4_ = (int)auVar121._2_2_;
                auVar129._8_4_ = (int)auVar121._4_2_;
                auVar129._12_4_ = (int)auVar121._6_2_;
                auVar123._0_4_ = (int)auVar130._0_2_;
                auVar123._4_4_ = (int)auVar130._2_2_;
                auVar123._8_4_ = (int)auVar130._4_2_;
                auVar123._12_4_ = (int)sVar44;
                auVar110._0_4_ = (int)auVar135._0_2_;
                auVar110._4_4_ = (int)auVar135._2_2_;
                auVar110._8_4_ = (int)auVar135._4_2_;
                auVar110._12_4_ = (int)sVar65;
                auVar114._0_4_ = (int)auVar140._0_2_;
                auVar114._4_4_ = (int)auVar140._2_2_;
                auVar114._8_4_ = (int)auVar140._4_2_;
                auVar114._12_4_ = (int)sVar66;
                auVar122._0_4_ = (int)auVar101._0_2_;
                auVar122._4_4_ = (int)auVar101._2_2_;
                auVar122._8_4_ = (int)auVar101._4_2_;
                auVar122._12_4_ = (int)sVar67;
                auVar102 = NEON_scvtf(auVar123,4);
                auVar111 = NEON_scvtf(auVar110,4);
                auVar115 = NEON_scvtf(auVar114,4);
                auVar123 = NEON_scvtf(auVar122,4);
                auVar99 = NEON_scvtf(auVar129,4);
                    /* try { // try from 00a9170c to 00b91827 has its CatchHandler @ 00a91528 */
                auVar124._0_4_ = fVar43 * auVar123._0_4_;
                auVar124._4_4_ = fVar43 * auVar123._4_4_;
                auVar124._8_4_ = fVar43 * auVar123._8_4_;
                auVar124._12_4_ = fVar43 * auVar123._12_4_;
                auVar103._0_4_ = fVar43 * auVar102._0_4_ * 7.450581e-09;
                auVar103._4_4_ = fVar43 * auVar102._4_4_ * 7.450581e-09;
                auVar103._8_4_ = fVar43 * auVar102._8_4_ * 7.450581e-09;
                auVar103._12_4_ = fVar43 * auVar102._12_4_ * 7.450581e-09;
                auVar112._0_4_ = fVar43 * auVar111._0_4_ * 7.450581e-09;
                auVar112._4_4_ = fVar43 * auVar111._4_4_ * 7.450581e-09;
                auVar112._8_4_ = fVar43 * auVar111._8_4_ * 7.450581e-09;
                auVar112._12_4_ = fVar43 * auVar111._12_4_ * 7.450581e-09;
                auVar116._0_4_ = fVar43 * auVar115._0_4_ * 7.450581e-09;
                auVar116._4_4_ = fVar43 * auVar115._4_4_ * 7.450581e-09;
                auVar116._8_4_ = fVar43 * auVar115._8_4_ * 7.450581e-09;
                auVar116._12_4_ = fVar43 * auVar115._12_4_ * 7.450581e-09;
                auVar106._0_4_ = auVar124._0_4_ * 7.450581e-09;
                auVar106._4_4_ = auVar124._4_4_ * 7.450581e-09;
                auVar106._8_4_ = auVar124._8_4_ * 7.450581e-09;
                auVar107._12_4_ = auVar124._12_4_ * 7.450581e-09;
                auVar107._0_12_ = auVar106;
                auVar115._0_4_ = fVar43 * auVar99._0_4_ * 7.450581e-09;
                auVar115._4_4_ = fVar43 * auVar99._4_4_ * 7.450581e-09;
                auVar115._8_4_ = fVar43 * auVar99._8_4_ * 7.450581e-09;
                auVar131._4_12_ = SUB1612(auVar104 << 0x30,4);
                auVar131._0_4_ = auVar103._4_4_;
                auVar133._12_4_ = auVar130._12_4_;
                auVar133._0_8_ = auVar131._0_8_;
                auVar133._8_4_ = auVar103._12_4_;
                auVar132._8_8_ = auVar133._8_8_;
                auVar132._4_4_ = auVar112._4_4_;
                auVar132._0_4_ = auVar103._4_4_;
                auVar134._0_12_ = auVar132._0_12_;
                auVar134._12_4_ = auVar112._12_4_;
                auVar136._4_12_ = SUB1612(auVar109 << 0x30,4);
                auVar136._0_4_ = auVar112._0_4_;
                auVar138._12_4_ = auVar135._12_4_;
                auVar138._0_8_ = auVar136._0_8_;
                auVar138._8_4_ = auVar112._4_4_;
                auVar137._8_8_ = auVar138._8_8_;
                auVar137._4_4_ = auVar116._0_4_;
                auVar137._0_4_ = auVar112._0_4_;
                auVar139._0_12_ = auVar137._0_12_;
                auVar139._12_4_ = auVar116._4_4_;
                auVar125._4_12_ = auVar124._4_12_;
                auVar125._0_4_ = auVar116._8_4_;
                auVar127._0_8_ = auVar125._0_8_;
                auVar127._8_4_ = auVar116._12_4_;
                auVar127._12_4_ = auVar124._12_4_;
                auVar126._8_8_ = auVar127._8_8_;
                auVar126._4_4_ = auVar106._8_4_;
                auVar126._0_4_ = auVar116._8_4_;
                auVar128._0_12_ = auVar126._0_12_;
                auVar128._12_4_ = auVar107._12_4_;
                auVar141._4_12_ = SUB1612(auVar113 << 0x30,4);
                auVar141._0_4_ = auVar115._0_4_;
                auVar143._12_4_ = auVar140._12_4_;
                auVar143._0_8_ = auVar141._0_8_;
                auVar143._8_4_ = auVar115._4_4_;
                auVar142._8_8_ = auVar143._8_8_;
                auVar142._4_4_ = auVar103._0_4_;
                auVar142._0_4_ = auVar115._0_4_;
                auVar144._0_12_ = auVar142._0_12_;
                auVar144._12_4_ = auVar103._4_4_;
                auVar108._12_4_ = fVar43 * auVar99._12_4_ * 7.450581e-09;
                auVar108._0_12_ = auVar106;
                auVar117._4_12_ = auVar116._4_12_;
                auVar117._0_4_ = auVar112._8_4_;
                auVar119._0_8_ = auVar117._0_8_;
                auVar119._8_4_ = auVar112._12_4_;
                auVar119._12_4_ = auVar116._12_4_;
                auVar118._8_8_ = auVar119._8_8_;
                auVar118._4_4_ = auVar116._8_4_;
                auVar118._0_4_ = auVar112._8_4_;
                auVar120._0_12_ = auVar118._0_12_;
                auVar120._12_4_ = auVar116._12_4_;
                auVar99 = NEON_ext(auVar112,auVar139,8,1);
                auVar102 = NEON_ext(auVar134,auVar103,8,1);
                auVar111 = NEON_ext(auVar103,auVar134,8,1);
                auVar115._12_4_ = auVar103._8_4_;
                auVar104 = NEON_ext(auVar108,auVar120,8,1);
                auVar109 = NEON_ext(auVar128,auVar102,8,1);
                auVar113 = NEON_ext(auVar99,auVar144,8,1);
                auVar102._4_4_ = auVar115._4_4_;
                auVar102._0_4_ = auVar106._0_4_;
                auVar102._8_8_ = auVar107._8_8_;
                auVar129 = NEON_ext(auVar111,auVar102,8,1);
                auVar111._4_4_ = auVar106._4_4_;
                auVar111._0_4_ = auVar116._4_4_;
                auVar111._8_4_ = auVar116._12_4_;
                auVar111._12_4_ = auVar107._12_4_;
                    /* catch() { ... } // from try @ 00a9162c with catch @ 00a91784 */
                auVar99 = NEON_ext(auVar115,auVar111,8,1);
                auVar102 = NEON_ext(auVar104,auVar104,8,1);
                auVar111 = NEON_ext(auVar109,auVar109,8,1);
                auVar104 = NEON_ext(auVar113,auVar113,8,1);
                auVar109 = NEON_ext(auVar129,auVar129,8,1);
                    /* catch() { ... } // from try @ 00a91610 with catch @ 00a9179c */
                auVar99 = NEON_ext(auVar99,auVar99,8,1);
                    /* catch() { ... } // from try @ 00a915f0 with catch @ 00a917a0
                       catch() { ... } // from try @ 00a91674 with catch @ 00a917a0 */
                *(long *)(pfVar26 + 10) = auVar99._8_8_;
                *(long *)(pfVar26 + 8) = auVar99._0_8_;
                *(long *)(pfVar26 + 0xe) = auVar102._8_8_;
                *(long *)(pfVar26 + 0xc) = auVar102._0_8_;
                *(long *)(pfVar26 + 0x12) = auVar111._8_8_;
                *(long *)(pfVar26 + 0x10) = auVar111._0_8_;
                *(long *)(pfVar26 + 2) = auVar104._8_8_;
                *(long *)pfVar26 = auVar104._0_8_;
                *(long *)(pfVar26 + 6) = auVar109._8_8_;
                *(long *)(pfVar26 + 4) = auVar109._0_8_;
                    /* catch() { ... } // from try @ 00a915ac with catch @ 00a917b8 */
                    /* catch() { ... } // from try @ 00a915a0 with catch @ 00a917bc */
                    /* catch() { ... } // from try @ 00a91580 with catch @ 00a917c0 */
                piVar28[2] = piVar28[2] +
                             ((((int)auVar130._4_2_ + (int)auVar121._4_2_ + (int)auVar135._4_2_ +
                                (int)auVar140._4_2_ + (int)auVar101._4_2_) * 0x1000) / 5 >> 0xc) *
                             iVar29;
                piVar28[3] = piVar28[3] +
                             ((((int)sVar44 + (int)auVar121._6_2_ + (int)sVar65 + (int)sVar66 +
                               (int)sVar67) * 0x1000) / 5 >> 0xc) * iVar29;
                *piVar28 = *piVar28 +
                           ((((int)auVar130._0_2_ + (int)auVar121._0_2_ + (int)auVar135._0_2_ +
                              (int)auVar140._0_2_ + (int)auVar101._0_2_) * 0x1000) / 5 >> 0xc) *
                           iVar29;
                piVar28[1] = piVar28[1] +
                             ((((int)auVar130._2_2_ + (int)auVar121._2_2_ + (int)auVar135._2_2_ +
                                (int)auVar140._2_2_ + (int)auVar101._2_2_) * 0x1000) / 5 >> 0xc) *
                             iVar29;
                pfVar26 = pfVar26 + 0x14;
                piVar28 = piVar28 + 4;
              } while (uVar31 != 0);
              bVar10 = uVar32 == param_2;
              param_3 = psVar27;
              param_4 = param_4 + uVar32;
              param_2 = param_2 - uVar32;
              param_1 = param_1 + uVar32 * 5;
              if (bVar10) {
                return;
              }
            }
          }
          do {
            uVar39 = *(undefined8 *)param_3;
            param_2 = param_2 - 1;
            auVar63._0_4_ = (int)(short)uVar39;
            sVar65 = (short)((ulong)uVar39 >> 0x10);
            auVar63._4_4_ = (int)sVar65;
            sVar66 = (short)((ulong)uVar39 >> 0x20);
            auVar63._8_4_ = (int)sVar66;
            sVar67 = (short)((ulong)uVar39 >> 0x30);
            auVar63._12_4_ = (int)sVar67;
            auVar47 = NEON_scvtf(auVar63,4);
            param_1[2] = fVar43 * auVar47._8_4_ * 7.450581e-09;
            param_1[3] = fVar43 * auVar47._12_4_ * 7.450581e-09;
            *param_1 = fVar43 * auVar47._0_4_ * 7.450581e-09;
            param_1[1] = fVar43 * auVar47._4_4_ * 7.450581e-09;
            sVar44 = param_3[4];
            param_1[4] = fVar43 * (float)(int)sVar44 * 7.450581e-09;
            *param_4 = *param_4 +
                       ((((int)sVar65 + (int)(short)uVar39 + (int)sVar66 + (int)sVar67 + (int)sVar44
                         ) * 0x1000) / 5 >> 0xc) * iVar29;
            param_3 = param_3 + 5;
            param_4 = param_4 + 1;
            param_1 = param_1 + 5;
          } while (param_2 != 0);
        }
        break;
      case 5:
        volumeMulti<4,6,float,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar44);
        return;
      case 6:
        volumeMulti<4,7,float,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar44);
        return;
      case 7:
        volumeMulti<4,8,float,short,short,int,short>
                  (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar44);
        return;
      }
    }
                    /* WARNING: Read-only address (ram,0x0189cc60) is written */
                    /* WARNING: Read-only address (ram,0x0189cc70) is written */
                    /* WARNING: Read-only address (ram,0x0189cc80) is written */
                    /* WARNING: Read-only address (ram,0x0189cc90) is written */
                    /* WARNING: Read-only address (ram,0x0189cca0) is written */
    return;
  }
  if (7 < uVar4) {
    return;
  }
  iVar29 = *(int *)(param_6 + 0x18);
  ptVar1 = param_6 + 8;
  ptVar2 = param_6 + 0x10;
  ptVar3 = param_6 + 0x1c;
  iVar30 = (int)param_2;
  switch(uVar4) {
  case 0:
    if (param_4 != (int *)0x0) {
      iVar30 = *(int *)ptVar3;
      do {
        sVar44 = *param_3;
        iVar33 = *(int *)ptVar1;
        param_2 = param_2 - 1;
        *param_1 = (float)(int)sVar44 * (float)iVar33 * 1.1368684e-13;
        *(int *)ptVar1 = *(int *)ptVar2 + iVar33;
        *param_4 = *param_4 + (iVar30 >> 0x10) * (int)sVar44;
        iVar30 = *(int *)ptVar3 + iVar29;
        *(int *)ptVar3 = iVar30;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
      } while (param_2 != 0);
      return;
    }
    iVar33 = *(int *)ptVar2;
    iVar29 = *(int *)ptVar1;
    iVar30 = iVar33 * iVar30;
    iVar38 = iVar29;
    if (7 < param_2) {
      uVar32 = param_2 & 0xfffffffffffffff8;
                    /* try { // try from 00a9198c to 00b919ef has its CatchHandler @ 00a91c30 */
      iVar38 = iVar33 * 4;
      pfVar26 = param_1 + 4;
      psVar27 = param_3 + 4;
      param_3 = param_3 + uVar32;
      param_1 = param_1 + uVar32;
      auVar41._4_4_ = iVar29 + iVar33;
      auVar41._0_4_ = iVar29;
      auVar41._8_4_ = iVar29 + iVar33 * 2;
      auVar41._12_4_ = iVar29 + iVar33 * 3;
      uVar31 = uVar32;
      do {
        uVar39 = *(undefined8 *)(psVar27 + -4);
        uVar45 = *(undefined8 *)psVar27;
        auVar51._0_4_ = auVar41._0_4_ + iVar38;
        auVar51._4_4_ = auVar41._4_4_ + iVar38;
        auVar51._8_4_ = auVar41._8_4_ + iVar38;
        auVar51._12_4_ = auVar41._12_4_ + iVar38;
        auVar69 = NEON_scvtf(auVar41,4);
        auVar75 = NEON_scvtf(auVar51,4);
        auVar41._0_4_ = auVar51._0_4_ + iVar38;
        auVar41._4_4_ = auVar51._4_4_ + iVar38;
        auVar41._8_4_ = auVar51._8_4_ + iVar38;
        auVar41._12_4_ = auVar51._12_4_ + iVar38;
        auVar52._0_4_ = (int)(short)uVar39;
        auVar52._4_4_ = (int)(short)((ulong)uVar39 >> 0x10);
        auVar52._8_4_ = (int)(short)((ulong)uVar39 >> 0x20);
        auVar52._12_4_ = (int)(short)((ulong)uVar39 >> 0x30);
        auVar59._0_4_ = (int)(short)uVar45;
        auVar59._4_4_ = (int)(short)((ulong)uVar45 >> 0x10);
        auVar59._8_4_ = (int)(short)((ulong)uVar45 >> 0x20);
        auVar59._12_4_ = (int)(short)((ulong)uVar45 >> 0x30);
        auVar47 = NEON_scvtf(auVar52,4);
        auVar63 = NEON_scvtf(auVar59,4);
        uVar31 = uVar31 - 8;
        pfVar26[-2] = auVar69._8_4_ * auVar47._8_4_ * 1.1368684e-13;
        pfVar26[-1] = auVar69._12_4_ * auVar47._12_4_ * 1.1368684e-13;
        pfVar26[-4] = auVar69._0_4_ * auVar47._0_4_ * 1.1368684e-13;
        pfVar26[-3] = auVar69._4_4_ * auVar47._4_4_ * 1.1368684e-13;
        pfVar26[2] = auVar75._8_4_ * auVar63._8_4_ * 1.1368684e-13;
        pfVar26[3] = auVar75._12_4_ * auVar63._12_4_ * 1.1368684e-13;
        *pfVar26 = auVar75._0_4_ * auVar63._0_4_ * 1.1368684e-13;
        pfVar26[1] = auVar75._4_4_ * auVar63._4_4_ * 1.1368684e-13;
        pfVar26 = pfVar26 + 8;
        psVar27 = psVar27 + 8;
      } while (uVar31 != 0);
      bVar10 = uVar32 == param_2;
      param_2 = param_2 - uVar32;
      iVar38 = iVar29 + iVar33 * (int)uVar32;
      if (bVar10) break;
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = (float)iVar38 * (float)(int)*param_3 * 1.1368684e-13;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      iVar38 = iVar38 + iVar33;
    } while (param_2 != 0);
    break;
  case 1:
    if (param_4 != (int *)0x0) {
      iVar30 = *(int *)ptVar3;
      do {
        sVar44 = *param_3;
        sVar65 = param_3[1];
        uVar39 = *(undefined8 *)ptVar1;
        uVar45 = NEON_scvtf(uVar39,4);
        uVar57 = NEON_scvtf(CONCAT44((int)sVar65,(int)sVar44),4);
        *(ulong *)param_1 =
             CONCAT44((float)((ulong)uVar57 >> 0x20) * (float)((ulong)uVar45 >> 0x20) *
                      1.1368684e-13,(float)uVar57 * (float)uVar45 * 1.1368684e-13);
        *(ulong *)ptVar1 =
             CONCAT44((int)((ulong)*(undefined8 *)ptVar2 >> 0x20) + (int)((ulong)uVar39 >> 0x20),
                      (int)*(undefined8 *)ptVar2 + (int)uVar39);
        param_3 = param_3 + 2;
        *param_4 = *param_4 + (iVar30 >> 0x10) * ((int)sVar65 + (int)sVar44 >> 1);
        param_2 = param_2 - 1;
        iVar30 = *(int *)ptVar3 + iVar29;
        *(int *)ptVar3 = iVar30;
        param_1 = param_1 + 2;
        param_4 = param_4 + 1;
      } while (param_2 != 0);
      return;
    }
    uVar39 = *(undefined8 *)(param_6 + 8);
    iVar33 = (int)((ulong)uVar39 >> 0x20);
    iVar38 = (int)*(undefined8 *)(param_6 + 0x10);
    iVar42 = (int)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
    iVar29 = (int)uVar39;
    if (3 < param_2) {
      uVar31 = (param_2 - 1) * 8;
                    /* try { // try from 00a91adc to 00b91b1f has its CatchHandler @ 00a91c30 */
      if (((uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0) && (param_2 - 1 >> 0x3d == 0)
          ) && (uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0)) {
        uVar32 = param_2 & 0xfffffffffffffffc;
        iVar34 = iVar42 * 4;
        iVar35 = iVar38 * 4;
        psVar27 = param_3 + uVar32 * 2;
        pfVar26 = param_1 + uVar32 * 2;
        uVar39 = CONCAT44(iVar33 + iVar42 * (int)uVar32,iVar29 + iVar38 * (int)uVar32);
        auVar54._4_4_ = iVar33 + iVar42;
        auVar54._0_4_ = iVar33;
        auVar54._8_4_ = iVar33 + iVar42 * 2;
        auVar54._12_4_ = iVar33 + iVar42 * 3;
        auVar61._4_4_ = iVar29 + iVar38;
        auVar61._0_4_ = iVar29;
        auVar61._8_4_ = iVar29 + iVar38 * 2;
        auVar61._12_4_ = iVar29 + iVar38 * 3;
        uVar31 = uVar32;
        do {
          sVar44 = *param_3;
          psVar20 = param_3 + 1;
          psVar21 = param_3 + 2;
          psVar14 = param_3 + 3;
          psVar19 = param_3 + 4;
          psVar13 = param_3 + 5;
          psVar12 = param_3 + 6;
          psVar11 = param_3 + 7;
          param_3 = param_3 + 8;
                    /* try { // try from 00a91b50 to 00b91b8b has its CatchHandler @ 00a91c68 */
          auVar69 = NEON_scvtf(auVar61,4);
          auVar75 = NEON_scvtf(auVar54,4);
          auVar55._0_4_ = auVar54._0_4_ + iVar34;
          auVar55._4_4_ = auVar54._4_4_ + iVar34;
          auVar55._8_4_ = auVar54._8_4_ + iVar34;
          auVar55._12_4_ = auVar54._12_4_ + iVar34;
          auVar105._0_4_ = (int)sVar44;
          auVar105._4_4_ = (int)*psVar21;
          auVar105._8_4_ = (int)*psVar19;
          auVar105._12_4_ = (int)*psVar12;
          auVar92._0_4_ = (int)*psVar20;
          auVar92._4_4_ = (int)*psVar14;
          auVar92._8_4_ = (int)*psVar13;
          auVar92._12_4_ = (int)*psVar11;
          auVar63 = NEON_scvtf(auVar105,4);
          auVar47 = NEON_scvtf(auVar92,4);
          uVar31 = uVar31 - 4;
          *param_1 = auVar69._0_4_ * auVar63._0_4_ * 1.1368684e-13;
          param_1[1] = auVar75._0_4_ * auVar47._0_4_ * 1.1368684e-13;
          param_1[2] = auVar69._4_4_ * auVar63._4_4_ * 1.1368684e-13;
          param_1[3] = auVar75._4_4_ * auVar47._4_4_ * 1.1368684e-13;
          param_1[4] = auVar69._8_4_ * auVar63._8_4_ * 1.1368684e-13;
          param_1[5] = auVar75._8_4_ * auVar47._8_4_ * 1.1368684e-13;
          param_1[6] = auVar69._12_4_ * auVar63._12_4_ * 1.1368684e-13;
          param_1[7] = auVar75._12_4_ * auVar47._12_4_ * 1.1368684e-13;
          param_1 = param_1 + 8;
          auVar62._0_4_ = auVar61._0_4_ + iVar35;
          auVar62._4_4_ = auVar61._4_4_ + iVar35;
          auVar62._8_4_ = auVar61._8_4_ + iVar35;
          auVar62._12_4_ = auVar61._12_4_ + iVar35;
          auVar54 = auVar55;
          auVar61 = auVar62;
        } while (uVar31 != 0);
                    /* try { // try from 00a91b8c to 00b91cbf has its CatchHandler @ 00a91828 */
        bVar10 = uVar32 == param_2;
        param_2 = param_2 - uVar32;
        param_1 = pfVar26;
        param_3 = psVar27;
        if (bVar10) goto LAB_00a91178;
      }
    }
    do {
      uVar45 = NEON_scvtf(uVar39,4);
      uVar57 = NEON_scvtf(CONCAT44((int)param_3[1],(int)*param_3),4);
      param_2 = param_2 - 1;
      *(ulong *)param_1 =
           CONCAT44((float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar57 >> 0x20) * 1.1368684e-13,
                    (float)uVar45 * (float)uVar57 * 1.1368684e-13);
      uVar39 = CONCAT44(iVar42 + (int)((ulong)uVar39 >> 0x20),iVar38 + (int)uVar39);
      param_1 = param_1 + 2;
      param_3 = param_3 + 2;
    } while (param_2 != 0);
LAB_00a91178:
    *(int *)(param_6 + 8) = iVar29 + iVar38 * iVar30;
    *(int *)(param_6 + 0xc) = iVar33 + iVar42 * iVar30;
    return;
  case 2:
    if (param_4 != (int *)0x0) {
      iVar30 = *(int *)ptVar3;
      do {
        sVar44 = *param_3;
        sVar65 = param_3[1];
        iVar33 = *(int *)ptVar1;
        fVar43 = (float)iVar33;
        uVar39 = NEON_scvtf(CONCAT44((int)sVar65,(int)sVar44),4);
        *(ulong *)param_1 =
             CONCAT44((float)((ulong)uVar39 >> 0x20) * fVar43 * 1.1368684e-13,
                      (float)uVar39 * fVar43 * 1.1368684e-13);
        sVar66 = param_3[2];
        param_1[2] = fVar43 * (float)(int)sVar66 * 1.1368684e-13;
        param_2 = param_2 - 1;
        *(int *)ptVar1 = *(int *)ptVar2 + iVar33;
        *param_4 = *param_4 +
                   (iVar30 >> 0x10) *
                   ((((int)sVar65 + (int)sVar44 + (int)sVar66) * 0x1000) / 3 >> 0xc);
        param_3 = param_3 + 3;
        param_1 = param_1 + 3;
        iVar30 = *(int *)ptVar3 + iVar29;
        *(int *)ptVar3 = iVar30;
        param_4 = param_4 + 1;
      } while (param_2 != 0);
      return;
    }
    iVar33 = *(int *)ptVar2;
    iVar29 = *(int *)ptVar1;
    iVar30 = iVar33 * iVar30;
    iVar38 = iVar29;
    if (3 < param_2) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_2 - 1;
      uVar31 = (param_2 - 1) * 0xc;
      if (((uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0) &&
          (SUB168(auVar6 * ZEXT816(0xc),8) == 0)) &&
         ((uVar31 < ~(ulong)(param_1 + 2) || uVar31 - ~(ulong)(param_1 + 2) == 0 &&
          (uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0)))) {
                    /* try { // try from 00a91828 to 00b9187b has its CatchHandler @ 00a91828
                       catch() { ... } // from try @ 00a91828 with catch @ 00a91828
                       catch() { ... } // from try @ 00a91b8c with catch @ 00a91828 */
        uVar32 = param_2 & 0xfffffffffffffffc;
        iVar38 = iVar33 * 4;
        psVar27 = param_3 + uVar32 * 3;
        pfVar26 = param_1 + uVar32 * 3;
        iVar34 = iVar29 + iVar33;
        iVar35 = iVar29 + iVar33 * 2;
        iVar36 = iVar29 + iVar33 * 3;
        uVar31 = uVar32;
        iVar42 = iVar29;
        do {
          sVar44 = *param_3;
          psVar11 = param_3 + 1;
          psVar12 = param_3 + 2;
          psVar13 = param_3 + 3;
          psVar14 = param_3 + 4;
          psVar15 = param_3 + 5;
          psVar16 = param_3 + 6;
          psVar17 = param_3 + 7;
          psVar18 = param_3 + 8;
          psVar19 = param_3 + 9;
          psVar20 = param_3 + 10;
          psVar21 = param_3 + 0xb;
          param_3 = param_3 + 0xc;
          auVar9._4_4_ = iVar34;
          auVar9._0_4_ = iVar42;
          auVar9._8_4_ = iVar35;
          auVar9._12_4_ = iVar36;
          auVar47 = NEON_scvtf(auVar9,4);
          uVar31 = uVar31 - 4;
          iVar42 = iVar42 + iVar38;
          iVar34 = iVar34 + iVar38;
          iVar35 = iVar35 + iVar38;
          iVar36 = iVar36 + iVar38;
          auVar84._0_4_ = (int)sVar44;
          auVar84._4_4_ = (int)*psVar13;
          auVar84._8_4_ = (int)*psVar16;
          auVar84._12_4_ = (int)*psVar19;
          auVar91._0_4_ = (int)*psVar11;
          auVar91._4_4_ = (int)*psVar14;
          auVar91._8_4_ = (int)*psVar17;
          auVar91._12_4_ = (int)*psVar20;
                    /* try { // try from 00a9187c to 00b91893 has its CatchHandler @ 00a91c58 */
          auVar49._0_4_ = (int)*psVar12;
          auVar49._4_4_ = (int)*psVar15;
          auVar49._8_4_ = (int)*psVar18;
          auVar49._12_4_ = (int)*psVar21;
          auVar63 = NEON_scvtf(auVar84,4);
          auVar69 = NEON_scvtf(auVar91,4);
          fVar43 = auVar47._0_4_;
          fVar37 = auVar47._4_4_;
          fVar81 = auVar47._8_4_;
          fVar82 = auVar47._12_4_;
          auVar47 = NEON_scvtf(auVar49,4);
                    /* try { // try from 00a9189c to 00b918a7 has its CatchHandler @ 00a91c2c */
          *param_1 = fVar43 * auVar63._0_4_ * 1.1368684e-13;
          param_1[1] = fVar43 * auVar69._0_4_ * 1.1368684e-13;
          param_1[2] = fVar43 * auVar47._0_4_ * 1.1368684e-13;
          param_1[3] = fVar37 * auVar63._4_4_ * 1.1368684e-13;
          param_1[4] = fVar37 * auVar69._4_4_ * 1.1368684e-13;
          param_1[5] = fVar37 * auVar47._4_4_ * 1.1368684e-13;
          param_1[6] = fVar81 * auVar63._8_4_ * 1.1368684e-13;
          param_1[7] = fVar81 * auVar69._8_4_ * 1.1368684e-13;
          param_1[8] = fVar81 * auVar47._8_4_ * 1.1368684e-13;
          param_1[9] = fVar82 * auVar63._12_4_ * 1.1368684e-13;
          param_1[10] = fVar82 * auVar69._12_4_ * 1.1368684e-13;
          param_1[0xb] = fVar82 * auVar47._12_4_ * 1.1368684e-13;
          param_1 = param_1 + 0xc;
                    /* try { // try from 00a918a8 to 00b918b3 has its CatchHandler @ 00a91c28 */
        } while (uVar31 != 0);
        bVar10 = uVar32 == param_2;
        param_3 = psVar27;
        param_2 = param_2 - uVar32;
        param_1 = pfVar26;
        iVar38 = iVar29 + iVar33 * (int)uVar32;
        if (bVar10) break;
      }
    }
    do {
      fVar43 = (float)iVar38;
      param_2 = param_2 - 1;
      uVar39 = NEON_scvtf(CONCAT44((int)param_3[1],(int)*param_3),4);
      *(ulong *)param_1 =
           CONCAT44((float)((ulong)uVar39 >> 0x20) * fVar43 * 1.1368684e-13,
                    (float)uVar39 * fVar43 * 1.1368684e-13);
      param_1[2] = fVar43 * (float)(int)param_3[2] * 1.1368684e-13;
      param_3 = param_3 + 3;
      param_1 = param_1 + 3;
      iVar38 = iVar38 + iVar33;
    } while (param_2 != 0);
    break;
  case 3:
    if (param_4 != (int *)0x0) {
      iVar30 = *(int *)ptVar3;
      do {
        iVar33 = *(int *)ptVar1;
        uVar39 = *(undefined8 *)param_3;
        param_2 = param_2 - 1;
        fVar43 = (float)iVar33;
        auVar46._0_4_ = (int)(short)uVar39;
        sVar44 = (short)((ulong)uVar39 >> 0x10);
        auVar46._4_4_ = (int)sVar44;
        sVar65 = (short)((ulong)uVar39 >> 0x20);
        auVar46._8_4_ = (int)sVar65;
        sVar66 = (short)((ulong)uVar39 >> 0x30);
        auVar46._12_4_ = (int)sVar66;
        auVar47 = NEON_scvtf(auVar46,4);
        param_1[2] = auVar47._8_4_ * fVar43 * 1.1368684e-13;
        param_1[3] = auVar47._12_4_ * fVar43 * 1.1368684e-13;
        *param_1 = auVar47._0_4_ * fVar43 * 1.1368684e-13;
        param_1[1] = auVar47._4_4_ * fVar43 * 1.1368684e-13;
        *(int *)ptVar1 = *(int *)ptVar2 + iVar33;
        *param_4 = *param_4 +
                   (iVar30 >> 0x10) *
                   ((int)sVar44 + (int)(short)uVar39 + (int)sVar65 + (int)sVar66 >> 2);
        iVar30 = *(int *)ptVar3 + iVar29;
        *(int *)ptVar3 = iVar30;
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        param_4 = param_4 + 1;
      } while (param_2 != 0);
      return;
    }
    iVar33 = *(int *)ptVar2;
    iVar29 = *(int *)ptVar1;
    iVar30 = iVar33 * iVar30;
    iVar38 = iVar29;
    if (3 < param_2) {
      uVar31 = (param_2 - 1) * 0x10;
      if ((((uVar31 < ~(ulong)(param_1 + 2) || uVar31 - ~(ulong)(param_1 + 2) == 0) &&
           (param_2 - 1 >> 0x3c == 0)) &&
          (uVar31 < ~(ulong)(param_1 + 3) || uVar31 - ~(ulong)(param_1 + 3) == 0)) &&
         ((uVar31 < ~(ulong)(param_1 + 1) || uVar31 - ~(ulong)(param_1 + 1) == 0 &&
          (uVar31 < ~(ulong)param_1 || uVar31 - ~(ulong)param_1 == 0)))) {
        uVar32 = param_2 & 0xfffffffffffffffc;
                    /* catch() { ... } // from try @ 00a91a0c with catch @ 00a91c00 */
        iVar38 = iVar33 * 4;
        psVar27 = param_3 + uVar32 * 4;
        pfVar26 = param_1 + uVar32 * 4;
                    /* catch() { ... } // from try @ 00a91a4c with catch @ 00a91c20
                       catch() { ... } // from try @ 00a91ab8 with catch @ 00a91c20 */
        iVar34 = iVar29 + iVar33;
        iVar35 = iVar29 + iVar33 * 2;
        iVar36 = iVar29 + iVar33 * 3;
                    /* catch() { ... } // from try @ 00a91a7c with catch @ 00a91c24 */
                    /* catch() { ... } // from try @ 00a918a8 with catch @ 00a91c28 */
        uVar31 = uVar32;
        iVar42 = iVar29;
        do {
                    /* catch() { ... } // from try @ 00a9189c with catch @ 00a91c2c */
          sVar44 = *param_3;
          psVar12 = param_3 + 1;
          psVar22 = param_3 + 2;
          psVar11 = param_3 + 3;
          psVar13 = param_3 + 4;
          psVar14 = param_3 + 5;
          psVar21 = param_3 + 6;
          psVar20 = param_3 + 7;
          psVar19 = param_3 + 8;
          psVar18 = param_3 + 9;
          psVar17 = param_3 + 10;
          psVar16 = param_3 + 0xb;
          psVar15 = param_3 + 0xc;
          psVar23 = param_3 + 0xd;
          psVar24 = param_3 + 0xe;
          psVar25 = param_3 + 0xf;
          param_3 = param_3 + 0x10;
          auVar8._4_4_ = iVar34;
          auVar8._0_4_ = iVar42;
          auVar8._8_4_ = iVar35;
          auVar8._12_4_ = iVar36;
                    /* catch() { ... } // from try @ 00a918ec with catch @ 00a91c30
                       catch() { ... } // from try @ 00a9198c with catch @ 00a91c30
                       catch() { ... } // from try @ 00a91adc with catch @ 00a91c30 */
          auVar47 = NEON_scvtf(auVar8,4);
          uVar31 = uVar31 - 4;
          iVar42 = iVar42 + iVar38;
          iVar34 = iVar34 + iVar38;
          iVar35 = iVar35 + iVar38;
          iVar36 = iVar36 + iVar38;
          auVar93._0_4_ = (int)sVar44;
          auVar93._4_4_ = (int)*psVar13;
          auVar93._8_4_ = (int)*psVar19;
          auVar93._12_4_ = (int)*psVar15;
          auVar97._0_4_ = (int)*psVar12;
          auVar97._4_4_ = (int)*psVar14;
          auVar97._8_4_ = (int)*psVar18;
          auVar97._12_4_ = (int)*psVar23;
          auVar56._0_4_ = (int)*psVar11;
          auVar56._4_4_ = (int)*psVar20;
          auVar56._8_4_ = (int)*psVar16;
          auVar56._12_4_ = (int)*psVar25;
          auVar63 = NEON_scvtf(auVar93,4);
          auVar100._0_4_ = (int)*psVar22;
          auVar100._4_4_ = (int)*psVar21;
          auVar100._8_4_ = (int)*psVar17;
          auVar100._12_4_ = (int)*psVar24;
          auVar69 = NEON_scvtf(auVar97,4);
          fVar43 = auVar47._0_4_;
          fVar37 = auVar47._4_4_;
          fVar81 = auVar47._8_4_;
          fVar82 = auVar47._12_4_;
                    /* catch() { ... } // from try @ 00a9187c with catch @ 00a91c58 */
          auVar75 = NEON_scvtf(auVar100,4);
          auVar47 = NEON_scvtf(auVar56,4);
                    /* catch() { ... } // from try @ 00a918b4 with catch @ 00a91c68
                       catch() { ... } // from try @ 00a91970 with catch @ 00a91c68
                       catch() { ... } // from try @ 00a91b50 with catch @ 00a91c68 */
          *param_1 = fVar43 * auVar63._0_4_ * 1.1368684e-13;
          param_1[1] = fVar43 * auVar69._0_4_ * 1.1368684e-13;
          param_1[2] = fVar43 * auVar75._0_4_ * 1.1368684e-13;
          param_1[3] = fVar43 * auVar47._0_4_ * 1.1368684e-13;
          param_1[4] = fVar37 * auVar63._4_4_ * 1.1368684e-13;
          param_1[5] = fVar37 * auVar69._4_4_ * 1.1368684e-13;
          param_1[6] = fVar37 * auVar75._4_4_ * 1.1368684e-13;
          param_1[7] = fVar37 * auVar47._4_4_ * 1.1368684e-13;
          param_1[8] = fVar81 * auVar63._8_4_ * 1.1368684e-13;
          param_1[9] = fVar81 * auVar69._8_4_ * 1.1368684e-13;
          param_1[10] = fVar81 * auVar75._8_4_ * 1.1368684e-13;
          param_1[0xb] = fVar81 * auVar47._8_4_ * 1.1368684e-13;
          param_1[0xc] = fVar82 * auVar63._12_4_ * 1.1368684e-13;
          param_1[0xd] = fVar82 * auVar69._12_4_ * 1.1368684e-13;
          param_1[0xe] = fVar82 * auVar75._12_4_ * 1.1368684e-13;
          param_1[0xf] = fVar82 * auVar47._12_4_ * 1.1368684e-13;
          param_1 = param_1 + 0x10;
        } while (uVar31 != 0);
        bVar10 = uVar32 == param_2;
        param_3 = psVar27;
        param_2 = param_2 - uVar32;
        param_1 = pfVar26;
        iVar38 = iVar29 + iVar33 * (int)uVar32;
        if (bVar10) break;
      }
    }
    do {
      uVar39 = *(undefined8 *)param_3;
      fVar43 = (float)iVar38;
      param_2 = param_2 - 1;
      auVar40._0_4_ = (int)(short)uVar39;
      auVar40._4_4_ = (int)(short)((ulong)uVar39 >> 0x10);
      auVar40._8_4_ = (int)(short)((ulong)uVar39 >> 0x20);
      auVar40._12_4_ = (int)(short)((ulong)uVar39 >> 0x30);
      auVar47 = NEON_scvtf(auVar40,4);
      param_1[2] = auVar47._8_4_ * fVar43 * 1.1368684e-13;
      param_1[3] = auVar47._12_4_ * fVar43 * 1.1368684e-13;
      *param_1 = auVar47._0_4_ * fVar43 * 1.1368684e-13;
      param_1[1] = auVar47._4_4_ * fVar43 * 1.1368684e-13;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
      iVar38 = iVar38 + iVar33;
    } while (param_2 != 0);
    break;
  case 4:
    volumeRampMulti<4,5,float,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar29);
    return;
  case 5:
    volumeRampMulti<4,6,float,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar29);
    return;
  case 6:
    volumeRampMulti<4,7,float,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar29);
    return;
  case 7:
    volumeRampMulti<4,8,float,short,int,int,int>
              (param_1,param_2,param_3,param_4,(int *)ptVar1,(int *)ptVar2,(int *)ptVar3,iVar29);
    return;
  }
  *(int *)ptVar1 = iVar29 + iVar30;
  return;
}

