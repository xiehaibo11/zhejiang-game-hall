
void lsp_quant_lbr(short *param_1,short *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  short param_6)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  short *psVar15;
  char *pcVar16;
  short *psVar17;
  int iVar18;
  uint uVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  short *psVar27;
  ulong uVar28;
  undefined8 *puVar29;
  int iVar30;
  undefined2 *puVar31;
  char *pcVar32;
  short sVar33;
  int iVar34;
  int iVar35;
  short sVar36;
  short sVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  short sVar41;
  short sVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  short sVar45;
  undefined8 uVar46;
  short sVar47;
  undefined8 uVar48;
  short sVar49;
  undefined8 uVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short local_5c [4];
  short local_54;
  short local_52;
  short local_50;
  short local_4e;
  short local_4c;
  short local_4a;
  long local_48;
  
  lVar14 = tpidr_el0;
  local_48 = *(long *)(lVar14 + 0x28);
  if (0 < (int)param_3) {
    uVar24 = (ulong)param_3;
    if ((param_3 < 0x10) || ((param_2 < param_1 + uVar24 && (param_1 < param_2 + uVar24)))) {
      uVar25 = 0;
LAB_00125474:
      lVar26 = uVar24 - uVar25;
      psVar17 = param_2 + uVar25;
      psVar27 = param_1 + uVar25;
      do {
        lVar26 = lVar26 + -1;
        *psVar17 = *psVar27;
        psVar17 = psVar17 + 1;
        psVar27 = psVar27 + 1;
      } while (lVar26 != 0);
    }
    else {
      uVar25 = uVar24 & 0xfffffff0;
      psVar17 = param_1 + 8;
      psVar27 = param_2 + 8;
      uVar22 = uVar25;
      do {
        psVar15 = psVar17 + -4;
        uVar38 = *(undefined8 *)(psVar17 + -8);
        uVar40 = *(undefined8 *)(psVar17 + 4);
        uVar39 = *(undefined8 *)psVar17;
        psVar17 = psVar17 + 0x10;
        uVar22 = uVar22 - 0x10;
        *(undefined8 *)(psVar27 + -4) = *(undefined8 *)psVar15;
        *(undefined8 *)(psVar27 + -8) = uVar38;
        *(undefined8 *)(psVar27 + 4) = uVar40;
        *(undefined8 *)psVar27 = uVar39;
        psVar27 = psVar27 + 0x10;
      } while (uVar22 != 0);
      if (uVar25 != uVar24) goto LAB_00125474;
    }
    uVar25 = (ulong)(param_3 - 1);
    if (0 < (int)param_3) {
      if (param_3 - 1 == 0) {
        uVar28 = 0;
LAB_00125580:
        psVar17 = param_2 + uVar28;
        do {
          sVar37 = *psVar17;
          sVar33 = sVar37;
          if (uVar28 != 0) {
            sVar33 = sVar37 - psVar17[-1];
          }
          uVar22 = uVar28 + 1;
          if (uVar25 == uVar28) {
            sVar36 = 0x6488;
          }
          else {
            sVar36 = psVar17[1];
          }
          sVar41 = sVar36 - sVar37;
          if (sVar33 <= (short)(sVar36 - sVar37)) {
            sVar41 = sVar33;
          }
          sVar37 = 0;
          if ((short)(sVar41 + 300) != 0) {
            sVar37 = (short)(0x14000 / (int)(short)(sVar41 + 300));
          }
          local_5c[uVar28] = sVar37;
          psVar17 = psVar17 + 1;
          uVar28 = uVar22;
        } while (uVar24 != uVar22);
      }
      else {
        lVar26 = 0;
        uVar22 = 0;
        uVar28 = uVar24 & 0xfffffffe;
        psVar17 = param_2 + 1;
        puVar31 = (undefined2 *)((ulong)local_5c | 2);
        uVar19 = param_3;
        do {
          sVar37 = (short)uVar19;
          if (lVar26 != 0) {
            sVar37 = psVar17[-2];
          }
          sVar33 = 0;
          if (lVar26 != 0) {
            sVar33 = sVar37;
          }
          sVar37 = *psVar17 - psVar17[-1];
          sVar36 = psVar17[-1] - sVar33;
          if (uVar22 != uVar25) {
            sVar33 = *psVar17;
          }
          if ((uVar22 | 1) != uVar25) {
            param_6 = psVar17[1];
          }
          sVar41 = 0x6488;
          if (uVar22 != uVar25) {
            sVar41 = sVar33;
          }
          sVar33 = 0x6488;
          if ((uVar22 | 1) != uVar25) {
            sVar33 = param_6;
          }
          sVar41 = sVar41 - psVar17[-1];
          uVar19 = (uint)sVar41;
          sVar33 = sVar33 - *psVar17;
          if ((int)sVar36 <= (int)uVar19) {
            sVar41 = sVar36;
          }
          if (sVar37 <= sVar33) {
            sVar33 = sVar37;
          }
          uVar22 = uVar22 + 2;
          uVar10 = 0;
          if ((short)(sVar41 + 300) != 0) {
            uVar10 = (undefined2)(0x14000 / (int)(short)(sVar41 + 300));
          }
          uVar11 = 0;
          if ((short)(sVar33 + 300) != 0) {
            uVar11 = (undefined2)(0x14000 / (int)(short)(sVar33 + 300));
          }
          lVar26 = lVar26 + -2;
          puVar31[-1] = uVar10;
          *puVar31 = uVar11;
          psVar17 = psVar17 + 2;
          puVar31 = puVar31 + 2;
        } while (uVar22 != uVar28);
        if (uVar28 != uVar24) goto LAB_00125580;
      }
      if (0 < (int)param_3) {
        if (param_3 < 0x10) {
          uVar22 = 0;
        }
        else {
          sVar33 = 7;
          sVar37 = 6;
          sVar41 = 5;
          sVar36 = 4;
          sVar45 = 3;
          sVar42 = 2;
          sVar49 = 1;
          sVar47 = 0;
          uVar22 = uVar24 & 0xfffffff0;
          psVar17 = param_2 + 8;
          uVar25 = uVar22;
          do {
            uVar39 = *(undefined8 *)(psVar17 + -4);
            uVar38 = *(undefined8 *)(psVar17 + -8);
            uVar43 = *(undefined8 *)(psVar17 + 4);
            uVar40 = *(undefined8 *)psVar17;
            sVar51 = sVar47 * 0x800;
            sVar52 = sVar49 * 0x800;
            sVar53 = sVar42 * 0x800;
            sVar54 = sVar45 * 0x800;
            sVar55 = sVar36 * 0x800;
            sVar56 = sVar41 * 0x800;
            sVar57 = sVar37 * 0x800;
            sVar58 = sVar33 * 0x800;
            sVar36 = sVar36 + 0x10;
            sVar41 = sVar41 + 0x10;
            sVar47 = sVar47 + 0x10;
            sVar49 = sVar49 + 0x10;
            uVar25 = uVar25 - 0x10;
            sVar42 = sVar42 + 0x10;
            sVar45 = sVar45 + 0x10;
            sVar37 = sVar37 + 0x10;
            sVar33 = sVar33 + 0x10;
            *(ulong *)(psVar17 + -4) =
                 CONCAT26((short)((ulong)uVar39 >> 0x30) - (sVar58 + 0x800),
                          CONCAT24((short)((ulong)uVar39 >> 0x20) - (sVar57 + 0x800),
                                   CONCAT22((short)((ulong)uVar39 >> 0x10) - (sVar56 + 0x800),
                                            (short)uVar39 - (sVar55 + 0x800))));
            *(ulong *)(psVar17 + -8) =
                 CONCAT26((short)((ulong)uVar38 >> 0x30) - (sVar54 + 0x800),
                          CONCAT24((short)((ulong)uVar38 >> 0x20) - (sVar53 + 0x800),
                                   CONCAT22((short)((ulong)uVar38 >> 0x10) - (sVar52 + 0x800),
                                            (short)uVar38 - (sVar51 + 0x800))));
            *(ulong *)(psVar17 + 4) =
                 CONCAT26((short)((ulong)uVar43 >> 0x30) - (sVar58 + 0x4800),
                          CONCAT24((short)((ulong)uVar43 >> 0x20) - (sVar57 + 0x4800),
                                   CONCAT22((short)((ulong)uVar43 >> 0x10) - (sVar56 + 0x4800),
                                            (short)uVar43 - (sVar55 + 0x4800))));
            *(ulong *)psVar17 =
                 CONCAT26((short)((ulong)uVar40 >> 0x30) - (sVar54 + 0x4800),
                          CONCAT24((short)((ulong)uVar40 >> 0x20) - (sVar53 + 0x4800),
                                   CONCAT22((short)((ulong)uVar40 >> 0x10) - (sVar52 + 0x4800),
                                            (short)uVar40 - (sVar51 + 0x4800))));
            psVar17 = psVar17 + 0x10;
          } while (uVar25 != 0);
          if (uVar22 == uVar24) goto LAB_001256e4;
        }
        do {
          uVar25 = uVar22 + 1;
          param_2[uVar22] = param_2[uVar22] + (short)uVar25 * -0x800;
          uVar22 = uVar25;
        } while (uVar24 != uVar25);
      }
    }
  }
