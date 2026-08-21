
void lsp_unquant_high(undefined1 *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  short *psVar14;
  undefined8 *puVar15;
  ulong uVar16;
  int iVar18;
  undefined8 uVar17;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar23;
  undefined8 uVar22;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iVar30;
  int iVar31;
  
  if ((int)param_2 < 1) {
    speex_bits_unpack_unsigned(param_3,6);
    goto LAB_00126a5c;
  }
  uVar16 = (ulong)param_2;
  if (param_2 < 0x10) {
    uVar8 = 0;
LAB_00126920:
    lVar9 = uVar16 - uVar8;
    iVar7 = (int)uVar8 * 0xa000000;
    psVar14 = (short *)(param_1 + uVar8 * 2);
    do {
      lVar9 = lVar9 + -1;
      *psVar14 = (short)((uint)iVar7 >> 0x10) + 0x1800;
      iVar7 = iVar7 + 0xa000000;
      psVar14 = psVar14 + 1;
    } while (lVar9 != 0);
  }
  else {
    iVar19 = 6;
    iVar20 = 7;
    iVar7 = 4;
    iVar18 = 5;
    iVar24 = 2;
    iVar25 = 3;
    iVar21 = 0;
    iVar23 = 1;
    uVar8 = uVar16 & 0xfffffff0;
    puVar11 = (undefined8 *)(param_1 + 0x10);
    uVar12 = uVar8;
    do {
      iVar5 = iVar21 * 0xa000000;
      iVar6 = iVar23 * 0xa000000;
      iVar30 = iVar24 * 0xa000000;
      iVar31 = iVar25 * 0xa000000;
      iVar1 = iVar7 * 0xa000000;
      iVar2 = iVar18 * 0xa000000;
      iVar3 = iVar19 * 0xa000000;
      iVar4 = iVar20 * 0xa000000;
      iVar21 = iVar21 + 0x10;
      iVar23 = iVar23 + 0x10;
      iVar24 = iVar24 + 0x10;
      iVar25 = iVar25 + 0x10;
      iVar7 = iVar7 + 0x10;
      iVar18 = iVar18 + 0x10;
      iVar19 = iVar19 + 0x10;
      iVar20 = iVar20 + 0x10;
      uVar12 = uVar12 - 0x10;
      puVar11[-1] = CONCAT26((short)((uint)iVar4 >> 0x10) + 0x1800,
                             CONCAT24((short)((uint)iVar3 >> 0x10) + 0x1800,
                                      CONCAT22((short)((uint)iVar2 >> 0x10) + 0x1800,
                                               (short)((uint)iVar1 >> 0x10) + 0x1800)));
      puVar11[-2] = CONCAT26((short)((uint)iVar31 >> 0x10) + 0x1800,
                             CONCAT24((short)((uint)iVar30 >> 0x10) + 0x1800,
                                      CONCAT22((short)((uint)iVar6 >> 0x10) + 0x1800,
                                               (short)((uint)iVar5 >> 0x10) + 0x1800)));
      puVar11[1] = CONCAT26((short)((uint)(iVar4 + 0x50000000) >> 0x10) + 0x1800,
                            CONCAT24((short)((uint)(iVar3 + 0x50000000) >> 0x10) + 0x1800,
                                     CONCAT22((short)((uint)(iVar2 + 0x50000000) >> 0x10) + 0x1800,
                                              (short)((uint)(iVar1 + 0x50000000) >> 0x10) + 0x1800))
                           );
      *puVar11 = CONCAT26((short)((uint)(iVar31 + 0x50000000) >> 0x10) + 0x1800,
                          CONCAT24((short)((uint)(iVar30 + 0x50000000) >> 0x10) + 0x1800,
                                   CONCAT22((short)((uint)(iVar6 + 0x50000000) >> 0x10) + 0x1800,
                                            (short)((uint)(iVar5 + 0x50000000) >> 0x10) + 0x1800)));
      puVar11 = puVar11 + 4;
    } while (uVar12 != 0);
    if (uVar8 != uVar16) goto LAB_00126920;
  }
  iVar7 = speex_bits_unpack_unsigned(param_3,6);
  if ((int)param_2 < 1) {
LAB_00126a5c:
    speex_bits_unpack_unsigned(param_3,6);
    return;
  }
  lVar9 = (long)iVar7 * (long)(int)param_2;
  if ((param_2 < 0x10) ||
     ((param_1 < &high_lsp_cdbk + lVar9 + uVar16 && (&high_lsp_cdbk + lVar9 < param_1 + uVar16 * 2))
     )) {
    uVar12 = 0;
  }
  else {
    uVar12 = uVar16 & 0xfffffff0;
    puVar11 = (undefined8 *)(&DAT_0013534e + lVar9);
    puVar15 = (undefined8 *)(param_1 + 0x10);
    uVar8 = uVar12;
    do {
      uVar17 = puVar11[-1];
      uVar22 = *puVar11;
      uVar27 = puVar15[-1];
      uVar26 = puVar15[-2];
      uVar29 = puVar15[1];
      uVar28 = *puVar15;
      puVar11 = puVar11 + 2;
      uVar8 = uVar8 - 0x10;
      puVar15[-1] = CONCAT26((char)((ulong)uVar17 >> 0x38) * 0x20 + (short)((ulong)uVar27 >> 0x30),
                             CONCAT24((char)((ulong)uVar17 >> 0x30) * 0x20 +
                                      (short)((ulong)uVar27 >> 0x20),
                                      CONCAT22((char)((ulong)uVar17 >> 0x28) * 0x20 +
                                               (short)((ulong)uVar27 >> 0x10),
                                               (char)((ulong)uVar17 >> 0x20) * 0x20 + (short)uVar27)
                                     ));
      puVar15[-2] = CONCAT26((char)((ulong)uVar17 >> 0x18) * 0x20 + (short)((ulong)uVar26 >> 0x30),
                             CONCAT24((char)((ulong)uVar17 >> 0x10) * 0x20 +
                                      (short)((ulong)uVar26 >> 0x20),
                                      CONCAT22((char)((ulong)uVar17 >> 8) * 0x20 +
                                               (short)((ulong)uVar26 >> 0x10),
                                               (char)uVar17 * 0x20 + (short)uVar26)));
      puVar15[1] = CONCAT26((char)((ulong)uVar22 >> 0x38) * 0x20 + (short)((ulong)uVar29 >> 0x30),
                            CONCAT24((char)((ulong)uVar22 >> 0x30) * 0x20 +
                                     (short)((ulong)uVar29 >> 0x20),
                                     CONCAT22((char)((ulong)uVar22 >> 0x28) * 0x20 +
                                              (short)((ulong)uVar29 >> 0x10),
                                              (char)((ulong)uVar22 >> 0x20) * 0x20 + (short)uVar29))
                           );
      *puVar15 = CONCAT26((char)((ulong)uVar22 >> 0x18) * 0x20 + (short)((ulong)uVar28 >> 0x30),
                          CONCAT24((char)((ulong)uVar22 >> 0x10) * 0x20 +
                                   (short)((ulong)uVar28 >> 0x20),
                                   CONCAT22((char)((ulong)uVar22 >> 8) * 0x20 +
                                            (short)((ulong)uVar28 >> 0x10),
                                            (char)uVar22 * 0x20 + (short)uVar28)));
      puVar15 = puVar15 + 4;
    } while (uVar8 != 0);
    if (uVar12 == uVar16) goto LAB_001269c8;
  }
  lVar13 = uVar16 - uVar12;
  pcVar10 = &high_lsp_cdbk + uVar12 + lVar9;
  psVar14 = (short *)(param_1 + uVar12 * 2);
  do {
    lVar13 = lVar13 + -1;
    *psVar14 = *psVar14 + *pcVar10 * 0x20;
    pcVar10 = pcVar10 + 1;
    psVar14 = psVar14 + 1;
  } while (lVar13 != 0);
LAB_001269c8:
  iVar7 = speex_bits_unpack_unsigned(param_3,6);
  if (0 < (int)param_2) {
    lVar9 = (long)iVar7 * (long)(int)param_2;
    if ((param_2 < 0x10) ||
       ((param_1 < &high_lsp_cdbk2 + lVar9 + uVar16 &&
        (&high_lsp_cdbk2 + lVar9 < param_1 + uVar16 * 2)))) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar16 & 0xfffffff0;
      puVar11 = (undefined8 *)(&DAT_0013554e + lVar9);
      puVar15 = (undefined8 *)(param_1 + 0x10);
      uVar8 = uVar12;
      do {
        uVar17 = puVar11[-1];
        uVar22 = *puVar11;
        uVar27 = puVar15[-1];
        uVar26 = puVar15[-2];
        uVar29 = puVar15[1];
        uVar28 = *puVar15;
        puVar11 = puVar11 + 2;
        uVar8 = uVar8 - 0x10;
        puVar15[-1] = CONCAT26((char)((ulong)uVar17 >> 0x38) * 0x10 + (short)((ulong)uVar27 >> 0x30)
                               ,CONCAT24((char)((ulong)uVar17 >> 0x30) * 0x10 +
                                         (short)((ulong)uVar27 >> 0x20),
                                         CONCAT22((char)((ulong)uVar17 >> 0x28) * 0x10 +
                                                  (short)((ulong)uVar27 >> 0x10),
                                                  (char)((ulong)uVar17 >> 0x20) * 0x10 +
                                                  (short)uVar27)));
        puVar15[-2] = CONCAT26((char)((ulong)uVar17 >> 0x18) * 0x10 + (short)((ulong)uVar26 >> 0x30)
                               ,CONCAT24((char)((ulong)uVar17 >> 0x10) * 0x10 +
                                         (short)((ulong)uVar26 >> 0x20),
                                         CONCAT22((char)((ulong)uVar17 >> 8) * 0x10 +
                                                  (short)((ulong)uVar26 >> 0x10),
                                                  (char)uVar17 * 0x10 + (short)uVar26)));
        puVar15[1] = CONCAT26((char)((ulong)uVar22 >> 0x38) * 0x10 + (short)((ulong)uVar29 >> 0x30),
                              CONCAT24((char)((ulong)uVar22 >> 0x30) * 0x10 +
                                       (short)((ulong)uVar29 >> 0x20),
                                       CONCAT22((char)((ulong)uVar22 >> 0x28) * 0x10 +
                                                (short)((ulong)uVar29 >> 0x10),
                                                (char)((ulong)uVar22 >> 0x20) * 0x10 + (short)uVar29
                                               )));
        *puVar15 = CONCAT26((char)((ulong)uVar22 >> 0x18) * 0x10 + (short)((ulong)uVar28 >> 0x30),
                            CONCAT24((char)((ulong)uVar22 >> 0x10) * 0x10 +
                                     (short)((ulong)uVar28 >> 0x20),
                                     CONCAT22((char)((ulong)uVar22 >> 8) * 0x10 +
                                              (short)((ulong)uVar28 >> 0x10),
                                              (char)uVar22 * 0x10 + (short)uVar28)));
        puVar15 = puVar15 + 4;
      } while (uVar8 != 0);
      if (uVar12 == uVar16) {
        return;
      }
    }
    lVar13 = uVar16 - uVar12;
    pcVar10 = &high_lsp_cdbk2 + uVar12 + lVar9;
    psVar14 = (short *)(param_1 + uVar12 * 2);
    do {
      lVar13 = lVar13 + -1;
      *psVar14 = *psVar14 + *pcVar10 * 0x10;
      pcVar10 = pcVar10 + 1;
      psVar14 = psVar14 + 1;
    } while (lVar13 != 0);
  }
  return;
}

