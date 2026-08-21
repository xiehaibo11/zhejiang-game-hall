
undefined4 FT_Outline_Get_Orientation(short *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  int iVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  long lVar38;
  long lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  if (param_1 == (short *)0x0) {
    return 0;
  }
  sVar4 = param_1[1];
  if ((long)sVar4 < 1) {
    return 0;
  }
  if (sVar4 == 1) {
    return 2;
  }
  plVar19 = *(long **)(param_1 + 4);
  plVar13 = plVar19 + (long)sVar4 * 2;
  plVar1 = plVar13;
  if (plVar13 <= plVar19 + 4) {
    plVar1 = plVar19 + 4;
  }
  lVar28 = *plVar19;
  lVar20 = plVar19[1];
  uVar24 = ((long)plVar1 + (~(ulong)plVar19 - 0x10) >> 4) + 1;
  plVar1 = plVar19 + 2;
  plVar23 = plVar19;
  lVar14 = lVar20;
  lVar32 = lVar28;
  if ((1 < uVar24) && (uVar27 = uVar24 & 0x1ffffffffffffffe, uVar27 != 0)) {
    lVar14 = lVar28;
    lVar32 = lVar20;
    lVar34 = lVar20;
    lVar15 = lVar28;
    lVar33 = lVar20;
    plVar23 = plVar19 + 5;
    uVar25 = uVar27;
    lVar31 = lVar28;
    do {
      lVar38 = plVar23[-3];
      lVar39 = plVar23[-2];
      lVar17 = plVar23[-1];
      uVar25 = uVar25 - 2;
      lVar35 = lVar38;
      if (lVar15 <= lVar38) {
        lVar35 = lVar15;
      }
      lVar2 = lVar17;
      if (lVar31 <= lVar17) {
        lVar2 = lVar31;
      }
      if (lVar38 <= lVar28) {
        lVar38 = lVar28;
      }
      lVar16 = *plVar23;
      if (lVar17 <= lVar14) {
        lVar17 = lVar14;
      }
      lVar21 = lVar39;
      if (lVar33 <= lVar39) {
        lVar21 = lVar33;
      }
      lVar3 = lVar16;
      if (lVar20 <= lVar16) {
        lVar3 = lVar20;
      }
      if (lVar39 <= lVar32) {
        lVar39 = lVar32;
      }
      if (lVar16 <= lVar34) {
        lVar16 = lVar34;
      }
      lVar20 = lVar3;
      lVar28 = lVar38;
      lVar14 = lVar17;
      lVar32 = lVar39;
      lVar34 = lVar16;
      lVar15 = lVar35;
      lVar33 = lVar21;
      plVar23 = plVar23 + 4;
      lVar31 = lVar2;
    } while (uVar25 != 0);
    if (lVar39 <= lVar16) {
      lVar39 = lVar16;
    }
    if (lVar38 <= lVar17) {
      lVar38 = lVar17;
    }
    if (lVar3 <= lVar21) {
      lVar21 = lVar3;
    }
    if (lVar2 <= lVar35) {
      lVar35 = lVar2;
    }
    lVar28 = lVar35;
    lVar20 = lVar21;
    plVar1 = plVar1 + uVar27 * 2;
    plVar23 = plVar19 + uVar27 * 2;
    lVar14 = lVar39;
    lVar32 = lVar38;
    if (uVar24 == uVar27) goto LAB_010623dc;
  }
  do {
    plVar22 = plVar1;
    lVar38 = *plVar22;
    lVar39 = plVar23[3];
    lVar35 = lVar38;
    if (lVar28 <= lVar38) {
      lVar35 = lVar28;
    }
    if (lVar38 <= lVar32) {
      lVar38 = lVar32;
    }
    lVar21 = lVar39;
    if (lVar20 <= lVar39) {
      lVar21 = lVar20;
    }
    if (lVar39 <= lVar14) {
      lVar39 = lVar14;
    }
    lVar28 = lVar35;
    lVar20 = lVar21;
    plVar1 = plVar22 + 2;
    plVar23 = plVar22;
    lVar14 = lVar39;
    lVar32 = lVar38;
  } while (plVar22 + 2 < plVar13);
LAB_010623dc:
  if ((lVar35 == lVar38) || (lVar39 == lVar21)) {
    return 2;
  }
  uVar5 = -(uint)lVar35;
  if (-1 < lVar35) {
    uVar5 = (uint)lVar35;
  }
  uVar6 = -(uint)lVar38;
  if (-1 < lVar38) {
    uVar6 = (uint)lVar38;
  }
  if ((long)*param_1 < 1) {
    lVar28 = 0;
  }
  else {
    uVar5 = 0x11 - (int)LZCOUNT(uVar6 | uVar5);
    uVar6 = 0x11 - (int)LZCOUNT((int)lVar39 - (int)lVar21);
    uVar24 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
    uVar27 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU));
    lVar20 = 0;
    lVar28 = 0;
    iVar30 = 0;
    do {
      sVar4 = *(short *)(*(long *)(param_1 + 0xc) + lVar20 * 2);
      iVar26 = (int)sVar4;
      if (iVar30 <= sVar4) {
        lVar15 = (long)iVar30;
        lVar32 = plVar19[(long)sVar4 * 2];
        lVar34 = (plVar19 + (long)sVar4 * 2)[1];
        lVar14 = lVar15;
        if (lVar15 <= iVar26) {
          lVar14 = (long)iVar26;
        }
        uVar25 = (lVar14 + 1) - lVar15;
        lVar14 = lVar15;
        if ((3 < uVar25) && (uVar12 = uVar25 & 0xfffffffffffffffc, uVar12 != 0)) {
          lVar31 = 0;
          lVar14 = uVar12 + lVar15;
          plVar13 = plVar19 + lVar15 * 2 + 4;
          lVar17 = 0;
          lVar35 = 0;
          uVar29 = uVar12;
          lVar15 = lVar32;
          lVar33 = lVar34;
          do {
            auVar36._0_8_ = plVar13[-4];
            lVar38 = plVar13[-3];
            auVar36._8_8_ = plVar13[-2];
            lVar39 = plVar13[-1];
            auVar40._8_8_ = lVar32;
            auVar40._0_8_ = lVar15;
            uVar29 = uVar29 - 4;
            auVar47._8_8_ = lVar34;
            auVar47._0_8_ = lVar33;
            auVar10._8_8_ = lVar39;
            auVar10._0_8_ = lVar38;
            auVar45 = NEON_ext(auVar47,auVar10,8,1);
            lVar15 = *plVar13;
            lVar33 = plVar13[1];
            lVar32 = plVar13[2];
            lVar34 = plVar13[3];
            auVar41 = NEON_ext(auVar40,auVar36,8,1);
            auVar42._0_8_ = auVar36._0_8_ + auVar41._0_8_;
            auVar42._8_8_ = auVar36._8_8_ + auVar41._8_8_;
            auVar46._0_8_ = lVar38 - auVar45._0_8_;
            auVar46._8_8_ = lVar39 - auVar45._8_8_;
            auVar43._8_8_ = -uVar27;
            auVar43._0_8_ = -uVar27;
            auVar43 = NEON_sshl(auVar42,auVar43,8);
            auVar41._8_8_ = -uVar24;
            auVar41._0_8_ = -uVar24;
            auVar47 = NEON_sshl(auVar46,auVar41,8);
            auVar8._8_8_ = lVar32;
            auVar8._0_8_ = lVar15;
            auVar45 = NEON_ext(auVar36,auVar8,8,1);
            auVar9._8_8_ = lVar34;
            auVar9._0_8_ = lVar33;
            auVar11._8_8_ = lVar39;
            auVar11._0_8_ = lVar38;
            auVar41 = NEON_ext(auVar11,auVar9,8,1);
            auVar37._0_8_ = lVar33 - auVar41._0_8_;
            auVar37._8_8_ = lVar34 - auVar41._8_8_;
            auVar44._0_8_ = lVar15 + auVar45._0_8_;
            auVar44._8_8_ = lVar32 + auVar45._8_8_;
            auVar45._8_8_ = -uVar24;
            auVar45._0_8_ = -uVar24;
            auVar41 = NEON_sshl(auVar37,auVar45,8);
            auVar7._8_8_ = -uVar27;
            auVar7._0_8_ = -uVar27;
            auVar45 = NEON_sshl(auVar44,auVar7,8);
            lVar28 = auVar47._0_8_ * auVar43._0_8_ + lVar28;
            lVar31 = auVar47._8_8_ * auVar43._8_8_ + lVar31;
            lVar17 = auVar41._0_8_ * auVar45._0_8_ + lVar17;
            lVar35 = auVar41._8_8_ * auVar45._8_8_ + lVar35;
            plVar13 = plVar13 + 8;
          } while (uVar29 != 0);
          lVar28 = lVar17 + lVar28 + lVar35 + lVar31;
          if (uVar25 == uVar12) goto LAB_010625ac;
        }
        lVar15 = lVar14 + -1;
        plVar13 = plVar19 + lVar14 * 2 + 1;
        do {
          plVar1 = plVar13 + -1;
          lVar14 = *plVar13;
          lVar15 = lVar15 + 1;
          plVar13 = plVar13 + 2;
          lVar28 = lVar28 + (lVar14 - lVar34 >> (uVar24 & 0x3f)) *
                            (*plVar1 + lVar32 >> (uVar27 & 0x3f));
          lVar32 = *plVar1;
          lVar34 = lVar14;
        } while (lVar15 < sVar4);
      }
LAB_010625ac:
      lVar20 = lVar20 + 1;
      iVar30 = iVar26 + 1;
    } while (lVar20 < *param_1);
    if (0 < lVar28) {
      return 1;
    }
  }
  uVar18 = 0;
  if (lVar28 == 0) {
    uVar18 = 2;
  }
  return uVar18;
}

