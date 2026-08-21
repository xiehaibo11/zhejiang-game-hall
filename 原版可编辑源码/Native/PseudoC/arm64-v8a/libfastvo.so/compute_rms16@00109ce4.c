
uint compute_rms16(short *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  short *psVar11;
  short *psVar26;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  short *psVar44;
  ulong uVar45;
  ulong uVar46;
  short *psVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  short sVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
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
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar30;
  short *psVar31;
  short *psVar32;
  short *psVar33;
  short *psVar34;
  short *psVar35;
  short *psVar36;
  short *psVar37;
  short *psVar38;
  short *psVar39;
  short *psVar40;
  
  if ((int)param_2 < 1) {
    iVar48 = 10;
LAB_00109d70:
    uVar41 = 2;
  }
  else {
    uVar42 = (ulong)param_2;
    iVar48 = 10;
    psVar44 = param_1;
    do {
      sVar56 = *psVar44;
      iVar49 = -(int)sVar56;
      if (-1 < sVar56) {
        iVar49 = (int)sVar56;
      }
      if (iVar49 <= (short)iVar48) {
        iVar49 = iVar48;
      }
      uVar42 = uVar42 - 1;
      iVar48 = (int)(short)iVar49;
      psVar44 = psVar44 + 1;
    } while (uVar42 != 0);
    if (0x3fff < iVar48) {
      if ((int)param_2 < 1) {
        iVar48 = 0;
      }
      else {
        uVar42 = ((long)(int)param_2 - 1U >> 2) + 1;
        if (uVar42 < 8) {
          lVar43 = 0;
          iVar48 = 0;
        }
        else {
          uVar45 = uVar42 & 0x7ffffffffffffff8;
          psVar44 = param_1 + 0x10;
          iVar48 = 0;
          iVar49 = 0;
          iVar50 = 0;
          iVar51 = 0;
          lVar43 = uVar45 << 2;
          iVar52 = 0;
          iVar53 = 0;
          iVar54 = 0;
          iVar55 = 0;
          uVar46 = uVar45;
          do {
            psVar47 = psVar44 + -0x10;
            sVar56 = *psVar44;
            psVar11 = psVar44 + 1;
            psVar17 = psVar44 + 2;
            psVar24 = psVar44 + 3;
            psVar12 = psVar44 + 4;
            psVar13 = psVar44 + 5;
            psVar14 = psVar44 + 6;
            psVar15 = psVar44 + 7;
            psVar16 = psVar44 + 8;
            psVar25 = psVar44 + 9;
            psVar18 = psVar44 + 10;
            psVar19 = psVar44 + 0xb;
            psVar20 = psVar44 + 0xc;
            psVar21 = psVar44 + 0xd;
            psVar22 = psVar44 + 0xe;
            psVar23 = psVar44 + 0xf;
            psVar26 = psVar44 + -0xf;
            psVar39 = psVar44 + -0xe;
            psVar40 = psVar44 + -0xd;
            psVar27 = psVar44 + -0xc;
            psVar28 = psVar44 + -0xb;
            psVar29 = psVar44 + -10;
            psVar30 = psVar44 + -9;
            psVar31 = psVar44 + -8;
            psVar32 = psVar44 + -7;
            psVar33 = psVar44 + -6;
            psVar34 = psVar44 + -5;
            psVar35 = psVar44 + -4;
            psVar36 = psVar44 + -3;
            psVar37 = psVar44 + -2;
            psVar38 = psVar44 + -1;
            uVar46 = uVar46 - 8;
            psVar44 = psVar44 + 0x20;
            iVar52 = iVar52 + ((uint)((int)(*psVar11 >> 1) * (int)(*psVar11 >> 1) +
                                      (int)(sVar56 >> 1) * (int)(sVar56 >> 1) +
                                      (int)(*psVar17 >> 1) * (int)(*psVar17 >> 1) +
                                     (int)(*psVar24 >> 1) * (int)(*psVar24 >> 1)) >> 6);
            iVar53 = iVar53 + ((uint)((int)(*psVar13 >> 1) * (int)(*psVar13 >> 1) +
                                      (int)(*psVar12 >> 1) * (int)(*psVar12 >> 1) +
                                      (int)(*psVar14 >> 1) * (int)(*psVar14 >> 1) +
                                     (int)(*psVar15 >> 1) * (int)(*psVar15 >> 1)) >> 6);
            iVar54 = iVar54 + ((uint)((int)(*psVar25 >> 1) * (int)(*psVar25 >> 1) +
                                      (int)(*psVar16 >> 1) * (int)(*psVar16 >> 1) +
                                      (int)(*psVar18 >> 1) * (int)(*psVar18 >> 1) +
                                     (int)(*psVar19 >> 1) * (int)(*psVar19 >> 1)) >> 6);
            iVar55 = iVar55 + ((uint)((int)(*psVar21 >> 1) * (int)(*psVar21 >> 1) +
                                      (int)(*psVar20 >> 1) * (int)(*psVar20 >> 1) +
                                      (int)(*psVar22 >> 1) * (int)(*psVar22 >> 1) +
                                     (int)(*psVar23 >> 1) * (int)(*psVar23 >> 1)) >> 6);
            iVar48 = iVar48 + ((uint)((int)(*psVar26 >> 1) * (int)(*psVar26 >> 1) +
                                      (int)(*psVar47 >> 1) * (int)(*psVar47 >> 1) +
                                      (int)(*psVar39 >> 1) * (int)(*psVar39 >> 1) +
                                     (int)(*psVar40 >> 1) * (int)(*psVar40 >> 1)) >> 6);
            iVar49 = iVar49 + ((uint)((int)(*psVar28 >> 1) * (int)(*psVar28 >> 1) +
                                      (int)(*psVar27 >> 1) * (int)(*psVar27 >> 1) +
                                      (int)(*psVar29 >> 1) * (int)(*psVar29 >> 1) +
                                     (int)(*psVar30 >> 1) * (int)(*psVar30 >> 1)) >> 6);
            iVar50 = iVar50 + ((uint)((int)(*psVar32 >> 1) * (int)(*psVar32 >> 1) +
                                      (int)(*psVar31 >> 1) * (int)(*psVar31 >> 1) +
                                      (int)(*psVar33 >> 1) * (int)(*psVar33 >> 1) +
                                     (int)(*psVar34 >> 1) * (int)(*psVar34 >> 1)) >> 6);
            iVar51 = iVar51 + ((uint)((int)(*psVar36 >> 1) * (int)(*psVar36 >> 1) +
                                      (int)(*psVar35 >> 1) * (int)(*psVar35 >> 1) +
                                      (int)(*psVar37 >> 1) * (int)(*psVar37 >> 1) +
                                     (int)(*psVar38 >> 1) * (int)(*psVar38 >> 1)) >> 6);
          } while (uVar46 != 0);
          iVar48 = iVar52 + iVar48 + iVar53 + iVar49 + iVar54 + iVar50 + iVar55 + iVar51;
          if (uVar42 == uVar45) goto LAB_0010a0b8;
        }
        param_1 = param_1 + lVar43 + 2;
        do {
          lVar43 = lVar43 + 4;
          iVar48 = iVar48 + ((uint)(((int)param_1[-2] >> 1) * ((int)param_1[-2] >> 1) +
                                    ((int)param_1[-1] >> 1) * ((int)param_1[-1] >> 1) +
                                    ((int)*param_1 >> 1) * ((int)*param_1 >> 1) +
                                   ((int)param_1[1] >> 1) * ((int)param_1[1] >> 1)) >> 6);
          param_1 = param_1 + 4;
        } while (lVar43 < (int)param_2);
      }
LAB_0010a0b8:
      uVar41 = 0;
      if (param_2 != 0) {
        uVar41 = iVar48 / (int)param_2;
      }
      bVar10 = uVar41 >> 0x10 != 0;
      uVar5 = uVar41 >> 0x10;
      if (!bVar10) {
        uVar5 = uVar41;
      }
      uVar4 = uVar5 >> 8;
      if (uVar5 < 0x100) {
        uVar4 = uVar5;
      }
      uVar1 = (uint)bVar10 << 3 | 4;
      if (uVar5 < 0x100) {
        uVar1 = (uint)bVar10 << 3;
      }
      uVar5 = uVar4 >> 4;
      if (uVar4 < 0x10) {
        uVar5 = uVar4;
      }
      uVar3 = uVar1 | 2;
      if (uVar4 < 0x10) {
        uVar3 = uVar1;
      }
      uVar3 = uVar3 | 3 < uVar5;
      uVar5 = 0xd - uVar3;
      sVar56 = (short)((int)uVar41 >> (uVar3 * 2 - 0xc & 0x1f));
      if ((ushort)uVar3 < 7) {
        sVar56 = (short)(uVar41 << (ulong)(uVar3 * -2 + 0xc & 0x1f));
      }
      iVar48 = (int)sVar56;
      iVar48 = (int)((((int)(((iVar48 * 0x41b0 + -0x31530000 >> 0x10) * iVar48 * 4 & 0xffff0000U) +
                            0x52b50000) >> 0x10) * iVar48 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
      uVar41 = iVar48 >> (uVar5 & 0x1f);
      if ((int)uVar5 < 1) {
        uVar41 = iVar48 << (ulong)(-uVar5 & 0x1f);
      }
      return -(uVar41 >> 0xf & 1) & 0xfff00000 | (uVar41 & 0xffff) << 4;
    }
    uVar41 = (uint)(iVar48 < 0x2000);
    if (iVar48 < 0x1000) goto LAB_00109d70;
  }
  uVar5 = 3;
  if (0x7ff < iVar48) {
    uVar5 = uVar41;
  }
  if ((int)param_2 < 1) {
    iVar48 = 0;
  }
  else {
    uVar42 = ((long)(int)param_2 - 1U >> 2) + 1;
    if (uVar42 < 8) {
      lVar43 = 0;
      iVar48 = 0;
    }
    else {
      uVar45 = uVar42 & 0x7ffffffffffffff8;
      psVar44 = param_1 + 0x10;
      iVar48 = 0;
      iVar49 = 0;
      iVar50 = 0;
      iVar51 = 0;
      lVar43 = uVar45 << 2;
      iVar52 = 0;
      iVar53 = 0;
      iVar54 = 0;
      iVar55 = 0;
      uVar46 = uVar45;
      do {
        psVar47 = psVar44 + -0x10;
        sVar56 = *psVar44;
        psVar11 = psVar44 + 1;
        psVar12 = psVar44 + 2;
        psVar13 = psVar44 + 3;
        psVar14 = psVar44 + 4;
        psVar15 = psVar44 + 5;
        psVar16 = psVar44 + 6;
        psVar17 = psVar44 + 7;
        psVar18 = psVar44 + 8;
        psVar19 = psVar44 + 9;
        psVar20 = psVar44 + 10;
        psVar21 = psVar44 + 0xb;
        psVar22 = psVar44 + 0xc;
        psVar23 = psVar44 + 0xd;
        psVar24 = psVar44 + 0xe;
        psVar25 = psVar44 + 0xf;
        psVar26 = psVar44 + -0xf;
        psVar27 = psVar44 + -0xe;
        psVar28 = psVar44 + -0xd;
        psVar29 = psVar44 + -0xc;
        psVar30 = psVar44 + -0xb;
        psVar31 = psVar44 + -10;
        psVar32 = psVar44 + -9;
        psVar33 = psVar44 + -8;
        psVar34 = psVar44 + -7;
        psVar35 = psVar44 + -6;
        psVar36 = psVar44 + -5;
        psVar37 = psVar44 + -4;
        psVar38 = psVar44 + -3;
        psVar39 = psVar44 + -2;
        psVar40 = psVar44 + -1;
        uVar46 = uVar46 - 8;
        psVar44 = psVar44 + 0x20;
        auVar60._0_4_ = (int)sVar56;
        auVar60._4_4_ = (int)*psVar14;
        auVar60._8_4_ = (int)*psVar18;
        auVar60._12_4_ = (int)*psVar22;
        auVar57._0_4_ = (int)*psVar13;
        auVar57._4_4_ = (int)*psVar17;
        auVar57._8_4_ = (int)*psVar21;
        auVar57._12_4_ = (int)*psVar25;
        auVar61._0_4_ = (int)*psVar26;
        auVar61._4_4_ = (int)*psVar30;
        auVar61._8_4_ = (int)*psVar34;
        auVar61._12_4_ = (int)*psVar38;
        auVar67._0_4_ = (int)*psVar12;
        auVar67._4_4_ = (int)*psVar16;
        auVar67._8_4_ = (int)*psVar20;
        auVar67._12_4_ = (int)*psVar24;
        auVar68._0_4_ = (int)*psVar47;
        auVar68._4_4_ = (int)*psVar29;
        auVar68._8_4_ = (int)*psVar33;
        auVar68._12_4_ = (int)*psVar37;
        auVar58._4_4_ = uVar5;
        auVar58._0_4_ = uVar5;
        auVar58._8_4_ = uVar5;
        auVar58._12_4_ = uVar5;
        auVar60 = NEON_ushl(auVar60,auVar58,4);
        auVar59._4_4_ = uVar5;
        auVar59._0_4_ = uVar5;
        auVar59._8_4_ = uVar5;
        auVar59._12_4_ = uVar5;
        auVar63._4_2_ = *psVar15;
        auVar63._0_4_ = (int)*psVar11;
        auVar63._6_2_ = *psVar15 >> 0xf;
        auVar63._8_4_ = (int)*psVar19;
        auVar63._12_4_ = (int)*psVar23;
        auVar63 = NEON_ushl(auVar63,auVar59,4);
        auVar62._4_4_ = uVar5;
        auVar62._0_4_ = uVar5;
        auVar62._8_4_ = uVar5;
        auVar62._12_4_ = uVar5;
        auVar62 = NEON_ushl(auVar61,auVar62,4);
        auVar65._4_4_ = uVar5;
        auVar65._0_4_ = uVar5;
        auVar65._8_4_ = uVar5;
        auVar65._12_4_ = uVar5;
        auVar59 = NEON_ushl(auVar68,auVar65,4);
        auVar66._4_4_ = uVar5;
        auVar66._0_4_ = uVar5;
        auVar66._8_4_ = uVar5;
        auVar66._12_4_ = uVar5;
        auVar68 = NEON_ushl(auVar67,auVar66,4);
        auVar64._0_4_ = (int)*psVar28;
        auVar64._4_4_ = (int)*psVar32;
        auVar64._8_4_ = (int)*psVar36;
        auVar64._12_4_ = (int)*psVar40;
        auVar6._4_4_ = uVar5;
        auVar6._0_4_ = uVar5;
        auVar6._8_4_ = uVar5;
        auVar6._12_4_ = uVar5;
        auVar9._4_2_ = *psVar31;
        auVar9._0_4_ = (int)*psVar27;
        auVar9._6_2_ = *psVar31 >> 0xf;
        auVar9._8_4_ = (int)*psVar35;
        auVar9._12_4_ = (int)*psVar39;
        auVar66 = NEON_ushl(auVar9,auVar6,4);
        auVar7._4_4_ = uVar5;
        auVar7._0_4_ = uVar5;
        auVar7._8_4_ = uVar5;
        auVar7._12_4_ = uVar5;
        auVar58 = NEON_ushl(auVar57,auVar7,4);
        auVar8._4_4_ = uVar5;
        auVar8._0_4_ = uVar5;
        auVar8._8_4_ = uVar5;
        auVar8._12_4_ = uVar5;
        auVar65 = NEON_ushl(auVar64,auVar8,4);
        iVar52 = iVar52 + ((uint)((int)auVar63._0_2_ * (int)auVar63._0_2_ +
                                  (int)auVar60._0_2_ * (int)auVar60._0_2_ +
                                  (int)auVar68._0_2_ * (int)auVar68._0_2_ +
                                 (int)auVar58._0_2_ * (int)auVar58._0_2_) >> 6);
        iVar53 = iVar53 + ((uint)((int)auVar63._4_2_ * (int)auVar63._4_2_ +
                                  (int)auVar60._4_2_ * (int)auVar60._4_2_ +
                                  (int)auVar68._4_2_ * (int)auVar68._4_2_ +
                                 (int)auVar58._4_2_ * (int)auVar58._4_2_) >> 6);
        iVar54 = iVar54 + ((uint)((int)auVar63._8_2_ * (int)auVar63._8_2_ +
                                  (int)auVar60._8_2_ * (int)auVar60._8_2_ +
                                  (int)auVar68._8_2_ * (int)auVar68._8_2_ +
                                 (int)auVar58._8_2_ * (int)auVar58._8_2_) >> 6);
        iVar55 = iVar55 + ((uint)((int)auVar63._12_2_ * (int)auVar63._12_2_ +
                                  (int)auVar60._12_2_ * (int)auVar60._12_2_ +
                                  (int)auVar68._12_2_ * (int)auVar68._12_2_ +
                                 (int)auVar58._12_2_ * (int)auVar58._12_2_) >> 6);
        iVar48 = iVar48 + ((uint)((int)auVar62._0_2_ * (int)auVar62._0_2_ +
                                  (int)auVar59._0_2_ * (int)auVar59._0_2_ +
                                  (int)auVar66._0_2_ * (int)auVar66._0_2_ +
                                 (int)auVar65._0_2_ * (int)auVar65._0_2_) >> 6);
        iVar49 = iVar49 + ((uint)((int)auVar62._4_2_ * (int)auVar62._4_2_ +
                                  (int)auVar59._4_2_ * (int)auVar59._4_2_ +
                                  (int)auVar66._4_2_ * (int)auVar66._4_2_ +
                                 (int)auVar65._4_2_ * (int)auVar65._4_2_) >> 6);
        iVar50 = iVar50 + ((uint)((int)auVar62._8_2_ * (int)auVar62._8_2_ +
                                  (int)auVar59._8_2_ * (int)auVar59._8_2_ +
                                  (int)auVar66._8_2_ * (int)auVar66._8_2_ +
                                 (int)auVar65._8_2_ * (int)auVar65._8_2_) >> 6);
        iVar51 = iVar51 + ((uint)((int)auVar62._12_2_ * (int)auVar62._12_2_ +
                                  (int)auVar59._12_2_ * (int)auVar59._12_2_ +
                                  (int)auVar66._12_2_ * (int)auVar66._12_2_ +
                                 (int)auVar65._12_2_ * (int)auVar65._12_2_) >> 6);
      } while (uVar46 != 0);
      iVar48 = iVar52 + iVar48 + iVar53 + iVar49 + iVar54 + iVar50 + iVar55 + iVar51;
      if (uVar42 == uVar45) goto LAB_00109f00;
    }
    param_1 = param_1 + lVar43 + 2;
    do {
      lVar43 = lVar43 + 4;
      iVar49 = (int)(short)((int)param_1[-2] << (ulong)uVar5);
      iVar50 = (int)(short)((int)param_1[-1] << (ulong)uVar5);
      iVar51 = (int)(short)((int)*param_1 << (ulong)uVar5);
      iVar52 = (int)(short)((int)param_1[1] << (ulong)uVar5);
      iVar48 = iVar48 + ((uint)(iVar49 * iVar49 + iVar50 * iVar50 + iVar51 * iVar51 +
                               iVar52 * iVar52) >> 6);
      param_1 = param_1 + 4;
    } while (lVar43 < (int)param_2);
  }
LAB_00109f00:
  uVar41 = 0;
  if (param_2 != 0) {
    uVar41 = iVar48 / (int)param_2;
  }
  bVar10 = uVar41 >> 0x10 != 0;
  uVar4 = uVar41 >> 0x10;
  if (!bVar10) {
    uVar4 = uVar41;
  }
  uVar1 = uVar4 >> 8;
  if (uVar4 < 0x100) {
    uVar1 = uVar4;
  }
  uVar3 = (uint)bVar10 << 3 | 4;
  if (uVar4 < 0x100) {
    uVar3 = (uint)bVar10 << 3;
  }
  uVar4 = uVar1 >> 4;
  if (uVar1 < 0x10) {
    uVar4 = uVar1;
  }
  uVar2 = uVar3 | 2;
  if (uVar1 < 0x10) {
    uVar2 = uVar3;
  }
  uVar2 = uVar2 | 3 < uVar4;
  uVar4 = 0xd - uVar2;
  sVar56 = (short)((int)uVar41 >> (uVar2 * 2 - 0xc & 0x1f));
  if ((ushort)uVar2 < 7) {
    sVar56 = (short)(uVar41 << (ulong)(uVar2 * -2 + 0xc & 0x1f));
  }
  iVar48 = (int)sVar56;
  iVar48 = (int)((((int)(((iVar48 * 0x41b0 + -0x31530000 >> 0x10) * iVar48 * 4 & 0xffff0000U) +
                        0x52b50000) >> 0x10) * iVar48 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
  sVar56 = (short)(iVar48 >> (uVar4 & 0x1f));
  if ((int)uVar4 < 1) {
    sVar56 = (short)(iVar48 << (ulong)(-uVar4 & 0x1f));
  }
  return (int)sVar56 << (ulong)(uVar5 ^ 3);
}