LAB_001256e4:
  pcVar20 = &cdbk_nb;
  uVar25 = (ulong)param_3;
  iVar18 = 0;
  iVar23 = 0;
  uVar24 = uVar25 & 0xfffffffe;
  iVar30 = 0x7fffffff;
  do {
    if ((int)param_3 < 1) {
      iVar34 = 0;
    }
    else {
      if (param_3 == 1) {
        iVar34 = 0;
        uVar22 = 0;
        pcVar32 = pcVar20;
LAB_00125798:
        lVar26 = uVar25 - uVar22;
        psVar17 = param_2 + uVar22;
        do {
          lVar26 = lVar26 + -1;
          iVar35 = (int)(short)(*psVar17 + *pcVar32 * -0x20);
          iVar34 = iVar34 + iVar35 * iVar35;
          psVar17 = psVar17 + 1;
          pcVar32 = pcVar32 + 1;
        } while (lVar26 != 0);
      }
      else {
        iVar35 = 0;
        iVar34 = 0;
        pcVar32 = pcVar20 + (uVar25 - (param_3 & 1));
        pcVar16 = pcVar20 + 1;
        uVar22 = uVar24;
        psVar17 = param_2 + 1;
        do {
          pbVar1 = (byte *)(pcVar16 + -1);
          cVar2 = *pcVar16;
          pcVar16 = pcVar16 + 2;
          uVar22 = uVar22 - 2;
          iVar12 = (int)(short)(psVar17[-1] + (ushort)*pbVar1 * -0x20);
          iVar13 = (int)(short)(*psVar17 + cVar2 * -0x20);
          iVar35 = iVar35 + iVar12 * iVar12;
          iVar34 = iVar34 + iVar13 * iVar13;
          psVar17 = psVar17 + 2;
        } while (uVar22 != 0);
        iVar34 = iVar34 + iVar35;
        uVar22 = uVar24;
        if (uVar24 != uVar25) goto LAB_00125798;
      }
      pcVar20 = pcVar20 + (ulong)(param_3 - 1) + 1;
    }
    iVar35 = iVar23;
    if (iVar30 <= iVar34) {
      iVar34 = iVar30;
      iVar35 = iVar18;
    }
    iVar18 = iVar35;
    iVar23 = iVar23 + 1;
    iVar30 = iVar34;
  } while (iVar23 != 0x40);
  if ((int)param_3 < 1) {
    speex_bits_pack(param_4,iVar18,6);
  }
  else {
    lVar26 = (long)(int)(iVar18 * param_3);
    if ((param_3 < 0x10) ||
       ((param_2 < &cdbk_nb + lVar26 + uVar25 && (&cdbk_nb + lVar26 < param_2 + uVar25)))) {
      uVar24 = 0;
LAB_00125814:
      lVar21 = uVar25 - uVar24;
      pcVar20 = &cdbk_nb + lVar26 + uVar24;
      psVar17 = param_2 + uVar24;
      do {
        lVar21 = lVar21 + -1;
        *psVar17 = *psVar17 + *pcVar20 * -0x20;
        pcVar20 = pcVar20 + 1;
        psVar17 = psVar17 + 1;
      } while (lVar21 != 0);
    }
    else {
      uVar24 = uVar25 & 0xfffffff0;
      psVar17 = param_2 + 8;
      puVar29 = (undefined8 *)(&DAT_00135a70 + lVar26);
      uVar22 = uVar24;
      do {
        uVar40 = puVar29[-1];
        uVar43 = *puVar29;
        uVar39 = *(undefined8 *)(psVar17 + -4);
        uVar38 = *(undefined8 *)(psVar17 + -8);
        uVar46 = *(undefined8 *)(psVar17 + 4);
        uVar44 = *(undefined8 *)psVar17;
        uVar22 = uVar22 - 0x10;
        puVar29 = puVar29 + 2;
        *(ulong *)(psVar17 + -4) =
             CONCAT26((short)((ulong)uVar39 >> 0x30) + (char)((ulong)uVar40 >> 0x38) * -0x20,
                      CONCAT24((short)((ulong)uVar39 >> 0x20) +
                               (char)((ulong)uVar40 >> 0x30) * -0x20,
                               CONCAT22((short)((ulong)uVar39 >> 0x10) +
                                        (char)((ulong)uVar40 >> 0x28) * -0x20,
                                        (short)uVar39 + (char)((ulong)uVar40 >> 0x20) * -0x20)));
        *(ulong *)(psVar17 + -8) =
             CONCAT26((short)((ulong)uVar38 >> 0x30) + (char)((ulong)uVar40 >> 0x18) * -0x20,
                      CONCAT24((short)((ulong)uVar38 >> 0x20) +
                               (char)((ulong)uVar40 >> 0x10) * -0x20,
                               CONCAT22((short)((ulong)uVar38 >> 0x10) +
                                        (char)((ulong)uVar40 >> 8) * -0x20,
                                        (short)uVar38 + (char)uVar40 * -0x20)));
        *(ulong *)(psVar17 + 4) =
             CONCAT26((short)((ulong)uVar46 >> 0x30) + (char)((ulong)uVar43 >> 0x38) * -0x20,
                      CONCAT24((short)((ulong)uVar46 >> 0x20) +
                               (char)((ulong)uVar43 >> 0x30) * -0x20,
                               CONCAT22((short)((ulong)uVar46 >> 0x10) +
                                        (char)((ulong)uVar43 >> 0x28) * -0x20,
                                        (short)uVar46 + (char)((ulong)uVar43 >> 0x20) * -0x20)));
        *(ulong *)psVar17 =
             CONCAT26((short)((ulong)uVar44 >> 0x30) + (char)((ulong)uVar43 >> 0x18) * -0x20,
                      CONCAT24((short)((ulong)uVar44 >> 0x20) +
                               (char)((ulong)uVar43 >> 0x10) * -0x20,
                               CONCAT22((short)((ulong)uVar44 >> 0x10) +
                                        (char)((ulong)uVar43 >> 8) * -0x20,
                                        (short)uVar44 + (char)uVar43 * -0x20)));
        psVar17 = psVar17 + 0x10;
      } while (uVar22 != 0);
      if (uVar24 != uVar25) goto LAB_00125814;
    }
    speex_bits_pack(param_4,iVar18,6);
    if (0 < (int)param_3) {
      if (param_3 < 0x10) {
        uVar22 = 0;
      }
      else {
        uVar22 = uVar25 & 0xfffffff0;
        psVar17 = param_2 + 8;
        uVar24 = uVar22;
        do {
          uVar39 = *(undefined8 *)(psVar17 + -4);
          uVar38 = *(undefined8 *)(psVar17 + -8);
          uVar43 = *(undefined8 *)(psVar17 + 4);
          uVar40 = *(undefined8 *)psVar17;
          uVar24 = uVar24 - 0x10;
          *(ulong *)(psVar17 + -4) =
               CONCAT26((short)((ulong)uVar39 >> 0x30) << 1,
                        CONCAT24((short)((ulong)uVar39 >> 0x20) << 1,
                                 CONCAT22((short)((ulong)uVar39 >> 0x10) << 1,(short)uVar39 << 1)));
          *(ulong *)(psVar17 + -8) =
               CONCAT26((short)((ulong)uVar38 >> 0x30) << 1,
                        CONCAT24((short)((ulong)uVar38 >> 0x20) << 1,
                                 CONCAT22((short)((ulong)uVar38 >> 0x10) << 1,(short)uVar38 << 1)));
          *(ulong *)(psVar17 + 4) =
               CONCAT26((short)((ulong)uVar43 >> 0x30) << 1,
                        CONCAT24((short)((ulong)uVar43 >> 0x20) << 1,
                                 CONCAT22((short)((ulong)uVar43 >> 0x10) << 1,(short)uVar43 << 1)));
          *(ulong *)psVar17 =
               CONCAT26((short)((ulong)uVar40 >> 0x30) << 1,
                        CONCAT24((short)((ulong)uVar40 >> 0x20) << 1,
                                 CONCAT22((short)((ulong)uVar40 >> 0x10) << 1,(short)uVar40 << 1)));
          psVar17 = psVar17 + 0x10;
        } while (uVar24 != 0);
        if (uVar22 == uVar25) goto LAB_001258bc;
      }
      lVar26 = uVar25 - uVar22;
      psVar17 = param_2 + uVar22;
      do {
        lVar26 = lVar26 + -1;
        *psVar17 = *psVar17 << 1;
        psVar17 = psVar17 + 1;
      } while (lVar26 != 0);
    }
  }
