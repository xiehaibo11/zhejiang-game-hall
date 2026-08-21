
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00123298(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  bool bVar11;
  short *psVar12;
  short *psVar16;
  uint uVar17;
  undefined2 *puVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  short *psVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  undefined2 *puVar28;
  undefined1 (*pauVar29) [16];
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  int *piVar33;
  short sVar34;
  int iVar35;
  int iVar36;
  short sVar38;
  short sVar39;
  int iVar40;
  short sVar41;
  int iVar42;
  undefined1 auVar37 [16];
  int iVar43;
  short sVar44;
  short sVar47;
  short sVar48;
  short sVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  short sVar50;
  short sVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  short sVar55;
  short sVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  short *psVar13;
  short *psVar14;
  short *psVar15;
  
  uVar17 = *param_1;
  uVar21 = (ulong)uVar17;
  uVar5 = param_1[1];
  uVar6 = (ulong)uVar5;
  piVar33 = *(int **)(param_1 + 0x16);
  iVar35 = uVar5 * 2;
  uVar26 = iVar35 - uVar17;
  if (0 < (int)uVar26) {
    uVar20 = *(ulong *)(param_1 + 0x38);
    uVar27 = *(ulong *)(param_1 + 0x12);
    uVar23 = (ulong)uVar26;
    if ((uVar26 < 0x10) || ((uVar27 < uVar20 + uVar23 * 2 && (uVar20 < uVar27 + uVar23 * 2)))) {
      uVar30 = 0;
    }
    else {
      uVar30 = uVar23 & 0xfffffff0;
      pauVar29 = (undefined1 (*) [16])(uVar20 + 0x10);
      puVar31 = (undefined8 *)(uVar27 + 0x10);
      uVar32 = uVar30;
      do {
        auVar37 = pauVar29[-1];
        auVar59 = *pauVar29;
        pauVar29 = pauVar29 + 2;
        uVar32 = uVar32 - 0x10;
        puVar31[-1] = auVar37._8_8_;
        puVar31[-2] = auVar37._0_8_;
        puVar31[1] = auVar59._8_8_;
        *puVar31 = auVar59._0_8_;
        puVar31 = puVar31 + 4;
      } while (uVar32 != 0);
      if (uVar30 == uVar23) goto LAB_00123318;
    }
    lVar24 = uVar23 - uVar30;
    puVar18 = (undefined2 *)(uVar20 + uVar30 * 2);
    puVar28 = (undefined2 *)(uVar27 + uVar30 * 2);
    do {
      lVar24 = lVar24 + -1;
      *puVar28 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar28 = puVar28 + 1;
    } while (lVar24 != 0);
  }
LAB_00123318:
  if (0 < (int)uVar17) {
    lVar24 = *(long *)(param_1 + 0x12);
    if (uVar17 < 0x10) {
LAB_00123330:
      uVar20 = 0;
      iVar36 = 0;
    }
    else {
      uVar20 = 0;
      iVar36 = 0;
      if (((int)uVar26 <= (int)(uVar26 + (int)(uVar21 - 1))) &&
         (iVar36 = 0, uVar21 - 1 >> 0x20 == 0)) {
        if ((param_2 < lVar24 + (uVar21 + (long)(int)uVar26) * 2) &&
           ((ulong)(lVar24 + (long)(int)uVar26 * 2) < param_2 + uVar21 * 2)) goto LAB_00123330;
        uVar20 = uVar21 & 0xfffffff0;
        pauVar29 = (undefined1 (*) [16])(param_2 + 0x10);
        uVar23 = uVar20;
        uVar1 = uVar26;
        do {
          auVar37 = pauVar29[-1];
          auVar59 = *pauVar29;
          puVar31 = (undefined8 *)(lVar24 + (long)(int)uVar1 * 2);
          pauVar29 = pauVar29 + 2;
          uVar23 = uVar23 - 0x10;
          uVar1 = uVar1 + 0x10;
          puVar31[1] = auVar37._8_8_;
          *puVar31 = auVar37._0_8_;
          puVar31[3] = auVar59._8_8_;
          puVar31[2] = auVar59._0_8_;
        } while (uVar23 != 0);
        iVar36 = (int)uVar20;
        if (uVar20 == uVar21) goto LAB_0012335c;
      }
    }
    lVar25 = uVar21 - uVar20;
    iVar36 = (iVar36 + iVar35) - uVar17;
    puVar18 = (undefined2 *)(param_2 + uVar20 * 2);
    do {
      lVar25 = lVar25 + -1;
      *(undefined2 *)(lVar24 + (long)iVar36 * 2) = *puVar18;
      iVar36 = iVar36 + 1;
      puVar18 = puVar18 + 1;
    } while (lVar25 != 0);
  }
LAB_0012335c:
  if (0 < (int)uVar26) {
    uVar21 = *(ulong *)(param_1 + 0x38);
    uVar20 = (ulong)uVar26;
    if (uVar26 < 0x10) {
LAB_00123374:
      uVar23 = 0;
    }
    else {
      iVar36 = uVar17 - uVar26;
      uVar23 = 0;
      if ((iVar36 <= iVar36 + (int)(uVar20 - 1)) && (uVar20 - 1 >> 0x20 == 0)) {
        if ((uVar21 < param_2 + (uVar20 + (long)iVar36) * 2) &&
           (param_2 + (long)iVar36 * 2 < uVar21 + uVar20 * 2)) goto LAB_00123374;
        uVar23 = uVar20 & 0xfffffff0;
        puVar31 = (undefined8 *)(uVar21 + 0x10);
        uVar27 = uVar23;
        do {
          pauVar29 = (undefined1 (*) [16])(param_2 + (long)iVar36 * 2);
          auVar37 = *pauVar29;
          auVar59 = pauVar29[1];
          uVar27 = uVar27 - 0x10;
          iVar36 = iVar36 + 0x10;
          puVar31[-1] = auVar37._8_8_;
          puVar31[-2] = auVar37._0_8_;
          puVar31[1] = auVar59._8_8_;
          *puVar31 = auVar59._0_8_;
          puVar31 = puVar31 + 4;
        } while (uVar27 != 0);
        if (uVar23 == uVar20) goto LAB_0012339c;
      }
    }
    iVar36 = (int)uVar23 + uVar17 * 2 + uVar5 * -2;
    lVar24 = uVar20 - uVar23;
    puVar18 = (undefined2 *)(uVar21 + uVar23 * 2);
    do {
      lVar25 = (long)iVar36;
      lVar24 = lVar24 + -1;
      iVar36 = iVar36 + 1;
      *puVar18 = *(undefined2 *)(param_2 + lVar25 * 2);
      puVar18 = puVar18 + 1;
    } while (lVar24 != 0);
  }
LAB_0012339c:
  if ((int)uVar5 < 1) {
LAB_0012344c:
    uVar17 = 0;
  }
  else {
    uVar20 = *(ulong *)(param_1 + 0x12);
    uVar23 = *(ulong *)(param_1 + 0x1c);
    uVar27 = (ulong)iVar35;
    uVar21 = uVar27;
    if ((long)uVar27 < 2) {
      uVar21 = 1;
    }
    if (uVar21 < 0x10) {
LAB_001233e4:
      uVar30 = 0;
LAB_001233e8:
      do {
        lVar24 = uVar30 * 2;
        uVar30 = uVar30 + 1;
        *(short *)(uVar20 + lVar24) =
             (short)((uint)((int)*(short *)(uVar23 + lVar24) * (int)*(short *)(uVar20 + lVar24)) >>
                    0xf);
      } while ((long)uVar30 < (long)uVar27);
    }
    else {
      uVar30 = uVar27;
      if ((long)uVar27 < 2) {
        uVar30 = 1;
      }
      if ((uVar20 < uVar23 + uVar30 * 2) && (uVar23 < uVar20 + uVar30 * 2)) goto LAB_001233e4;
      uVar30 = uVar21 & 0x7ffffffffffffff0;
      psVar16 = (short *)(uVar20 + 0x10);
      pauVar29 = (undefined1 (*) [16])(uVar23 + 0x10);
      uVar32 = uVar30;
      do {
        sVar34 = *(short *)pauVar29[-1];
        sVar38 = *(short *)(pauVar29[-1] + 2);
        sVar39 = *(short *)(pauVar29[-1] + 4);
        sVar41 = *(short *)(pauVar29[-1] + 6);
        pauVar7 = pauVar29 + -1;
        pauVar8 = pauVar29 + -1;
        pauVar9 = pauVar29 + -1;
        pauVar10 = pauVar29 + -1;
        auVar37 = *pauVar29;
        uVar32 = uVar32 - 0x10;
        pauVar29 = pauVar29 + 2;
        *(ulong *)(psVar16 + -4) =
             CONCAT26((short)((uint)((int)*(short *)(*pauVar10 + 0xe) * (int)psVar16[-1]) >> 0xf),
                      CONCAT24((short)((uint)((int)*(short *)(*pauVar9 + 0xc) * (int)psVar16[-2]) >>
                                      0xf),
                               CONCAT22((short)((uint)((int)*(short *)(*pauVar8 + 10) *
                                                      (int)psVar16[-3]) >> 0xf),
                                        (short)((uint)((int)*(short *)(*pauVar7 + 8) *
                                                      (int)psVar16[-4]) >> 0xf))));
        *(ulong *)(psVar16 + -8) =
             CONCAT26((short)((uint)((int)sVar41 * (int)psVar16[-5]) >> 0xf),
                      CONCAT24((short)((uint)((int)sVar39 * (int)psVar16[-6]) >> 0xf),
                               CONCAT22((short)((uint)((int)sVar38 * (int)psVar16[-7]) >> 0xf),
                                        (short)((uint)((int)sVar34 * (int)psVar16[-8]) >> 0xf))));
        *(ulong *)(psVar16 + 4) =
             CONCAT26((short)((uint)((int)auVar37._14_2_ * (int)psVar16[7]) >> 0xf),
                      CONCAT24((short)((uint)((int)auVar37._12_2_ * (int)psVar16[6]) >> 0xf),
                               CONCAT22((short)((uint)((int)auVar37._10_2_ * (int)psVar16[5]) >> 0xf
                                               ),(short)((uint)((int)auVar37._8_2_ * (int)psVar16[4]
                                                               ) >> 0xf))));
        *(ulong *)psVar16 =
             CONCAT26((short)((uint)((int)auVar37._6_2_ * (int)psVar16[3]) >> 0xf),
                      CONCAT24((short)((uint)((int)auVar37._4_2_ * (int)psVar16[2]) >> 0xf),
                               CONCAT22((short)((uint)((int)auVar37._2_2_ * (int)psVar16[1]) >> 0xf)
                                        ,(short)((uint)((int)auVar37._0_2_ * (int)*psVar16) >> 0xf))
                              ));
        psVar16 = psVar16 + 0x10;
      } while (uVar32 != 0);
      if (uVar21 != uVar30) goto LAB_001233e8;
    }
    if ((int)uVar5 < 1) goto LAB_0012344c;
    lVar24 = 0;
    uVar17 = 0;
    do {
      sVar34 = *(short *)(*(long *)(param_1 + 0x12) + lVar24 * 2);
      lVar24 = lVar24 + 1;
      uVar26 = -(int)sVar34;
      if (-1 < sVar34) {
        uVar26 = (uint)sVar34;
      }
      if ((int)uVar17 <= (int)uVar26) {
        uVar17 = uVar26;
      }
      uVar17 = (uint)(short)uVar17;
    } while (lVar24 < iVar35);
  }
  bVar11 = uVar17 >> 0x10 != 0;
  uVar26 = uVar17 >> 0x10;
  if (!bVar11) {
    uVar26 = uVar17;
  }
  uVar17 = uVar26 >> 8;
  if (uVar26 < 0x100) {
    uVar17 = uVar26;
  }
  uVar3 = (ushort)bVar11 << 4 | 8;
  if (uVar26 < 0x100) {
    uVar3 = (ushort)bVar11 << 4;
  }
  uVar26 = uVar17 >> 4;
  if (uVar17 < 0x10) {
    uVar26 = uVar17;
  }
  uVar4 = uVar3 | 4;
  if (uVar17 < 0x10) {
    uVar4 = uVar3;
  }
  lVar24 = *(long *)(param_1 + 0x12);
  uVar17 = uVar26 >> 2;
  if (uVar26 < 4) {
    uVar17 = uVar26;
  }
  uVar3 = uVar4 | 2;
  if (uVar26 < 4) {
    uVar3 = uVar4;
  }
  if (1 < uVar17) {
    uVar3 = uVar3 + 1;
  }
  uVar17 = 0xe - (int)(short)uVar3;
  param_1[0x42] = uVar17;
  if (0 < (int)uVar5) {
    uVar20 = (ulong)iVar35;
    uVar21 = uVar20;
    if ((long)uVar20 < 2) {
      uVar21 = 1;
    }
    if (uVar21 < 0x10) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar21 & 0x7ffffffffffffff0;
      auVar37._4_4_ = uVar17;
      auVar37._0_4_ = uVar17;
      auVar37._8_4_ = uVar17;
      auVar37._12_4_ = uVar17;
      psVar16 = (short *)(lVar24 + 0x10);
      uVar27 = uVar23;
      do {
        uVar27 = uVar27 - 0x10;
        auVar56._0_4_ = (int)psVar16[-8];
        auVar56._4_4_ = (int)psVar16[-7];
        auVar56._8_4_ = (int)psVar16[-6];
        auVar56._12_4_ = (int)psVar16[-5];
        auVar61._0_4_ = (int)*psVar16;
        auVar61._4_4_ = (int)psVar16[1];
        auVar61._8_4_ = (int)psVar16[2];
        auVar61._12_4_ = (int)psVar16[3];
        auVar59._0_4_ = (int)psVar16[-4];
        auVar59._4_4_ = (int)psVar16[-3];
        auVar59._8_4_ = (int)psVar16[-2];
        auVar59._12_4_ = (int)psVar16[-1];
        auVar51._0_4_ = (int)psVar16[4];
        auVar51._4_4_ = (int)psVar16[5];
        auVar51._8_4_ = (int)psVar16[6];
        auVar51._12_4_ = (int)psVar16[7];
        auVar56 = NEON_ushl(auVar56,auVar37,4);
        auVar61 = NEON_ushl(auVar61,auVar37,4);
        auVar59 = NEON_ushl(auVar59,auVar37,4);
        auVar51 = NEON_ushl(auVar51,auVar37,4);
        auVar57._0_8_ =
             CONCAT26(auVar56._12_2_,CONCAT24(auVar56._8_2_,CONCAT22(auVar56._4_2_,auVar56._0_2_)));
        auVar62._0_8_ =
             CONCAT26(auVar61._12_2_,CONCAT24(auVar61._8_2_,CONCAT22(auVar61._4_2_,auVar61._0_2_)));
        auVar57._8_2_ = auVar59._0_2_;
        auVar57._10_2_ = auVar59._4_2_;
        auVar57._12_2_ = auVar59._8_2_;
        auVar57._14_2_ = auVar59._12_2_;
        auVar62._8_2_ = auVar51._0_2_;
        auVar62._10_2_ = auVar51._4_2_;
        auVar62._12_2_ = auVar51._8_2_;
        auVar62._14_2_ = auVar51._12_2_;
        *(long *)(psVar16 + -4) = auVar57._8_8_;
        *(undefined8 *)(psVar16 + -8) = auVar57._0_8_;
        *(long *)(psVar16 + 4) = auVar62._8_8_;
        *(undefined8 *)psVar16 = auVar62._0_8_;
        psVar16 = psVar16 + 0x10;
      } while (uVar27 != 0);
      if (uVar21 == uVar23) goto LAB_00123648;
    }
    do {
      lVar25 = uVar23 * 2;
      uVar23 = uVar23 + 1;
      *(short *)(lVar24 + lVar25) =
           (short)((int)*(short *)(lVar24 + lVar25) << (ulong)(uVar17 & 0x1f));
    } while ((long)uVar23 < (long)uVar20);
  }
