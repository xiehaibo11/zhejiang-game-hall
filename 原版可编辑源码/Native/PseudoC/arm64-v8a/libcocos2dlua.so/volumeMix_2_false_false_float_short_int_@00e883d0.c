
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::experimental::AudioMixer::volumeMix<2, false, false, float, short, int>(float*,
   unsigned long, short const*, int*, bool, cocos2d::experimental::AudioMixer::track_t*) */

void cocos2d::experimental::AudioMixer::volumeMix<2,false,false,float,short,int>
               (float *param_1,ulong param_2,short *param_3,int *param_4,bool param_5,
               track_t *param_6)

{
  track_t *ptVar1;
  track_t *ptVar2;
  track_t *ptVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
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
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  short sVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  short sVar63;
  short sVar64;
  undefined8 uVar58;
  undefined1 auVar59 [16];
  short sVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  short sVar66;
  short sVar70;
  short sVar71;
  short sVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  short sVar73;
  short sVar77;
  short sVar78;
  short sVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  short sVar82;
  short sVar86;
  short sVar87;
  short sVar88;
  undefined1 auVar83 [16];
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
  undefined1 auVar104 [12];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
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
  undefined1 auVar105 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  
  auVar76 = _DAT_01427fb0;
  auVar74 = _DAT_01427fa0;
  auVar67 = _DAT_01427f90;
  auVar60 = _DAT_01427f80;
  auVar50 = _DAT_01427f70;
  uVar6 = *(int *)(param_6 + 0xbc) - 1;
  if (!param_5) {
    if (7 < uVar6) {
      return;
    }
    sVar47 = *(short *)(param_6 + 0x20);
    ptVar1 = param_6 + 4;
    iVar29 = (int)sVar47;
    switch(uVar6) {
    case 1:
      if (param_4 == (int *)0x0) {
        fVar46 = (float)(int)*(short *)ptVar1;
        fVar40 = (float)(int)*(short *)(param_6 + 6);
        if (3 < param_2) {
          uVar33 = param_2 & 0xfffffffffffffffc;
          psVar27 = param_3 + uVar33 * 2;
          pfVar26 = param_1 + uVar33 * 2;
          uVar32 = uVar33;
          do {
            sVar47 = *param_3;
            psVar18 = param_3 + 1;
            psVar17 = param_3 + 2;
            psVar16 = param_3 + 3;
            psVar15 = param_3 + 4;
            psVar14 = param_3 + 5;
            psVar13 = param_3 + 6;
            psVar11 = param_3 + 7;
            param_3 = param_3 + 8;
            uVar32 = uVar32 - 4;
            auVar85._0_4_ = (int)sVar47;
            auVar85._4_4_ = (int)*psVar17;
            auVar85._8_4_ = (int)*psVar15;
            auVar85._12_4_ = (int)*psVar13;
            auVar69._0_4_ = (int)*psVar18;
            auVar69._4_4_ = (int)*psVar16;
            auVar69._8_4_ = (int)*psVar14;
            auVar69._12_4_ = (int)*psVar11;
            auVar60 = NEON_scvtf(auVar85,4);
            auVar50 = NEON_scvtf(auVar69,4);
            *param_1 = fVar46 * auVar60._0_4_ * 7.450581e-09;
            param_1[1] = fVar40 * auVar50._0_4_ * 7.450581e-09;
            param_1[2] = fVar46 * auVar60._4_4_ * 7.450581e-09;
            param_1[3] = fVar40 * auVar50._4_4_ * 7.450581e-09;
            param_1[4] = fVar46 * auVar60._8_4_ * 7.450581e-09;
            param_1[5] = fVar40 * auVar50._8_4_ * 7.450581e-09;
            param_1[6] = fVar46 * auVar60._12_4_ * 7.450581e-09;
            param_1[7] = fVar40 * auVar50._12_4_ * 7.450581e-09;
            param_1 = param_1 + 8;
          } while (uVar32 != 0);
          bVar10 = uVar33 == param_2;
          param_3 = psVar27;
          param_2 = param_2 - uVar33;
          param_1 = pfVar26;
          if (bVar10) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          *param_1 = fVar46 * (float)(int)*param_3 * 7.450581e-09;
          param_1[1] = fVar40 * (float)(int)param_3[1] * 7.450581e-09;
          param_3 = param_3 + 2;
          param_1 = param_1 + 2;
        } while (param_2 != 0);
        return;
      }
      fVar46 = (float)(int)*(short *)ptVar1;
      fVar40 = (float)(int)*(short *)(param_6 + 6);
      if (3 < param_2) {
        uVar33 = param_2 & 0xfffffffffffffffc;
        pfVar26 = param_1 + uVar33 * 2;
        psVar27 = param_3 + uVar33 * 2;
        piVar28 = param_4;
        uVar32 = uVar33;
        do {
          sVar47 = *param_3;
          sVar66 = param_3[1];
          sVar63 = param_3[2];
          sVar70 = param_3[3];
          sVar64 = param_3[4];
          sVar71 = param_3[5];
          sVar65 = param_3[6];
          sVar72 = param_3[7];
          param_3 = param_3 + 8;
          uVar32 = uVar32 - 4;
          auVar89._0_4_ = (int)sVar47;
          auVar89._4_4_ = (int)sVar63;
          auVar89._8_4_ = (int)sVar64;
          auVar89._12_4_ = (int)sVar65;
          auVar93._0_4_ = (int)sVar66;
          auVar93._4_4_ = (int)sVar70;
          auVar93._8_4_ = (int)sVar71;
          auVar93._12_4_ = (int)sVar72;
          auVar50 = NEON_scvtf(auVar89,4);
          auVar60 = NEON_scvtf(auVar93,4);
          *param_1 = fVar46 * auVar50._0_4_ * 7.450581e-09;
          param_1[1] = fVar40 * auVar60._0_4_ * 7.450581e-09;
          param_1[2] = fVar46 * auVar50._4_4_ * 7.450581e-09;
          param_1[3] = fVar40 * auVar60._4_4_ * 7.450581e-09;
          param_1[4] = fVar46 * auVar50._8_4_ * 7.450581e-09;
          param_1[5] = fVar40 * auVar60._8_4_ * 7.450581e-09;
          param_1[6] = fVar46 * auVar50._12_4_ * 7.450581e-09;
          param_1[7] = fVar40 * auVar60._12_4_ * 7.450581e-09;
          param_1 = param_1 + 8;
          piVar28[2] = piVar28[2] + ((int)sVar71 + (int)sVar64 >> 1) * iVar29;
          piVar28[3] = piVar28[3] + ((int)sVar72 + (int)sVar65 >> 1) * iVar29;
          *piVar28 = *piVar28 + ((int)sVar66 + (int)sVar47 >> 1) * iVar29;
          piVar28[1] = piVar28[1] + ((int)sVar70 + (int)sVar63 >> 1) * iVar29;
          piVar28 = piVar28 + 4;
        } while (uVar32 != 0);
        bVar10 = uVar33 == param_2;
        param_3 = psVar27;
        param_2 = param_2 - uVar33;
        param_4 = param_4 + uVar33;
        param_1 = pfVar26;
        if (bVar10) {
          return;
        }
      }
      do {
        sVar47 = *param_3;
        param_2 = param_2 - 1;
        *param_1 = fVar46 * (float)(int)sVar47 * 7.450581e-09;
        sVar63 = param_3[1];
        param_1[1] = fVar40 * (float)(int)sVar63 * 7.450581e-09;
        *param_4 = *param_4 + ((int)sVar63 + (int)sVar47 >> 1) * iVar29;
        param_3 = param_3 + 2;
        param_4 = param_4 + 1;
        param_1 = param_1 + 2;
      } while (param_2 != 0);
      return;
    case 2:
      fVar46 = (float)(int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          uVar33 = param_2 & 0xfffffffffffffffc;
          psVar27 = param_3 + uVar33 * 3;
          pfVar26 = param_1 + uVar33 * 3;
          uVar32 = uVar33;
          do {
            sVar47 = *param_3;
            psVar11 = param_3 + 1;
            psVar12 = param_3 + 2;
            psVar21 = param_3 + 3;
            psVar20 = param_3 + 4;
            psVar19 = param_3 + 5;
            psVar18 = param_3 + 6;
            psVar17 = param_3 + 7;
            psVar16 = param_3 + 8;
            psVar15 = param_3 + 9;
            psVar14 = param_3 + 10;
            psVar13 = param_3 + 0xb;
            param_3 = param_3 + 0xc;
            uVar32 = uVar32 - 4;
            auVar75._0_4_ = (int)sVar47;
            auVar75._4_4_ = (int)*psVar21;
            auVar75._8_4_ = (int)*psVar18;
            auVar75._12_4_ = (int)*psVar15;
            auVar84._0_4_ = (int)*psVar11;
            auVar84._4_4_ = (int)*psVar20;
            auVar84._8_4_ = (int)*psVar17;
            auVar84._12_4_ = (int)*psVar14;
            auVar54._0_4_ = (int)*psVar12;
            auVar54._4_4_ = (int)*psVar19;
            auVar54._8_4_ = (int)*psVar16;
            auVar54._12_4_ = (int)*psVar13;
            auVar60 = NEON_scvtf(auVar75,4);
            auVar67 = NEON_scvtf(auVar84,4);
            auVar50 = NEON_scvtf(auVar54,4);
            *param_1 = fVar46 * auVar60._0_4_ * 7.450581e-09;
            param_1[1] = fVar46 * auVar67._0_4_ * 7.450581e-09;
            param_1[2] = fVar46 * auVar50._0_4_ * 7.450581e-09;
            param_1[3] = fVar46 * auVar60._4_4_ * 7.450581e-09;
            param_1[4] = fVar46 * auVar67._4_4_ * 7.450581e-09;
            param_1[5] = fVar46 * auVar50._4_4_ * 7.450581e-09;
            param_1[6] = fVar46 * auVar60._8_4_ * 7.450581e-09;
            param_1[7] = fVar46 * auVar67._8_4_ * 7.450581e-09;
            param_1[8] = fVar46 * auVar50._8_4_ * 7.450581e-09;
            param_1[9] = fVar46 * auVar60._12_4_ * 7.450581e-09;
            param_1[10] = fVar46 * auVar67._12_4_ * 7.450581e-09;
            param_1[0xb] = fVar46 * auVar50._12_4_ * 7.450581e-09;
            param_1 = param_1 + 0xc;
          } while (uVar32 != 0);
          bVar10 = uVar33 == param_2;
          param_3 = psVar27;
          param_2 = param_2 - uVar33;
          param_1 = pfVar26;
          if (bVar10) {
            return;
          }
        }
        do {
          param_2 = param_2 - 1;
          uVar41 = NEON_scvtf(CONCAT44((int)param_3[1],(int)*param_3),4);
          *(ulong *)param_1 =
               CONCAT44(fVar46 * (float)((ulong)uVar41 >> 0x20) * 7.450581e-09,
                        fVar46 * (float)uVar41 * 7.450581e-09);
          param_1[2] = fVar46 * (float)(int)param_3[2] * 7.450581e-09;
          param_3 = param_3 + 3;
          param_1 = param_1 + 3;
        } while (param_2 != 0);
        return;
      }
      if (3 < param_2) {
        uVar33 = param_2 & 0xfffffffffffffffc;
        psVar27 = param_3 + uVar33 * 3;
        pfVar26 = param_1 + uVar33 * 3;
        piVar28 = param_4;
        uVar32 = uVar33;
        do {
          sVar47 = *param_3;
          sVar66 = param_3[1];
          sVar73 = param_3[2];
          sVar63 = param_3[3];
          sVar70 = param_3[4];
          sVar77 = param_3[5];
          sVar64 = param_3[6];
          sVar71 = param_3[7];
          sVar78 = param_3[8];
          sVar65 = param_3[9];
          sVar72 = param_3[10];
          sVar79 = param_3[0xb];
          param_3 = param_3 + 0xc;
          uVar32 = uVar32 - 4;
          auVar90._0_4_ = (int)sVar47;
          auVar90._4_4_ = (int)sVar63;
          auVar90._8_4_ = (int)sVar64;
          auVar90._12_4_ = (int)sVar65;
          auVar94._0_4_ = (int)sVar66;
          auVar94._4_4_ = (int)sVar70;
          auVar94._8_4_ = (int)sVar71;
          auVar94._12_4_ = (int)sVar72;
          auVar98._0_4_ = (int)sVar73;
          auVar98._4_4_ = (int)sVar77;
          auVar98._8_4_ = (int)sVar78;
          auVar98._12_4_ = (int)sVar79;
          auVar50 = NEON_scvtf(auVar90,4);
          auVar60 = NEON_scvtf(auVar94,4);
          auVar67 = NEON_scvtf(auVar98,4);
          *param_1 = fVar46 * auVar50._0_4_ * 7.450581e-09;
          param_1[1] = fVar46 * auVar60._0_4_ * 7.450581e-09;
          param_1[2] = fVar46 * auVar67._0_4_ * 7.450581e-09;
          param_1[3] = fVar46 * auVar50._4_4_ * 7.450581e-09;
          param_1[4] = fVar46 * auVar60._4_4_ * 7.450581e-09;
          param_1[5] = fVar46 * auVar67._4_4_ * 7.450581e-09;
          param_1[6] = fVar46 * auVar50._8_4_ * 7.450581e-09;
          param_1[7] = fVar46 * auVar60._8_4_ * 7.450581e-09;
          param_1[8] = fVar46 * auVar67._8_4_ * 7.450581e-09;
          param_1[9] = fVar46 * auVar50._12_4_ * 7.450581e-09;
          param_1[10] = fVar46 * auVar60._12_4_ * 7.450581e-09;
          param_1[0xb] = fVar46 * auVar67._12_4_ * 7.450581e-09;
          param_1 = param_1 + 0xc;
          piVar28[2] = piVar28[2] +
                       ((((int)sVar71 + (int)sVar64 + (int)sVar78) * 0x1000) / 3 >> 0xc) * iVar29;
          piVar28[3] = piVar28[3] +
                       ((((int)sVar72 + (int)sVar65 + (int)sVar79) * 0x1000) / 3 >> 0xc) * iVar29;
          *piVar28 = *piVar28 +
                     ((((int)sVar66 + (int)sVar47 + (int)sVar73) * 0x1000) / 3 >> 0xc) * iVar29;
          piVar28[1] = piVar28[1] +
                       ((((int)sVar70 + (int)sVar63 + (int)sVar77) * 0x1000) / 3 >> 0xc) * iVar29;
          piVar28 = piVar28 + 4;
        } while (uVar32 != 0);
        bVar10 = uVar33 == param_2;
        param_3 = psVar27;
        param_4 = param_4 + uVar33;
        param_2 = param_2 - uVar33;
        param_1 = pfVar26;
        if (bVar10) {
          return;
        }
      }
      do {
        sVar47 = *param_3;
        sVar63 = param_3[1];
        param_2 = param_2 - 1;
        uVar41 = NEON_scvtf(CONCAT44((int)sVar63,(int)sVar47),4);
        *(ulong *)param_1 =
             CONCAT44(fVar46 * (float)((ulong)uVar41 >> 0x20) * 7.450581e-09,
                      fVar46 * (float)uVar41 * 7.450581e-09);
        sVar64 = param_3[2];
        param_1[2] = fVar46 * (float)(int)sVar64 * 7.450581e-09;
        *param_4 = *param_4 +
                   ((((int)sVar63 + (int)sVar47 + (int)sVar64) * 0x1000) / 3 >> 0xc) * iVar29;
        param_3 = param_3 + 3;
        param_4 = param_4 + 1;
        param_1 = param_1 + 3;
      } while (param_2 != 0);
      return;
    case 3:
      fVar46 = (float)(int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        if (3 < param_2) {
          uVar33 = param_2 & 0xfffffffffffffffc;
          psVar27 = param_3 + uVar33 * 4;
          pfVar26 = param_1 + uVar33 * 4;
          uVar32 = uVar33;
          do {
            sVar47 = *param_3;
            psVar19 = param_3 + 1;
            psVar13 = param_3 + 2;
            psVar23 = param_3 + 3;
            psVar25 = param_3 + 4;
            psVar22 = param_3 + 5;
            psVar11 = param_3 + 6;
            psVar12 = param_3 + 7;
            psVar21 = param_3 + 8;
            psVar20 = param_3 + 9;
            psVar18 = param_3 + 10;
            psVar16 = param_3 + 0xb;
            psVar15 = param_3 + 0xc;
            psVar14 = param_3 + 0xd;
            psVar17 = param_3 + 0xe;
            psVar24 = param_3 + 0xf;
            param_3 = param_3 + 0x10;
            uVar32 = uVar32 - 4;
            auVar74._0_4_ = (int)sVar47;
            auVar74._4_4_ = (int)*psVar25;
            auVar74._8_4_ = (int)*psVar21;
            auVar74._12_4_ = (int)*psVar15;
            auVar76._0_4_ = (int)*psVar19;
            auVar76._4_4_ = (int)*psVar22;
            auVar76._8_4_ = (int)*psVar20;
            auVar76._12_4_ = (int)*psVar14;
            auVar67._0_4_ = (int)*psVar23;
            auVar67._4_4_ = (int)*psVar12;
            auVar67._8_4_ = (int)*psVar16;
            auVar67._12_4_ = (int)*psVar24;
            auVar60 = NEON_scvtf(auVar74,4);
            auVar101._0_4_ = (int)*psVar13;
            auVar101._4_4_ = (int)*psVar11;
            auVar101._8_4_ = (int)*psVar18;
            auVar101._12_4_ = (int)*psVar17;
            auVar74 = NEON_scvtf(auVar76,4);
            auVar76 = NEON_scvtf(auVar101,4);
            auVar50 = NEON_scvtf(auVar67,4);
            *param_1 = fVar46 * auVar60._0_4_ * 7.450581e-09;
            param_1[1] = fVar46 * auVar74._0_4_ * 7.450581e-09;
            param_1[2] = fVar46 * auVar76._0_4_ * 7.450581e-09;
            param_1[3] = fVar46 * auVar50._0_4_ * 7.450581e-09;
            param_1[4] = fVar46 * auVar60._4_4_ * 7.450581e-09;
            param_1[5] = fVar46 * auVar74._4_4_ * 7.450581e-09;
            param_1[6] = fVar46 * auVar76._4_4_ * 7.450581e-09;
            param_1[7] = fVar46 * auVar50._4_4_ * 7.450581e-09;
            param_1[8] = fVar46 * auVar60._8_4_ * 7.450581e-09;
            param_1[9] = fVar46 * auVar74._8_4_ * 7.450581e-09;
            param_1[10] = fVar46 * auVar76._8_4_ * 7.450581e-09;
            param_1[0xb] = fVar46 * auVar50._8_4_ * 7.450581e-09;
            param_1[0xc] = fVar46 * auVar60._12_4_ * 7.450581e-09;
            param_1[0xd] = fVar46 * auVar74._12_4_ * 7.450581e-09;
            param_1[0xe] = fVar46 * auVar76._12_4_ * 7.450581e-09;
            param_1[0xf] = fVar46 * auVar50._12_4_ * 7.450581e-09;
            param_1 = param_1 + 0x10;
          } while (uVar32 != 0);
          bVar10 = uVar33 == param_2;
          param_3 = psVar27;
          param_2 = param_2 - uVar33;
          param_1 = pfVar26;
          if (bVar10) {
            return;
          }
        }
        do {
          uVar41 = *(undefined8 *)param_3;
          param_2 = param_2 - 1;
          auVar118._0_4_ = (int)(short)uVar41;
          auVar118._4_4_ = (int)(short)((ulong)uVar41 >> 0x10);
          auVar118._8_4_ = (int)(short)((ulong)uVar41 >> 0x20);
          auVar118._12_4_ = (int)(short)((ulong)uVar41 >> 0x30);
          auVar50 = NEON_scvtf(auVar118,4);
          param_1[2] = fVar46 * auVar50._8_4_ * 7.450581e-09;
          param_1[3] = fVar46 * auVar50._12_4_ * 7.450581e-09;
          *param_1 = fVar46 * auVar50._0_4_ * 7.450581e-09;
          param_1[1] = fVar46 * auVar50._4_4_ * 7.450581e-09;
          param_3 = param_3 + 4;
          param_1 = param_1 + 4;
        } while (param_2 != 0);
        return;
      }
      if (3 < param_2) {
        uVar33 = param_2 & 0xfffffffffffffffc;
        psVar27 = param_3 + uVar33 * 4;
        pfVar26 = param_1 + uVar33 * 4;
        piVar28 = param_4;
        uVar32 = uVar33;
        do {
          sVar47 = *param_3;
          sVar66 = param_3[1];
          sVar73 = param_3[2];
          sVar82 = param_3[3];
          sVar63 = param_3[4];
          sVar70 = param_3[5];
          sVar77 = param_3[6];
          sVar86 = param_3[7];
          sVar64 = param_3[8];
          sVar71 = param_3[9];
          sVar78 = param_3[10];
          sVar87 = param_3[0xb];
          sVar65 = param_3[0xc];
          sVar72 = param_3[0xd];
          sVar79 = param_3[0xe];
          sVar88 = param_3[0xf];
          param_3 = param_3 + 0x10;
          uVar32 = uVar32 - 4;
          auVar127._0_4_ = (int)sVar47;
          auVar127._4_4_ = (int)sVar63;
          auVar127._8_4_ = (int)sVar64;
          auVar127._12_4_ = (int)sVar65;
          auVar50 = NEON_scvtf(auVar127,4);
          auVar95._0_4_ = (int)sVar66;
          auVar95._4_4_ = (int)sVar70;
          auVar95._8_4_ = (int)sVar71;
          auVar95._12_4_ = (int)sVar72;
          auVar74 = NEON_scvtf(auVar95,4);
          auVar132._0_4_ = (int)sVar73;
          auVar132._4_4_ = (int)sVar77;
          auVar132._8_4_ = (int)sVar78;
          auVar132._12_4_ = (int)sVar79;
          auVar60 = NEON_scvtf(auVar132,4);
          auVar138._0_4_ = (int)sVar82;
          auVar138._4_4_ = (int)sVar86;
          auVar138._8_4_ = (int)sVar87;
          auVar138._12_4_ = (int)sVar88;
          auVar67 = NEON_scvtf(auVar138,4);
          *param_1 = fVar46 * auVar50._0_4_ * 7.450581e-09;
          param_1[1] = fVar46 * auVar74._0_4_ * 7.450581e-09;
          param_1[2] = fVar46 * auVar60._0_4_ * 7.450581e-09;
          param_1[3] = fVar46 * auVar67._0_4_ * 7.450581e-09;
          param_1[4] = fVar46 * auVar50._4_4_ * 7.450581e-09;
          param_1[5] = fVar46 * auVar74._4_4_ * 7.450581e-09;
          param_1[6] = fVar46 * auVar60._4_4_ * 7.450581e-09;
          param_1[7] = fVar46 * auVar67._4_4_ * 7.450581e-09;
          param_1[8] = fVar46 * auVar50._8_4_ * 7.450581e-09;
          param_1[9] = fVar46 * auVar74._8_4_ * 7.450581e-09;
          param_1[10] = fVar46 * auVar60._8_4_ * 7.450581e-09;
          param_1[0xb] = fVar46 * auVar67._8_4_ * 7.450581e-09;
          param_1[0xc] = fVar46 * auVar50._12_4_ * 7.450581e-09;
          param_1[0xd] = fVar46 * auVar74._12_4_ * 7.450581e-09;
          param_1[0xe] = fVar46 * auVar60._12_4_ * 7.450581e-09;
          param_1[0xf] = fVar46 * auVar67._12_4_ * 7.450581e-09;
          param_1 = param_1 + 0x10;
          piVar28[2] = piVar28[2] +
                       ((int)sVar71 + (int)sVar64 + (int)sVar78 + (int)sVar87 >> 2) * iVar29;
          piVar28[3] = piVar28[3] +
                       ((int)sVar72 + (int)sVar65 + (int)sVar79 + (int)sVar88 >> 2) * iVar29;
          *piVar28 = *piVar28 +
                     ((int)sVar66 + (int)sVar47 + (int)sVar73 + (int)sVar82 >> 2) * iVar29;
          piVar28[1] = piVar28[1] +
                       ((int)sVar70 + (int)sVar63 + (int)sVar77 + (int)sVar86 >> 2) * iVar29;
          piVar28 = piVar28 + 4;
        } while (uVar32 != 0);
        bVar10 = uVar33 == param_2;
        param_3 = psVar27;
        param_4 = param_4 + uVar33;
        param_2 = param_2 - uVar33;
        param_1 = pfVar26;
        if (bVar10) {
          return;
        }
      }
      do {
        uVar41 = *(undefined8 *)param_3;
        param_2 = param_2 - 1;
        auVar51._0_4_ = (int)(short)uVar41;
        sVar47 = (short)((ulong)uVar41 >> 0x10);
        auVar51._4_4_ = (int)sVar47;
        sVar63 = (short)((ulong)uVar41 >> 0x20);
        auVar51._8_4_ = (int)sVar63;
        sVar64 = (short)((ulong)uVar41 >> 0x30);
        auVar51._12_4_ = (int)sVar64;
        auVar50 = NEON_scvtf(auVar51,4);
        param_1[2] = fVar46 * auVar50._8_4_ * 7.450581e-09;
        param_1[3] = fVar46 * auVar50._12_4_ * 7.450581e-09;
        *param_1 = fVar46 * auVar50._0_4_ * 7.450581e-09;
        param_1[1] = fVar46 * auVar50._4_4_ * 7.450581e-09;
        *param_4 = *param_4 +
                   ((int)sVar47 + (int)(short)uVar41 + (int)sVar63 + (int)sVar64 >> 2) * iVar29;
        param_3 = param_3 + 4;
        param_4 = param_4 + 1;
        param_1 = param_1 + 4;
      } while (param_2 != 0);
      return;
    case 4:
      fVar46 = (float)(int)*(short *)ptVar1;
      if (param_4 == (int *)0x0) {
        do {
          uVar41 = *(undefined8 *)param_3;
          param_2 = param_2 - 1;
          auVar50._0_4_ = (int)(short)uVar41;
          auVar50._4_4_ = (int)(short)((ulong)uVar41 >> 0x10);
          auVar50._8_4_ = (int)(short)((ulong)uVar41 >> 0x20);
          auVar50._12_4_ = (int)(short)((ulong)uVar41 >> 0x30);
          auVar50 = NEON_scvtf(auVar50,4);
          param_1[2] = fVar46 * auVar50._8_4_ * 7.450581e-09;
          param_1[3] = fVar46 * auVar50._12_4_ * 7.450581e-09;
          *param_1 = fVar46 * auVar50._0_4_ * 7.450581e-09;
          param_1[1] = fVar46 * auVar50._4_4_ * 7.450581e-09;
          psVar27 = param_3 + 4;
          param_3 = param_3 + 5;
          param_1[4] = fVar46 * (float)(int)*psVar27 * 7.450581e-09;
          param_1 = param_1 + 5;
        } while (param_2 != 0);
        return;
      }
      if (3 < param_2) {
        uVar33 = param_2 & 0xfffffffffffffffc;
        psVar27 = param_3 + uVar33 * 5;
        pfVar26 = param_1;
        piVar28 = param_4;
        uVar32 = uVar33;
        do {
          uVar41 = *(undefined8 *)*(undefined1 (*) [16])((long)param_3 + 0x20);
          auVar99 = *(undefined1 (*) [16])param_3;
          auVar102 = *(undefined1 (*) [16])((long)param_3 + 0x10);
          uVar32 = uVar32 - 4;
          param_3 = (short *)(*(undefined1 (*) [16])((long)param_3 + 0x20) + 8);
          sVar47 = (short)uVar41;
          sVar63 = (short)((ulong)uVar41 >> 0x10);
          sVar64 = (short)((ulong)uVar41 >> 0x20);
          auVar118 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar50);
          auVar127 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar60);
          auVar132 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar67);
          auVar138 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar74);
          auVar101 = a64_TBL(ZEXT816(0),auVar99,auVar102,auVar76);
          auVar103._2_8_ = auVar127._8_8_;
          auVar103._0_2_ = sVar47;
          auVar103._10_6_ = 0;
          auVar137._2_8_ = auVar132._8_8_;
          auVar137._0_2_ = sVar63;
          auVar137._10_6_ = 0;
          auVar110._2_8_ = auVar138._8_8_;
          auVar110._0_2_ = sVar64;
          auVar110._10_6_ = 0;
          sVar65 = (short)((ulong)uVar41 >> 0x30);
          auVar126._0_4_ = (int)auVar118._0_2_;
          auVar126._4_4_ = (int)auVar118._2_2_;
          auVar126._8_4_ = (int)auVar118._4_2_;
          auVar126._12_4_ = (int)auVar118._6_2_;
          auVar112._0_4_ = (int)auVar127._0_2_;
          auVar112._4_4_ = (int)auVar127._2_2_;
          auVar112._8_4_ = (int)auVar127._4_2_;
          auVar112._12_4_ = (int)sVar47;
          auVar107._0_4_ = (int)auVar132._0_2_;
          auVar107._4_4_ = (int)auVar132._2_2_;
          auVar107._8_4_ = (int)auVar132._4_2_;
          auVar107._12_4_ = (int)sVar63;
          auVar111._0_4_ = (int)auVar138._0_2_;
          auVar111._4_4_ = (int)auVar138._2_2_;
          auVar111._8_4_ = (int)auVar138._4_2_;
          auVar111._12_4_ = (int)sVar64;
          auVar119._0_4_ = (int)auVar101._0_2_;
          auVar119._4_4_ = (int)auVar101._2_2_;
          auVar119._8_4_ = (int)auVar101._4_2_;
          auVar119._12_4_ = (int)sVar65;
          auVar102 = NEON_scvtf(auVar112,4);
          auVar108 = NEON_scvtf(auVar107,4);
          auVar112 = NEON_scvtf(auVar111,4);
          auVar120 = NEON_scvtf(auVar119,4);
          auVar99 = NEON_scvtf(auVar126,4);
          auVar121._0_4_ = fVar46 * auVar120._0_4_;
          auVar121._4_4_ = fVar46 * auVar120._4_4_;
          auVar121._8_4_ = fVar46 * auVar120._8_4_;
          auVar121._12_4_ = fVar46 * auVar120._12_4_;
          auVar120._0_4_ = fVar46 * auVar102._0_4_ * 7.450581e-09;
          auVar120._4_4_ = fVar46 * auVar102._4_4_ * 7.450581e-09;
          auVar120._8_4_ = fVar46 * auVar102._8_4_ * 7.450581e-09;
          auVar120._12_4_ = fVar46 * auVar102._12_4_ * 7.450581e-09;
          auVar109._0_4_ = fVar46 * auVar108._0_4_ * 7.450581e-09;
          auVar109._4_4_ = fVar46 * auVar108._4_4_ * 7.450581e-09;
          auVar109._8_4_ = fVar46 * auVar108._8_4_ * 7.450581e-09;
          auVar109._12_4_ = fVar46 * auVar108._12_4_ * 7.450581e-09;
          auVar113._0_4_ = fVar46 * auVar112._0_4_ * 7.450581e-09;
          auVar113._4_4_ = fVar46 * auVar112._4_4_ * 7.450581e-09;
          auVar113._8_4_ = fVar46 * auVar112._8_4_ * 7.450581e-09;
          auVar113._12_4_ = fVar46 * auVar112._12_4_ * 7.450581e-09;
          auVar104._0_4_ = auVar121._0_4_ * 7.450581e-09;
          auVar104._4_4_ = auVar121._4_4_ * 7.450581e-09;
          auVar104._8_4_ = auVar121._8_4_ * 7.450581e-09;
          auVar105._12_4_ = auVar121._12_4_ * 7.450581e-09;
          auVar105._0_12_ = auVar104;
          auVar108._0_4_ = fVar46 * auVar99._0_4_ * 7.450581e-09;
          auVar108._4_4_ = fVar46 * auVar99._4_4_ * 7.450581e-09;
          auVar108._8_4_ = fVar46 * auVar99._8_4_ * 7.450581e-09;
          auVar128._4_12_ = SUB1612(auVar103 << 0x30,4);
          auVar128._0_4_ = auVar120._4_4_;
          auVar130._12_4_ = auVar127._12_4_;
          auVar130._0_8_ = auVar128._0_8_;
          auVar130._8_4_ = auVar120._12_4_;
          auVar129._8_8_ = auVar130._8_8_;
          auVar129._4_4_ = auVar109._4_4_;
          auVar129._0_4_ = auVar120._4_4_;
          auVar131._0_12_ = auVar129._0_12_;
          auVar131._12_4_ = auVar109._12_4_;
          auVar133._4_12_ = SUB1612(auVar137 << 0x30,4);
          auVar133._0_4_ = auVar109._0_4_;
          auVar135._12_4_ = auVar132._12_4_;
          auVar135._0_8_ = auVar133._0_8_;
          auVar135._8_4_ = auVar109._4_4_;
          auVar134._8_8_ = auVar135._8_8_;
          auVar134._4_4_ = auVar113._0_4_;
          auVar134._0_4_ = auVar109._0_4_;
          auVar136._0_12_ = auVar134._0_12_;
          auVar136._12_4_ = auVar113._4_4_;
          auVar122._4_12_ = auVar121._4_12_;
          auVar122._0_4_ = auVar113._8_4_;
          auVar124._0_8_ = auVar122._0_8_;
          auVar124._8_4_ = auVar113._12_4_;
          auVar124._12_4_ = auVar121._12_4_;
          auVar123._8_8_ = auVar124._8_8_;
          auVar123._4_4_ = auVar104._8_4_;
          auVar123._0_4_ = auVar113._8_4_;
          auVar125._0_12_ = auVar123._0_12_;
          auVar125._12_4_ = auVar105._12_4_;
          auVar139._4_12_ = SUB1612(auVar110 << 0x30,4);
          auVar139._0_4_ = auVar108._0_4_;
          auVar141._12_4_ = auVar138._12_4_;
          auVar141._0_8_ = auVar139._0_8_;
          auVar141._8_4_ = auVar108._4_4_;
          auVar140._8_8_ = auVar141._8_8_;
          auVar140._4_4_ = auVar120._0_4_;
          auVar140._0_4_ = auVar108._0_4_;
          auVar142._0_12_ = auVar140._0_12_;
          auVar142._12_4_ = auVar120._4_4_;
          auVar106._12_4_ = fVar46 * auVar99._12_4_ * 7.450581e-09;
          auVar106._0_12_ = auVar104;
          auVar114._4_12_ = auVar113._4_12_;
          auVar114._0_4_ = auVar109._8_4_;
          auVar116._0_8_ = auVar114._0_8_;
          auVar116._8_4_ = auVar109._12_4_;
          auVar116._12_4_ = auVar113._12_4_;
          auVar115._8_8_ = auVar116._8_8_;
          auVar115._4_4_ = auVar113._8_4_;
          auVar115._0_4_ = auVar109._8_4_;
          auVar117._0_12_ = auVar115._0_12_;
          auVar117._12_4_ = auVar113._12_4_;
          auVar99 = NEON_ext(auVar109,auVar136,8,1);
          auVar137 = NEON_ext(auVar131,auVar120,8,1);
          auVar102 = NEON_ext(auVar120,auVar131,8,1);
          auVar108._12_4_ = auVar120._8_4_;
          auVar103 = NEON_ext(auVar106,auVar117,8,1);
          auVar137 = NEON_ext(auVar125,auVar137,8,1);
          auVar110 = NEON_ext(auVar99,auVar142,8,1);
          auVar99._4_4_ = auVar108._4_4_;
          auVar99._0_4_ = auVar104._0_4_;
          auVar99._8_8_ = auVar105._8_8_;
          auVar126 = NEON_ext(auVar102,auVar99,8,1);
          auVar102._4_4_ = auVar104._4_4_;
          auVar102._0_4_ = auVar113._4_4_;
          auVar102._8_4_ = auVar113._12_4_;
          auVar102._12_4_ = auVar105._12_4_;
          auVar99 = NEON_ext(auVar108,auVar102,8,1);
          auVar102 = NEON_ext(auVar103,auVar103,8,1);
          auVar103 = NEON_ext(auVar137,auVar137,8,1);
          auVar137 = NEON_ext(auVar110,auVar110,8,1);
          auVar110 = NEON_ext(auVar126,auVar126,8,1);
          auVar99 = NEON_ext(auVar99,auVar99,8,1);
          *(long *)(pfVar26 + 10) = auVar99._8_8_;
          *(long *)(pfVar26 + 8) = auVar99._0_8_;
          *(long *)(pfVar26 + 0xe) = auVar102._8_8_;
          *(long *)(pfVar26 + 0xc) = auVar102._0_8_;
          *(long *)(pfVar26 + 0x12) = auVar103._8_8_;
          *(long *)(pfVar26 + 0x10) = auVar103._0_8_;
          *(long *)(pfVar26 + 2) = auVar137._8_8_;
          *(long *)pfVar26 = auVar137._0_8_;
          *(long *)(pfVar26 + 6) = auVar110._8_8_;
          *(long *)(pfVar26 + 4) = auVar110._0_8_;
          piVar28[2] = piVar28[2] +
                       ((((int)auVar127._4_2_ + (int)auVar118._4_2_ + (int)auVar132._4_2_ +
                          (int)auVar138._4_2_ + (int)auVar101._4_2_) * 0x1000) / 5 >> 0xc) * iVar29;
          piVar28[3] = piVar28[3] +
                       ((((int)sVar47 + (int)auVar118._6_2_ + (int)sVar63 + (int)sVar64 +
                         (int)sVar65) * 0x1000) / 5 >> 0xc) * iVar29;
          *piVar28 = *piVar28 +
                     ((((int)auVar127._0_2_ + (int)auVar118._0_2_ + (int)auVar132._0_2_ +
                        (int)auVar138._0_2_ + (int)auVar101._0_2_) * 0x1000) / 5 >> 0xc) * iVar29;
          piVar28[1] = piVar28[1] +
                       ((((int)auVar127._2_2_ + (int)auVar118._2_2_ + (int)auVar132._2_2_ +
                          (int)auVar138._2_2_ + (int)auVar101._2_2_) * 0x1000) / 5 >> 0xc) * iVar29;
          pfVar26 = pfVar26 + 0x14;
          piVar28 = piVar28 + 4;
        } while (uVar32 != 0);
        bVar10 = uVar33 == param_2;
        param_2 = param_2 - uVar33;
        param_3 = psVar27;
        param_4 = param_4 + uVar33;
        param_1 = param_1 + uVar33 * 5;
        if (bVar10) {
          return;
        }
      }
      do {
        uVar41 = *(undefined8 *)param_3;
        param_2 = param_2 - 1;
        auVar60._0_4_ = (int)(short)uVar41;
        sVar63 = (short)((ulong)uVar41 >> 0x10);
        auVar60._4_4_ = (int)sVar63;
        sVar64 = (short)((ulong)uVar41 >> 0x20);
        auVar60._8_4_ = (int)sVar64;
        sVar65 = (short)((ulong)uVar41 >> 0x30);
        auVar60._12_4_ = (int)sVar65;
        auVar50 = NEON_scvtf(auVar60,4);
        param_1[2] = fVar46 * auVar50._8_4_ * 7.450581e-09;
        param_1[3] = fVar46 * auVar50._12_4_ * 7.450581e-09;
        *param_1 = fVar46 * auVar50._0_4_ * 7.450581e-09;
        param_1[1] = fVar46 * auVar50._4_4_ * 7.450581e-09;
        sVar47 = param_3[4];
        param_1[4] = fVar46 * (float)(int)sVar47 * 7.450581e-09;
        *param_4 = *param_4 +
                   ((((int)sVar63 + (int)(short)uVar41 + (int)sVar64 + (int)sVar65 + (int)sVar47) *
                    0x1000) / 5 >> 0xc) * iVar29;
        param_3 = param_3 + 5;
        param_4 = param_4 + 1;
        param_1 = param_1 + 5;
      } while (param_2 != 0);
      return;
    case 5:
      volumeMulti<4,6,float,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar47);
      return;
    case 6:
      volumeMulti<4,7,float,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar47);
      return;
    case 7:
      volumeMulti<4,8,float,short,short,int,short>
                (param_1,param_2,param_3,param_4,(short *)ptVar1,sVar47);
      return;
    }
    if (param_4 != (int *)0x0) {
      fVar46 = (float)(int)*(short *)ptVar1;
      if (3 < param_2) {
        uVar33 = param_2 & 0xfffffffffffffffc;
        iVar30 = (int)sVar47;
        pfVar26 = param_1;
        psVar27 = param_3;
        piVar28 = param_4;
        uVar32 = uVar33;
        do {
          uVar41 = *(undefined8 *)psVar27;
          uVar32 = uVar32 - 4;
          auVar59._0_4_ = (int)(short)uVar41;
          auVar59._4_4_ = (int)(short)((ulong)uVar41 >> 0x10);
          auVar59._8_4_ = (int)(short)((ulong)uVar41 >> 0x20);
          auVar59._12_4_ = (int)(short)((ulong)uVar41 >> 0x30);
          auVar50 = NEON_scvtf(auVar59,4);
          pfVar26[2] = fVar46 * auVar50._8_4_ * 7.450581e-09;
          pfVar26[3] = fVar46 * auVar50._12_4_ * 7.450581e-09;
          *pfVar26 = fVar46 * auVar50._0_4_ * 7.450581e-09;
          pfVar26[1] = fVar46 * auVar50._4_4_ * 7.450581e-09;
          piVar28[2] = piVar28[2] + iVar30 * auVar59._8_4_;
          piVar28[3] = piVar28[3] + iVar30 * auVar59._12_4_;
          *piVar28 = *piVar28 + iVar30 * auVar59._0_4_;
          piVar28[1] = piVar28[1] + iVar30 * auVar59._4_4_;
          pfVar26 = pfVar26 + 4;
          psVar27 = psVar27 + 4;
          piVar28 = piVar28 + 4;
        } while (uVar32 != 0);
        bVar10 = uVar33 == param_2;
        param_3 = param_3 + uVar33;
        param_4 = param_4 + uVar33;
        param_2 = param_2 - uVar33;
        param_1 = param_1 + uVar33;
        if (bVar10) {
          return;
        }
      }
      do {
        sVar47 = *param_3;
        param_2 = param_2 - 1;
        *param_1 = fVar46 * (float)(int)sVar47 * 7.450581e-09;
        *param_4 = *param_4 + sVar47 * iVar29;
        param_3 = param_3 + 1;
        param_4 = param_4 + 1;
        param_1 = param_1 + 1;
      } while (param_2 != 0);
      return;
    }
    fVar46 = (float)(int)*(short *)ptVar1;
    if (7 < param_2) {
      uVar33 = param_2 & 0xfffffffffffffff8;
      pfVar26 = param_1 + 4;
      psVar27 = param_3 + 4;
      param_3 = param_3 + uVar33;
      param_1 = param_1 + uVar33;
      uVar32 = uVar33;
      do {
        uVar41 = *(undefined8 *)(psVar27 + -4);
        uVar48 = *(undefined8 *)psVar27;
        uVar32 = uVar32 - 8;
        psVar27 = psVar27 + 8;
        auVar57._0_4_ = (int)(short)uVar41;
        auVar57._4_4_ = (int)(short)((ulong)uVar41 >> 0x10);
        auVar57._8_4_ = (int)(short)((ulong)uVar41 >> 0x20);
        auVar57._12_4_ = (int)(short)((ulong)uVar41 >> 0x30);
        auVar62._0_4_ = (int)(short)uVar48;
        auVar62._4_4_ = (int)(short)((ulong)uVar48 >> 0x10);
        auVar62._8_4_ = (int)(short)((ulong)uVar48 >> 0x20);
        auVar62._12_4_ = (int)(short)((ulong)uVar48 >> 0x30);
        auVar50 = NEON_scvtf(auVar57,4);
        auVar60 = NEON_scvtf(auVar62,4);
        pfVar26[-2] = fVar46 * auVar50._8_4_ * 7.450581e-09;
        pfVar26[-1] = fVar46 * auVar50._12_4_ * 7.450581e-09;
        pfVar26[-4] = fVar46 * auVar50._0_4_ * 7.450581e-09;
        pfVar26[-3] = fVar46 * auVar50._4_4_ * 7.450581e-09;
        pfVar26[2] = fVar46 * auVar60._8_4_ * 7.450581e-09;
        pfVar26[3] = fVar46 * auVar60._12_4_ * 7.450581e-09;
        *pfVar26 = fVar46 * auVar60._0_4_ * 7.450581e-09;
        pfVar26[1] = fVar46 * auVar60._4_4_ * 7.450581e-09;
        pfVar26 = pfVar26 + 8;
      } while (uVar32 != 0);
      bVar10 = uVar33 == param_2;
      param_2 = param_2 - uVar33;
      if (bVar10) {
        return;
      }
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = fVar46 * (float)(int)*param_3 * 7.450581e-09;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
    } while (param_2 != 0);
    return;
  }
  if (7 < uVar6) {
    return;
  }
  iVar29 = *(int *)(param_6 + 0x18);
  ptVar1 = param_6 + 8;
  ptVar2 = param_6 + 0x10;
  ptVar3 = param_6 + 0x1c;
  switch(uVar6) {
  case 0:
    if (param_4 == (int *)0x0) {
      iVar29 = *(int *)ptVar1;
      iVar30 = *(int *)ptVar2;
      if (7 < param_2) {
        uVar33 = param_2 & 0xfffffffffffffff8;
        iVar4 = iVar30 * 4;
        pfVar26 = param_1 + 4;
        psVar27 = param_3 + 4;
        iVar31 = iVar29 + iVar30 * (int)uVar33;
        param_3 = param_3 + uVar33;
        param_1 = param_1 + uVar33;
        auVar43._4_4_ = iVar29 + iVar30;
        auVar43._0_4_ = iVar29;
        auVar43._8_4_ = iVar29 + iVar30 * 2;
        auVar43._12_4_ = iVar29 + iVar30 * 3;
        uVar32 = uVar33;
        do {
          uVar41 = *(undefined8 *)(psVar27 + -4);
          uVar48 = *(undefined8 *)psVar27;
          auVar55._0_4_ = auVar43._0_4_ + iVar4;
          auVar55._4_4_ = auVar43._4_4_ + iVar4;
          auVar55._8_4_ = auVar43._8_4_ + iVar4;
          auVar55._12_4_ = auVar43._12_4_ + iVar4;
          auVar67 = NEON_scvtf(auVar43,4);
          auVar74 = NEON_scvtf(auVar55,4);
          auVar43._0_4_ = auVar55._0_4_ + iVar4;
          auVar43._4_4_ = auVar55._4_4_ + iVar4;
          auVar43._8_4_ = auVar55._8_4_ + iVar4;
          auVar43._12_4_ = auVar55._12_4_ + iVar4;
          auVar56._0_4_ = (int)(short)uVar41;
          auVar56._4_4_ = (int)(short)((ulong)uVar41 >> 0x10);
          auVar56._8_4_ = (int)(short)((ulong)uVar41 >> 0x20);
          auVar56._12_4_ = (int)(short)((ulong)uVar41 >> 0x30);
          auVar61._0_4_ = (int)(short)uVar48;
          auVar61._4_4_ = (int)(short)((ulong)uVar48 >> 0x10);
          auVar61._8_4_ = (int)(short)((ulong)uVar48 >> 0x20);
          auVar61._12_4_ = (int)(short)((ulong)uVar48 >> 0x30);
          auVar50 = NEON_scvtf(auVar56,4);
          auVar60 = NEON_scvtf(auVar61,4);
          uVar32 = uVar32 - 8;
          pfVar26[-2] = auVar67._8_4_ * auVar50._8_4_ * 1.1368684e-13;
          pfVar26[-1] = auVar67._12_4_ * auVar50._12_4_ * 1.1368684e-13;
          pfVar26[-4] = auVar67._0_4_ * auVar50._0_4_ * 1.1368684e-13;
          pfVar26[-3] = auVar67._4_4_ * auVar50._4_4_ * 1.1368684e-13;
          pfVar26[2] = auVar74._8_4_ * auVar60._8_4_ * 1.1368684e-13;
          pfVar26[3] = auVar74._12_4_ * auVar60._12_4_ * 1.1368684e-13;
          *pfVar26 = auVar74._0_4_ * auVar60._0_4_ * 1.1368684e-13;
          pfVar26[1] = auVar74._4_4_ * auVar60._4_4_ * 1.1368684e-13;
          pfVar26 = pfVar26 + 8;
          psVar27 = psVar27 + 8;
        } while (uVar32 != 0);
        bVar10 = uVar33 == param_2;
        param_2 = param_2 - uVar33;
        iVar29 = iVar31;
        if (bVar10) goto LAB_00e89254;
      }
      do {
        param_2 = param_2 - 1;
        *param_1 = (float)iVar29 * (float)(int)*param_3 * 1.1368684e-13;
        iVar31 = iVar29 + iVar30;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        iVar29 = iVar31;
      } while (param_2 != 0);
LAB_00e89254:
      *(int *)ptVar1 = iVar31;
      return;
    }
    iVar30 = *(int *)ptVar3;
    do {
      sVar47 = *param_3;
      iVar31 = *(int *)ptVar1;
      param_2 = param_2 - 1;
      *param_1 = (float)(int)sVar47 * (float)iVar31 * 1.1368684e-13;
      *(int *)ptVar1 = *(int *)ptVar2 + iVar31;
      *param_4 = *param_4 + (iVar30 >> 0x10) * (int)sVar47;
      iVar30 = *(int *)ptVar3 + iVar29;
      *(int *)ptVar3 = iVar30;
      param_1 = param_1 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
    break;
  case 1:
    if (param_4 != (int *)0x0) {
      iVar30 = *(int *)ptVar3;
      do {
        sVar47 = *param_3;
        sVar63 = param_3[1];
        uVar41 = *(undefined8 *)ptVar1;
        uVar48 = NEON_scvtf(uVar41,4);
        uVar58 = NEON_scvtf(CONCAT44((int)sVar63,(int)sVar47),4);
        *(ulong *)param_1 =
             CONCAT44((float)((ulong)uVar58 >> 0x20) * (float)((ulong)uVar48 >> 0x20) *
                      1.1368684e-13,(float)uVar58 * (float)uVar48 * 1.1368684e-13);
        *(ulong *)ptVar1 =
             CONCAT44((int)((ulong)*(undefined8 *)ptVar2 >> 0x20) + (int)((ulong)uVar41 >> 0x20),
                      (int)*(undefined8 *)ptVar2 + (int)uVar41);
        param_3 = param_3 + 2;
        *param_4 = *param_4 + (iVar30 >> 0x10) * ((int)sVar63 + (int)sVar47 >> 1);
        param_2 = param_2 - 1;
        iVar30 = *(int *)ptVar3 + iVar29;
        *(int *)ptVar3 = iVar30;
        param_1 = param_1 + 2;
        param_4 = param_4 + 1;
      } while (param_2 != 0);
      return;
    }
    iVar29 = *(int *)(param_6 + 8);
    iVar31 = *(int *)(param_6 + 0xc);
    iVar30 = *(int *)(param_6 + 0x10);
    iVar4 = *(int *)(param_6 + 0x14);
    if (3 < param_2) {
      uVar33 = param_2 & 0xfffffffffffffffc;
      iVar38 = iVar4 * 4;
      iVar5 = iVar30 * 4;
      iVar34 = iVar31 + iVar4 * (int)uVar33;
      iVar36 = iVar29 + iVar30 * (int)uVar33;
      psVar27 = param_3 + uVar33 * 2;
      pfVar26 = param_1 + uVar33 * 2;
      iVar35 = iVar31 + iVar4;
      iVar37 = iVar31 + iVar4 * 2;
      iVar39 = iVar31 + iVar4 * 3;
      auVar44._4_4_ = iVar29 + iVar30;
      auVar44._0_4_ = iVar29;
      auVar44._8_4_ = iVar29 + iVar30 * 2;
      auVar44._12_4_ = iVar29 + iVar30 * 3;
      uVar32 = uVar33;
      do {
        sVar47 = *param_3;
        psVar11 = param_3 + 1;
        psVar13 = param_3 + 2;
        psVar14 = param_3 + 3;
        psVar15 = param_3 + 4;
        psVar16 = param_3 + 5;
        psVar17 = param_3 + 6;
        psVar18 = param_3 + 7;
        param_3 = param_3 + 8;
        auVar67 = NEON_scvtf(auVar44,4);
        auVar9._4_4_ = iVar35;
        auVar9._0_4_ = iVar31;
        auVar9._8_4_ = iVar37;
        auVar9._12_4_ = iVar39;
        auVar74 = NEON_scvtf(auVar9,4);
        iVar31 = iVar31 + iVar38;
        iVar35 = iVar35 + iVar38;
        iVar37 = iVar37 + iVar38;
        iVar39 = iVar39 + iVar38;
        auVar97._0_4_ = (int)sVar47;
        auVar97._4_4_ = (int)*psVar13;
        auVar97._8_4_ = (int)*psVar15;
        auVar97._12_4_ = (int)*psVar17;
        auVar68._0_4_ = (int)*psVar11;
        auVar68._4_4_ = (int)*psVar14;
        auVar68._8_4_ = (int)*psVar16;
        auVar68._12_4_ = (int)*psVar18;
        auVar60 = NEON_scvtf(auVar97,4);
        auVar50 = NEON_scvtf(auVar68,4);
        uVar32 = uVar32 - 4;
        *param_1 = auVar67._0_4_ * auVar60._0_4_ * 1.1368684e-13;
        param_1[1] = auVar74._0_4_ * auVar50._0_4_ * 1.1368684e-13;
        param_1[2] = auVar67._4_4_ * auVar60._4_4_ * 1.1368684e-13;
        param_1[3] = auVar74._4_4_ * auVar50._4_4_ * 1.1368684e-13;
        param_1[4] = auVar67._8_4_ * auVar60._8_4_ * 1.1368684e-13;
        param_1[5] = auVar74._8_4_ * auVar50._8_4_ * 1.1368684e-13;
        param_1[6] = auVar67._12_4_ * auVar60._12_4_ * 1.1368684e-13;
        param_1[7] = auVar74._12_4_ * auVar50._12_4_ * 1.1368684e-13;
        param_1 = param_1 + 8;
        auVar45._0_4_ = auVar44._0_4_ + iVar5;
        auVar45._4_4_ = auVar44._4_4_ + iVar5;
        auVar45._8_4_ = auVar44._8_4_ + iVar5;
        auVar45._12_4_ = auVar44._12_4_ + iVar5;
        auVar44 = auVar45;
      } while (uVar32 != 0);
      bVar10 = uVar33 == param_2;
      param_3 = psVar27;
      param_2 = param_2 - uVar33;
      param_1 = pfVar26;
      iVar29 = iVar36;
      iVar31 = iVar34;
      if (bVar10) goto LAB_00e893d8;
    }
    do {
      param_2 = param_2 - 1;
      *param_1 = (float)iVar29 * (float)(int)*param_3 * 1.1368684e-13;
      iVar34 = iVar31 + iVar4;
      iVar36 = iVar29 + iVar30;
      param_1[1] = (float)iVar31 * (float)(int)param_3[1] * 1.1368684e-13;
      param_3 = param_3 + 2;
      param_1 = param_1 + 2;
      iVar29 = iVar36;
      iVar31 = iVar34;
    } while (param_2 != 0);
LAB_00e893d8:
    *(int *)(param_6 + 8) = iVar36;
    *(int *)(param_6 + 0xc) = iVar34;
    return;
  case 2:
    if (param_4 == (int *)0x0) {
      iVar29 = *(int *)ptVar1;
      iVar30 = *(int *)ptVar2;
      if (3 < param_2) {
        uVar33 = param_2 & 0xfffffffffffffffc;
        iVar4 = iVar30 * 4;
        iVar31 = iVar29 + iVar30 * (int)uVar33;
        psVar27 = param_3 + uVar33 * 3;
        pfVar26 = param_1 + uVar33 * 3;
        iVar34 = iVar29 + iVar30;
        iVar36 = iVar29 + iVar30 * 2;
        iVar38 = iVar29 + iVar30 * 3;
        uVar32 = uVar33;
        do {
          sVar47 = *param_3;
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
          auVar8._4_4_ = iVar34;
          auVar8._0_4_ = iVar29;
          auVar8._8_4_ = iVar36;
          auVar8._12_4_ = iVar38;
          auVar50 = NEON_scvtf(auVar8,4);
          uVar32 = uVar32 - 4;
          iVar29 = iVar29 + iVar4;
          iVar34 = iVar34 + iVar4;
          iVar36 = iVar36 + iVar4;
          iVar38 = iVar38 + iVar4;
          auVar83._0_4_ = (int)sVar47;
          auVar83._4_4_ = (int)*psVar13;
          auVar83._8_4_ = (int)*psVar16;
          auVar83._12_4_ = (int)*psVar19;
          auVar91._0_4_ = (int)*psVar11;
          auVar91._4_4_ = (int)*psVar14;
          auVar91._8_4_ = (int)*psVar17;
          auVar91._12_4_ = (int)*psVar20;
          auVar52._0_4_ = (int)*psVar12;
          auVar52._4_4_ = (int)*psVar15;
          auVar52._8_4_ = (int)*psVar18;
          auVar52._12_4_ = (int)*psVar21;
          auVar60 = NEON_scvtf(auVar83,4);
          auVar67 = NEON_scvtf(auVar91,4);
          fVar46 = auVar50._0_4_;
          fVar40 = auVar50._4_4_;
          fVar80 = auVar50._8_4_;
          fVar81 = auVar50._12_4_;
          auVar50 = NEON_scvtf(auVar52,4);
          *param_1 = fVar46 * auVar60._0_4_ * 1.1368684e-13;
          param_1[1] = fVar46 * auVar67._0_4_ * 1.1368684e-13;
          param_1[2] = fVar46 * auVar50._0_4_ * 1.1368684e-13;
          param_1[3] = fVar40 * auVar60._4_4_ * 1.1368684e-13;
          param_1[4] = fVar40 * auVar67._4_4_ * 1.1368684e-13;
          param_1[5] = fVar40 * auVar50._4_4_ * 1.1368684e-13;
          param_1[6] = fVar80 * auVar60._8_4_ * 1.1368684e-13;
          param_1[7] = fVar80 * auVar67._8_4_ * 1.1368684e-13;
          param_1[8] = fVar80 * auVar50._8_4_ * 1.1368684e-13;
          param_1[9] = fVar81 * auVar60._12_4_ * 1.1368684e-13;
          param_1[10] = fVar81 * auVar67._12_4_ * 1.1368684e-13;
          param_1[0xb] = fVar81 * auVar50._12_4_ * 1.1368684e-13;
          param_1 = param_1 + 0xc;
        } while (uVar32 != 0);
        bVar10 = uVar33 == param_2;
        param_2 = param_2 - uVar33;
        param_3 = psVar27;
        param_1 = pfVar26;
        iVar29 = iVar31;
        if (bVar10) goto LAB_00e89254;
      }
      do {
        fVar46 = (float)iVar29;
        param_2 = param_2 - 1;
        uVar41 = NEON_scvtf(CONCAT44((int)param_3[1],(int)*param_3),4);
        *(ulong *)param_1 =
             CONCAT44((float)((ulong)uVar41 >> 0x20) * fVar46 * 1.1368684e-13,
                      (float)uVar41 * fVar46 * 1.1368684e-13);
        iVar31 = iVar29 + iVar30;
        param_1[2] = fVar46 * (float)(int)param_3[2] * 1.1368684e-13;
        param_3 = param_3 + 3;
        param_1 = param_1 + 3;
        iVar29 = iVar31;
      } while (param_2 != 0);
      goto LAB_00e89254;
    }
    iVar30 = *(int *)ptVar3;
    do {
      sVar47 = *param_3;
      sVar63 = param_3[1];
      iVar31 = *(int *)ptVar1;
      fVar46 = (float)iVar31;
      uVar41 = NEON_scvtf(CONCAT44((int)sVar63,(int)sVar47),4);
      *(ulong *)param_1 =
           CONCAT44((float)((ulong)uVar41 >> 0x20) * fVar46 * 1.1368684e-13,
                    (float)uVar41 * fVar46 * 1.1368684e-13);
      sVar64 = param_3[2];
      param_1[2] = fVar46 * (float)(int)sVar64 * 1.1368684e-13;
      param_2 = param_2 - 1;
      *(int *)ptVar1 = *(int *)ptVar2 + iVar31;
      *param_4 = *param_4 +
                 (iVar30 >> 0x10) *
                 ((((int)sVar63 + (int)sVar47 + (int)sVar64) * 0x1000) / 3 >> 0xc);
      param_3 = param_3 + 3;
      param_1 = param_1 + 3;
      iVar30 = *(int *)ptVar3 + iVar29;
      *(int *)ptVar3 = iVar30;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
    break;
  case 3:
    if (param_4 == (int *)0x0) {
      iVar29 = *(int *)ptVar1;
      iVar30 = *(int *)ptVar2;
      if (3 < param_2) {
        uVar33 = param_2 & 0xfffffffffffffffc;
        iVar4 = iVar30 * 4;
        iVar31 = iVar29 + iVar30 * (int)uVar33;
        psVar27 = param_3 + uVar33 * 4;
        pfVar26 = param_1 + uVar33 * 4;
        iVar34 = iVar29 + iVar30;
        iVar36 = iVar29 + iVar30 * 2;
        iVar38 = iVar29 + iVar30 * 3;
        uVar32 = uVar33;
        do {
          sVar47 = *param_3;
          psVar15 = param_3 + 1;
          psVar14 = param_3 + 2;
          psVar22 = param_3 + 3;
          psVar13 = param_3 + 4;
          psVar23 = param_3 + 5;
          psVar24 = param_3 + 6;
          psVar12 = param_3 + 7;
          psVar21 = param_3 + 8;
          psVar20 = param_3 + 9;
          psVar25 = param_3 + 10;
          psVar16 = param_3 + 0xb;
          psVar17 = param_3 + 0xc;
          psVar18 = param_3 + 0xd;
          psVar19 = param_3 + 0xe;
          psVar11 = param_3 + 0xf;
          param_3 = param_3 + 0x10;
          auVar7._4_4_ = iVar34;
          auVar7._0_4_ = iVar29;
          auVar7._8_4_ = iVar36;
          auVar7._12_4_ = iVar38;
          auVar50 = NEON_scvtf(auVar7,4);
          uVar32 = uVar32 - 4;
          iVar29 = iVar29 + iVar4;
          iVar34 = iVar34 + iVar4;
          iVar36 = iVar36 + iVar4;
          iVar38 = iVar38 + iVar4;
          auVar92._0_4_ = (int)sVar47;
          auVar92._4_4_ = (int)*psVar13;
          auVar92._8_4_ = (int)*psVar21;
          auVar92._12_4_ = (int)*psVar17;
          auVar96._0_4_ = (int)*psVar15;
          auVar96._4_4_ = (int)*psVar23;
          auVar96._8_4_ = (int)*psVar20;
          auVar96._12_4_ = (int)*psVar18;
          auVar53._0_4_ = (int)*psVar22;
          auVar53._4_4_ = (int)*psVar12;
          auVar53._8_4_ = (int)*psVar16;
          auVar53._12_4_ = (int)*psVar11;
          auVar60 = NEON_scvtf(auVar92,4);
          auVar100._0_4_ = (int)*psVar14;
          auVar100._4_4_ = (int)*psVar24;
          auVar100._8_4_ = (int)*psVar25;
          auVar100._12_4_ = (int)*psVar19;
          auVar67 = NEON_scvtf(auVar96,4);
          fVar46 = auVar50._0_4_;
          fVar40 = auVar50._4_4_;
          fVar80 = auVar50._8_4_;
          fVar81 = auVar50._12_4_;
          auVar74 = NEON_scvtf(auVar100,4);
          auVar50 = NEON_scvtf(auVar53,4);
          *param_1 = fVar46 * auVar60._0_4_ * 1.1368684e-13;
          param_1[1] = fVar46 * auVar67._0_4_ * 1.1368684e-13;
          param_1[2] = fVar46 * auVar74._0_4_ * 1.1368684e-13;
          param_1[3] = fVar46 * auVar50._0_4_ * 1.1368684e-13;
          param_1[4] = fVar40 * auVar60._4_4_ * 1.1368684e-13;
          param_1[5] = fVar40 * auVar67._4_4_ * 1.1368684e-13;
          param_1[6] = fVar40 * auVar74._4_4_ * 1.1368684e-13;
          param_1[7] = fVar40 * auVar50._4_4_ * 1.1368684e-13;
          param_1[8] = fVar80 * auVar60._8_4_ * 1.1368684e-13;
          param_1[9] = fVar80 * auVar67._8_4_ * 1.1368684e-13;
          param_1[10] = fVar80 * auVar74._8_4_ * 1.1368684e-13;
          param_1[0xb] = fVar80 * auVar50._8_4_ * 1.1368684e-13;
          param_1[0xc] = fVar81 * auVar60._12_4_ * 1.1368684e-13;
          param_1[0xd] = fVar81 * auVar67._12_4_ * 1.1368684e-13;
          param_1[0xe] = fVar81 * auVar74._12_4_ * 1.1368684e-13;
          param_1[0xf] = fVar81 * auVar50._12_4_ * 1.1368684e-13;
          param_1 = param_1 + 0x10;
        } while (uVar32 != 0);
        bVar10 = uVar33 == param_2;
        param_3 = psVar27;
        param_2 = param_2 - uVar33;
        param_1 = pfVar26;
        iVar29 = iVar31;
        if (bVar10) goto LAB_00e89254;
      }
      do {
        uVar41 = *(undefined8 *)param_3;
        fVar46 = (float)iVar29;
        param_2 = param_2 - 1;
        iVar31 = iVar29 + iVar30;
        auVar42._0_4_ = (int)(short)uVar41;
        auVar42._4_4_ = (int)(short)((ulong)uVar41 >> 0x10);
        auVar42._8_4_ = (int)(short)((ulong)uVar41 >> 0x20);
        auVar42._12_4_ = (int)(short)((ulong)uVar41 >> 0x30);
        auVar50 = NEON_scvtf(auVar42,4);
        param_1[2] = auVar50._8_4_ * fVar46 * 1.1368684e-13;
        param_1[3] = auVar50._12_4_ * fVar46 * 1.1368684e-13;
        *param_1 = auVar50._0_4_ * fVar46 * 1.1368684e-13;
        param_1[1] = auVar50._4_4_ * fVar46 * 1.1368684e-13;
        param_3 = param_3 + 4;
        param_1 = param_1 + 4;
        iVar29 = iVar31;
      } while (param_2 != 0);
      goto LAB_00e89254;
    }
    iVar30 = *(int *)ptVar3;
    do {
      iVar31 = *(int *)ptVar1;
      uVar41 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      fVar46 = (float)iVar31;
      auVar49._0_4_ = (int)(short)uVar41;
      sVar47 = (short)((ulong)uVar41 >> 0x10);
      auVar49._4_4_ = (int)sVar47;
      sVar63 = (short)((ulong)uVar41 >> 0x20);
      auVar49._8_4_ = (int)sVar63;
      sVar64 = (short)((ulong)uVar41 >> 0x30);
      auVar49._12_4_ = (int)sVar64;
      auVar50 = NEON_scvtf(auVar49,4);
      param_1[2] = auVar50._8_4_ * fVar46 * 1.1368684e-13;
      param_1[3] = auVar50._12_4_ * fVar46 * 1.1368684e-13;
      *param_1 = auVar50._0_4_ * fVar46 * 1.1368684e-13;
      param_1[1] = auVar50._4_4_ * fVar46 * 1.1368684e-13;
      *(int *)ptVar1 = *(int *)ptVar2 + iVar31;
      *param_4 = *param_4 +
                 (iVar30 >> 0x10) *
                 ((int)sVar47 + (int)(short)uVar41 + (int)sVar63 + (int)sVar64 >> 2);
      iVar30 = *(int *)ptVar3 + iVar29;
      *(int *)ptVar3 = iVar30;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
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
                    /* WARNING: Read-only address (ram,0x01427f70) is written */
                    /* WARNING: Read-only address (ram,0x01427f80) is written */
                    /* WARNING: Read-only address (ram,0x01427f90) is written */
                    /* WARNING: Read-only address (ram,0x01427fa0) is written */
                    /* WARNING: Read-only address (ram,0x01427fb0) is written */
  return;
}

