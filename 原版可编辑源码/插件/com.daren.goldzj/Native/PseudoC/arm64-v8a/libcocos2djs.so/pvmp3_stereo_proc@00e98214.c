
void pvmp3_stereo_proc(int *param_1,int *param_2,long param_3,long param_4,uint param_5,int *param_6
                      )

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int *piVar34;
  long lVar35;
  uint uVar36;
  uint uVar37;
  short *psVar38;
  int *piVar39;
  int *piVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  int *piVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  uint uVar49;
  ulong uVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined1 auVar55 [16];
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  
  if (param_6[7] != 1) {
    return;
  }
  uVar36 = param_6[8];
  if ((uVar36 & 1) == 0) {
    if ((uVar36 >> 1 & 1) == 0) {
      return;
    }
    uVar36 = (int)param_5 >> 1;
    if (uVar36 != 0) {
      uVar42 = (ulong)(uVar36 - 1);
      lVar48 = uVar42 * 2 + 2;
      piVar39 = param_1;
      piVar40 = param_2;
      if ((3 < uVar42 + 1) &&
         ((param_2 + uVar42 * 2 + 2 <= param_1 || (param_1 + uVar42 * 2 + 2 <= param_2)))) {
        uVar49 = param_5 >> 1 & 3;
        lVar41 = (uVar42 + 1) - (ulong)uVar49;
        lVar43 = (uVar42 + 1) - (ulong)uVar49;
        uVar36 = uVar36 - (int)lVar41;
        piVar39 = param_1 + lVar41 * 2;
        piVar40 = param_2 + lVar41 * 2;
        piVar34 = param_1;
        piVar45 = param_2;
        do {
          lVar43 = lVar43 + -4;
          iVar58 = *piVar45 * 2 + *piVar34 * 2;
          iVar59 = piVar45[2] * 2 + piVar34[2] * 2;
          iVar60 = piVar45[4] * 2 + piVar34[4] * 2;
          iVar61 = piVar45[6] * 2 + piVar34[6] * 2;
          iVar62 = piVar45[1] * 2 + piVar34[1] * 2;
          iVar63 = piVar45[3] * 2 + piVar34[3] * 2;
          iVar64 = piVar45[5] * 2 + piVar34[5] * 2;
          iVar65 = piVar45[7] * 2 + piVar34[7] * 2;
          iVar66 = *piVar34 * 2 + *piVar45 * -2;
          iVar67 = piVar34[2] * 2 + piVar45[2] * -2;
          iVar68 = piVar34[4] * 2 + piVar45[4] * -2;
          iVar69 = piVar34[6] * 2 + piVar45[6] * -2;
          iVar51 = piVar34[1] * 2 + piVar45[1] * -2;
          iVar52 = piVar34[3] * 2 + piVar45[3] * -2;
          iVar53 = piVar34[5] * 2 + piVar45[5] * -2;
          iVar54 = piVar34[7] * 2 + piVar45[7] * -2;
          auVar13._4_4_ = iVar59;
          auVar13._0_4_ = iVar58;
          auVar13._8_4_ = iVar60;
          auVar13._12_4_ = iVar61;
          auVar14._4_4_ = iVar59;
          auVar14._0_4_ = iVar58;
          auVar14._8_4_ = iVar60;
          auVar14._12_4_ = iVar61;
          auVar55 = NEON_ext(auVar13,auVar14,8,1);
          auVar19._4_4_ = iVar63;
          auVar19._0_4_ = iVar62;
          auVar19._8_4_ = iVar64;
          auVar19._12_4_ = iVar65;
          auVar20._4_4_ = iVar63;
          auVar20._0_4_ = iVar62;
          auVar20._8_4_ = iVar64;
          auVar20._12_4_ = iVar65;
          auVar70 = NEON_ext(auVar19,auVar20,8,1);
          auVar26._4_4_ = iVar67;
          auVar26._0_4_ = iVar66;
          auVar26._8_4_ = iVar68;
          auVar26._12_4_ = iVar69;
          auVar27._4_4_ = iVar67;
          auVar27._0_4_ = iVar66;
          auVar27._8_4_ = iVar68;
          auVar27._12_4_ = iVar69;
          auVar71 = NEON_ext(auVar26,auVar27,8,1);
          auVar7._4_4_ = iVar52;
          auVar7._0_4_ = iVar51;
          auVar7._8_4_ = iVar53;
          auVar7._12_4_ = iVar54;
          auVar8._4_4_ = iVar52;
          auVar8._0_4_ = iVar51;
          auVar8._8_4_ = iVar53;
          auVar8._12_4_ = iVar54;
          auVar73 = NEON_ext(auVar7,auVar8,8,1);
          *piVar34 = (int)((ulong)((long)iVar58 * 0x5a827999) >> 0x20);
          piVar34[1] = (int)((ulong)((long)iVar62 * 0x5a827999) >> 0x20);
          piVar34[2] = (int)((ulong)((long)iVar59 * 0x5a827999) >> 0x20);
          piVar34[3] = (int)((ulong)((long)iVar63 * 0x5a827999) >> 0x20);
          piVar34[4] = (int)((ulong)((long)auVar55._0_4_ * 0x5a827999) >> 0x20);
          piVar34[5] = (int)((ulong)((long)auVar70._0_4_ * 0x5a827999) >> 0x20);
          piVar34[6] = (int)((ulong)((long)auVar55._4_4_ * 0x5a827999) >> 0x20);
          piVar34[7] = (int)((ulong)((long)auVar70._4_4_ * 0x5a827999) >> 0x20);
          piVar34 = piVar34 + 8;
          *piVar45 = (int)((ulong)((long)iVar66 * 0x5a827999) >> 0x20);
          piVar45[1] = (int)((ulong)((long)iVar51 * 0x5a827999) >> 0x20);
          piVar45[2] = (int)((ulong)((long)iVar67 * 0x5a827999) >> 0x20);
          piVar45[3] = (int)((ulong)((long)iVar52 * 0x5a827999) >> 0x20);
          piVar45[4] = (int)((ulong)((long)auVar71._0_4_ * 0x5a827999) >> 0x20);
          piVar45[5] = (int)((ulong)((long)auVar73._0_4_ * 0x5a827999) >> 0x20);
          piVar45[6] = (int)((ulong)((long)auVar71._4_4_ * 0x5a827999) >> 0x20);
          piVar45[7] = (int)((ulong)((long)auVar73._4_4_ * 0x5a827999) >> 0x20);
          piVar45 = piVar45 + 8;
          if (lVar43 == 0) goto joined_r0x00e98454;
        } while( true );
      }
      do {
        iVar51 = *piVar39;
        iVar52 = *piVar40;
        uVar36 = uVar36 - 1;
        *piVar39 = (int)((ulong)((long)(iVar52 * 2 + iVar51 * 2) * 0x5a827999) >> 0x20);
        *piVar40 = (int)((ulong)((long)(iVar51 * 2 + iVar52 * -2) * 0x5a827999) >> 0x20);
        iVar51 = piVar39[1];
        iVar52 = piVar40[1];
        piVar39[1] = (int)((ulong)((long)(iVar52 * 2 + iVar51 * 2) * 0x5a827999) >> 0x20);
        piVar40[1] = (int)((ulong)((long)(iVar51 * 2 + iVar52 * -2) * 0x5a827999) >> 0x20);
        piVar39 = piVar39 + 2;
        piVar40 = piVar40 + 2;
        uVar49 = uVar36;
joined_r0x00e98454:
      } while (uVar49 != 0);
      param_1 = param_1 + lVar48;
      param_2 = param_2 + lVar48;
    }
    if ((param_5 & 1) == 0) {
      return;
    }
LAB_00e984e8:
    iVar51 = *param_1;
    iVar52 = *param_2;
    *param_1 = (int)((ulong)((long)(iVar52 * 2 + iVar51 * 2) * 0x5a827999) >> 0x20);
    *param_2 = (int)((ulong)((long)(iVar51 * 2 + iVar52 * -2) * 0x5a827999) >> 0x20);
    return;
  }
  lVar48 = (long)param_6[4] + (long)(*param_6 * 3);
  iVar51 = (int)lVar48;
  if ((*(int *)(param_4 + 0x10) == 0) || (*(int *)(param_4 + 0x14) != 2)) {
    iVar53 = 0x1f;
    iVar52 = 0x11;
LAB_00e9830c:
    iVar54 = iVar52 + iVar53 * 0x12;
    if (param_2[iVar54] == 0) goto code_r0x00e98318;
    if (iVar54 != 0) {
      if (iVar54 < *(short *)(mp3_sfBandIndex + (long)iVar51 * 0x4a + 0x1c)) {
        lVar48 = 0;
        if (*(short *)(mp3_sfBandIndex + (long)iVar51 * 0x4a + 0xe) <= iVar54) {
          lVar48 = 7;
        }
      }
      else {
        lVar48 = 0xe;
      }
      uVar49 = (int)lVar48 - 1;
      psVar38 = (short *)(mp3_sfBandIndex + lVar48 * 2 + (long)iVar51 * 0x4a);
      do {
        sVar4 = *psVar38;
        uVar49 = uVar49 + 1;
        psVar38 = psVar38 + 1;
      } while (sVar4 <= iVar54);
      goto joined_r0x00e9889c;
    }
    iVar53 = -2;
    goto LAB_00e98528;
  }
  if (*(int *)(param_4 + 0x18) == 0) {
    lVar48 = 0;
    iVar52 = 1;
    do {
      iVar53 = 0xc;
      iVar54 = -1;
      do {
        lVar43 = (long)iVar53 * 2 + (long)iVar51 * 0x4a;
        sVar4 = *(short *)(mp3_sfBandIndex + lVar43 + 0x2e);
        iVar60 = (int)*(short *)(mp3_sfBandIndex + lVar43 + 0x30);
        iVar58 = iVar60 - sVar4;
        iVar59 = iVar53;
        if (0 < iVar58) {
          piVar39 = param_2 + (long)((int)sVar4 + sVar4 * 2 + iVar52 * iVar58) + -1;
          iVar58 = (iVar60 + -1) - (int)sVar4;
          do {
            if (*piVar39 != 0) {
              iVar59 = -10;
              iVar54 = iVar53;
              break;
            }
            bVar1 = 0 < iVar58;
            piVar39 = piVar39 + -1;
            iVar58 = iVar58 + -1;
          } while (bVar1);
        }
        iVar53 = iVar59 + -1;
      } while (0 < iVar59);
      uVar49 = iVar54 + 1;
      iVar53 = (int)lVar48;
      if (-1 < iVar54) {
        uVar42 = (ulong)uVar49;
        psVar38 = (short *)(mp3_sfBandIndex + (long)iVar51 * 0x4a + 0x30);
        do {
          if ((uVar36 >> 1 & 1) != 0) {
            sVar4 = psVar38[-1];
            pvmp3_st_mid_side(param_1,param_2,
                              (int)sVar4 + sVar4 * 2 + ((int)*psVar38 - (int)sVar4) * iVar53);
          }
          uVar42 = uVar42 - 1;
          psVar38 = psVar38 + 1;
        } while (uVar42 != 0);
      }
      if ((int)uVar49 < 0xd) {
        lVar43 = (long)(int)uVar49;
        do {
          while( true ) {
            lVar35 = (long)iVar51 * 0x4a + 0x1995ca0;
            lVar41 = lVar43 * 4;
            sVar4 = *(short *)(lVar35 + lVar43 * 2);
            lVar43 = lVar43 + 1;
            uVar49 = *(uint *)(param_3 + lVar48 * 0x34 + lVar41 + 0x5c);
            iVar54 = sVar4 * 3;
            uVar5 = (int)*(short *)(lVar35 + lVar43 * 2) - (int)sVar4;
            uVar37 = iVar54 + uVar5 * iVar53;
            if (uVar49 == 7) break;
            lVar41 = (long)(int)(&DAT_01998678)[(ulong)uVar49 & 7];
            uVar42 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar37 << 2;
            piVar39 = (int *)((long)param_1 + uVar42);
            uVar49 = (int)uVar5 >> 1;
            piVar40 = (int *)((long)param_2 + uVar42);
            if (uVar49 != 0) {
              uVar42 = (ulong)(uVar49 - 1);
              lVar35 = (long)(int)uVar37 + uVar42 * 2;
              if (uVar42 + 1 < 4) goto LAB_00e987dc;
              if ((piVar40 < param_1 + lVar35 + 2) && (piVar39 < param_2 + lVar35 + 2))
              goto LAB_00e987dc;
              uVar6 = uVar5 >> 1 & 3;
              uVar37 = iVar54 + iVar53 * uVar5;
              lVar44 = (uVar42 + 1) - (ulong)uVar6;
              uVar50 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar37 << 2;
              uVar49 = uVar49 - (int)lVar44;
              piVar34 = (int *)((long)param_2 + uVar50);
              piVar45 = (int *)((long)param_1 + uVar50);
              piVar39 = piVar39 + lVar44 * 2;
              piVar40 = piVar40 + lVar44 * 2;
              lVar44 = (uVar42 + 1) - (ulong)uVar6;
              do {
                iVar68 = piVar45[1];
                iVar65 = piVar45[2];
                iVar69 = piVar45[3];
                iVar66 = piVar45[4];
                iVar57 = piVar45[5];
                iVar67 = piVar45[6];
                iVar56 = piVar45[7];
                lVar44 = lVar44 + -4;
                iVar54 = (int)((ulong)(lVar41 * (*piVar45 << 1)) >> 0x20);
                iVar61 = (int)((ulong)(lVar41 * (iVar65 << 1)) >> 0x20);
                iVar58 = (int)((ulong)(lVar41 * (iVar66 << 1)) >> 0x20);
                iVar62 = (int)((ulong)(lVar41 * (iVar67 << 1)) >> 0x20);
                iVar59 = (int)((ulong)(lVar41 * (iVar68 << 1)) >> 0x20);
                iVar63 = (int)((ulong)(lVar41 * (iVar69 << 1)) >> 0x20);
                iVar60 = (int)((ulong)(lVar41 * (iVar57 << 1)) >> 0x20);
                iVar64 = (int)((ulong)(lVar41 * (iVar56 << 1)) >> 0x20);
                *piVar34 = *piVar45 - iVar54;
                piVar34[1] = iVar68 - iVar59;
                piVar34[2] = iVar65 - iVar61;
                piVar34[3] = iVar69 - iVar63;
                piVar34[4] = iVar66 - iVar58;
                piVar34[5] = iVar57 - iVar60;
                piVar34[6] = iVar67 - iVar62;
                piVar34[7] = iVar56 - iVar64;
                piVar34 = piVar34 + 8;
                *piVar45 = iVar54;
                piVar45[1] = iVar59;
                piVar45[2] = iVar61;
                piVar45[3] = iVar63;
                piVar45[4] = iVar58;
                piVar45[5] = iVar60;
                piVar45[6] = iVar62;
                piVar45[7] = iVar64;
                piVar45 = piVar45 + 8;
              } while (lVar44 != 0);
              while (uVar6 != 0) {
LAB_00e987dc:
                iVar54 = (int)((ulong)((*piVar39 << 1) * lVar41) >> 0x20);
                *piVar40 = *piVar39 - iVar54;
                *piVar39 = iVar54;
                iVar54 = (int)((ulong)((piVar39[1] << 1) * lVar41) >> 0x20);
                piVar40[1] = piVar39[1] - iVar54;
                piVar39[1] = iVar54;
                piVar39 = piVar39 + 2;
                piVar40 = piVar40 + 2;
                uVar49 = uVar49 - 1;
                uVar6 = uVar49;
              }
              piVar40 = param_2 + lVar35 + 2;
              piVar39 = param_1 + lVar35 + 2;
            }
            if ((uVar5 & 1) != 0) {
              iVar54 = (int)((ulong)((*piVar39 << 1) * lVar41) >> 0x20);
              *piVar40 = *piVar39 - iVar54;
              *piVar39 = iVar54;
            }
LAB_00e9885c:
            if ((int)lVar43 == 0xd) goto LAB_00e98864;
          }
          if ((uVar36 >> 1 & 1) == 0) goto LAB_00e9885c;
          pvmp3_st_mid_side(param_1,param_2);
        } while ((int)lVar43 != 0xd);
      }
LAB_00e98864:
      lVar48 = lVar48 + 1;
      iVar52 = iVar52 + 1;
      if (lVar48 == 3) {
        return;
      }
    } while( true );
  }
  iVar53 = 0x1f;
  iVar52 = 0x11;
  do {
    iVar54 = iVar52 + iVar53 * 0x12;
    if (param_2[iVar54] != 0) {
      lVar48 = (long)iVar51;
      if (0x23 < iVar54) {
        lVar43 = 0;
        iVar51 = 1;
        do {
          iVar52 = 0xc;
          iVar53 = -1;
          do {
            lVar41 = (long)iVar52 * 2 + lVar48 * 0x4a;
            sVar4 = *(short *)(mp3_sfBandIndex + lVar41 + 0x2e);
            iVar59 = (int)*(short *)(mp3_sfBandIndex + lVar41 + 0x30);
            iVar54 = iVar59 - sVar4;
            iVar58 = iVar52;
            if (0 < iVar54) {
              piVar39 = param_2 + (long)((int)sVar4 + sVar4 * 2 + iVar51 * iVar54) + -1;
              iVar54 = (iVar59 + -1) - (int)sVar4;
              do {
                if (*piVar39 != 0) {
                  iVar58 = -10;
                  iVar53 = iVar52;
                  break;
                }
                bVar1 = 0 < iVar54;
                piVar39 = piVar39 + -1;
                iVar54 = iVar54 + -1;
              } while (bVar1);
            }
            iVar52 = iVar58 + -1;
          } while (2 < iVar52);
          uVar49 = 3;
          iVar52 = (int)lVar43;
          if (2 < iVar53) {
            uVar49 = iVar53 + 1;
            lVar41 = 0;
            do {
              if ((uVar36 >> 1 & 1) != 0) {
                lVar35 = lVar41 * 2 + lVar48 * 0x4a;
                sVar4 = *(short *)(mp3_sfBandIndex + lVar35 + 0x34);
                pvmp3_st_mid_side(param_1,param_2,
                                  (int)sVar4 + sVar4 * 2 +
                                  ((int)*(short *)(mp3_sfBandIndex + lVar35 + 0x36) - (int)sVar4) *
                                  iVar52);
              }
              lVar35 = lVar41 + 4;
              lVar41 = lVar41 + 1;
            } while (lVar35 < (int)uVar49);
          }
          if (uVar49 < 0xd) {
            uVar42 = (ulong)(uVar49 - 1) + 1;
            do {
              while( true ) {
                lVar35 = lVar48 * 0x4a + 0x1995ca0;
                lVar41 = uVar42 * 4;
                sVar4 = *(short *)(lVar35 + uVar42 * 2);
                uVar42 = uVar42 + 1;
                uVar49 = *(uint *)(param_3 + lVar43 * 0x34 + lVar41 + 0x5c);
                iVar53 = sVar4 * 3;
                uVar5 = (int)*(short *)(lVar35 + uVar42 * 2) - (int)sVar4;
                uVar37 = iVar53 + uVar5 * iVar52;
                if (uVar49 == 7) break;
                lVar41 = (long)(int)(&DAT_01998678)[(ulong)uVar49 & 7];
                uVar50 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar37 << 2;
                piVar39 = (int *)((long)param_1 + uVar50);
                uVar49 = (int)uVar5 >> 1;
                piVar40 = (int *)((long)param_2 + uVar50);
                if (uVar49 != 0) {
                  uVar50 = (ulong)(uVar49 - 1);
                  lVar35 = (long)(int)uVar37 + uVar50 * 2;
                  if (uVar50 + 1 < 4) goto LAB_00e99254;
                  if ((piVar40 < param_1 + lVar35 + 2) && (piVar39 < param_2 + lVar35 + 2))
                  goto LAB_00e99254;
                  uVar6 = uVar5 >> 1 & 3;
                  uVar37 = iVar53 + iVar52 * uVar5;
                  lVar44 = (uVar50 + 1) - (ulong)uVar6;
                  uVar47 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar37 << 2;
                  uVar49 = uVar49 - (int)lVar44;
                  piVar34 = (int *)((long)param_2 + uVar47);
                  piVar45 = (int *)((long)param_1 + uVar47);
                  piVar39 = piVar39 + lVar44 * 2;
                  piVar40 = piVar40 + lVar44 * 2;
                  lVar44 = (uVar50 + 1) - (ulong)uVar6;
                  do {
                    iVar67 = piVar45[1];
                    iVar64 = piVar45[2];
                    iVar68 = piVar45[3];
                    iVar65 = piVar45[4];
                    iVar69 = piVar45[5];
                    iVar66 = piVar45[6];
                    iVar57 = piVar45[7];
                    lVar44 = lVar44 + -4;
                    iVar53 = (int)((ulong)(lVar41 * (*piVar45 << 1)) >> 0x20);
                    iVar60 = (int)((ulong)(lVar41 * (iVar64 << 1)) >> 0x20);
                    iVar54 = (int)((ulong)(lVar41 * (iVar65 << 1)) >> 0x20);
                    iVar61 = (int)((ulong)(lVar41 * (iVar66 << 1)) >> 0x20);
                    iVar58 = (int)((ulong)(lVar41 * (iVar67 << 1)) >> 0x20);
                    iVar62 = (int)((ulong)(lVar41 * (iVar68 << 1)) >> 0x20);
                    iVar59 = (int)((ulong)(lVar41 * (iVar69 << 1)) >> 0x20);
                    iVar63 = (int)((ulong)(lVar41 * (iVar57 << 1)) >> 0x20);
                    *piVar34 = *piVar45 - iVar53;
                    piVar34[1] = iVar67 - iVar58;
                    piVar34[2] = iVar64 - iVar60;
                    piVar34[3] = iVar68 - iVar62;
                    piVar34[4] = iVar65 - iVar54;
                    piVar34[5] = iVar69 - iVar59;
                    piVar34[6] = iVar66 - iVar61;
                    piVar34[7] = iVar57 - iVar63;
                    piVar34 = piVar34 + 8;
                    *piVar45 = iVar53;
                    piVar45[1] = iVar58;
                    piVar45[2] = iVar60;
                    piVar45[3] = iVar62;
                    piVar45[4] = iVar54;
                    piVar45[5] = iVar59;
                    piVar45[6] = iVar61;
                    piVar45[7] = iVar63;
                    piVar45 = piVar45 + 8;
                  } while (lVar44 != 0);
                  while (uVar6 != 0) {
LAB_00e99254:
                    iVar53 = (int)((ulong)((*piVar39 << 1) * lVar41) >> 0x20);
                    *piVar40 = *piVar39 - iVar53;
                    *piVar39 = iVar53;
                    iVar53 = (int)((ulong)((piVar39[1] << 1) * lVar41) >> 0x20);
                    piVar40[1] = piVar39[1] - iVar53;
                    piVar39[1] = iVar53;
                    piVar39 = piVar39 + 2;
                    piVar40 = piVar40 + 2;
                    uVar49 = uVar49 - 1;
                    uVar6 = uVar49;
                  }
                  piVar40 = param_2 + lVar35 + 2;
                  piVar39 = param_1 + lVar35 + 2;
                }
                if ((uVar5 & 1) != 0) {
                  iVar53 = (int)((ulong)((*piVar39 << 1) * lVar41) >> 0x20);
                  *piVar40 = *piVar39 - iVar53;
                  *piVar39 = iVar53;
                }
LAB_00e992d4:
                if (0xc < uVar42) goto LAB_00e992dc;
              }
              if ((uVar36 >> 1 & 1) == 0) goto LAB_00e992d4;
              pvmp3_st_mid_side(param_1,param_2);
            } while (uVar42 < 0xd);
          }
LAB_00e992dc:
          lVar43 = lVar43 + 1;
          iVar51 = iVar51 + 1;
        } while (lVar43 != 3);
        if ((uVar36 >> 1 & 1) == 0) {
          return;
        }
        uVar3 = *(ushort *)(mp3_sfBandIndex + lVar48 * 0x4a + 0x10);
        uVar36 = (int)(short)uVar3 >> 1;
        if (uVar36 != 0) {
          uVar42 = (ulong)(uVar36 - 1);
          lVar48 = uVar42 * 2 + 2;
          piVar39 = param_1;
          piVar40 = param_2;
          if ((3 < uVar42 + 1) &&
             ((param_2 + uVar42 * 2 + 2 <= param_1 || (param_1 + uVar42 * 2 + 2 <= param_2)))) {
            uVar49 = (uint)(int)(short)uVar3 >> 1 & 3;
            lVar41 = (uVar42 + 1) - (ulong)uVar49;
            lVar43 = (uVar42 + 1) - (ulong)uVar49;
            uVar36 = uVar36 - (int)lVar41;
            piVar39 = param_1 + lVar41 * 2;
            piVar40 = param_2 + lVar41 * 2;
            piVar34 = param_1;
            piVar45 = param_2;
            do {
              lVar43 = lVar43 + -4;
              iVar58 = *piVar45 * 2 + *piVar34 * 2;
              iVar59 = piVar45[2] * 2 + piVar34[2] * 2;
              iVar60 = piVar45[4] * 2 + piVar34[4] * 2;
              iVar61 = piVar45[6] * 2 + piVar34[6] * 2;
              iVar62 = piVar45[1] * 2 + piVar34[1] * 2;
              iVar63 = piVar45[3] * 2 + piVar34[3] * 2;
              iVar64 = piVar45[5] * 2 + piVar34[5] * 2;
              iVar65 = piVar45[7] * 2 + piVar34[7] * 2;
              iVar66 = *piVar34 * 2 + *piVar45 * -2;
              iVar67 = piVar34[2] * 2 + piVar45[2] * -2;
              iVar68 = piVar34[4] * 2 + piVar45[4] * -2;
              iVar69 = piVar34[6] * 2 + piVar45[6] * -2;
              iVar51 = piVar34[1] * 2 + piVar45[1] * -2;
              iVar52 = piVar34[3] * 2 + piVar45[3] * -2;
              iVar53 = piVar34[5] * 2 + piVar45[5] * -2;
              iVar54 = piVar34[7] * 2 + piVar45[7] * -2;
              auVar17._4_4_ = iVar59;
              auVar17._0_4_ = iVar58;
              auVar17._8_4_ = iVar60;
              auVar17._12_4_ = iVar61;
              auVar18._4_4_ = iVar59;
              auVar18._0_4_ = iVar58;
              auVar18._8_4_ = iVar60;
              auVar18._12_4_ = iVar61;
              auVar55 = NEON_ext(auVar17,auVar18,8,1);
              auVar23._4_4_ = iVar63;
              auVar23._0_4_ = iVar62;
              auVar23._8_4_ = iVar64;
              auVar23._12_4_ = iVar65;
              auVar24._4_4_ = iVar63;
              auVar24._0_4_ = iVar62;
              auVar24._8_4_ = iVar64;
              auVar24._12_4_ = iVar65;
              auVar70 = NEON_ext(auVar23,auVar24,8,1);
              auVar30._4_4_ = iVar67;
              auVar30._0_4_ = iVar66;
              auVar30._8_4_ = iVar68;
              auVar30._12_4_ = iVar69;
              auVar31._4_4_ = iVar67;
              auVar31._0_4_ = iVar66;
              auVar31._8_4_ = iVar68;
              auVar31._12_4_ = iVar69;
              auVar71 = NEON_ext(auVar30,auVar31,8,1);
              auVar11._4_4_ = iVar52;
              auVar11._0_4_ = iVar51;
              auVar11._8_4_ = iVar53;
              auVar11._12_4_ = iVar54;
              auVar12._4_4_ = iVar52;
              auVar12._0_4_ = iVar51;
              auVar12._8_4_ = iVar53;
              auVar12._12_4_ = iVar54;
              auVar73 = NEON_ext(auVar11,auVar12,8,1);
              *piVar34 = (int)((ulong)((long)iVar58 * 0x5a827999) >> 0x20);
              piVar34[1] = (int)((ulong)((long)iVar62 * 0x5a827999) >> 0x20);
              piVar34[2] = (int)((ulong)((long)iVar59 * 0x5a827999) >> 0x20);
              piVar34[3] = (int)((ulong)((long)iVar63 * 0x5a827999) >> 0x20);
              piVar34[4] = (int)((ulong)((long)auVar55._0_4_ * 0x5a827999) >> 0x20);
              piVar34[5] = (int)((ulong)((long)auVar70._0_4_ * 0x5a827999) >> 0x20);
              piVar34[6] = (int)((ulong)((long)auVar55._4_4_ * 0x5a827999) >> 0x20);
              piVar34[7] = (int)((ulong)((long)auVar70._4_4_ * 0x5a827999) >> 0x20);
              piVar34 = piVar34 + 8;
              *piVar45 = (int)((ulong)((long)iVar66 * 0x5a827999) >> 0x20);
              piVar45[1] = (int)((ulong)((long)iVar51 * 0x5a827999) >> 0x20);
              piVar45[2] = (int)((ulong)((long)iVar67 * 0x5a827999) >> 0x20);
              piVar45[3] = (int)((ulong)((long)iVar52 * 0x5a827999) >> 0x20);
              piVar45[4] = (int)((ulong)((long)auVar71._0_4_ * 0x5a827999) >> 0x20);
              piVar45[5] = (int)((ulong)((long)auVar73._0_4_ * 0x5a827999) >> 0x20);
              piVar45[6] = (int)((ulong)((long)auVar71._4_4_ * 0x5a827999) >> 0x20);
              piVar45[7] = (int)((ulong)((long)auVar73._4_4_ * 0x5a827999) >> 0x20);
              piVar45 = piVar45 + 8;
              if (lVar43 == 0) goto joined_r0x00e99a5c;
            } while( true );
          }
          do {
            iVar51 = *piVar39;
            iVar52 = *piVar40;
            uVar36 = uVar36 - 1;
            *piVar39 = (int)((ulong)((long)(iVar52 * 2 + iVar51 * 2) * 0x5a827999) >> 0x20);
            *piVar40 = (int)((ulong)((long)(iVar51 * 2 + iVar52 * -2) * 0x5a827999) >> 0x20);
            iVar51 = piVar39[1];
            iVar52 = piVar40[1];
            piVar39[1] = (int)((ulong)((long)(iVar52 * 2 + iVar51 * 2) * 0x5a827999) >> 0x20);
            piVar40[1] = (int)((ulong)((long)(iVar51 * 2 + iVar52 * -2) * 0x5a827999) >> 0x20);
            piVar39 = piVar39 + 2;
            piVar40 = piVar40 + 2;
            uVar49 = uVar36;
joined_r0x00e99a5c:
          } while (uVar49 != 0);
          param_1 = param_1 + lVar48;
          param_2 = param_2 + lVar48;
        }
        if ((uVar3 & 1) == 0) {
          return;
        }
        goto LAB_00e984e8;
      }
      goto LAB_00e98e34;
    }
    iVar54 = iVar52 + -1;
    bVar2 = iVar52 < 1;
    bVar1 = 0 < iVar52;
    iVar52 = 0x11;
    if (bVar1) {
      iVar52 = iVar54;
    }
    iVar53 = iVar53 - (uint)bVar2;
  } while (-1 < iVar53);
  iVar54 = 0;
