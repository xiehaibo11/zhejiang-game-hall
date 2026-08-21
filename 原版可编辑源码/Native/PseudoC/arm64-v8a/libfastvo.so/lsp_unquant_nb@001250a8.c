
void lsp_unquant_nb(short *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  short *psVar14;
  ulong uVar15;
  short sVar16;
  short sVar17;
  short sVar18;
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
  short sVar31;
  
  if (0 < (int)param_2) {
    uVar12 = (ulong)param_2;
    if (param_2 < 0x10) {
      uVar13 = 0;
    }
    else {
      sVar17 = 7;
      sVar16 = 6;
      sVar19 = 5;
      sVar18 = 4;
      sVar21 = 3;
      sVar20 = 2;
      sVar23 = 1;
      sVar22 = 0;
      uVar13 = uVar12 & 0xfffffff0;
      psVar14 = param_1 + 8;
      uVar15 = uVar13;
      do {
        sVar24 = sVar22 * 0x800;
        sVar25 = sVar23 * 0x800;
        sVar26 = sVar20 * 0x800;
        sVar27 = sVar21 * 0x800;
        sVar28 = sVar18 * 0x800;
        sVar29 = sVar19 * 0x800;
        sVar30 = sVar16 * 0x800;
        sVar31 = sVar17 * 0x800;
        sVar18 = sVar18 + 0x10;
        sVar19 = sVar19 + 0x10;
        sVar22 = sVar22 + 0x10;
        sVar23 = sVar23 + 0x10;
        uVar15 = uVar15 - 0x10;
        sVar20 = sVar20 + 0x10;
        sVar21 = sVar21 + 0x10;
        sVar16 = sVar16 + 0x10;
        sVar17 = sVar17 + 0x10;
        *(ulong *)(psVar14 + -4) =
             CONCAT26(sVar31 + 0x800,
                      CONCAT24(sVar30 + 0x800,CONCAT22(sVar29 + 0x800,sVar28 + 0x800)));
        *(ulong *)(psVar14 + -8) =
             CONCAT26(sVar27 + 0x800,
                      CONCAT24(sVar26 + 0x800,CONCAT22(sVar25 + 0x800,sVar24 + 0x800)));
        *(ulong *)(psVar14 + 4) =
             CONCAT26(sVar31 + 0x4800,
                      CONCAT24(sVar30 + 0x4800,CONCAT22(sVar29 + 0x4800,sVar28 + 0x4800)));
        *(ulong *)psVar14 =
             CONCAT26(sVar27 + 0x4800,
                      CONCAT24(sVar26 + 0x4800,CONCAT22(sVar25 + 0x4800,sVar24 + 0x4800)));
        psVar14 = psVar14 + 0x10;
      } while (uVar15 != 0);
      if (uVar13 == uVar12) goto LAB_00125178;
    }
    do {
      uVar15 = uVar13 + 1;
      param_1[uVar13] = (short)((int)uVar15 << 0xb);
      uVar13 = uVar15;
    } while (uVar12 != uVar15);
  }
LAB_00125178:
  iVar11 = speex_bits_unpack_unsigned(param_3,6);
  lVar10 = (long)iVar11 * 10;
  cVar1 = (&DAT_00135a6a)[lVar10];
  cVar9 = (&cdbk_nb)[(long)iVar11 * 10 | 1];
  cVar2 = (&DAT_00135a6b)[lVar10];
  cVar3 = (&DAT_00135a6d)[lVar10];
  cVar4 = (&DAT_00135a6c)[lVar10];
  cVar5 = (&DAT_00135a6e)[lVar10];
  cVar6 = (&DAT_00135a6f)[lVar10];
  cVar7 = (&DAT_00135a70)[lVar10];
  cVar8 = (&DAT_00135a71)[lVar10];
  *param_1 = *param_1 + (char)(&cdbk_nb)[lVar10] * 0x20;
  param_1[2] = param_1[2] + cVar1 * 0x20;
  param_1[3] = param_1[3] + cVar2 * 0x20;
  param_1[4] = param_1[4] + cVar4 * 0x20;
  param_1[5] = param_1[5] + cVar3 * 0x20;
  param_1[6] = param_1[6] + cVar5 * 0x20;
  param_1[7] = param_1[7] + cVar6 * 0x20;
  param_1[8] = param_1[8] + cVar7 * 0x20;
  param_1[1] = param_1[1] + cVar9 * 0x20;
  param_1[9] = param_1[9] + cVar8 * 0x20;
  iVar11 = speex_bits_unpack_unsigned(param_3,6);
  lVar10 = (long)iVar11 + (long)iVar11 * 4;
  cVar1 = (&DAT_00135ce9)[lVar10];
  cVar2 = (&DAT_00135cea)[lVar10];
  cVar3 = (&DAT_00135ceb)[lVar10];
  cVar4 = (&DAT_00135cec)[lVar10];
  *param_1 = *param_1 + (char)(&cdbk_nb_low1)[lVar10] * 0x10;
  param_1[1] = param_1[1] + cVar1 * 0x10;
  param_1[2] = param_1[2] + cVar2 * 0x10;
  param_1[3] = param_1[3] + cVar3 * 0x10;
  param_1[4] = param_1[4] + cVar4 * 0x10;
  iVar11 = speex_bits_unpack_unsigned(param_3,6);
  lVar10 = (long)iVar11 + (long)iVar11 * 4;
  cVar1 = (&DAT_00135e29)[lVar10];
  cVar2 = (&DAT_00135e2a)[lVar10];
  cVar3 = (&DAT_00135e2b)[lVar10];
  cVar4 = (&DAT_00135e2c)[lVar10];
  *param_1 = *param_1 + (char)(&cdbk_nb_low2)[lVar10] * 8;
  param_1[1] = param_1[1] + cVar1 * 8;
  param_1[2] = param_1[2] + cVar2 * 8;
  param_1[3] = param_1[3] + cVar3 * 8;
  param_1[4] = param_1[4] + cVar4 * 8;
  iVar11 = speex_bits_unpack_unsigned(param_3,6);
  lVar10 = (long)iVar11 + (long)iVar11 * 4;
  cVar1 = (&DAT_00135f69)[lVar10];
  cVar2 = (&DAT_00135f6a)[lVar10];
  cVar3 = (&DAT_00135f6b)[lVar10];
  cVar4 = (&DAT_00135f6c)[lVar10];
  param_1[5] = param_1[5] + (char)(&cdbk_nb_high1)[lVar10] * 0x10;
  param_1[6] = param_1[6] + cVar1 * 0x10;
  param_1[7] = param_1[7] + cVar2 * 0x10;
  param_1[8] = param_1[8] + cVar3 * 0x10;
  param_1[9] = param_1[9] + cVar4 * 0x10;
  iVar11 = speex_bits_unpack_unsigned(param_3,6);
  lVar10 = (long)iVar11 + (long)iVar11 * 4;
  cVar1 = (&DAT_001360a9)[lVar10];
  cVar2 = (&DAT_001360aa)[lVar10];
  cVar3 = (&DAT_001360ab)[lVar10];
  cVar4 = (&DAT_001360ac)[lVar10];
  param_1[5] = param_1[5] + (char)(&cdbk_nb_high2)[lVar10] * 8;
  param_1[6] = param_1[6] + cVar1 * 8;
  param_1[7] = param_1[7] + cVar2 * 8;
  param_1[8] = param_1[8] + cVar3 * 8;
  param_1[9] = param_1[9] + cVar4 * 8;
  return;
}

