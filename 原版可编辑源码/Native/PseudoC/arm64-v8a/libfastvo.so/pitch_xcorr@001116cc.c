
void pitch_xcorr(short *param_1,long param_2,long param_3,int param_4,uint param_5)

{
  ulong uVar1;
  uint uVar2;
  short *psVar3;
  short *psVar18;
  short *psVar33;
  long lVar34;
  short *psVar35;
  short *psVar36;
  uint uVar37;
  ulong uVar38;
  short *psVar39;
  long lVar40;
  short *psVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  short sVar50;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  short *psVar13;
  short *psVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  short *psVar31;
  short *psVar32;
  
  if (0 < (int)param_5) {
    uVar2 = param_4 >> 2;
    uVar1 = (ulong)(uVar2 - 1) + 1;
    lVar40 = uVar1 - (uVar2 & 7);
    uVar38 = 0;
    psVar39 = (short *)(param_2 + 0x20);
    do {
      if (uVar2 == 0) {
        iVar42 = 0;
      }
      else {
        psVar33 = (short *)(param_2 + uVar38 * 2);
        if (uVar1 < 8) {
          iVar42 = 0;
          psVar36 = param_1;
          uVar37 = uVar2;
        }
        else {
          psVar33 = psVar33 + lVar40 * 4;
          iVar42 = 0;
          iVar43 = 0;
          iVar44 = 0;
          iVar45 = 0;
          iVar46 = 0;
          iVar47 = 0;
          iVar48 = 0;
          iVar49 = 0;
          lVar34 = lVar40;
          psVar35 = param_1 + 0x10;
          psVar36 = psVar39;
          do {
            psVar41 = psVar36 + -0x10;
            sVar50 = *psVar36;
            psVar3 = psVar36 + 1;
            psVar4 = psVar36 + 2;
            psVar5 = psVar36 + 3;
            psVar6 = psVar36 + 4;
            psVar7 = psVar36 + 5;
            psVar8 = psVar36 + 6;
            psVar9 = psVar36 + 7;
            psVar10 = psVar36 + 8;
            psVar11 = psVar36 + 9;
            psVar12 = psVar36 + 10;
            psVar13 = psVar36 + 0xb;
            psVar14 = psVar36 + 0xc;
            psVar15 = psVar36 + 0xd;
            psVar16 = psVar36 + 0xe;
            psVar17 = psVar36 + 0xf;
            psVar18 = psVar36 + -0xf;
            psVar19 = psVar36 + -0xe;
            psVar20 = psVar36 + -0xd;
            psVar21 = psVar36 + -0xc;
            psVar22 = psVar36 + -0xb;
            psVar23 = psVar36 + -10;
            psVar24 = psVar36 + -9;
            psVar25 = psVar36 + -8;
            psVar26 = psVar36 + -7;
            psVar27 = psVar36 + -6;
            psVar28 = psVar36 + -5;
            psVar29 = psVar36 + -4;
            psVar30 = psVar36 + -3;
            psVar31 = psVar36 + -2;
            psVar32 = psVar36 + -1;
            psVar36 = psVar36 + 0x20;
            lVar34 = lVar34 + -8;
            iVar46 = iVar46 + ((int)*psVar3 * (int)psVar35[1] + (int)sVar50 * (int)*psVar35 +
                               (int)*psVar4 * (int)psVar35[2] + (int)*psVar5 * (int)psVar35[3] >> 6)
            ;
            iVar47 = iVar47 + ((int)*psVar7 * (int)psVar35[5] + (int)*psVar6 * (int)psVar35[4] +
                               (int)*psVar8 * (int)psVar35[6] + (int)*psVar9 * (int)psVar35[7] >> 6)
            ;
            iVar48 = iVar48 + ((int)*psVar11 * (int)psVar35[9] + (int)*psVar10 * (int)psVar35[8] +
                               (int)*psVar12 * (int)psVar35[10] + (int)*psVar13 * (int)psVar35[0xb]
                              >> 6);
            iVar49 = iVar49 + ((int)*psVar15 * (int)psVar35[0xd] + (int)*psVar14 * (int)psVar35[0xc]
                               + (int)*psVar16 * (int)psVar35[0xe] +
                               (int)*psVar17 * (int)psVar35[0xf] >> 6);
            iVar42 = iVar42 + ((int)*psVar18 * (int)psVar35[-0xf] +
                               (int)*psVar41 * (int)psVar35[-0x10] +
                               (int)*psVar19 * (int)psVar35[-0xe] +
                               (int)*psVar20 * (int)psVar35[-0xd] >> 6);
            iVar43 = iVar43 + ((int)*psVar22 * (int)psVar35[-0xb] +
                               (int)*psVar21 * (int)psVar35[-0xc] +
                               (int)*psVar23 * (int)psVar35[-10] + (int)*psVar24 * (int)psVar35[-9]
                              >> 6);
            iVar44 = iVar44 + ((int)*psVar26 * (int)psVar35[-7] + (int)*psVar25 * (int)psVar35[-8] +
                               (int)*psVar27 * (int)psVar35[-6] + (int)*psVar28 * (int)psVar35[-5]
                              >> 6);
            iVar45 = iVar45 + ((int)*psVar30 * (int)psVar35[-3] + (int)*psVar29 * (int)psVar35[-4] +
                               (int)*psVar31 * (int)psVar35[-2] + (int)*psVar32 * (int)psVar35[-1]
                              >> 6);
            psVar35 = psVar35 + 0x20;
          } while (lVar34 != 0);
          iVar42 = iVar46 + iVar42 + iVar47 + iVar43 + iVar48 + iVar44 + iVar49 + iVar45;
          psVar36 = param_1 + lVar40 * 4;
          uVar37 = uVar2 - (int)lVar40;
          if ((uVar2 & 7) == 0) goto LAB_001117fc;
        }
        do {
          uVar37 = uVar37 - 1;
          iVar42 = iVar42 + ((int)*psVar33 * (int)*psVar36 + (int)psVar33[1] * (int)psVar36[1] +
                             (int)psVar33[2] * (int)psVar36[2] + (int)psVar33[3] * (int)psVar36[3]
                            >> 6);
          psVar33 = psVar33 + 4;
          psVar36 = psVar36 + 4;
        } while (uVar37 != 0);
      }
LAB_001117fc:
      uVar37 = (uint)uVar38;
      uVar38 = uVar38 + 1;
      psVar39 = psVar39 + 1;
      *(int *)(param_3 + (long)(int)(~uVar37 + param_5) * 4) = iVar42;
    } while (uVar38 != param_5);
  }
  return;
}

