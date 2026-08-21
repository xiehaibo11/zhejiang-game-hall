
void lsp_quant_high(undefined1 *param_1,undefined1 *param_2,uint param_3,undefined8 param_4,
                   undefined8 param_5,short param_6)

{
  byte *pbVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  short sVar5;
  long lVar6;
  undefined8 *puVar7;
  short sVar8;
  short *psVar10;
  ushort *puVar11;
  short *psVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  ulong uVar23;
  char *pcVar24;
  short sVar25;
  long lVar26;
  short sVar27;
  char *pcVar28;
  int iVar29;
  undefined8 uVar30;
  int iVar31;
  int iVar32;
  undefined8 uVar33;
  int iVar34;
  int iVar36;
  undefined8 uVar35;
  int iVar37;
  int iVar40;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar41;
  int iVar42;
  int iVar44;
  undefined8 uVar43;
  undefined8 uVar45;
  int iVar46;
  int iVar48;
  ulong uVar47;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  short local_7c [10];
  long local_68;
  uint uVar9;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (0 < (int)param_3) {
    uVar15 = (ulong)param_3;
    if ((param_3 < 0x10) || ((param_2 < param_1 + uVar15 * 2 && (param_1 < param_2 + uVar15 * 2))))
    {
      uVar17 = 0;
LAB_00126020:
      lVar18 = uVar15 - uVar17;
      puVar21 = (undefined2 *)(param_2 + uVar17 * 2);
      puVar22 = (undefined2 *)(param_1 + uVar17 * 2);
      do {
        lVar18 = lVar18 + -1;
        *puVar21 = *puVar22;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      } while (lVar18 != 0);
    }
    else {
      uVar17 = uVar15 & 0xfffffff0;
      puVar16 = (undefined8 *)(param_1 + 0x10);
      puVar20 = (undefined8 *)(param_2 + 0x10);
      uVar19 = uVar17;
      do {
        puVar7 = puVar16 + -1;
        uVar30 = puVar16[-2];
        uVar35 = puVar16[1];
        uVar33 = *puVar16;
        puVar16 = puVar16 + 4;
        uVar19 = uVar19 - 0x10;
        puVar20[-1] = *puVar7;
        puVar20[-2] = uVar30;
        puVar20[1] = uVar35;
        *puVar20 = uVar33;
        puVar20 = puVar20 + 4;
      } while (uVar19 != 0);
      if (uVar17 != uVar15) goto LAB_00126020;
    }
    uVar17 = (ulong)(param_3 - 1);
    if (0 < (int)param_3) {
      if (param_3 - 1 == 0) {
        uVar23 = 0;
LAB_0012612c:
        psVar10 = (short *)(param_2 + uVar23 * 2);
        do {
          sVar8 = *psVar10;
          sVar25 = sVar8;
          if (uVar23 != 0) {
            sVar25 = sVar8 - psVar10[-1];
          }
          uVar19 = uVar23 + 1;
          if (uVar17 == uVar23) {
            sVar27 = 0x6488;
          }
          else {
            sVar27 = psVar10[1];
          }
          sVar5 = sVar27 - sVar8;
          if (sVar25 <= (short)(sVar27 - sVar8)) {
            sVar5 = sVar25;
          }
          sVar8 = 0;
          if ((short)(sVar5 + 300) != 0) {
            sVar8 = (short)(0x14000 / (int)(short)(sVar5 + 300));
          }
          local_7c[uVar23] = sVar8;
          psVar10 = psVar10 + 1;
          uVar23 = uVar19;
        } while (uVar15 != uVar19);
      }
      else {
        lVar18 = 0;
        uVar19 = 0;
        uVar23 = uVar15 & 0xfffffffe;
        psVar10 = (short *)(param_2 + 2);
        puVar21 = (undefined2 *)((ulong)local_7c | 2);
        uVar9 = param_3;
        do {
          sVar8 = (short)uVar9;
          if (lVar18 != 0) {
            sVar8 = psVar10[-2];
          }
          sVar25 = 0;
          if (lVar18 != 0) {
            sVar25 = sVar8;
          }
          sVar8 = *psVar10 - psVar10[-1];
          sVar27 = psVar10[-1] - sVar25;
          if (uVar19 != uVar17) {
            sVar25 = *psVar10;
          }
          if ((uVar19 | 1) != uVar17) {
            param_6 = psVar10[1];
          }
          sVar5 = 0x6488;
          if (uVar19 != uVar17) {
            sVar5 = sVar25;
          }
          sVar25 = 0x6488;
          if ((uVar19 | 1) != uVar17) {
            sVar25 = param_6;
          }
          sVar5 = sVar5 - psVar10[-1];
          uVar9 = (uint)sVar5;
          sVar25 = sVar25 - *psVar10;
          if ((int)sVar27 <= (int)uVar9) {
            sVar5 = sVar27;
          }
          if (sVar8 <= sVar25) {
            sVar25 = sVar8;
          }
          uVar19 = uVar19 + 2;
          uVar3 = 0;
          if ((short)(sVar5 + 300) != 0) {
            uVar3 = (undefined2)(0x14000 / (int)(short)(sVar5 + 300));
          }
          uVar4 = 0;
          if ((short)(sVar25 + 300) != 0) {
            uVar4 = (undefined2)(0x14000 / (int)(short)(sVar25 + 300));
          }
          lVar18 = lVar18 + -2;
          puVar21[-1] = uVar3;
          *puVar21 = uVar4;
          psVar10 = psVar10 + 2;
          puVar21 = puVar21 + 2;
        } while (uVar19 != uVar23);
        if (uVar23 != uVar15) goto LAB_0012612c;
      }
      if (0 < (int)param_3) {
        if (param_3 < 0x10) {
          uVar19 = 0;
        }
        else {
          iVar32 = 6;
          iVar34 = 7;
          iVar29 = 4;
          iVar31 = 5;
          iVar40 = 2;
          iVar42 = 3;
          iVar36 = 0;
          iVar37 = 1;
          uVar19 = uVar15 & 0xfffffff0;
          puVar16 = (undefined8 *)(param_2 + 0x10);
          uVar17 = uVar19;
          do {
            uVar33 = puVar16[-1];
            uVar30 = puVar16[-2];
            uVar38 = puVar16[1];
            uVar35 = *puVar16;
            iVar50 = iVar36 * 0xa000000;
            iVar51 = iVar37 * 0xa000000;
            iVar52 = iVar40 * 0xa000000;
            iVar53 = iVar42 * 0xa000000;
            iVar44 = iVar29 * 0xa000000;
            iVar46 = iVar31 * 0xa000000;
            iVar48 = iVar32 * 0xa000000;
            iVar49 = iVar34 * 0xa000000;
            iVar36 = iVar36 + 0x10;
            iVar37 = iVar37 + 0x10;
            iVar40 = iVar40 + 0x10;
            iVar42 = iVar42 + 0x10;
            iVar29 = iVar29 + 0x10;
            iVar31 = iVar31 + 0x10;
            iVar32 = iVar32 + 0x10;
            iVar34 = iVar34 + 0x10;
            uVar17 = uVar17 - 0x10;
            puVar16[-1] = CONCAT26((short)((ulong)uVar33 >> 0x30) -
                                   (short)((uint)(iVar49 + 0x18000000) >> 0x10),
                                   CONCAT24((short)((ulong)uVar33 >> 0x20) -
                                            (short)((uint)(iVar48 + 0x18000000) >> 0x10),
                                            CONCAT22((short)((ulong)uVar33 >> 0x10) -
                                                     (short)((uint)(iVar46 + 0x18000000) >> 0x10),
                                                     (short)uVar33 -
                                                     (short)((uint)(iVar44 + 0x18000000) >> 0x10))))
            ;
            puVar16[-2] = CONCAT26((short)((ulong)uVar30 >> 0x30) -
                                   (short)((uint)(iVar53 + 0x18000000) >> 0x10),
                                   CONCAT24((short)((ulong)uVar30 >> 0x20) -
                                            (short)((uint)(iVar52 + 0x18000000) >> 0x10),
                                            CONCAT22((short)((ulong)uVar30 >> 0x10) -
                                                     (short)((uint)(iVar51 + 0x18000000) >> 0x10),
                                                     (short)uVar30 -
                                                     (short)((uint)(iVar50 + 0x18000000) >> 0x10))))
            ;
            puVar16[1] = CONCAT26((short)((ulong)uVar38 >> 0x30) -
                                  (short)((uint)(iVar49 + 0x68000000) >> 0x10),
                                  CONCAT24((short)((ulong)uVar38 >> 0x20) -
                                           (short)((uint)(iVar48 + 0x68000000) >> 0x10),
                                           CONCAT22((short)((ulong)uVar38 >> 0x10) -
                                                    (short)((uint)(iVar46 + 0x68000000) >> 0x10),
                                                    (short)uVar38 -
                                                    (short)((uint)(iVar44 + 0x68000000) >> 0x10))));
            *puVar16 = CONCAT26((short)((ulong)uVar35 >> 0x30) -
                                (short)((uint)(iVar53 + 0x68000000) >> 0x10),
                                CONCAT24((short)((ulong)uVar35 >> 0x20) -
                                         (short)((uint)(iVar52 + 0x68000000) >> 0x10),
                                         CONCAT22((short)((ulong)uVar35 >> 0x10) -
                                                  (short)((uint)(iVar51 + 0x68000000) >> 0x10),
                                                  (short)uVar35 -
                                                  (short)((uint)(iVar50 + 0x68000000) >> 0x10))));
            puVar16 = puVar16 + 4;
          } while (uVar17 != 0);
          if (uVar19 == uVar15) goto LAB_0012627c;
        }
        iVar29 = (int)uVar19 * 0xa000000 + 0x18000000;
        lVar18 = uVar15 - uVar19;
        psVar10 = (short *)(param_2 + uVar19 * 2);
        do {
          lVar18 = lVar18 + -1;
          *psVar10 = *psVar10 - (short)((uint)iVar29 >> 0x10);
          iVar29 = iVar29 + 0xa000000;
          psVar10 = psVar10 + 1;
        } while (lVar18 != 0);
      }
    }
  }
LAB_0012627c:
  lVar18 = (ulong)(param_3 - 1) + 1;
  pcVar13 = &high_lsp_cdbk;
  uVar17 = (ulong)param_3;
  iVar31 = 0;
  iVar29 = 0;
  uVar15 = uVar17 & 0xfffffffe;
  iVar32 = 0x7fffffff;
  do {
    if ((int)param_3 < 1) {
      iVar34 = 0;
    }
    else {
      if (param_3 == 1) {
        iVar34 = 0;
        pcVar24 = pcVar13;
        uVar19 = 0;
LAB_00126330:
        lVar26 = uVar17 - uVar19;
        psVar10 = (short *)(param_2 + uVar19 * 2);
        do {
          lVar26 = lVar26 + -1;
          iVar36 = (int)(short)(*psVar10 + *pcVar24 * -0x20);
          iVar34 = iVar34 + iVar36 * iVar36;
          pcVar24 = pcVar24 + 1;
          psVar10 = psVar10 + 1;
        } while (lVar26 != 0);
      }
      else {
        iVar36 = 0;
        iVar34 = 0;
        pcVar24 = pcVar13 + (uVar17 - (param_3 & 1));
        pcVar28 = pcVar13 + 1;
        uVar19 = uVar15;
        psVar10 = (short *)(param_2 + 2);
        do {
          pbVar1 = (byte *)(pcVar28 + -1);
          cVar2 = *pcVar28;
          pcVar28 = pcVar28 + 2;
          uVar19 = uVar19 - 2;
          iVar37 = (int)(short)(psVar10[-1] + (ushort)*pbVar1 * -0x20);
          iVar40 = (int)(short)(*psVar10 + cVar2 * -0x20);
          iVar36 = iVar36 + iVar37 * iVar37;
          iVar34 = iVar34 + iVar40 * iVar40;
          psVar10 = psVar10 + 2;
        } while (uVar19 != 0);
        iVar34 = iVar34 + iVar36;
        uVar19 = uVar15;
        if (uVar15 != uVar17) goto LAB_00126330;
      }
      pcVar13 = pcVar13 + lVar18;
    }
    iVar36 = iVar29;
    if (iVar32 <= iVar34) {
      iVar34 = iVar32;
      iVar36 = iVar31;
    }
    iVar31 = iVar36;
    iVar29 = iVar29 + 1;
    iVar32 = iVar34;
  } while (iVar29 != 0x40);
  if ((int)param_3 < 1) {
    speex_bits_pack(param_4,iVar31,6);
  }
  else {
    lVar26 = (long)iVar31 * (long)(int)param_3;
    if ((param_3 < 0x10) ||
       ((param_2 < &high_lsp_cdbk + lVar26 + uVar17 &&
        (&high_lsp_cdbk + lVar26 < param_2 + uVar17 * 2)))) {
      uVar15 = 0;
LAB_001263a8:
      lVar14 = uVar17 - uVar15;
      pcVar13 = &high_lsp_cdbk + lVar26 + uVar15;
      psVar10 = (short *)(param_2 + uVar15 * 2);
      do {
        lVar14 = lVar14 + -1;
        *psVar10 = *psVar10 + *pcVar13 * -0x20;
        pcVar13 = pcVar13 + 1;
        psVar10 = psVar10 + 1;
      } while (lVar14 != 0);
    }
    else {
      uVar15 = uVar17 & 0xfffffff0;
      puVar16 = (undefined8 *)(param_2 + 0x10);
      puVar20 = (undefined8 *)(&DAT_0013534e + lVar26);
      uVar19 = uVar15;
      do {
        uVar35 = puVar20[-1];
        uVar38 = *puVar20;
        uVar33 = puVar16[-1];
        uVar30 = puVar16[-2];
        uVar41 = puVar16[1];
        uVar39 = *puVar16;
        uVar19 = uVar19 - 0x10;
        puVar20 = puVar20 + 2;
        puVar16[-1] = CONCAT26((short)((ulong)uVar33 >> 0x30) +
                               (char)((ulong)uVar35 >> 0x38) * -0x20,
                               CONCAT24((short)((ulong)uVar33 >> 0x20) +
                                        (char)((ulong)uVar35 >> 0x30) * -0x20,
                                        CONCAT22((short)((ulong)uVar33 >> 0x10) +
                                                 (char)((ulong)uVar35 >> 0x28) * -0x20,
                                                 (short)uVar33 +
                                                 (char)((ulong)uVar35 >> 0x20) * -0x20)));
        puVar16[-2] = CONCAT26((short)((ulong)uVar30 >> 0x30) +
                               (char)((ulong)uVar35 >> 0x18) * -0x20,
                               CONCAT24((short)((ulong)uVar30 >> 0x20) +
                                        (char)((ulong)uVar35 >> 0x10) * -0x20,
                                        CONCAT22((short)((ulong)uVar30 >> 0x10) +
                                                 (char)((ulong)uVar35 >> 8) * -0x20,
                                                 (short)uVar30 + (char)uVar35 * -0x20)));
        puVar16[1] = CONCAT26((short)((ulong)uVar41 >> 0x30) + (char)((ulong)uVar38 >> 0x38) * -0x20
                              ,CONCAT24((short)((ulong)uVar41 >> 0x20) +
                                        (char)((ulong)uVar38 >> 0x30) * -0x20,
                                        CONCAT22((short)((ulong)uVar41 >> 0x10) +
                                                 (char)((ulong)uVar38 >> 0x28) * -0x20,
                                                 (short)uVar41 +
                                                 (char)((ulong)uVar38 >> 0x20) * -0x20)));
        *puVar16 = CONCAT26((short)((ulong)uVar39 >> 0x30) + (char)((ulong)uVar38 >> 0x18) * -0x20,
                            CONCAT24((short)((ulong)uVar39 >> 0x20) +
                                     (char)((ulong)uVar38 >> 0x10) * -0x20,
                                     CONCAT22((short)((ulong)uVar39 >> 0x10) +
                                              (char)((ulong)uVar38 >> 8) * -0x20,
                                              (short)uVar39 + (char)uVar38 * -0x20)));
        puVar16 = puVar16 + 4;
      } while (uVar19 != 0);
      if (uVar15 != uVar17) goto LAB_001263a8;
    }
    speex_bits_pack(param_4,iVar31,6);
    if (0 < (int)param_3) {
      if (param_3 < 0x10) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar17 & 0xfffffff0;
        puVar16 = (undefined8 *)(param_2 + 0x10);
        uVar15 = uVar19;
        do {
          uVar33 = puVar16[-1];
          uVar30 = puVar16[-2];
          uVar38 = puVar16[1];
          uVar35 = *puVar16;
          uVar15 = uVar15 - 0x10;
          puVar16[-1] = CONCAT26((short)((ulong)uVar33 >> 0x30) << 1,
                                 CONCAT24((short)((ulong)uVar33 >> 0x20) << 1,
                                          CONCAT22((short)((ulong)uVar33 >> 0x10) << 1,
                                                   (short)uVar33 << 1)));
          puVar16[-2] = CONCAT26((short)((ulong)uVar30 >> 0x30) << 1,
                                 CONCAT24((short)((ulong)uVar30 >> 0x20) << 1,
                                          CONCAT22((short)((ulong)uVar30 >> 0x10) << 1,
                                                   (short)uVar30 << 1)));
          puVar16[1] = CONCAT26((short)((ulong)uVar38 >> 0x30) << 1,
                                CONCAT24((short)((ulong)uVar38 >> 0x20) << 1,
                                         CONCAT22((short)((ulong)uVar38 >> 0x10) << 1,
                                                  (short)uVar38 << 1)));
          *puVar16 = CONCAT26((short)((ulong)uVar35 >> 0x30) << 1,
                              CONCAT24((short)((ulong)uVar35 >> 0x20) << 1,
                                       CONCAT22((short)((ulong)uVar35 >> 0x10) << 1,
                                                (short)uVar35 << 1)));
          puVar16 = puVar16 + 4;
        } while (uVar15 != 0);
        if (uVar19 == uVar17) goto LAB_00126450;
      }
      lVar26 = uVar17 - uVar19;
      psVar10 = (short *)(param_2 + uVar19 * 2);
      do {
        lVar26 = lVar26 + -1;
        *psVar10 = *psVar10 << 1;
        psVar10 = psVar10 + 1;
      } while (lVar26 != 0);
    }
  }