LAB_00e98e34:
  uVar42 = 0;
  if (*(short *)(mp3_sfBandIndex + lVar48 * 0x4a + 8) <= iVar54) {
    uVar42 = 4;
  }
  do {
    uVar50 = uVar42;
    uVar42 = uVar50 + 1;
  } while (*(short *)(mp3_sfBandIndex + uVar50 * 2 + lVar48 * 0x4a) < iVar54);
  if ((uVar36 >> 1 & 1) != 0) {
    uVar37 = (uint)*(short *)(mp3_sfBandIndex + uVar50 * 2 + lVar48 * 0x4a);
    uVar49 = (int)uVar37 >> 1;
    piVar40 = param_2;
    piVar39 = param_1;
    if (uVar49 != 0) {
      uVar42 = (ulong)(uVar49 - 1);
      lVar43 = uVar42 * 2 + 2;
      if ((3 < uVar42 + 1) &&
         ((param_2 + uVar42 * 2 + 2 <= param_1 || (param_1 + uVar42 * 2 + 2 <= param_2)))) {
        uVar5 = uVar37 >> 1 & 3;
        lVar35 = (uVar42 + 1) - (ulong)uVar5;
        lVar41 = (uVar42 + 1) - (ulong)uVar5;
        uVar49 = uVar49 - (int)lVar35;
        piVar39 = param_1 + lVar35 * 2;
        piVar40 = param_2 + lVar35 * 2;
        piVar34 = param_2;
        piVar45 = param_1;
        do {
          lVar41 = lVar41 + -4;
          iVar58 = *piVar34 * 2 + *piVar45 * 2;
          iVar59 = piVar34[2] * 2 + piVar45[2] * 2;
          iVar60 = piVar34[4] * 2 + piVar45[4] * 2;
          iVar61 = piVar34[6] * 2 + piVar45[6] * 2;
          iVar62 = piVar34[1] * 2 + piVar45[1] * 2;
          iVar63 = piVar34[3] * 2 + piVar45[3] * 2;
          iVar64 = piVar34[5] * 2 + piVar45[5] * 2;
          iVar65 = piVar34[7] * 2 + piVar45[7] * 2;
          iVar66 = *piVar45 * 2 + *piVar34 * -2;
          iVar67 = piVar45[2] * 2 + piVar34[2] * -2;
          iVar68 = piVar45[4] * 2 + piVar34[4] * -2;
          iVar69 = piVar45[6] * 2 + piVar34[6] * -2;
          iVar51 = piVar45[1] * 2 + piVar34[1] * -2;
          iVar52 = piVar45[3] * 2 + piVar34[3] * -2;
          iVar53 = piVar45[5] * 2 + piVar34[5] * -2;
          iVar54 = piVar45[7] * 2 + piVar34[7] * -2;
          auVar15._4_4_ = iVar59;
          auVar15._0_4_ = iVar58;
          auVar15._8_4_ = iVar60;
          auVar15._12_4_ = iVar61;
          auVar16._4_4_ = iVar59;
          auVar16._0_4_ = iVar58;
          auVar16._8_4_ = iVar60;
          auVar16._12_4_ = iVar61;
          auVar55 = NEON_ext(auVar15,auVar16,8,1);
          auVar21._4_4_ = iVar63;
          auVar21._0_4_ = iVar62;
          auVar21._8_4_ = iVar64;
          auVar21._12_4_ = iVar65;
          auVar22._4_4_ = iVar63;
          auVar22._0_4_ = iVar62;
          auVar22._8_4_ = iVar64;
          auVar22._12_4_ = iVar65;
          auVar70 = NEON_ext(auVar21,auVar22,8,1);
          auVar28._4_4_ = iVar67;
          auVar28._0_4_ = iVar66;
          auVar28._8_4_ = iVar68;
          auVar28._12_4_ = iVar69;
          auVar29._4_4_ = iVar67;
          auVar29._0_4_ = iVar66;
          auVar29._8_4_ = iVar68;
          auVar29._12_4_ = iVar69;
          auVar71 = NEON_ext(auVar28,auVar29,8,1);
          auVar9._4_4_ = iVar52;
          auVar9._0_4_ = iVar51;
          auVar9._8_4_ = iVar53;
          auVar9._12_4_ = iVar54;
          auVar10._4_4_ = iVar52;
          auVar10._0_4_ = iVar51;
          auVar10._8_4_ = iVar53;
          auVar10._12_4_ = iVar54;
          auVar73 = NEON_ext(auVar9,auVar10,8,1);
          *piVar45 = (int)((ulong)((long)iVar58 * 0x5a827999) >> 0x20);
          piVar45[1] = (int)((ulong)((long)iVar62 * 0x5a827999) >> 0x20);
          piVar45[2] = (int)((ulong)((long)iVar59 * 0x5a827999) >> 0x20);
          piVar45[3] = (int)((ulong)((long)iVar63 * 0x5a827999) >> 0x20);
          piVar45[4] = (int)((ulong)((long)auVar55._0_4_ * 0x5a827999) >> 0x20);
          piVar45[5] = (int)((ulong)((long)auVar70._0_4_ * 0x5a827999) >> 0x20);
          piVar45[6] = (int)((ulong)((long)auVar55._4_4_ * 0x5a827999) >> 0x20);
          piVar45[7] = (int)((ulong)((long)auVar70._4_4_ * 0x5a827999) >> 0x20);
          piVar45 = piVar45 + 8;
          *piVar34 = (int)((ulong)((long)iVar66 * 0x5a827999) >> 0x20);
          piVar34[1] = (int)((ulong)((long)iVar51 * 0x5a827999) >> 0x20);
          piVar34[2] = (int)((ulong)((long)iVar67 * 0x5a827999) >> 0x20);
          piVar34[3] = (int)((ulong)((long)iVar52 * 0x5a827999) >> 0x20);
          piVar34[4] = (int)((ulong)((long)auVar71._0_4_ * 0x5a827999) >> 0x20);
          piVar34[5] = (int)((ulong)((long)auVar73._0_4_ * 0x5a827999) >> 0x20);
          piVar34[6] = (int)((ulong)((long)auVar71._4_4_ * 0x5a827999) >> 0x20);
          piVar34[7] = (int)((ulong)((long)auVar73._4_4_ * 0x5a827999) >> 0x20);
          piVar34 = piVar34 + 8;
          if (lVar41 == 0) goto joined_r0x00e99414;
        } while( true );
      }
      do {
        iVar51 = *piVar39;
        iVar52 = *piVar40;
        uVar49 = uVar49 - 1;
        *piVar39 = (int)((ulong)((long)(iVar52 * 2 + iVar51 * 2) * 0x5a827999) >> 0x20);
        *piVar40 = (int)((ulong)((long)(iVar51 * 2 + iVar52 * -2) * 0x5a827999) >> 0x20);
        iVar51 = piVar39[1];
        iVar52 = piVar40[1];
        piVar39[1] = (int)((ulong)((long)(iVar52 * 2 + iVar51 * 2) * 0x5a827999) >> 0x20);
        piVar40[1] = (int)((ulong)((long)(iVar51 * 2 + iVar52 * -2) * 0x5a827999) >> 0x20);
        piVar39 = piVar39 + 2;
        piVar40 = piVar40 + 2;
        uVar5 = uVar49;
joined_r0x00e99414:
      } while (uVar5 != 0);
      piVar39 = param_1 + lVar43;
      piVar40 = param_2 + lVar43;
    }
    if ((uVar37 & 1) != 0) {
      iVar51 = *piVar39;
      iVar52 = *piVar40;
      *piVar39 = (int)((ulong)((long)(iVar52 * 2 + iVar51 * 2) * 0x5a827999) >> 0x20);
      *piVar40 = (int)((ulong)((long)(iVar51 * 2 + iVar52 * -2) * 0x5a827999) >> 0x20);
    }
  }
  if ((uint)uVar50 < 8) {
    uVar50 = uVar50 & 0xffffffff;
    do {
      while( true ) {
        sVar4 = *(short *)(mp3_sfBandIndex + uVar50 * 2 + lVar48 * 0x4a);
        uVar49 = *(uint *)(param_3 + uVar50 * 4);
        uVar50 = uVar50 + 1;
        uVar37 = (int)*(short *)(mp3_sfBandIndex + uVar50 * 2 + lVar48 * 0x4a) - (int)sVar4;
        if (uVar49 == 7) break;
        lVar43 = (long)(int)(&DAT_01998678)[(ulong)uVar49 & 7];
        uVar42 = -((ulong)(long)sVar4 >> 0x1f & 1) & 0xfffffffc00000000 |
                 ((long)sVar4 & 0xffffffffU) << 2;
        piVar39 = (int *)((long)param_1 + uVar42);
        uVar49 = (int)uVar37 >> 1;
        piVar40 = (int *)((long)param_2 + uVar42);
        if (uVar49 != 0) {
          uVar42 = (ulong)(uVar49 - 1);
          lVar41 = (long)(int)sVar4 + uVar42 * 2;
          if (uVar42 + 1 < 4) goto LAB_00e99684;
          if ((piVar40 < param_1 + lVar41 + 2) && (piVar39 < param_2 + lVar41 + 2))
          goto LAB_00e99684;
          uVar5 = uVar37 >> 1 & 3;
          lVar35 = (uVar42 + 1) - (ulong)uVar5;
          uVar49 = uVar49 - (int)lVar35;
          piVar34 = piVar39 + lVar35 * 2;
          piVar45 = piVar40 + lVar35 * 2;
          lVar35 = (uVar42 + 1) - (ulong)uVar5;
          do {
            iVar65 = piVar39[1];
            iVar62 = piVar39[2];
            iVar66 = piVar39[3];
            iVar63 = piVar39[4];
            iVar67 = piVar39[5];
            iVar64 = piVar39[6];
            iVar68 = piVar39[7];
            lVar35 = lVar35 + -4;
            iVar51 = (int)((ulong)(lVar43 * (*piVar39 << 1)) >> 0x20);
            iVar58 = (int)((ulong)(lVar43 * (iVar62 << 1)) >> 0x20);
            iVar52 = (int)((ulong)(lVar43 * (iVar63 << 1)) >> 0x20);
            iVar59 = (int)((ulong)(lVar43 * (iVar64 << 1)) >> 0x20);
            iVar53 = (int)((ulong)(lVar43 * (iVar65 << 1)) >> 0x20);
            iVar60 = (int)((ulong)(lVar43 * (iVar66 << 1)) >> 0x20);
            iVar54 = (int)((ulong)(lVar43 * (iVar67 << 1)) >> 0x20);
            iVar61 = (int)((ulong)(lVar43 * (iVar68 << 1)) >> 0x20);
            *piVar40 = *piVar39 - iVar51;
            piVar40[1] = iVar65 - iVar53;
            piVar40[2] = iVar62 - iVar58;
            piVar40[3] = iVar66 - iVar60;
            piVar40[4] = iVar63 - iVar52;
            piVar40[5] = iVar67 - iVar54;
            piVar40[6] = iVar64 - iVar59;
            piVar40[7] = iVar68 - iVar61;
            piVar40 = piVar40 + 8;
            *piVar39 = iVar51;
            piVar39[1] = iVar53;
            piVar39[2] = iVar58;
            piVar39[3] = iVar60;
            piVar39[4] = iVar52;
            piVar39[5] = iVar54;
            piVar39[6] = iVar59;
            piVar39[7] = iVar61;
            piVar39 = piVar39 + 8;
          } while (lVar35 != 0);
          while (piVar40 = piVar45, piVar39 = piVar34, uVar5 != 0) {
LAB_00e99684:
            iVar51 = (int)((ulong)((*piVar39 << 1) * lVar43) >> 0x20);
            *piVar40 = *piVar39 - iVar51;
            *piVar39 = iVar51;
            iVar51 = (int)((ulong)((piVar39[1] << 1) * lVar43) >> 0x20);
            piVar40[1] = piVar39[1] - iVar51;
            piVar39[1] = iVar51;
            uVar49 = uVar49 - 1;
            piVar34 = piVar39 + 2;
            piVar45 = piVar40 + 2;
            uVar5 = uVar49;
          }
          piVar40 = param_2 + lVar41 + 2;
          piVar39 = param_1 + lVar41 + 2;
        }
        if ((uVar37 & 1) != 0) {
          iVar51 = (int)((ulong)((*piVar39 << 1) * lVar43) >> 0x20);
          *piVar40 = *piVar39 - iVar51;
          *piVar39 = iVar51;
        }
LAB_00e99704:
        if (uVar50 == 8) goto LAB_00e9970c;
      }
      if ((uVar36 >> 1 & 1) == 0) goto LAB_00e99704;
      pvmp3_st_mid_side(param_1,param_2);
    } while (uVar50 != 8);
  }