LAB_00123648:
  spx_fft(*(undefined8 *)(param_1 + 0x40),lVar24,*(undefined8 *)(param_1 + 0x14));
  psVar16 = *(short **)(param_1 + 0x14);
  *piVar33 = (int)*psVar16 * (int)*psVar16;
  if (1 < (int)uVar5) {
    if (uVar6 - 1 < 8) {
      lVar24 = 1;
    }
    else {
      uVar17 = uVar5 - 1 & 7;
      lVar25 = (uVar6 - 1) - (ulong)uVar17;
      psVar22 = psVar16 + 9;
      lVar24 = lVar25 + 1;
      piVar19 = piVar33 + 5;
      do {
        sVar34 = *psVar22;
        sVar44 = psVar22[1];
        sVar38 = psVar22[2];
        sVar47 = psVar22[3];
        sVar39 = psVar22[4];
        sVar48 = psVar22[5];
        sVar41 = psVar22[6];
        sVar49 = psVar22[7];
        sVar50 = psVar22[-8];
        sVar55 = psVar22[-7];
        sVar54 = psVar22[-6];
        sVar60 = psVar22[-5];
        psVar12 = psVar22 + -4;
        psVar13 = psVar22 + -3;
        psVar14 = psVar22 + -2;
        psVar15 = psVar22 + -1;
        psVar22 = psVar22 + 0x10;
        lVar25 = lVar25 + -8;
        *(ulong *)(piVar19 + -2) =
             CONCAT44((int)*psVar15 * (int)*psVar15 + (int)*psVar14 * (int)*psVar14,
                      (int)*psVar13 * (int)*psVar13 + (int)*psVar12 * (int)*psVar12);
        *(ulong *)(piVar19 + -4) =
             CONCAT44((int)sVar60 * (int)sVar60 + (int)sVar54 * (int)sVar54,
                      (int)sVar55 * (int)sVar55 + (int)sVar50 * (int)sVar50);
        piVar19[2] = (int)sVar48 * (int)sVar48 + (int)sVar39 * (int)sVar39;
        piVar19[3] = (int)sVar49 * (int)sVar49 + (int)sVar41 * (int)sVar41;
        *piVar19 = (int)sVar44 * (int)sVar44 + (int)sVar34 * (int)sVar34;
        piVar19[1] = (int)sVar47 * (int)sVar47 + (int)sVar38 * (int)sVar38;
        piVar19 = piVar19 + 8;
      } while (lVar25 != 0);
      if (uVar17 == 0) goto LAB_001236fc;
    }
    psVar16 = psVar16 + lVar24 * 2;
    lVar25 = uVar6 - lVar24;
    piVar19 = piVar33 + lVar24;
    do {
      psVar22 = psVar16 + -1;
      sVar34 = *psVar16;
      lVar25 = lVar25 + -1;
      psVar16 = psVar16 + 2;
      *piVar19 = (int)*psVar22 * (int)*psVar22 + (int)sVar34 * (int)sVar34;
      piVar19 = piVar19 + 1;
    } while (lVar25 != 0);
  }
