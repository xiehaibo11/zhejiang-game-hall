
int inner_prod(short *param_1,short *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  short *psVar3;
  short *psVar18;
  int iVar33;
  short *psVar34;
  short *psVar35;
  long lVar36;
  short *psVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  short sVar46;
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
  
  iVar33 = (int)param_3 >> 2;
  if (iVar33 == 0) {
    return 0;
  }
  uVar1 = (ulong)(iVar33 - 1) + 1;
  if (uVar1 < 8) {
    iVar38 = 0;
  }
  else {
    uVar2 = param_3 >> 2 & 7;
    lVar36 = uVar1 - uVar2;
    psVar34 = param_2 + 0x10;
    psVar35 = param_1 + 0x10;
    iVar38 = 0;
    iVar39 = 0;
    iVar40 = 0;
    iVar41 = 0;
    iVar33 = iVar33 - (int)lVar36;
    param_1 = param_1 + lVar36 * 4;
    param_2 = param_2 + lVar36 * 4;
    iVar42 = 0;
    iVar43 = 0;
    iVar44 = 0;
    iVar45 = 0;
    do {
      psVar37 = psVar34 + -0x10;
      sVar46 = *psVar34;
      psVar3 = psVar34 + 1;
      psVar4 = psVar34 + 2;
      psVar5 = psVar34 + 3;
      psVar6 = psVar34 + 4;
      psVar7 = psVar34 + 5;
      psVar8 = psVar34 + 6;
      psVar9 = psVar34 + 7;
      psVar10 = psVar34 + 8;
      psVar11 = psVar34 + 9;
      psVar12 = psVar34 + 10;
      psVar13 = psVar34 + 0xb;
      psVar14 = psVar34 + 0xc;
      psVar15 = psVar34 + 0xd;
      psVar16 = psVar34 + 0xe;
      psVar17 = psVar34 + 0xf;
      psVar18 = psVar34 + -0xf;
      psVar19 = psVar34 + -0xe;
      psVar20 = psVar34 + -0xd;
      psVar21 = psVar34 + -0xc;
      psVar22 = psVar34 + -0xb;
      psVar23 = psVar34 + -10;
      psVar24 = psVar34 + -9;
      psVar25 = psVar34 + -8;
      psVar26 = psVar34 + -7;
      psVar27 = psVar34 + -6;
      psVar28 = psVar34 + -5;
      psVar29 = psVar34 + -4;
      psVar30 = psVar34 + -3;
      psVar31 = psVar34 + -2;
      psVar32 = psVar34 + -1;
      psVar34 = psVar34 + 0x20;
      lVar36 = lVar36 + -8;
      iVar42 = iVar42 + ((int)*psVar3 * (int)psVar35[1] + (int)sVar46 * (int)*psVar35 +
                         (int)*psVar4 * (int)psVar35[2] + (int)*psVar5 * (int)psVar35[3] >> 6);
      iVar43 = iVar43 + ((int)*psVar7 * (int)psVar35[5] + (int)*psVar6 * (int)psVar35[4] +
                         (int)*psVar8 * (int)psVar35[6] + (int)*psVar9 * (int)psVar35[7] >> 6);
      iVar44 = iVar44 + ((int)*psVar11 * (int)psVar35[9] + (int)*psVar10 * (int)psVar35[8] +
                         (int)*psVar12 * (int)psVar35[10] + (int)*psVar13 * (int)psVar35[0xb] >> 6);
      iVar45 = iVar45 + ((int)*psVar15 * (int)psVar35[0xd] + (int)*psVar14 * (int)psVar35[0xc] +
                         (int)*psVar16 * (int)psVar35[0xe] + (int)*psVar17 * (int)psVar35[0xf] >> 6)
      ;
      iVar38 = iVar38 + ((int)*psVar18 * (int)psVar35[-0xf] + (int)*psVar37 * (int)psVar35[-0x10] +
                         (int)*psVar19 * (int)psVar35[-0xe] + (int)*psVar20 * (int)psVar35[-0xd] >>
                        6);
      iVar39 = iVar39 + ((int)*psVar22 * (int)psVar35[-0xb] + (int)*psVar21 * (int)psVar35[-0xc] +
                         (int)*psVar23 * (int)psVar35[-10] + (int)*psVar24 * (int)psVar35[-9] >> 6);
      iVar40 = iVar40 + ((int)*psVar26 * (int)psVar35[-7] + (int)*psVar25 * (int)psVar35[-8] +
                         (int)*psVar27 * (int)psVar35[-6] + (int)*psVar28 * (int)psVar35[-5] >> 6);
      iVar41 = iVar41 + ((int)*psVar30 * (int)psVar35[-3] + (int)*psVar29 * (int)psVar35[-4] +
                         (int)*psVar31 * (int)psVar35[-2] + (int)*psVar32 * (int)psVar35[-1] >> 6);
      psVar35 = psVar35 + 0x20;
    } while (lVar36 != 0);
    iVar38 = iVar42 + iVar38 + iVar43 + iVar39 + iVar44 + iVar40 + iVar45 + iVar41;
    if (uVar2 == 0) {
      return iVar38;
    }
  }
  do {
    sVar46 = *param_1;
    psVar34 = param_1 + 1;
    psVar35 = param_1 + 2;
    psVar15 = param_1 + 3;
    iVar33 = iVar33 + -1;
    param_1 = param_1 + 4;
    iVar38 = iVar38 + ((int)*param_2 * (int)sVar46 + (int)param_2[1] * (int)*psVar34 +
                       (int)param_2[2] * (int)*psVar35 + (int)param_2[3] * (int)*psVar15 >> 6);
    param_2 = param_2 + 4;
  } while (iVar33 != 0);
  return iVar38;
}