LAB_00e9970c:
  lVar43 = 0;
  lVar48 = lVar48 * 0x4a + 0x1995ca0;
  do {
    lVar41 = 3;
    do {
      while( true ) {
        sVar4 = *(short *)(lVar48 + lVar41 * 2);
        lVar35 = lVar41 * 4;
        lVar41 = lVar41 + 1;
        uVar49 = *(uint *)(param_3 + lVar43 * 0x34 + lVar35 + 0x5c);
        iVar51 = sVar4 * 3;
        uVar5 = (int)*(short *)(lVar48 + lVar41 * 2) - (int)sVar4;
        uVar37 = iVar51 + uVar5 * (int)lVar43;
        if (uVar49 == 7) break;
        lVar35 = (long)(int)(&DAT_01998678)[(ulong)uVar49 & 7];
        uVar42 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar37 << 2;
        piVar39 = (int *)((long)param_1 + uVar42);
        uVar49 = (int)uVar5 >> 1;
        piVar40 = (int *)((long)param_2 + uVar42);
        if (uVar49 != 0) {
          uVar42 = (ulong)(uVar49 - 1);
          lVar44 = (long)(int)uVar37 + uVar42 * 2;
          if (uVar42 + 1 < 4) goto LAB_00e998c4;
          if ((piVar40 < param_1 + lVar44 + 2) && (piVar39 < param_2 + lVar44 + 2))
          goto LAB_00e998c4;
          uVar6 = uVar5 >> 1 & 3;
          uVar37 = iVar51 + (int)lVar43 * uVar5;
          lVar46 = (uVar42 + 1) - (ulong)uVar6;
          uVar50 = -(ulong)(uVar37 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar37 << 2;
          uVar49 = uVar49 - (int)lVar46;
          piVar34 = (int *)((long)param_2 + uVar50);
          piVar45 = (int *)((long)param_1 + uVar50);
          piVar39 = piVar39 + lVar46 * 2;
          piVar40 = piVar40 + lVar46 * 2;
          lVar46 = (uVar42 + 1) - (ulong)uVar6;
          do {
            iVar65 = piVar45[1];
            iVar62 = piVar45[2];
            iVar66 = piVar45[3];
            iVar63 = piVar45[4];
            iVar67 = piVar45[5];
            iVar64 = piVar45[6];
            iVar68 = piVar45[7];
            lVar46 = lVar46 + -4;
            iVar51 = (int)((ulong)(lVar35 * (*piVar45 << 1)) >> 0x20);
            iVar58 = (int)((ulong)(lVar35 * (iVar62 << 1)) >> 0x20);
            iVar52 = (int)((ulong)(lVar35 * (iVar63 << 1)) >> 0x20);
            iVar59 = (int)((ulong)(lVar35 * (iVar64 << 1)) >> 0x20);
            iVar53 = (int)((ulong)(lVar35 * (iVar65 << 1)) >> 0x20);
            iVar60 = (int)((ulong)(lVar35 * (iVar66 << 1)) >> 0x20);
            iVar54 = (int)((ulong)(lVar35 * (iVar67 << 1)) >> 0x20);
            iVar61 = (int)((ulong)(lVar35 * (iVar68 << 1)) >> 0x20);
            *piVar34 = *piVar45 - iVar51;
            piVar34[1] = iVar65 - iVar53;
            piVar34[2] = iVar62 - iVar58;
            piVar34[3] = iVar66 - iVar60;
            piVar34[4] = iVar63 - iVar52;
            piVar34[5] = iVar67 - iVar54;
            piVar34[6] = iVar64 - iVar59;
            piVar34[7] = iVar68 - iVar61;
            piVar34 = piVar34 + 8;
            *piVar45 = iVar51;
            piVar45[1] = iVar53;
            piVar45[2] = iVar58;
            piVar45[3] = iVar60;
            piVar45[4] = iVar52;
            piVar45[5] = iVar54;
            piVar45[6] = iVar59;
            piVar45[7] = iVar61;
            piVar45 = piVar45 + 8;
          } while (lVar46 != 0);
          while (uVar6 != 0) {
LAB_00e998c4:
            iVar51 = (int)((ulong)((*piVar39 << 1) * lVar35) >> 0x20);
            *piVar40 = *piVar39 - iVar51;
            *piVar39 = iVar51;
            iVar51 = (int)((ulong)((piVar39[1] << 1) * lVar35) >> 0x20);
            piVar40[1] = piVar39[1] - iVar51;
            piVar39[1] = iVar51;
            piVar39 = piVar39 + 2;
            piVar40 = piVar40 + 2;
            uVar49 = uVar49 - 1;
            uVar6 = uVar49;
          }
          piVar40 = param_2 + lVar44 + 2;
          piVar39 = param_1 + lVar44 + 2;
        }
        if ((uVar5 & 1) != 0) {
          iVar51 = (int)((ulong)((*piVar39 << 1) * lVar35) >> 0x20);
          *piVar40 = *piVar39 - iVar51;
          *piVar39 = iVar51;
        }
LAB_00e99944:
        if (lVar41 == 0xd) goto LAB_00e9994c;
      }
      if ((uVar36 >> 1 & 1) == 0) goto LAB_00e99944;
      pvmp3_st_mid_side(param_1,param_2);
    } while (lVar41 != 0xd);
LAB_00e9994c:
    lVar43 = lVar43 + 1;
    if (lVar43 == 3) {
      return;
    }
  } while( true );
code_r0x00e98318:
  iVar54 = iVar52 + -1;
  bVar2 = iVar52 < 1;
  bVar1 = 0 < iVar52;
  iVar52 = 0x11;
  if (bVar1) {
    iVar52 = iVar54;
  }
  iVar53 = iVar53 - (uint)bVar2;
  if (iVar53 < 0) goto LAB_00e98528;
  goto LAB_00e9830c;
LAB_00e98528:
  uVar49 = (uint)(iVar53 != -1);
joined_r0x00e9889c:
  if ((uVar36 >> 1 & 1) != 0) {
    uVar3 = *(ushort *)(mp3_sfBandIndex + (long)(int)uVar49 * 2 + (long)iVar51 * 0x4a);
    uVar37 = (int)(short)uVar3 >> 1;
    piVar40 = param_2;
    piVar39 = param_1;
    if (uVar37 != 0) {
      uVar42 = (ulong)(uVar37 - 1);
      lVar48 = uVar42 * 2 + 2;
      if ((3 < uVar42 + 1) &&
         ((param_2 + uVar42 * 2 + 2 <= param_1 || (param_1 + uVar42 * 2 + 2 <= param_2)))) {
        uVar5 = (uint)(int)(short)uVar3 >> 1 & 3;
        lVar41 = (uVar42 + 1) - (ulong)uVar5;
        lVar43 = (uVar42 + 1) - (ulong)uVar5;
        uVar37 = uVar37 - (int)lVar41;
        piVar39 = param_1 + lVar41 * 2;
        piVar40 = param_2 + lVar41 * 2;
        piVar34 = param_1;
        piVar45 = param_2;
        do {
          lVar43 = lVar43 + -4;
          iVar59 = *piVar45 * 2 + *piVar34 * 2;
          iVar60 = piVar45[2] * 2 + piVar34[2] * 2;
          iVar61 = piVar45[4] * 2 + piVar34[4] * 2;
          iVar62 = piVar45[6] * 2 + piVar34[6] * 2;
          iVar63 = piVar45[1] * 2 + piVar34[1] * 2;
          iVar64 = piVar45[3] * 2 + piVar34[3] * 2;
          iVar65 = piVar45[5] * 2 + piVar34[5] * 2;
          iVar66 = piVar45[7] * 2 + piVar34[7] * 2;
          iVar67 = *piVar34 * 2 + *piVar45 * -2;
          iVar68 = piVar34[2] * 2 + piVar45[2] * -2;
          iVar69 = piVar34[4] * 2 + piVar45[4] * -2;
          iVar57 = piVar34[6] * 2 + piVar45[6] * -2;
          iVar52 = piVar34[1] * 2 + piVar45[1] * -2;
          iVar53 = piVar34[3] * 2 + piVar45[3] * -2;
          iVar54 = piVar34[5] * 2 + piVar45[5] * -2;
          iVar58 = piVar34[7] * 2 + piVar45[7] * -2;
          auVar71._4_4_ = iVar60;
          auVar71._0_4_ = iVar59;
          auVar71._8_4_ = iVar61;
          auVar71._12_4_ = iVar62;
          auVar73._4_4_ = iVar60;
          auVar73._0_4_ = iVar59;
          auVar73._8_4_ = iVar61;
          auVar73._12_4_ = iVar62;
          auVar71 = NEON_ext(auVar71,auVar73,8,1);
          auVar72._4_4_ = iVar64;
          auVar72._0_4_ = iVar63;
          auVar72._8_4_ = iVar65;
          auVar72._12_4_ = iVar66;
          auVar25._4_4_ = iVar64;
          auVar25._0_4_ = iVar63;
          auVar25._8_4_ = iVar65;
          auVar25._12_4_ = iVar66;
          auVar73 = NEON_ext(auVar72,auVar25,8,1);
          auVar32._4_4_ = iVar68;
          auVar32._0_4_ = iVar67;
          auVar32._8_4_ = iVar69;
          auVar32._12_4_ = iVar57;
          auVar33._4_4_ = iVar68;
          auVar33._0_4_ = iVar67;
          auVar33._8_4_ = iVar69;
          auVar33._12_4_ = iVar57;
          auVar72 = NEON_ext(auVar32,auVar33,8,1);
          auVar55._4_4_ = iVar53;
          auVar55._0_4_ = iVar52;
          auVar55._8_4_ = iVar54;
          auVar55._12_4_ = iVar58;
          auVar70._4_4_ = iVar53;
          auVar70._0_4_ = iVar52;
          auVar70._8_4_ = iVar54;
          auVar70._12_4_ = iVar58;
          auVar55 = NEON_ext(auVar55,auVar70,8,1);
          *piVar34 = (int)((ulong)((long)iVar59 * 0x5a827999) >> 0x20);
          piVar34[1] = (int)((ulong)((long)iVar63 * 0x5a827999) >> 0x20);
          piVar34[2] = (int)((ulong)((long)iVar60 * 0x5a827999) >> 0x20);
          piVar34[3] = (int)((ulong)((long)iVar64 * 0x5a827999) >> 0x20);
          piVar34[4] = (int)((ulong)((long)auVar71._0_4_ * 0x5a827999) >> 0x20);
          piVar34[5] = (int)((ulong)((long)auVar73._0_4_ * 0x5a827999) >> 0x20);
          piVar34[6] = (int)((ulong)((long)auVar71._4_4_ * 0x5a827999) >> 0x20);
          piVar34[7] = (int)((ulong)((long)auVar73._4_4_ * 0x5a827999) >> 0x20);
          piVar34 = piVar34 + 8;
          *piVar45 = (int)((ulong)((long)iVar67 * 0x5a827999) >> 0x20);
          piVar45[1] = (int)((ulong)((long)iVar52 * 0x5a827999) >> 0x20);
          piVar45[2] = (int)((ulong)((long)iVar68 * 0x5a827999) >> 0x20);
          piVar45[3] = (int)((ulong)((long)iVar53 * 0x5a827999) >> 0x20);
          piVar45[4] = (int)((ulong)((long)auVar72._0_4_ * 0x5a827999) >> 0x20);
          piVar45[5] = (int)((ulong)((long)auVar55._0_4_ * 0x5a827999) >> 0x20);
          piVar45[6] = (int)((ulong)((long)auVar72._4_4_ * 0x5a827999) >> 0x20);
          piVar45[7] = (int)((ulong)((long)auVar55._4_4_ * 0x5a827999) >> 0x20);
          piVar45 = piVar45 + 8;
          if (lVar43 == 0) goto joined_r0x00e989d4;
        } while( true );
      }
      do {
        iVar52 = *piVar39;
        iVar53 = *piVar40;
        uVar37 = uVar37 - 1;
        *piVar39 = (int)((ulong)((long)(iVar53 * 2 + iVar52 * 2) * 0x5a827999) >> 0x20);
        *piVar40 = (int)((ulong)((long)(iVar52 * 2 + iVar53 * -2) * 0x5a827999) >> 0x20);
        iVar52 = piVar39[1];
        iVar53 = piVar40[1];
        piVar39[1] = (int)((ulong)((long)(iVar53 * 2 + iVar52 * 2) * 0x5a827999) >> 0x20);
        piVar40[1] = (int)((ulong)((long)(iVar52 * 2 + iVar53 * -2) * 0x5a827999) >> 0x20);
        piVar39 = piVar39 + 2;
        piVar40 = piVar40 + 2;
        uVar5 = uVar37;
joined_r0x00e989d4:
      } while (uVar5 != 0);
      piVar39 = param_1 + lVar48;
      piVar40 = param_2 + lVar48;
    }
    if ((uVar3 & 1) != 0) {
      iVar52 = *piVar39;
      iVar53 = *piVar40;
      *piVar39 = (int)((ulong)((long)(iVar53 * 2 + iVar52 * 2) * 0x5a827999) >> 0x20);
      *piVar40 = (int)((ulong)((long)(iVar52 * 2 + iVar53 * -2) * 0x5a827999) >> 0x20);
    }
  }
  lVar48 = (long)iVar51;
  if ((int)uVar49 < 0x15) {
    lVar43 = (long)(int)uVar49;
    do {
      while( true ) {
        sVar4 = *(short *)(mp3_sfBandIndex + lVar43 * 2 + lVar48 * 0x4a);
        uVar37 = *(uint *)(param_3 + lVar43 * 4);
        lVar43 = lVar43 + 1;
        uVar5 = (int)*(short *)(mp3_sfBandIndex + lVar43 * 2 + lVar48 * 0x4a) - (int)sVar4;
        if (uVar37 == 7) break;
        lVar41 = (long)(int)(&DAT_01998678)[(ulong)uVar37 & 7];
        uVar42 = -((ulong)(long)sVar4 >> 0x1f & 1) & 0xfffffffc00000000 |
                 ((long)sVar4 & 0xffffffffU) << 2;
        piVar39 = (int *)((long)param_1 + uVar42);
        uVar37 = (int)uVar5 >> 1;
        piVar40 = (int *)((long)param_2 + uVar42);
        if (uVar37 != 0) {
          uVar42 = (ulong)(uVar37 - 1);
          lVar35 = (long)(int)sVar4 + uVar42 * 2;
          if (uVar42 + 1 < 4) goto LAB_00e98c48;
          if ((piVar40 < param_1 + lVar35 + 2) && (piVar39 < param_2 + lVar35 + 2))
          goto LAB_00e98c48;
          uVar6 = uVar5 >> 1 & 3;
          lVar44 = (uVar42 + 1) - (ulong)uVar6;
          uVar37 = uVar37 - (int)lVar44;
          piVar34 = piVar39 + lVar44 * 2;
          piVar45 = piVar40 + lVar44 * 2;
          lVar44 = (uVar42 + 1) - (ulong)uVar6;
          do {
            iVar65 = piVar39[1];
            iVar62 = piVar39[2];
            iVar66 = piVar39[3];
            iVar63 = piVar39[4];
            iVar67 = piVar39[5];
            iVar64 = piVar39[6];
            iVar68 = piVar39[7];
            lVar44 = lVar44 + -4;
            iVar51 = (int)((ulong)(lVar41 * (*piVar39 << 1)) >> 0x20);
            iVar58 = (int)((ulong)(lVar41 * (iVar62 << 1)) >> 0x20);
            iVar52 = (int)((ulong)(lVar41 * (iVar63 << 1)) >> 0x20);
            iVar59 = (int)((ulong)(lVar41 * (iVar64 << 1)) >> 0x20);
            iVar53 = (int)((ulong)(lVar41 * (iVar65 << 1)) >> 0x20);
            iVar60 = (int)((ulong)(lVar41 * (iVar66 << 1)) >> 0x20);
            iVar54 = (int)((ulong)(lVar41 * (iVar67 << 1)) >> 0x20);
            iVar61 = (int)((ulong)(lVar41 * (iVar68 << 1)) >> 0x20);
            *piVar40 = *piVar39 - iVar51;
            piVar40[1] = iVar65 - iVar53;
            piVar40[2] = iVar62 - iVar58;
            piVar40[3] = iVar66 - iVar60;
            piVar40[4] = iVar63 - iVar52;
            piVar40[5] = iVar67 - iVar54;
            piVar40[6] = iVar64 - iVar59;
            piVar40[7] = iVar68 - iVar61;
            piVar40 = piVar40 + 8;
            *piVar39 = iVar51;
            piVar39[1] = iVar53;
            piVar39[2] = iVar58;
            piVar39[3] = iVar60;
            piVar39[4] = iVar52;
            piVar39[5] = iVar54;
            piVar39[6] = iVar59;
            piVar39[7] = iVar61;
            piVar39 = piVar39 + 8;
          } while (lVar44 != 0);
          while (piVar40 = piVar45, piVar39 = piVar34, uVar6 != 0) {
LAB_00e98c48:
            iVar51 = (int)((ulong)((*piVar39 << 1) * lVar41) >> 0x20);
            *piVar40 = *piVar39 - iVar51;
            *piVar39 = iVar51;
            iVar51 = (int)((ulong)((piVar39[1] << 1) * lVar41) >> 0x20);
            piVar40[1] = piVar39[1] - iVar51;
            piVar39[1] = iVar51;
            uVar37 = uVar37 - 1;
            piVar34 = piVar39 + 2;
            piVar45 = piVar40 + 2;
            uVar6 = uVar37;
          }
          piVar40 = param_2 + lVar35 + 2;
          piVar39 = param_1 + lVar35 + 2;
        }
        if ((uVar5 & 1) != 0) {
          iVar51 = (int)((ulong)((*piVar39 << 1) * lVar41) >> 0x20);
          *piVar40 = *piVar39 - iVar51;
          *piVar39 = iVar51;
        }
LAB_00e98cc8:
        if (lVar43 == 0x15) goto LAB_00e98cd0;
      }
      if ((uVar36 >> 1 & 1) == 0) goto LAB_00e98cc8;
      pvmp3_st_mid_side(param_1,param_2);
    } while (lVar43 != 0x15);
  }
LAB_00e98cd0:
  sVar4 = *(short *)(mp3_sfBandIndex + lVar48 * 0x4a + 0x2a);
  uVar37 = (int)*(short *)(mp3_sfBandIndex + lVar48 * 0x4a + 0x2c) - (int)sVar4;
  if (*(int *)(param_3 + 0x54) == 7) {
    if ((uVar36 >> 1 & 1) == 0) {
      return;
    }
    pvmp3_st_mid_side(param_1,param_2);
    return;
  }
  if ((int)uVar49 < 0x15) {
    uVar42 = (ulong)*(uint *)(param_3 + 0x50) & 7;
  }
  else {
    uVar42 = 0;
  }
  lVar48 = (long)(int)(&DAT_01998678)[uVar42];
  uVar42 = -((ulong)(long)sVar4 >> 0x1f & 1) & 0xfffffffc00000000 | ((long)sVar4 & 0xffffffffU) << 2
  ;
  piVar39 = (int *)((long)param_1 + uVar42);
  uVar36 = (int)uVar37 >> 1;
  piVar40 = (int *)((long)param_2 + uVar42);
  if (uVar36 != 0) {
    uVar42 = (ulong)(uVar36 - 1);
    lVar43 = (long)(int)sVar4 + uVar42 * 2;
    if (uVar42 + 1 < 4) goto LAB_00e98da4;
    if ((piVar40 < param_1 + lVar43 + 2) && (piVar39 < param_2 + lVar43 + 2)) goto LAB_00e98da4;
    uVar49 = uVar37 >> 1 & 3;
    lVar35 = (uVar42 + 1) - (ulong)uVar49;
    lVar41 = (uVar42 + 1) - (ulong)uVar49;
    uVar36 = uVar36 - (int)lVar35;
    piVar34 = piVar39 + lVar35 * 2;
    piVar45 = piVar40 + lVar35 * 2;
    do {
      iVar65 = piVar39[1];
      iVar62 = piVar39[2];
      iVar66 = piVar39[3];
      iVar63 = piVar39[4];
      iVar67 = piVar39[5];
      iVar64 = piVar39[6];
      iVar68 = piVar39[7];
      lVar41 = lVar41 + -4;
      iVar51 = (int)((ulong)(lVar48 * (*piVar39 << 1)) >> 0x20);
      iVar58 = (int)((ulong)(lVar48 * (iVar62 << 1)) >> 0x20);
      iVar52 = (int)((ulong)(lVar48 * (iVar63 << 1)) >> 0x20);
      iVar59 = (int)((ulong)(lVar48 * (iVar64 << 1)) >> 0x20);
      iVar53 = (int)((ulong)(lVar48 * (iVar65 << 1)) >> 0x20);
      iVar60 = (int)((ulong)(lVar48 * (iVar66 << 1)) >> 0x20);
      iVar54 = (int)((ulong)(lVar48 * (iVar67 << 1)) >> 0x20);
      iVar61 = (int)((ulong)(lVar48 * (iVar68 << 1)) >> 0x20);
      *piVar40 = *piVar39 - iVar51;
      piVar40[1] = iVar65 - iVar53;
      piVar40[2] = iVar62 - iVar58;
      piVar40[3] = iVar66 - iVar60;
      piVar40[4] = iVar63 - iVar52;
      piVar40[5] = iVar67 - iVar54;
      piVar40[6] = iVar64 - iVar59;
      piVar40[7] = iVar68 - iVar61;
      piVar40 = piVar40 + 8;
      *piVar39 = iVar51;
      piVar39[1] = iVar53;
      piVar39[2] = iVar58;
      piVar39[3] = iVar60;
      piVar39[4] = iVar52;
      piVar39[5] = iVar54;
      piVar39[6] = iVar59;
      piVar39[7] = iVar61;
      piVar39 = piVar39 + 8;
    } while (lVar41 != 0);
    while (piVar40 = piVar45, piVar39 = piVar34, uVar49 != 0) {
LAB_00e98da4:
      iVar51 = (int)((ulong)((*piVar39 << 1) * lVar48) >> 0x20);
      *piVar40 = *piVar39 - iVar51;
      *piVar39 = iVar51;
      iVar51 = (int)((ulong)((piVar39[1] << 1) * lVar48) >> 0x20);
      piVar40[1] = piVar39[1] - iVar51;
      piVar39[1] = iVar51;
      uVar36 = uVar36 - 1;
      piVar34 = piVar39 + 2;
      piVar45 = piVar40 + 2;
      uVar49 = uVar36;
    }
    piVar40 = param_2 + lVar43 + 2;
    piVar39 = param_1 + lVar43 + 2;
  }
  if ((uVar37 & 1) == 0) {
    return;
  }
  iVar51 = (int)((ulong)((*piVar39 << 1) * lVar48) >> 0x20);
  *piVar40 = *piVar39 - iVar51;
  *piVar39 = iVar51;
  return;
}