LAB_001258bc:
  pcVar20 = &cdbk_nb_low1;
  iVar18 = 0;
  iVar23 = 0;
  iVar30 = 0x7fffffff;
  do {
    iVar34 = (int)(short)(*param_2 + *pcVar20 * -0x20);
    uVar19 = iVar34 * iVar34;
    iVar34 = (int)(short)(param_2[1] + pcVar20[1] * -0x20);
    uVar6 = iVar34 * iVar34;
    iVar34 = (int)(short)(param_2[2] + pcVar20[2] * -0x20);
    uVar7 = iVar34 * iVar34;
    iVar34 = (int)(short)(param_2[3] + pcVar20[3] * -0x20);
    uVar8 = iVar34 * iVar34;
    iVar34 = (int)(short)(param_2[4] + pcVar20[4] * -0x20);
    uVar9 = iVar34 * iVar34;
    iVar34 = ((int)(uVar19 * 2) >> 0x10) * (int)local_5c[0] +
             ((int)((uVar19 & 0x7fff) * (int)local_5c[0]) >> 0xf) +
             ((int)((uVar6 & 0x7fff) * (int)local_5c[1]) >> 0xf) +
             ((int)(uVar6 * 2) >> 0x10) * (int)local_5c[1] +
             ((int)((uVar7 & 0x7fff) * (int)local_5c[2]) >> 0xf) +
             ((int)(uVar7 * 2) >> 0x10) * (int)local_5c[2] +
             ((int)((uVar8 & 0x7fff) * (int)local_5c[3]) >> 0xf) +
             ((int)(uVar8 * 2) >> 0x10) * (int)local_5c[3] +
             ((int)((uVar9 & 0x7fff) * (int)local_54) >> 0xf) +
             ((int)(uVar9 * 2) >> 0x10) * (int)local_54;
    iVar35 = iVar23;
    if (iVar30 <= iVar34) {
      iVar34 = iVar30;
      iVar35 = iVar18;
    }
    iVar18 = iVar35;
    iVar23 = iVar23 + 1;
    pcVar20 = pcVar20 + 5;
    iVar30 = iVar34;
  } while (iVar23 != 0x40);
  lVar26 = (long)iVar18 + (long)iVar18 * 4;
  cVar2 = (&DAT_00135ce9)[lVar26];
  cVar3 = (&DAT_00135cea)[lVar26];
  cVar4 = (&DAT_00135ceb)[lVar26];
  cVar5 = (&DAT_00135cec)[lVar26];
  *param_2 = *param_2 + (char)(&cdbk_nb_low1)[lVar26] * -0x20;
  param_2[1] = param_2[1] + cVar2 * -0x20;
  param_2[2] = param_2[2] + cVar3 * -0x20;
  param_2[3] = param_2[3] + cVar4 * -0x20;
  param_2[4] = param_2[4] + cVar5 * -0x20;
  speex_bits_pack(param_4,iVar18,6);
  pcVar20 = &cdbk_nb_high1;
  iVar18 = 0;
  iVar23 = 0;
  iVar30 = 0x7fffffff;
  do {
    iVar34 = (int)(short)(param_2[5] + *pcVar20 * -0x20);
    uVar19 = iVar34 * iVar34;
    iVar34 = (int)(short)(param_2[6] + pcVar20[1] * -0x20);
    uVar6 = iVar34 * iVar34;
    iVar34 = (int)(short)(param_2[7] + pcVar20[2] * -0x20);
    uVar7 = iVar34 * iVar34;
    iVar34 = (int)(short)(param_2[8] + pcVar20[3] * -0x20);
    uVar8 = iVar34 * iVar34;
    iVar34 = (int)(short)(param_2[9] + pcVar20[4] * -0x20);
    uVar9 = iVar34 * iVar34;
    iVar34 = ((int)(uVar19 * 2) >> 0x10) * (int)local_52 +
             ((int)((uVar19 & 0x7fff) * (int)local_52) >> 0xf) +
             ((int)((uVar6 & 0x7fff) * (int)local_50) >> 0xf) +
             ((int)(uVar6 * 2) >> 0x10) * (int)local_50 +
             ((int)((uVar7 & 0x7fff) * (int)local_4e) >> 0xf) +
             ((int)(uVar7 * 2) >> 0x10) * (int)local_4e +
             ((int)((uVar8 & 0x7fff) * (int)local_4c) >> 0xf) +
             ((int)(uVar8 * 2) >> 0x10) * (int)local_4c +
             ((int)((uVar9 & 0x7fff) * (int)local_4a) >> 0xf) +
             ((int)(uVar9 * 2) >> 0x10) * (int)local_4a;
    iVar35 = iVar23;
    if (iVar30 <= iVar34) {
      iVar34 = iVar30;
      iVar35 = iVar18;
    }
    iVar18 = iVar35;
    iVar23 = iVar23 + 1;
    pcVar20 = pcVar20 + 5;
    iVar30 = iVar34;
  } while (iVar23 != 0x40);
  lVar26 = (long)iVar18 + (long)iVar18 * 4;
  cVar2 = (&DAT_00135f69)[lVar26];
  cVar3 = (&DAT_00135f6a)[lVar26];
  cVar4 = (&DAT_00135f6b)[lVar26];
  cVar5 = (&DAT_00135f6c)[lVar26];
  param_2[5] = param_2[5] + (char)(&cdbk_nb_high1)[lVar26] * -0x20;
  param_2[6] = param_2[6] + cVar2 * -0x20;
  param_2[7] = param_2[7] + cVar3 * -0x20;
  param_2[8] = param_2[8] + cVar4 * -0x20;
  param_2[9] = param_2[9] + cVar5 * -0x20;
  speex_bits_pack(param_4,iVar18,6);
  if ((int)param_3 < 1) goto LAB_00125c78;
  if (param_3 < 0x10) {
    uVar22 = 0;
LAB_00125c00:
    lVar26 = uVar25 - uVar22;
    psVar17 = param_2 + uVar22;
    do {
      lVar26 = lVar26 + -1;
      *psVar17 = (short)((int)*psVar17 + 1U >> 1);
      psVar17 = psVar17 + 1;
    } while (lVar26 != 0);
  }
  else {
    uVar22 = uVar25 & 0xfffffff0;
    psVar17 = param_2 + 8;
    uVar24 = uVar22;
    do {
      uVar39 = *(undefined8 *)(psVar17 + -4);
      uVar38 = *(undefined8 *)(psVar17 + -8);
      uVar43 = *(undefined8 *)(psVar17 + 4);
      uVar40 = *(undefined8 *)psVar17;
      uVar24 = uVar24 - 0x10;
      *(ulong *)(psVar17 + -4) =
           CONCAT26((short)((int)(short)((ulong)uVar39 >> 0x30) + 1U >> 1),
                    CONCAT24((short)((int)(short)((ulong)uVar39 >> 0x20) + 1U >> 1),
                             CONCAT22((short)((int)(short)((ulong)uVar39 >> 0x10) + 1U >> 1),
                                      (short)((int)(short)uVar39 + 1U >> 1))));
      *(ulong *)(psVar17 + -8) =
           CONCAT26((short)((int)(short)((ulong)uVar38 >> 0x30) + 1U >> 1),
                    CONCAT24((short)((int)(short)((ulong)uVar38 >> 0x20) + 1U >> 1),
                             CONCAT22((short)((int)(short)((ulong)uVar38 >> 0x10) + 1U >> 1),
                                      (short)((int)(short)uVar38 + 1U >> 1))));
      *(ulong *)(psVar17 + 4) =
           CONCAT26((short)((int)(short)((ulong)uVar43 >> 0x30) + 1U >> 1),
                    CONCAT24((short)((int)(short)((ulong)uVar43 >> 0x20) + 1U >> 1),
                             CONCAT22((short)((int)(short)((ulong)uVar43 >> 0x10) + 1U >> 1),
                                      (short)((int)(short)uVar43 + 1U >> 1))));
      *(ulong *)psVar17 =
           CONCAT26((short)((int)(short)((ulong)uVar40 >> 0x30) + 1U >> 1),
                    CONCAT24((short)((int)(short)((ulong)uVar40 >> 0x20) + 1U >> 1),
                             CONCAT22((short)((int)(short)((ulong)uVar40 >> 0x10) + 1U >> 1),
                                      (short)((int)(short)uVar40 + 1U >> 1))));
      psVar17 = psVar17 + 0x10;
    } while (uVar24 != 0);
    if (uVar22 != uVar25) goto LAB_00125c00;
  }
  if (0 < (int)param_3) {
    if ((param_3 < 0x10) || ((param_2 < param_1 + uVar25 && (param_1 < param_2 + uVar25)))) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar25 & 0xfffffff0;
      psVar17 = param_1 + 8;
      psVar27 = param_2 + 8;
      uVar22 = uVar24;
      do {
        uVar39 = *(undefined8 *)(psVar17 + -4);
        uVar38 = *(undefined8 *)(psVar17 + -8);
        uVar43 = *(undefined8 *)(psVar17 + 4);
        uVar40 = *(undefined8 *)psVar17;
        uVar46 = *(undefined8 *)(psVar27 + -4);
        uVar44 = *(undefined8 *)(psVar27 + -8);
        uVar50 = *(undefined8 *)(psVar27 + 4);
        uVar48 = *(undefined8 *)psVar27;
        psVar17 = psVar17 + 0x10;
        uVar22 = uVar22 - 0x10;
        *(ulong *)(psVar27 + -4) =
             CONCAT26((short)((ulong)uVar39 >> 0x30) - (short)((ulong)uVar46 >> 0x30),
                      CONCAT24((short)((ulong)uVar39 >> 0x20) - (short)((ulong)uVar46 >> 0x20),
                               CONCAT22((short)((ulong)uVar39 >> 0x10) -
                                        (short)((ulong)uVar46 >> 0x10),(short)uVar39 - (short)uVar46
                                       )));
        *(ulong *)(psVar27 + -8) =
             CONCAT26((short)((ulong)uVar38 >> 0x30) - (short)((ulong)uVar44 >> 0x30),
                      CONCAT24((short)((ulong)uVar38 >> 0x20) - (short)((ulong)uVar44 >> 0x20),
                               CONCAT22((short)((ulong)uVar38 >> 0x10) -
                                        (short)((ulong)uVar44 >> 0x10),(short)uVar38 - (short)uVar44
                                       )));
        *(ulong *)(psVar27 + 4) =
             CONCAT26((short)((ulong)uVar43 >> 0x30) - (short)((ulong)uVar50 >> 0x30),
                      CONCAT24((short)((ulong)uVar43 >> 0x20) - (short)((ulong)uVar50 >> 0x20),
                               CONCAT22((short)((ulong)uVar43 >> 0x10) -
                                        (short)((ulong)uVar50 >> 0x10),(short)uVar43 - (short)uVar50
                                       )));
        *(ulong *)psVar27 =
             CONCAT26((short)((ulong)uVar40 >> 0x30) - (short)((ulong)uVar48 >> 0x30),
                      CONCAT24((short)((ulong)uVar40 >> 0x20) - (short)((ulong)uVar48 >> 0x20),
                               CONCAT22((short)((ulong)uVar40 >> 0x10) -
                                        (short)((ulong)uVar48 >> 0x10),(short)uVar40 - (short)uVar48
                                       )));
        psVar27 = psVar27 + 0x10;
      } while (uVar22 != 0);
      if (uVar24 == uVar25) goto LAB_00125c78;
    }
    lVar26 = uVar25 - uVar24;
    psVar17 = param_2 + uVar24;
    psVar27 = param_1 + uVar24;
    do {
      lVar26 = lVar26 + -1;
      *psVar17 = *psVar27 - *psVar17;
      psVar17 = psVar17 + 1;
      psVar27 = psVar27 + 1;
    } while (lVar26 != 0);
  }
LAB_00125c78:
  if (*(long *)(lVar14 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

