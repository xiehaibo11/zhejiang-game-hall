
void lsp_quant_nb(short *param_1,short *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
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
  uint uVar16;
  short *psVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  short *psVar25;
  ulong uVar26;
  undefined8 *puVar27;
  int iVar28;
  int iVar29;
  undefined2 *puVar30;
  char *pcVar31;
  short sVar32;
  int iVar33;
  int iVar34;
  short sVar35;
  char *pcVar36;
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
  short local_7c [4];
  short local_74;
  short local_72;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  long local_68;
  
  lVar14 = tpidr_el0;
  local_68 = *(long *)(lVar14 + 0x28);
  if (0 < (int)param_3) {
    uVar22 = (ulong)param_3;
    if ((param_3 < 0x10) || ((param_2 < param_1 + uVar22 && (param_1 < param_2 + uVar22)))) {
      uVar23 = 0;
LAB_001244e4:
      lVar24 = uVar22 - uVar23;
      psVar17 = param_2 + uVar23;
      psVar25 = param_1 + uVar23;
      do {
        lVar24 = lVar24 + -1;
        *psVar17 = *psVar25;
        psVar17 = psVar17 + 1;
        psVar25 = psVar25 + 1;
      } while (lVar24 != 0);
    }
    else {
      uVar23 = uVar22 & 0xfffffff0;
      psVar17 = param_1 + 8;
      psVar25 = param_2 + 8;
      uVar20 = uVar23;
      do {
        psVar15 = psVar17 + -4;
        uVar38 = *(undefined8 *)(psVar17 + -8);
        uVar40 = *(undefined8 *)(psVar17 + 4);
        uVar39 = *(undefined8 *)psVar17;
        psVar17 = psVar17 + 0x10;
        uVar20 = uVar20 - 0x10;
        *(undefined8 *)(psVar25 + -4) = *(undefined8 *)psVar15;
        *(undefined8 *)(psVar25 + -8) = uVar38;
        *(undefined8 *)(psVar25 + 4) = uVar40;
        *(undefined8 *)psVar25 = uVar39;
        psVar25 = psVar25 + 0x10;
      } while (uVar20 != 0);
      if (uVar23 != uVar22) goto LAB_001244e4;
    }
    uVar23 = (ulong)(param_3 - 1);
    if (0 < (int)param_3) {
      if (param_3 - 1 == 0) {
        uVar26 = 0;
LAB_001245f0:
        psVar17 = param_2 + uVar26;
        do {
          sVar37 = *psVar17;
          sVar32 = sVar37;
          if (uVar26 != 0) {
            sVar32 = sVar37 - psVar17[-1];
          }
          uVar20 = uVar26 + 1;
          if (uVar23 == uVar26) {
            sVar35 = 0x6488;
          }
          else {
            sVar35 = psVar17[1];
          }
          sVar41 = sVar35 - sVar37;
          if (sVar32 <= (short)(sVar35 - sVar37)) {
            sVar41 = sVar32;
          }
          sVar37 = 0;
          if ((short)(sVar41 + 300) != 0) {
            sVar37 = (short)(0x14000 / (int)(short)(sVar41 + 300));
          }
          local_7c[uVar26] = sVar37;
          psVar17 = psVar17 + 1;
          uVar26 = uVar20;
        } while (uVar22 != uVar20);
      }
      else {
        lVar24 = 0;
        uVar20 = 0;
        uVar26 = uVar22 & 0xfffffffe;
        psVar17 = param_2 + 1;
        puVar30 = (undefined2 *)((ulong)local_7c | 2);
        uVar16 = param_3;
        do {
          sVar37 = (short)uVar16;
          if (lVar24 != 0) {
            sVar37 = psVar17[-2];
          }
          sVar32 = 0;
          if (lVar24 != 0) {
            sVar32 = sVar37;
          }
          sVar37 = *psVar17 - psVar17[-1];
          sVar35 = psVar17[-1] - sVar32;
          if (uVar20 != uVar23) {
            sVar32 = *psVar17;
          }
          if ((uVar20 | 1) != uVar23) {
            param_6 = psVar17[1];
          }
          sVar41 = 0x6488;
          if (uVar20 != uVar23) {
            sVar41 = sVar32;
          }
          sVar32 = 0x6488;
          if ((uVar20 | 1) != uVar23) {
            sVar32 = param_6;
          }
          sVar41 = sVar41 - psVar17[-1];
          uVar16 = (uint)sVar41;
          param_6 = sVar32 - *psVar17;
          if ((int)sVar35 <= (int)uVar16) {
            sVar41 = sVar35;
          }
          sVar32 = param_6;
          if (sVar37 <= param_6) {
            sVar32 = sVar37;
          }
          uVar20 = uVar20 + 2;
          uVar10 = 0;
          if ((short)(sVar41 + 300) != 0) {
            uVar10 = (undefined2)(0x14000 / (int)(short)(sVar41 + 300));
          }
          uVar11 = 0;
          if ((short)(sVar32 + 300) != 0) {
            uVar11 = (undefined2)(0x14000 / (int)(short)(sVar32 + 300));
          }
          lVar24 = lVar24 + -2;
          puVar30[-1] = uVar10;
          *puVar30 = uVar11;
          psVar17 = psVar17 + 2;
          puVar30 = puVar30 + 2;
        } while (uVar20 != uVar26);
        if (uVar26 != uVar22) goto LAB_001245f0;
      }
      if (0 < (int)param_3) {
        if (param_3 < 0x10) {
          uVar20 = 0;
        }
        else {
          sVar32 = 7;
          sVar37 = 6;
          sVar41 = 5;
          sVar35 = 4;
          sVar45 = 3;
          sVar42 = 2;
          sVar49 = 1;
          sVar47 = 0;
          uVar20 = uVar22 & 0xfffffff0;
          psVar17 = param_2 + 8;
          uVar23 = uVar20;
          do {
            uVar39 = *(undefined8 *)(psVar17 + -4);
            uVar38 = *(undefined8 *)(psVar17 + -8);
            uVar43 = *(undefined8 *)(psVar17 + 4);
            uVar40 = *(undefined8 *)psVar17;
            sVar51 = sVar47 * 0x800;
            sVar52 = sVar49 * 0x800;
            sVar53 = sVar42 * 0x800;
            sVar54 = sVar45 * 0x800;
            sVar55 = sVar35 * 0x800;
            sVar56 = sVar41 * 0x800;
            sVar57 = sVar37 * 0x800;
            sVar58 = sVar32 * 0x800;
            sVar35 = sVar35 + 0x10;
            sVar41 = sVar41 + 0x10;
            sVar47 = sVar47 + 0x10;
            sVar49 = sVar49 + 0x10;
            uVar23 = uVar23 - 0x10;
            sVar42 = sVar42 + 0x10;
            sVar45 = sVar45 + 0x10;
            sVar37 = sVar37 + 0x10;
            sVar32 = sVar32 + 0x10;
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
          } while (uVar23 != 0);
          if (uVar20 == uVar22) goto LAB_00124754;
        }
        do {
          uVar23 = uVar20 + 1;
          param_2[uVar20] = param_2[uVar20] + (short)uVar23 * -0x800;
          uVar20 = uVar23;
        } while (uVar22 != uVar23);
      }
    }
  }
LAB_00124754:
  pcVar18 = &cdbk_nb;
  uVar23 = (ulong)param_3;
  iVar29 = 0;
  iVar21 = 0;
  uVar22 = uVar23 & 0xfffffffe;
  iVar28 = 0x7fffffff;
  do {
    if ((int)param_3 < 1) {
      iVar33 = 0;
    }
    else {
      if (param_3 == 1) {
        iVar33 = 0;
        uVar20 = 0;
        pcVar31 = pcVar18;
LAB_00124808:
        lVar24 = uVar23 - uVar20;
        psVar17 = param_2 + uVar20;
        do {
          lVar24 = lVar24 + -1;
          iVar34 = (int)(short)(*psVar17 + *pcVar31 * -0x20);
          iVar33 = iVar33 + iVar34 * iVar34;
          psVar17 = psVar17 + 1;
          pcVar31 = pcVar31 + 1;
        } while (lVar24 != 0);
      }
      else {
        iVar34 = 0;
        iVar33 = 0;
        pcVar31 = pcVar18 + (uVar23 - (param_3 & 1));
        pcVar36 = pcVar18 + 1;
        uVar20 = uVar22;
        psVar17 = param_2 + 1;
        do {
          pbVar1 = (byte *)(pcVar36 + -1);
          cVar2 = *pcVar36;
          pcVar36 = pcVar36 + 2;
          uVar20 = uVar20 - 2;
          iVar12 = (int)(short)(psVar17[-1] + (ushort)*pbVar1 * -0x20);
          iVar13 = (int)(short)(*psVar17 + cVar2 * -0x20);
          iVar34 = iVar34 + iVar12 * iVar12;
          iVar33 = iVar33 + iVar13 * iVar13;
          psVar17 = psVar17 + 2;
        } while (uVar20 != 0);
        iVar33 = iVar33 + iVar34;
        uVar20 = uVar22;
        if (uVar22 != uVar23) goto LAB_00124808;
      }
      pcVar18 = pcVar18 + (ulong)(param_3 - 1) + 1;
    }
    iVar34 = iVar21;
    if (iVar28 <= iVar33) {
      iVar33 = iVar28;
      iVar34 = iVar29;
    }
    iVar29 = iVar34;
    iVar21 = iVar21 + 1;
    iVar28 = iVar33;
  } while (iVar21 != 0x40);
  if ((int)param_3 < 1) {
    speex_bits_pack(param_4,iVar29,6);
  }
  else {
    lVar24 = (long)(int)(iVar29 * param_3);
    if ((param_3 < 0x10) ||
       ((param_2 < &cdbk_nb + lVar24 + uVar23 && (&cdbk_nb + lVar24 < param_2 + uVar23)))) {
      uVar22 = 0;
LAB_00124888:
      lVar19 = uVar23 - uVar22;
      pcVar18 = &cdbk_nb + lVar24 + uVar22;
      psVar17 = param_2 + uVar22;
      do {
        lVar19 = lVar19 + -1;
        *psVar17 = *psVar17 + *pcVar18 * -0x20;
        pcVar18 = pcVar18 + 1;
        psVar17 = psVar17 + 1;
      } while (lVar19 != 0);
    }
    else {
      uVar22 = uVar23 & 0xfffffff0;
      psVar17 = param_2 + 8;
      puVar27 = (undefined8 *)(&DAT_00135a70 + lVar24);
      uVar20 = uVar22;
      do {
        uVar40 = puVar27[-1];
        uVar43 = *puVar27;
        uVar39 = *(undefined8 *)(psVar17 + -4);
        uVar38 = *(undefined8 *)(psVar17 + -8);
        uVar46 = *(undefined8 *)(psVar17 + 4);
        uVar44 = *(undefined8 *)psVar17;
        uVar20 = uVar20 - 0x10;
        puVar27 = puVar27 + 2;
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
      } while (uVar20 != 0);
      if (uVar22 != uVar23) goto LAB_00124888;
    }
    speex_bits_pack(param_4,iVar29,6);
    if (0 < (int)param_3) {
      if (param_3 < 0x10) {
        uVar20 = 0;
      }
      else {
        uVar20 = uVar23 & 0xfffffff0;
        psVar17 = param_2 + 8;
        uVar22 = uVar20;
        do {
          uVar39 = *(undefined8 *)(psVar17 + -4);
          uVar38 = *(undefined8 *)(psVar17 + -8);
          uVar43 = *(undefined8 *)(psVar17 + 4);
          uVar40 = *(undefined8 *)psVar17;
          uVar22 = uVar22 - 0x10;
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
        } while (uVar22 != 0);
        if (uVar20 == uVar23) goto LAB_00124930;
      }
      lVar24 = uVar23 - uVar20;
      psVar17 = param_2 + uVar20;
      do {
        lVar24 = lVar24 + -1;
        *psVar17 = *psVar17 << 1;
        psVar17 = psVar17 + 1;
      } while (lVar24 != 0);
    }
  }
LAB_00124930:
  pcVar18 = &cdbk_nb_low1;
  iVar29 = 0;
  iVar21 = 0;
  iVar28 = 0x7fffffff;
  do {
    iVar33 = (int)(short)(*param_2 + *pcVar18 * -0x20);
    uVar16 = iVar33 * iVar33;
    iVar33 = (int)(short)(param_2[1] + pcVar18[1] * -0x20);
    uVar6 = iVar33 * iVar33;
    iVar33 = (int)(short)(param_2[2] + pcVar18[2] * -0x20);
    uVar7 = iVar33 * iVar33;
    iVar33 = (int)(short)(param_2[3] + pcVar18[3] * -0x20);
    uVar8 = iVar33 * iVar33;
    iVar33 = (int)(short)(param_2[4] + pcVar18[4] * -0x20);
    uVar9 = iVar33 * iVar33;
    iVar33 = ((int)(uVar16 * 2) >> 0x10) * (int)local_7c[0] +
             ((int)((uVar16 & 0x7fff) * (int)local_7c[0]) >> 0xf) +
             ((int)((uVar6 & 0x7fff) * (int)local_7c[1]) >> 0xf) +
             ((int)(uVar6 * 2) >> 0x10) * (int)local_7c[1] +
             ((int)((uVar7 & 0x7fff) * (int)local_7c[2]) >> 0xf) +
             ((int)(uVar7 * 2) >> 0x10) * (int)local_7c[2] +
             ((int)((uVar8 & 0x7fff) * (int)local_7c[3]) >> 0xf) +
             ((int)(uVar8 * 2) >> 0x10) * (int)local_7c[3] +
             ((int)((uVar9 & 0x7fff) * (int)local_74) >> 0xf) +
             ((int)(uVar9 * 2) >> 0x10) * (int)local_74;
    iVar34 = iVar21;
    if (iVar28 <= iVar33) {
      iVar33 = iVar28;
      iVar34 = iVar29;
    }
    iVar29 = iVar34;
    iVar21 = iVar21 + 1;
    pcVar18 = pcVar18 + 5;
    iVar28 = iVar33;
  } while (iVar21 != 0x40);
  lVar24 = (long)iVar29 + (long)iVar29 * 4;
  cVar2 = (&DAT_00135ce9)[lVar24];
  cVar3 = (&DAT_00135cea)[lVar24];
  cVar4 = (&DAT_00135ceb)[lVar24];
  cVar5 = (&DAT_00135cec)[lVar24];
  *param_2 = *param_2 + (char)(&cdbk_nb_low1)[lVar24] * -0x20;
  param_2[1] = param_2[1] + cVar2 * -0x20;
  param_2[2] = param_2[2] + cVar3 * -0x20;
  param_2[3] = param_2[3] + cVar4 * -0x20;
  param_2[4] = param_2[4] + cVar5 * -0x20;
  speex_bits_pack(param_4,iVar29,6);
  pcVar18 = &cdbk_nb_low2;
  iVar21 = 0;
  sVar37 = *param_2 * 2;
  sVar32 = param_2[1] * 2;
  sVar35 = param_2[2] * 2;
  sVar41 = param_2[3] * 2;
  sVar42 = param_2[4] * 2;
  *param_2 = sVar37;
  param_2[1] = sVar32;
  param_2[2] = sVar35;
  param_2[3] = sVar41;
  param_2[4] = sVar42;
  iVar29 = 0x7fffffff;
  iVar28 = 0;
  while( true ) {
    iVar33 = (int)(short)(sVar37 + *pcVar18 * -0x20);
    uVar16 = iVar33 * iVar33;
    iVar33 = (int)(short)(sVar32 + pcVar18[1] * -0x20);
    uVar6 = iVar33 * iVar33;
    iVar33 = (int)(short)(sVar35 + pcVar18[2] * -0x20);
    uVar7 = iVar33 * iVar33;
    iVar33 = (int)(short)(sVar41 + pcVar18[3] * -0x20);
    uVar8 = iVar33 * iVar33;
    iVar33 = (int)(short)(sVar42 + pcVar18[4] * -0x20);
    uVar9 = iVar33 * iVar33;
    iVar33 = ((int)(uVar16 * 2) >> 0x10) * (int)local_7c[0] +
             ((int)((uVar16 & 0x7ffc) * (int)local_7c[0]) >> 0xf) +
             ((int)((uVar6 & 0x7ffc) * (int)local_7c[1]) >> 0xf) +
             ((int)(uVar6 * 2) >> 0x10) * (int)local_7c[1] +
             ((int)((uVar7 & 0x7ffc) * (int)local_7c[2]) >> 0xf) +
             ((int)(uVar7 * 2) >> 0x10) * (int)local_7c[2] +
             ((int)((uVar8 & 0x7ffc) * (int)local_7c[3]) >> 0xf) +
             ((int)(uVar8 * 2) >> 0x10) * (int)local_7c[3] +
             ((int)((uVar9 & 0x7ffc) * (int)local_74) >> 0xf) +
             ((int)(uVar9 * 2) >> 0x10) * (int)local_74;
    iVar34 = iVar21;
    if (iVar29 <= iVar33) {
      iVar34 = iVar28;
    }
    if (iVar21 == 0x3f) break;
    iVar21 = iVar21 + 1;
    if (iVar29 <= iVar33) {
      iVar33 = iVar29;
    }
    pcVar18 = pcVar18 + 5;
    iVar29 = iVar33;
    iVar28 = iVar34;
  }
  lVar24 = (long)iVar34 + (long)iVar34 * 4;
  cVar2 = (&DAT_00135e29)[lVar24];
  cVar3 = (&DAT_00135e2a)[lVar24];
  cVar4 = (&DAT_00135e2b)[lVar24];
  cVar5 = (&DAT_00135e2c)[lVar24];
  *param_2 = sVar37 + (char)(&cdbk_nb_low2)[lVar24] * -0x20;
  param_2[1] = sVar32 + cVar2 * -0x20;
  param_2[2] = sVar35 + cVar3 * -0x20;
  param_2[3] = sVar41 + cVar4 * -0x20;
  param_2[4] = sVar42 + cVar5 * -0x20;
  speex_bits_pack(param_4,iVar34,6);
  pcVar18 = &cdbk_nb_high1;
  iVar29 = 0;
  iVar21 = 0;
  iVar28 = 0x7fffffff;
  do {
    iVar33 = (int)(short)(param_2[5] + *pcVar18 * -0x20);
    uVar16 = iVar33 * iVar33;
    iVar33 = (int)(short)(param_2[6] + pcVar18[1] * -0x20);
    uVar6 = iVar33 * iVar33;
    iVar33 = (int)(short)(param_2[7] + pcVar18[2] * -0x20);
    uVar7 = iVar33 * iVar33;
    iVar33 = (int)(short)(param_2[8] + pcVar18[3] * -0x20);
    uVar8 = iVar33 * iVar33;
    iVar33 = (int)(short)(param_2[9] + pcVar18[4] * -0x20);
    uVar9 = iVar33 * iVar33;
    iVar33 = ((int)(uVar16 * 2) >> 0x10) * (int)local_72 +
             ((int)((uVar16 & 0x7fff) * (int)local_72) >> 0xf) +
             ((int)((uVar6 & 0x7fff) * (int)local_70) >> 0xf) +
             ((int)(uVar6 * 2) >> 0x10) * (int)local_70 +
             ((int)((uVar7 & 0x7fff) * (int)local_6e) >> 0xf) +
             ((int)(uVar7 * 2) >> 0x10) * (int)local_6e +
             ((int)((uVar8 & 0x7fff) * (int)local_6c) >> 0xf) +
             ((int)(uVar8 * 2) >> 0x10) * (int)local_6c +
             ((int)((uVar9 & 0x7fff) * (int)local_6a) >> 0xf) +
             ((int)(uVar9 * 2) >> 0x10) * (int)local_6a;
    iVar34 = iVar21;
    if (iVar28 <= iVar33) {
      iVar33 = iVar28;
      iVar34 = iVar29;
    }
    iVar29 = iVar34;
    iVar21 = iVar21 + 1;
    pcVar18 = pcVar18 + 5;
    iVar28 = iVar33;
  } while (iVar21 != 0x40);
  lVar24 = (long)iVar29 + (long)iVar29 * 4;
  cVar2 = (&DAT_00135f69)[lVar24];
  cVar3 = (&DAT_00135f6a)[lVar24];
  cVar4 = (&DAT_00135f6b)[lVar24];
  cVar5 = (&DAT_00135f6c)[lVar24];
  param_2[5] = param_2[5] + (char)(&cdbk_nb_high1)[lVar24] * -0x20;
  param_2[6] = param_2[6] + cVar2 * -0x20;
  param_2[7] = param_2[7] + cVar3 * -0x20;
  param_2[8] = param_2[8] + cVar4 * -0x20;
  param_2[9] = param_2[9] + cVar5 * -0x20;
  speex_bits_pack(param_4,iVar29,6);
  pcVar18 = &cdbk_nb_high2;
  iVar21 = 0;
  sVar37 = param_2[5] * 2;
  sVar32 = param_2[6] * 2;
  sVar35 = param_2[7] * 2;
  sVar41 = param_2[8] * 2;
  sVar42 = param_2[9] * 2;
  param_2[5] = sVar37;
  param_2[6] = sVar32;
  param_2[7] = sVar35;
  param_2[8] = sVar41;
  param_2[9] = sVar42;
  iVar29 = 0x7fffffff;
  iVar28 = 0;
  while( true ) {
    iVar33 = (int)(short)(sVar37 + *pcVar18 * -0x20);
    uVar16 = iVar33 * iVar33;
    iVar33 = (int)(short)(sVar32 + pcVar18[1] * -0x20);
    uVar6 = iVar33 * iVar33;
    iVar33 = (int)(short)(sVar35 + pcVar18[2] * -0x20);
    uVar7 = iVar33 * iVar33;
    iVar33 = (int)(short)(sVar41 + pcVar18[3] * -0x20);
    uVar8 = iVar33 * iVar33;
    iVar33 = (int)(short)(sVar42 + pcVar18[4] * -0x20);
    uVar9 = iVar33 * iVar33;
    iVar33 = ((int)(uVar16 * 2) >> 0x10) * (int)local_72 +
             ((int)((uVar16 & 0x7ffc) * (int)local_72) >> 0xf) +
             ((int)((uVar6 & 0x7ffc) * (int)local_70) >> 0xf) +
             ((int)(uVar6 * 2) >> 0x10) * (int)local_70 +
             ((int)((uVar7 & 0x7ffc) * (int)local_6e) >> 0xf) +
             ((int)(uVar7 * 2) >> 0x10) * (int)local_6e +
             ((int)((uVar8 & 0x7ffc) * (int)local_6c) >> 0xf) +
             ((int)(uVar8 * 2) >> 0x10) * (int)local_6c +
             ((int)((uVar9 & 0x7ffc) * (int)local_6a) >> 0xf) +
             ((int)(uVar9 * 2) >> 0x10) * (int)local_6a;
    iVar34 = iVar21;
    if (iVar29 <= iVar33) {
      iVar34 = iVar28;
    }
    if (iVar21 == 0x3f) break;
    iVar21 = iVar21 + 1;
    if (iVar29 <= iVar33) {
      iVar33 = iVar29;
    }
    pcVar18 = pcVar18 + 5;
    iVar29 = iVar33;
    iVar28 = iVar34;
  }
  lVar24 = (long)iVar34 + (long)iVar34 * 4;
  cVar2 = (&DAT_001360a9)[lVar24];
  cVar3 = (&DAT_001360aa)[lVar24];
  cVar4 = (&DAT_001360ab)[lVar24];
  cVar5 = (&DAT_001360ac)[lVar24];
  param_2[5] = sVar37 + (char)(&cdbk_nb_high2)[lVar24] * -0x20;
  param_2[6] = sVar32 + cVar2 * -0x20;
  param_2[7] = sVar35 + cVar3 * -0x20;
  param_2[8] = sVar41 + cVar4 * -0x20;
  param_2[9] = sVar42 + cVar5 * -0x20;
  speex_bits_pack(param_4,iVar34,6);
  if ((int)param_3 < 1) goto LAB_00124fec;
  if (param_3 < 0x10) {
    uVar20 = 0;
LAB_00124f74:
    lVar24 = uVar23 - uVar20;
    psVar17 = param_2 + uVar20;
    do {
      lVar24 = lVar24 + -1;
      *psVar17 = (short)((int)*psVar17 + 2U >> 2);
      psVar17 = psVar17 + 1;
    } while (lVar24 != 0);
  }
  else {
    uVar20 = uVar23 & 0xfffffff0;
    psVar17 = param_2 + 8;
    uVar22 = uVar20;
    do {
      uVar39 = *(undefined8 *)(psVar17 + -4);
      uVar38 = *(undefined8 *)(psVar17 + -8);
      uVar43 = *(undefined8 *)(psVar17 + 4);
      uVar40 = *(undefined8 *)psVar17;
      uVar22 = uVar22 - 0x10;
      *(ulong *)(psVar17 + -4) =
           CONCAT26((short)((int)(short)((ulong)uVar39 >> 0x30) + 2U >> 2),
                    CONCAT24((short)((int)(short)((ulong)uVar39 >> 0x20) + 2U >> 2),
                             CONCAT22((short)((int)(short)((ulong)uVar39 >> 0x10) + 2U >> 2),
                                      (short)((int)(short)uVar39 + 2U >> 2))));
      *(ulong *)(psVar17 + -8) =
           CONCAT26((short)((int)(short)((ulong)uVar38 >> 0x30) + 2U >> 2),
                    CONCAT24((short)((int)(short)((ulong)uVar38 >> 0x20) + 2U >> 2),
                             CONCAT22((short)((int)(short)((ulong)uVar38 >> 0x10) + 2U >> 2),
                                      (short)((int)(short)uVar38 + 2U >> 2))));
      *(ulong *)(psVar17 + 4) =
           CONCAT26((short)((int)(short)((ulong)uVar43 >> 0x30) + 2U >> 2),
                    CONCAT24((short)((int)(short)((ulong)uVar43 >> 0x20) + 2U >> 2),
                             CONCAT22((short)((int)(short)((ulong)uVar43 >> 0x10) + 2U >> 2),
                                      (short)((int)(short)uVar43 + 2U >> 2))));
      *(ulong *)psVar17 =
           CONCAT26((short)((int)(short)((ulong)uVar40 >> 0x30) + 2U >> 2),
                    CONCAT24((short)((int)(short)((ulong)uVar40 >> 0x20) + 2U >> 2),
                             CONCAT22((short)((int)(short)((ulong)uVar40 >> 0x10) + 2U >> 2),
                                      (short)((int)(short)uVar40 + 2U >> 2))));
      psVar17 = psVar17 + 0x10;
    } while (uVar22 != 0);
    if (uVar20 != uVar23) goto LAB_00124f74;
  }
  if (0 < (int)param_3) {
    if ((param_3 < 0x10) || ((param_2 < param_1 + uVar23 && (param_1 < param_2 + uVar23)))) {
      uVar22 = 0;
    }
    else {
      uVar22 = uVar23 & 0xfffffff0;
      psVar17 = param_1 + 8;
      psVar25 = param_2 + 8;
      uVar20 = uVar22;
      do {
        uVar39 = *(undefined8 *)(psVar17 + -4);
        uVar38 = *(undefined8 *)(psVar17 + -8);
        uVar43 = *(undefined8 *)(psVar17 + 4);
        uVar40 = *(undefined8 *)psVar17;
        uVar46 = *(undefined8 *)(psVar25 + -4);
        uVar44 = *(undefined8 *)(psVar25 + -8);
        uVar50 = *(undefined8 *)(psVar25 + 4);
        uVar48 = *(undefined8 *)psVar25;
        psVar17 = psVar17 + 0x10;
        uVar20 = uVar20 - 0x10;
        *(ulong *)(psVar25 + -4) =
             CONCAT26((short)((ulong)uVar39 >> 0x30) - (short)((ulong)uVar46 >> 0x30),
                      CONCAT24((short)((ulong)uVar39 >> 0x20) - (short)((ulong)uVar46 >> 0x20),
                               CONCAT22((short)((ulong)uVar39 >> 0x10) -
                                        (short)((ulong)uVar46 >> 0x10),(short)uVar39 - (short)uVar46
                                       )));
        *(ulong *)(psVar25 + -8) =
             CONCAT26((short)((ulong)uVar38 >> 0x30) - (short)((ulong)uVar44 >> 0x30),
                      CONCAT24((short)((ulong)uVar38 >> 0x20) - (short)((ulong)uVar44 >> 0x20),
                               CONCAT22((short)((ulong)uVar38 >> 0x10) -
                                        (short)((ulong)uVar44 >> 0x10),(short)uVar38 - (short)uVar44
                                       )));
        *(ulong *)(psVar25 + 4) =
             CONCAT26((short)((ulong)uVar43 >> 0x30) - (short)((ulong)uVar50 >> 0x30),
                      CONCAT24((short)((ulong)uVar43 >> 0x20) - (short)((ulong)uVar50 >> 0x20),
                               CONCAT22((short)((ulong)uVar43 >> 0x10) -
                                        (short)((ulong)uVar50 >> 0x10),(short)uVar43 - (short)uVar50
                                       )));
        *(ulong *)psVar25 =
             CONCAT26((short)((ulong)uVar40 >> 0x30) - (short)((ulong)uVar48 >> 0x30),
                      CONCAT24((short)((ulong)uVar40 >> 0x20) - (short)((ulong)uVar48 >> 0x20),
                               CONCAT22((short)((ulong)uVar40 >> 0x10) -
                                        (short)((ulong)uVar48 >> 0x10),(short)uVar40 - (short)uVar48
                                       )));
        psVar25 = psVar25 + 0x10;
      } while (uVar20 != 0);
      if (uVar22 == uVar23) goto LAB_00124fec;
    }
    lVar24 = uVar23 - uVar22;
    psVar17 = param_2 + uVar22;
    psVar25 = param_1 + uVar22;
    do {
      lVar24 = lVar24 + -1;
      *psVar17 = *psVar25 - *psVar17;
      psVar17 = psVar17 + 1;
      psVar25 = psVar25 + 1;
    } while (lVar24 != 0);
  }
LAB_00124fec:
  if (*(long *)(lVar14 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