LAB_001236fc:
  if (0 < (int)uVar5) {
    uVar21 = *(ulong *)(param_1 + 0x16);
    puVar2 = param_1 + 0x42;
    if ((uVar5 < 8) ||
       ((uVar21 < (long)param_1 + 0x109U && (puVar2 < (uint *)(uVar21 + uVar6 * 4))))) {
      uVar20 = 0;
    }
    else {
      auVar52._8_4_ = 1;
      auVar52._0_8_ = 0x100000001;
      auVar52._12_4_ = 1;
      uVar20 = uVar6 & 0xfffffff8;
      piVar19 = (int *)(uVar21 + 0x10);
      auVar37 = NEON_ushl(ZEXT416(*puVar2),_DAT_00135a50,4);
      iVar35 = auVar37._0_4_;
      auVar45._4_4_ = iVar35;
      auVar45._0_4_ = iVar35;
      auVar45._8_4_ = iVar35;
      auVar45._12_4_ = iVar35;
      auVar37 = NEON_ushl(auVar52,auVar45,4);
      iVar36 = auVar37._0_4_ >> 1;
      iVar40 = auVar37._4_4_ >> 1;
      iVar42 = auVar37._8_4_ >> 1;
      iVar43 = auVar37._12_4_ >> 1;
      auVar46._0_4_ = -iVar35;
      auVar46._4_4_ = -iVar35;
      auVar46._8_4_ = -iVar35;
      auVar46._12_4_ = -iVar35;
      uVar23 = uVar20;
      do {
        uVar23 = uVar23 - 8;
        auVar53._0_4_ = iVar36 + piVar19[-4];
        auVar53._4_4_ = iVar40 + piVar19[-3];
        auVar53._8_4_ = iVar42 + piVar19[-2];
        auVar53._12_4_ = iVar43 + piVar19[-1];
        auVar58._0_4_ = iVar36 + *piVar19;
        auVar58._4_4_ = iVar40 + piVar19[1];
        auVar58._8_4_ = iVar42 + piVar19[2];
        auVar58._12_4_ = iVar43 + piVar19[3];
        auVar37 = NEON_sshl(auVar53,auVar46,4);
        auVar59 = NEON_sshl(auVar58,auVar46,4);
        *(long *)(piVar19 + -2) = auVar37._8_8_;
        *(long *)(piVar19 + -4) = auVar37._0_8_;
        *(long *)(piVar19 + 2) = auVar59._8_8_;
        *(long *)piVar19 = auVar59._0_8_;
        piVar19 = piVar19 + 8;
      } while (uVar23 != 0);
      if (uVar20 == uVar6) goto LAB_00123760;
    }
    lVar24 = uVar6 - uVar20;
    piVar19 = (int *)(uVar21 + uVar20 * 4);
    do {
      lVar24 = lVar24 + -1;
      *piVar19 = *piVar19 + ((1 << (ulong)(*puVar2 << 1 & 0x1f)) >> 1) >> (*puVar2 << 1 & 0x1f);
      piVar19 = piVar19 + 1;
    } while (lVar24 != 0);
  }
LAB_00123760:
  filterbank_compute_bank32(*(undefined8 *)(param_1 + 4),piVar33,piVar33 + (int)uVar5);
  return;
}

