
undefined4 FT_Outline_Get_Orientation(short *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  if (param_1 == (short *)0x0) {
    return 0;
  }
  sVar5 = param_1[1];
  if ((long)sVar5 < 1) {
    return 0;
  }
  if (sVar5 == 1) {
    return 2;
  }
  plVar19 = *(long **)(param_1 + 4);
  plVar8 = plVar19 + (long)sVar5 * 2;
  plVar24 = plVar8;
  if (plVar8 <= plVar19 + 4) {
    plVar24 = plVar19 + 4;
  }
  lVar29 = *plVar19;
  lVar20 = plVar19[1];
  uVar25 = ((long)plVar24 + (~(ulong)plVar19 - 0x10) >> 4) + 1;
  plVar24 = plVar19 + 2;
  plVar22 = plVar19;
  lVar14 = lVar20;
  lVar17 = lVar29;
  if (1 < uVar25) {
    uVar10 = uVar25 & 0x1ffffffffffffffe;
    lVar14 = lVar29;
    lVar16 = lVar20;
    lVar11 = lVar20;
    lVar13 = lVar29;
    lVar31 = lVar20;
    plVar24 = plVar19 + 5;
    uVar26 = uVar10;
    do {
      lVar28 = plVar24[-3];
      lVar23 = plVar24[-2];
      lVar30 = plVar24[-1];
      lVar1 = lVar28;
      if (lVar13 <= lVar28) {
        lVar1 = lVar13;
      }
      lVar2 = lVar30;
      if (lVar29 <= lVar30) {
        lVar2 = lVar29;
      }
      if (lVar28 <= lVar14) {
        lVar28 = lVar14;
      }
      lVar18 = *plVar24;
      if (lVar30 <= lVar17) {
        lVar30 = lVar17;
      }
      lVar3 = lVar23;
      if (lVar31 <= lVar23) {
        lVar3 = lVar31;
      }
      lVar4 = lVar18;
      if (lVar20 <= lVar18) {
        lVar4 = lVar20;
      }
      if (lVar23 <= lVar16) {
        lVar23 = lVar16;
      }
      if (lVar18 <= lVar11) {
        lVar18 = lVar11;
      }
      uVar26 = uVar26 - 2;
      lVar29 = lVar2;
      lVar20 = lVar4;
      lVar14 = lVar28;
      lVar17 = lVar30;
      lVar16 = lVar23;
      lVar11 = lVar18;
      lVar13 = lVar1;
      lVar31 = lVar3;
      plVar24 = plVar24 + 4;
    } while (uVar26 != 0);
    if (lVar23 <= lVar18) {
      lVar23 = lVar18;
    }
    if (lVar28 <= lVar30) {
      lVar28 = lVar30;
    }
    lVar20 = lVar3;
    if (lVar4 <= lVar3) {
      lVar20 = lVar4;
    }
    lVar29 = lVar1;
    if (lVar2 <= lVar1) {
      lVar29 = lVar2;
    }
    plVar24 = plVar19 + 2 + uVar10 * 2;
    plVar22 = plVar19 + uVar10 * 2;
    lVar14 = lVar23;
    lVar17 = lVar28;
    if (uVar25 == uVar10) goto LAB_00e1af10;
  }
  do {
    plVar21 = plVar24;
    lVar28 = *plVar21;
    lVar23 = plVar22[3];
    lVar16 = lVar28;
    if (lVar29 <= lVar28) {
      lVar16 = lVar29;
    }
    if (lVar28 <= lVar17) {
      lVar28 = lVar17;
    }
    lVar17 = lVar23;
    if (lVar20 <= lVar23) {
      lVar17 = lVar20;
    }
    if (lVar23 <= lVar14) {
      lVar23 = lVar14;
    }
    lVar29 = lVar16;
    lVar20 = lVar17;
    plVar24 = plVar21 + 2;
    plVar22 = plVar21;
    lVar14 = lVar23;
    lVar17 = lVar28;
  } while (plVar21 + 2 < plVar8);
LAB_00e1af10:
  if ((lVar29 == lVar28) || (lVar23 == lVar20)) {
    return 2;
  }
  uVar6 = -(uint)lVar29;
  if (-1 < lVar29) {
    uVar6 = (uint)lVar29;
  }
  uVar7 = -(uint)lVar28;
  if (-1 < lVar28) {
    uVar7 = (uint)lVar28;
  }
  if (0 < (long)*param_1) {
    uVar6 = 0x11 - (int)LZCOUNT(uVar7 | uVar6);
    uVar7 = 0x11 - (int)LZCOUNT((int)lVar23 - (int)lVar20);
    uVar25 = (ulong)(uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU));
    uVar26 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
    lVar20 = 0;
    lVar29 = 0;
    iVar9 = 0;
    do {
      sVar5 = *(short *)(*(long *)(param_1 + 0xc) + lVar20 * 2);
      iVar27 = (int)sVar5;
      if (iVar9 <= sVar5) {
        lVar17 = (long)iVar9;
        lVar14 = lVar17;
        if (lVar17 <= iVar27) {
          lVar14 = (long)iVar27;
        }
        uVar10 = (lVar14 + 1) - lVar17;
        lVar16 = (plVar19 + (long)sVar5 * 2)[1] >> (uVar25 & 0x3f);
        lVar14 = plVar19[(long)sVar5 * 2] >> (uVar26 & 0x3f);
        if (3 < uVar10) {
          uVar12 = uVar10 & 0xfffffffffffffffc;
          lVar31 = 0;
          lVar11 = 0;
          lVar13 = 0;
          auVar32._8_8_ = lVar14;
          auVar32._0_8_ = lVar14;
          auVar33._8_8_ = lVar16;
          auVar33._0_8_ = lVar16;
          plVar8 = plVar19 + lVar17 * 2 + 4;
          uVar15 = uVar12;
          do {
            auVar40._0_8_ = plVar8[-4];
            auVar41._0_8_ = plVar8[-3];
            auVar40._8_8_ = plVar8[-2];
            auVar41._8_8_ = plVar8[-1];
            auVar36._0_8_ = *plVar8;
            auVar38._0_8_ = plVar8[1];
            auVar36._8_8_ = plVar8[2];
            auVar38._8_8_ = plVar8[3];
            uVar15 = uVar15 - 4;
            plVar8 = plVar8 + 8;
            auVar34._8_8_ = -uVar26;
            auVar34._0_8_ = -uVar26;
            auVar40 = NEON_sshl(auVar40,auVar34,8);
            auVar35._8_8_ = -uVar25;
            auVar35._0_8_ = -uVar25;
            auVar34 = NEON_sshl(auVar41,auVar35,8);
            auVar35 = NEON_ext(auVar32,auVar40,8,1);
            auVar37._8_8_ = -uVar26;
            auVar37._0_8_ = -uVar26;
            auVar32 = NEON_sshl(auVar36,auVar37,8);
            auVar41 = NEON_ext(auVar33,auVar34,8,1);
            auVar39._8_8_ = -uVar25;
            auVar39._0_8_ = -uVar25;
            auVar33 = NEON_sshl(auVar38,auVar39,8);
            auVar37 = NEON_ext(auVar40,auVar32,8,1);
            auVar39 = NEON_ext(auVar34,auVar33,8,1);
            lVar16 = auVar33._8_8_;
            lVar14 = auVar32._8_8_;
            lVar29 = (auVar34._0_8_ - auVar41._0_8_) * (auVar40._0_8_ + auVar35._0_8_) + lVar29;
            lVar31 = (auVar34._8_8_ - auVar41._8_8_) * (auVar40._8_8_ + auVar35._8_8_) + lVar31;
            lVar11 = (auVar33._0_8_ - auVar39._0_8_) * (auVar32._0_8_ + auVar37._0_8_) + lVar11;
            lVar13 = (lVar16 - auVar39._8_8_) * (lVar14 + auVar37._8_8_) + lVar13;
          } while (uVar15 != 0);
          lVar29 = lVar11 + lVar29 + lVar13 + lVar31;
          lVar17 = uVar12 + lVar17;
          if (uVar10 == uVar12) goto LAB_00e1b0d8;
        }
        lVar11 = lVar17 + -1;
        plVar8 = plVar19 + lVar17 * 2 + 1;
        do {
          plVar24 = plVar8 + -1;
          lVar17 = *plVar8;
          lVar11 = lVar11 + 1;
          plVar8 = plVar8 + 2;
          lVar13 = *plVar24 >> (uVar26 & 0x3f);
          lVar17 = lVar17 >> (uVar25 & 0x3f);
          lVar29 = lVar29 + (lVar17 - lVar16) * (lVar13 + lVar14);
          lVar14 = lVar13;
          lVar16 = lVar17;
        } while (lVar11 < sVar5);
      }
LAB_00e1b0d8:
      lVar20 = lVar20 + 1;
      iVar9 = iVar27 + 1;
    } while (lVar20 < *param_1);
    if (0 < lVar29) {
      return 1;
    }
    if (lVar29 != 0) {
      return 0;
    }
  }
  return 2;
}