LAB_00126450:
  pcVar13 = &high_lsp_cdbk2;
  iVar31 = 0;
  iVar29 = 0;
  uVar15 = uVar17 & 0xfffffffc;
  iVar32 = 0x7fffffff;
  do {
    if ((int)param_3 < 1) {
      iVar34 = 0;
    }
    else {
      if (param_3 < 4) {
        iVar34 = 0;
        uVar19 = 0;
        pcVar24 = pcVar13;
LAB_001265b0:
        lVar26 = uVar17 - uVar19;
        psVar10 = local_7c + uVar19;
        psVar12 = (short *)(param_2 + uVar19 * 2);
        do {
          lVar26 = lVar26 + -1;
          iVar36 = (int)(short)(*psVar12 + *pcVar24 * -0x20);
          uVar9 = iVar36 * iVar36;
          iVar34 = iVar34 + ((int)((uVar9 & 0x7fff) * (int)*psVar10) >> 0xf) +
                   ((int)(uVar9 * 2) >> 0x10) * (int)*psVar10;
          psVar10 = psVar10 + 1;
          psVar12 = psVar12 + 1;
          pcVar24 = pcVar24 + 1;
        } while (lVar26 != 0);
      }
      else {
        pcVar24 = pcVar13 + (uVar17 - (param_3 & 3));
        pcVar28 = pcVar13 + 2;
        iVar34 = 0;
        iVar36 = 0;
        iVar37 = 0;
        iVar40 = 0;
        uVar19 = uVar15;
        psVar10 = local_7c + 2;
        puVar11 = (ushort *)(param_2 + 4);
        do {
          iVar42 = (int)(((uint)puVar11[-2] + (uint)(byte)pcVar28[-2] * -0x20) * 0x10000) >> 0x10;
          iVar44 = (int)(((uint)puVar11[-1] + (uint)(byte)pcVar28[-1] * -0x20) * 0x10000) >> 0x10;
          iVar46 = (int)(((uint)*puVar11 + *pcVar28 * -0x20) * 0x10000) >> 0x10;
          iVar48 = (int)(((uint)puVar11[1] + pcVar28[1] * -0x20) * 0x10000) >> 0x10;
          iVar42 = iVar42 * iVar42;
          iVar44 = iVar44 * iVar44;
          iVar46 = iVar46 * iVar46;
          iVar48 = iVar48 * iVar48;
          uVar23 = CONCAT44(iVar44,iVar42) & 0x7fff00007fff;
          uVar47 = CONCAT44(iVar48,iVar46) & 0x7fff00007fff;
          pcVar28 = pcVar28 + 4;
          puVar11 = puVar11 + 4;
          uVar19 = uVar19 - 4;
          iVar34 = iVar34 + ((int)uVar23 * (int)psVar10[-2] >> 0xf) +
                   (iVar42 * 2 >> 0x10) * (int)psVar10[-2];
          iVar36 = iVar36 + ((int)(uVar23 >> 0x20) * (int)psVar10[-1] >> 0xf) +
                   (iVar44 * 2 >> 0x10) * (int)psVar10[-1];
          iVar37 = iVar37 + ((int)uVar47 * (int)*psVar10 >> 0xf) +
                   (iVar46 * 2 >> 0x10) * (int)*psVar10;
          iVar40 = iVar40 + ((int)(uVar47 >> 0x20) * (int)psVar10[1] >> 0xf) +
                   (iVar48 * 2 >> 0x10) * (int)psVar10[1];
          psVar10 = psVar10 + 4;
        } while (uVar19 != 0);
        iVar34 = iVar37 + iVar34 + iVar40 + iVar36;
        uVar19 = uVar15;
        if (uVar15 != uVar17) goto LAB_001265b0;
      }
      pcVar13 = pcVar13 + lVar18;
    }
    iVar36 = iVar29;
    if (iVar32 <= iVar34) {
      iVar34 = iVar32;
      iVar36 = iVar31;
    }
    iVar31 = iVar36;
    iVar29 = iVar29 + 1;
    iVar32 = iVar34;
  } while (iVar29 != 0x40);
  if ((int)param_3 < 1) {
    speex_bits_pack(param_4,iVar31,6);
    goto LAB_00126768;
  }
  lVar18 = (long)iVar31 * (long)(int)param_3;
  if ((param_3 < 0x10) ||
     ((param_2 < &high_lsp_cdbk2 + lVar18 + uVar17 &&
      (&high_lsp_cdbk2 + lVar18 < param_2 + uVar17 * 2)))) {
    uVar15 = 0;
LAB_00126648:
    lVar26 = uVar17 - uVar15;
    pcVar13 = &high_lsp_cdbk2 + lVar18 + uVar15;
    psVar10 = (short *)(param_2 + uVar15 * 2);
    do {
      lVar26 = lVar26 + -1;
      *psVar10 = *psVar10 + *pcVar13 * -0x20;
      pcVar13 = pcVar13 + 1;
      psVar10 = psVar10 + 1;
    } while (lVar26 != 0);
  }
  else {
    uVar15 = uVar17 & 0xfffffff0;
    puVar16 = (undefined8 *)(param_2 + 0x10);
    puVar20 = (undefined8 *)(&DAT_0013554e + lVar18);
    uVar19 = uVar15;
    do {
      uVar35 = puVar20[-1];
      uVar38 = *puVar20;
      uVar33 = puVar16[-1];
      uVar30 = puVar16[-2];
      uVar41 = puVar16[1];
      uVar39 = *puVar16;
      uVar19 = uVar19 - 0x10;
      puVar20 = puVar20 + 2;
      puVar16[-1] = CONCAT26((short)((ulong)uVar33 >> 0x30) + (char)((ulong)uVar35 >> 0x38) * -0x20,
                             CONCAT24((short)((ulong)uVar33 >> 0x20) +
                                      (char)((ulong)uVar35 >> 0x30) * -0x20,
                                      CONCAT22((short)((ulong)uVar33 >> 0x10) +
                                               (char)((ulong)uVar35 >> 0x28) * -0x20,
                                               (short)uVar33 + (char)((ulong)uVar35 >> 0x20) * -0x20
                                              )));
      puVar16[-2] = CONCAT26((short)((ulong)uVar30 >> 0x30) + (char)((ulong)uVar35 >> 0x18) * -0x20,
                             CONCAT24((short)((ulong)uVar30 >> 0x20) +
                                      (char)((ulong)uVar35 >> 0x10) * -0x20,
                                      CONCAT22((short)((ulong)uVar30 >> 0x10) +
                                               (char)((ulong)uVar35 >> 8) * -0x20,
                                               (short)uVar30 + (char)uVar35 * -0x20)));
      puVar16[1] = CONCAT26((short)((ulong)uVar41 >> 0x30) + (char)((ulong)uVar38 >> 0x38) * -0x20,
                            CONCAT24((short)((ulong)uVar41 >> 0x20) +
                                     (char)((ulong)uVar38 >> 0x30) * -0x20,
                                     CONCAT22((short)((ulong)uVar41 >> 0x10) +
                                              (char)((ulong)uVar38 >> 0x28) * -0x20,
                                              (short)uVar41 + (char)((ulong)uVar38 >> 0x20) * -0x20)
                                    ));
      *puVar16 = CONCAT26((short)((ulong)uVar39 >> 0x30) + (char)((ulong)uVar38 >> 0x18) * -0x20,
                          CONCAT24((short)((ulong)uVar39 >> 0x20) +
                                   (char)((ulong)uVar38 >> 0x10) * -0x20,
                                   CONCAT22((short)((ulong)uVar39 >> 0x10) +
                                            (char)((ulong)uVar38 >> 8) * -0x20,
                                            (short)uVar39 + (char)uVar38 * -0x20)));
      puVar16 = puVar16 + 4;
    } while (uVar19 != 0);
    if (uVar15 != uVar17) goto LAB_00126648;
  }
  speex_bits_pack(param_4,iVar31,6);
  if ((int)param_3 < 1) goto LAB_00126768;
  if (param_3 < 0x10) {
    uVar19 = 0;
LAB_001266f0:
    lVar18 = uVar17 - uVar19;
    psVar10 = (short *)(param_2 + uVar19 * 2);
    do {
      lVar18 = lVar18 + -1;
      *psVar10 = (short)((int)*psVar10 + 1U >> 1);
      psVar10 = psVar10 + 1;
    } while (lVar18 != 0);
  }
  else {
    uVar19 = uVar17 & 0xfffffff0;
    puVar16 = (undefined8 *)(param_2 + 0x10);
    uVar15 = uVar19;
    do {
      uVar33 = puVar16[-1];
      uVar30 = puVar16[-2];
      uVar38 = puVar16[1];
      uVar35 = *puVar16;
      uVar15 = uVar15 - 0x10;
      puVar16[-1] = CONCAT26((short)((int)(short)((ulong)uVar33 >> 0x30) + 1U >> 1),
                             CONCAT24((short)((int)(short)((ulong)uVar33 >> 0x20) + 1U >> 1),
                                      CONCAT22((short)((int)(short)((ulong)uVar33 >> 0x10) + 1U >> 1
                                                      ),(short)((int)(short)uVar33 + 1U >> 1))));
      puVar16[-2] = CONCAT26((short)((int)(short)((ulong)uVar30 >> 0x30) + 1U >> 1),
                             CONCAT24((short)((int)(short)((ulong)uVar30 >> 0x20) + 1U >> 1),
                                      CONCAT22((short)((int)(short)((ulong)uVar30 >> 0x10) + 1U >> 1
                                                      ),(short)((int)(short)uVar30 + 1U >> 1))));
      puVar16[1] = CONCAT26((short)((int)(short)((ulong)uVar38 >> 0x30) + 1U >> 1),
                            CONCAT24((short)((int)(short)((ulong)uVar38 >> 0x20) + 1U >> 1),
                                     CONCAT22((short)((int)(short)((ulong)uVar38 >> 0x10) + 1U >> 1)
                                              ,(short)((int)(short)uVar38 + 1U >> 1))));
      *puVar16 = CONCAT26((short)((int)(short)((ulong)uVar35 >> 0x30) + 1U >> 1),
                          CONCAT24((short)((int)(short)((ulong)uVar35 >> 0x20) + 1U >> 1),
                                   CONCAT22((short)((int)(short)((ulong)uVar35 >> 0x10) + 1U >> 1),
                                            (short)((int)(short)uVar35 + 1U >> 1))));
      puVar16 = puVar16 + 4;
    } while (uVar15 != 0);
    if (uVar19 != uVar17) goto LAB_001266f0;
  }
  if (0 < (int)param_3) {
    if ((param_3 < 0x10) || ((param_2 < param_1 + uVar17 * 2 && (param_1 < param_2 + uVar17 * 2))))
    {
      uVar15 = 0;
    }
    else {
      uVar15 = uVar17 & 0xfffffff0;
      puVar16 = (undefined8 *)(param_1 + 0x10);
      puVar20 = (undefined8 *)(param_2 + 0x10);
      uVar19 = uVar15;
      do {
        uVar33 = puVar16[-1];
        uVar30 = puVar16[-2];
        uVar38 = puVar16[1];
        uVar35 = *puVar16;
        uVar41 = puVar20[-1];
        uVar39 = puVar20[-2];
        uVar45 = puVar20[1];
        uVar43 = *puVar20;
        puVar16 = puVar16 + 4;
        uVar19 = uVar19 - 0x10;
        puVar20[-1] = CONCAT26((short)((ulong)uVar33 >> 0x30) - (short)((ulong)uVar41 >> 0x30),
                               CONCAT24((short)((ulong)uVar33 >> 0x20) -
                                        (short)((ulong)uVar41 >> 0x20),
                                        CONCAT22((short)((ulong)uVar33 >> 0x10) -
                                                 (short)((ulong)uVar41 >> 0x10),
                                                 (short)uVar33 - (short)uVar41)));
        puVar20[-2] = CONCAT26((short)((ulong)uVar30 >> 0x30) - (short)((ulong)uVar39 >> 0x30),
                               CONCAT24((short)((ulong)uVar30 >> 0x20) -
                                        (short)((ulong)uVar39 >> 0x20),
                                        CONCAT22((short)((ulong)uVar30 >> 0x10) -
                                                 (short)((ulong)uVar39 >> 0x10),
                                                 (short)uVar30 - (short)uVar39)));
        puVar20[1] = CONCAT26((short)((ulong)uVar38 >> 0x30) - (short)((ulong)uVar45 >> 0x30),
                              CONCAT24((short)((ulong)uVar38 >> 0x20) -
                                       (short)((ulong)uVar45 >> 0x20),
                                       CONCAT22((short)((ulong)uVar38 >> 0x10) -
                                                (short)((ulong)uVar45 >> 0x10),
                                                (short)uVar38 - (short)uVar45)));
        *puVar20 = CONCAT26((short)((ulong)uVar35 >> 0x30) - (short)((ulong)uVar43 >> 0x30),
                            CONCAT24((short)((ulong)uVar35 >> 0x20) - (short)((ulong)uVar43 >> 0x20)
                                     ,CONCAT22((short)((ulong)uVar35 >> 0x10) -
                                               (short)((ulong)uVar43 >> 0x10),
                                               (short)uVar35 - (short)uVar43)));
        puVar20 = puVar20 + 4;
      } while (uVar19 != 0);
      if (uVar15 == uVar17) goto LAB_00126768;
    }
    lVar18 = uVar17 - uVar15;
    psVar10 = (short *)(param_2 + uVar15 * 2);
    psVar12 = (short *)(param_1 + uVar15 * 2);
    do {
      lVar18 = lVar18 + -1;
      *psVar10 = *psVar12 - *psVar10;
      psVar10 = psVar10 + 1;
      psVar12 = psVar12 + 1;
    } while (lVar18 != 0);
  }
LAB_00126768:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

