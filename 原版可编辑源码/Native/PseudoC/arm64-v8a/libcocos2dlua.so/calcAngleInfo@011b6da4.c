
/* btConeTwistConstraint::calcAngleInfo() */

void __thiscall btConeTwistConstraint::calcAngleInfo(btConeTwistConstraint *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_s14;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  *(undefined8 *)(this + 0x20c) = 0;
  *(undefined2 *)(this + 0x225) = 0;
  lVar2 = *(long *)(this + 0x28);
  lVar1 = *(long *)(this + 0x30);
  fVar18 = *(float *)(this + 0x144);
  fVar20 = *(float *)(this + 0x154);
  fVar21 = *(float *)(this + 0x184);
  fVar23 = *(float *)(this + 0x194);
  fVar7 = *(float *)(lVar2 + 8);
  fVar4 = *(float *)(lVar2 + 0xc);
  fVar25 = *(float *)(this + 0x1a4);
  fVar8 = *(float *)(lVar2 + 0x18);
  fVar5 = *(float *)(lVar2 + 0x1c);
  fVar9 = *(float *)(lVar2 + 0x28);
  fVar6 = *(float *)(lVar2 + 0x2c);
  fVar17 = fVar25 * *(float *)(lVar1 + 0x30);
  fVar26 = fVar18 * fVar8 + fVar20 * fVar5;
  fVar28 = *(float *)(this + 0x164);
  fVar19 = fVar18 * fVar9 + fVar20 * fVar6;
  fVar11 = *(float *)(lVar2 + 0x10);
  fVar12 = *(float *)(lVar2 + 0x20);
  fVar13 = *(float *)(lVar2 + 0x30);
  fVar27 = fVar18 * fVar7 + fVar20 * fVar4 + fVar28 * fVar11;
  fVar29 = 0.05;
  fVar22 = fVar26 + fVar28 * fVar12;
  fVar3 = *(float *)(this + 0x1d4);
  fVar16 = fVar28 * fVar13;
  fVar18 = 0.0;
  fVar10 = fVar19 + fVar16;
  fVar24 = fVar21 * *(float *)(lVar1 + 8) + fVar23 * *(float *)(lVar1 + 0xc) +
           fVar25 * *(float *)(lVar1 + 0x10);
  fVar25 = fVar21 * *(float *)(lVar1 + 0x18) + fVar23 * *(float *)(lVar1 + 0x1c) +
           fVar25 * *(float *)(lVar1 + 0x20);
  fVar21 = fVar21 * *(float *)(lVar1 + 0x28) + fVar23 * *(float *)(lVar1 + 0x2c) + fVar17;
  fVar20 = 0.0;
  if (0.05 <= fVar3) {
    fVar16 = *(float *)(this + 0x148);
    fVar17 = *(float *)(this + 0x158);
    fVar20 = fVar27 * fVar24 + fVar22 * fVar25 + fVar10 * fVar21;
    fVar23 = *(float *)(this + 0x168);
    fVar26 = fVar7 * fVar16 + fVar4 * fVar17 + fVar11 * fVar23;
    fVar19 = fVar8 * fVar16 + fVar5 * fVar17 + fVar12 * fVar23;
    unaff_s14 = fVar9 * fVar16 + fVar6 * fVar17 + fVar13 * fVar23;
    fVar23 = fVar21 * unaff_s14 + fVar24 * fVar26 + fVar25 * fVar19;
    fVar17 = ABS(fVar23);
    if (0.0 <= fVar20) {
      fVar15 = 0.7853982;
      fVar16 = fVar20 - fVar17;
      fVar17 = fVar20 + fVar17;
    }
    else {
      fVar15 = 2.3561945;
      fVar16 = fVar20 + fVar17;
      fVar17 = fVar17 - fVar20;
    }
    fVar16 = fVar16 / fVar17;
    fVar14 = (fVar20 * fVar20 + fVar23 * fVar23) * 10.0 * 10.0;
    fVar15 = fVar15 + fVar16 * -0.7853982;
    fVar17 = fVar14 + 1.0;
    fVar20 = -fVar15;
    if (0.0 <= fVar23) {
      fVar20 = fVar15;
    }
    fVar20 = (fVar14 / fVar17) * fVar20;
  }
  fVar23 = *(float *)(this + 0x1d8);
  if (0.05 <= fVar23) {
    fVar18 = *(float *)(this + 0x14c);
    fVar28 = *(float *)(this + 0x15c);
    fVar15 = fVar27 * fVar24 + fVar22 * fVar25 + fVar10 * fVar21;
    fVar14 = *(float *)(this + 0x16c);
    fVar16 = fVar18 * fVar7 + fVar28 * fVar4 + fVar14 * fVar11;
    fVar17 = fVar18 * fVar8 + fVar28 * fVar5 + fVar14 * fVar12;
    fVar28 = fVar18 * fVar9 + fVar28 * fVar6 + fVar14 * fVar13;
    fVar4 = fVar24 * fVar16 + fVar25 * fVar17 + fVar21 * fVar28;
    fVar18 = ABS(fVar4);
    if (0.0 <= fVar15) {
      fVar5 = 0.7853982;
      fVar6 = fVar15 - fVar18;
      fVar18 = fVar15 + fVar18;
    }
    else {
      fVar5 = 2.3561945;
      fVar6 = fVar15 + fVar18;
      fVar18 = fVar18 - fVar15;
    }
    fVar7 = (fVar15 * fVar15 + fVar4 * fVar4) * 10.0 * 10.0;
    fVar5 = fVar5 + (fVar6 / fVar18) * -0.7853982;
    fVar18 = -fVar5;
    if (0.0 <= fVar4) {
      fVar18 = fVar5;
    }
    fVar18 = (fVar7 / (fVar7 + 1.0)) * fVar18;
  }
  fVar18 = ABS(fVar20 * fVar20) * (1.0 / (fVar3 * fVar3)) +
           ABS(fVar18 * fVar18) * (1.0 / (fVar23 * fVar23));
  if (1.0 < fVar18) {
    *(float *)(this + 0x210) = fVar18 + -1.0;
    fVar18 = fVar24 * fVar26 + fVar25 * fVar19 + fVar21 * unaff_s14;
    fVar20 = fVar24 * fVar16 + fVar25 * fVar17 + fVar21 * fVar28;
    fVar3 = fVar26 * fVar18 + fVar16 * fVar20;
    fVar4 = fVar19 * fVar18 + fVar17 * fVar20;
    fVar18 = unaff_s14 * fVar18 + fVar28 * fVar20;
    fVar20 = fVar25 * fVar18 - fVar21 * fVar4;
    fVar18 = fVar21 * fVar3 - fVar24 * fVar18;
    fVar3 = fVar24 * fVar4 - fVar25 * fVar3;
    *(float *)(this + 0x1e4) = fVar20;
    *(float *)(this + 0x1e8) = fVar18;
    fVar20 = fVar20 * fVar20 + fVar18 * fVar18 + fVar3 * fVar3;
    fVar18 = SQRT(fVar20);
    this[0x226] = (btConeTwistConstraint)0x1;
    *(float *)(this + 0x1ec) = fVar3;
    *(undefined4 *)(this + 0x1f0) = 0;
    if (NAN(fVar18)) {
      fVar18 = sqrtf(fVar20);
    }
    fVar20 = 1.0;
    fVar18 = 1.0 / fVar18;
    if (fVar27 * fVar24 + fVar22 * fVar25 + fVar10 * fVar21 < 0.0) {
      fVar20 = -1.0;
    }
    *(float *)(this + 0x1e4) = fVar20 * fVar18 * *(float *)(this + 0x1e4);
    *(float *)(this + 0x1e8) = fVar20 * fVar18 * *(float *)(this + 0x1e8);
    *(float *)(this + 0x1ec) = fVar20 * fVar18 * *(float *)(this + 0x1ec);
  }
  if (0.0 <= *(float *)(this + 0x1dc)) {
    lVar2 = *(long *)(this + 0x30);
    fVar18 = fVar27 * fVar24 + fVar22 * fVar25 + fVar10 * fVar21;
    fVar20 = *(float *)(this + 0x188);
    fVar3 = *(float *)(this + 0x198);
    fVar4 = *(float *)(this + 0x1a8);
    fVar6 = fVar20 * *(float *)(lVar2 + 8) + fVar3 * *(float *)(lVar2 + 0xc) +
            fVar4 * *(float *)(lVar2 + 0x10);
    fVar5 = fVar20 * *(float *)(lVar2 + 0x18) + fVar3 * *(float *)(lVar2 + 0x1c) +
            fVar4 * *(float *)(lVar2 + 0x20);
    fVar20 = fVar20 * *(float *)(lVar2 + 0x28) + fVar3 * *(float *)(lVar2 + 0x2c) +
             fVar4 * *(float *)(lVar2 + 0x30);
    if (-0.9999999 <= fVar18) {
      fVar18 = fVar18 + 1.0;
      fVar4 = fVar10 * fVar25 - fVar22 * fVar21;
      fVar18 = fVar18 + fVar18;
      fVar3 = SQRT(fVar18);
      if (NAN(fVar3)) {
        fVar3 = sqrtf(fVar18);
      }
      fVar7 = 1.0 / fVar3;
      fVar4 = fVar4 * fVar7;
      fVar18 = (fVar27 * fVar21 - fVar10 * fVar24) * fVar7;
      fVar7 = (fVar22 * fVar24 - fVar27 * fVar25) * fVar7;
      fVar3 = fVar3 * 0.5;
    }
    else {
      if (ABS(fVar21) <= 0.70710677) {
        fVar3 = fVar24 * fVar24 + fVar25 * fVar25;
        fVar18 = SQRT(fVar3);
        if (NAN(fVar18)) {
          fVar18 = sqrtf(fVar3);
        }
        fVar7 = 0.0;
        fVar4 = -(fVar25 * (1.0 / fVar18));
        fVar18 = fVar24 * (1.0 / fVar18);
      }
      else {
        fVar18 = fVar25 * fVar25 + fVar21 * fVar21;
        fVar3 = SQRT(fVar18);
        if (NAN(fVar3)) {
          fVar3 = sqrtf(fVar18);
        }
        fVar4 = 0.0;
        fVar18 = -(fVar21 * (1.0 / fVar3));
        fVar7 = fVar25 * (1.0 / fVar3);
      }
      fVar3 = 0.0;
    }
    fVar8 = 1.0;
    fVar9 = (fVar20 * fVar18 + fVar6 * fVar3) - fVar5 * fVar7;
    fVar12 = (fVar6 * fVar7 + fVar5 * fVar3) - fVar20 * fVar4;
    fVar11 = (fVar5 * fVar4 + fVar20 * fVar3) - fVar6 * fVar18;
    fVar20 = (-(fVar6 * fVar4) - fVar5 * fVar18) - fVar20 * fVar7;
    fVar5 = ((fVar3 * fVar9 - fVar20 * fVar4) - fVar12 * fVar7) + fVar11 * fVar18;
    fVar6 = ((fVar3 * fVar12 - fVar20 * fVar18) - fVar11 * fVar4) + fVar9 * fVar7;
    fVar18 = ((fVar3 * fVar11 - fVar20 * fVar7) - fVar9 * fVar18) + fVar12 * fVar4;
    fVar20 = fVar28 * fVar18 + fVar16 * fVar5 + fVar17 * fVar6;
    fVar18 = unaff_s14 * fVar18 + fVar26 * fVar5 + fVar19 * fVar6;
    fVar3 = ABS(fVar20);
    if (0.0 <= fVar18) {
      fVar4 = 0.7853982;
      fVar5 = fVar18 - fVar3;
      fVar3 = fVar18 + fVar3;
    }
    else {
      fVar4 = 2.3561945;
      fVar5 = fVar18 + fVar3;
      fVar3 = fVar3 - fVar18;
    }
    fVar6 = *(float *)(this + 0x1dc);
    fVar4 = fVar4 + (fVar5 / fVar3) * -0.7853982;
    fVar18 = -fVar4;
    if (0.0 <= fVar20) {
      fVar18 = fVar4;
    }
    if (fVar6 <= fVar29) {
      fVar8 = 0.0;
    }
    *(float *)(this + 0x218) = fVar18;
    if (fVar18 <= -(fVar6 * fVar8)) {
      fVar20 = (fVar27 + fVar24) * 0.5;
      fVar3 = (fVar22 + fVar25) * 0.5;
      fVar4 = (fVar10 + fVar21) * 0.5;
      *(float *)(this + 0x214) = -(fVar18 + fVar6);
      *(float *)(this + 500) = fVar20;
      fVar20 = fVar20 * fVar20 + fVar3 * fVar3 + fVar4 * fVar4;
      fVar18 = SQRT(fVar20);
      this[0x225] = (btConeTwistConstraint)0x1;
      *(float *)(this + 0x1f8) = fVar3;
      *(float *)(this + 0x1fc) = fVar4;
      *(undefined4 *)(this + 0x200) = 0;
      if (NAN(fVar18)) {
        fVar18 = sqrtf(fVar20);
      }
      fVar18 = 1.0 / fVar18;
      fVar20 = -(fVar18 * *(float *)(this + 500));
      fVar3 = -(fVar18 * *(float *)(this + 0x1f8));
      fVar18 = -(fVar18 * *(float *)(this + 0x1fc));
    }
    else {
      if (fVar18 <= fVar6 * fVar8) {
        return;
      }
      *(float *)(this + 0x214) = fVar18 - fVar6;
      fVar18 = (fVar27 + fVar24) * 0.5;
      fVar20 = (fVar22 + fVar25) * 0.5;
      fVar3 = (fVar10 + fVar21) * 0.5;
      *(float *)(this + 500) = fVar18;
      *(float *)(this + 0x1f8) = fVar20;
      fVar20 = fVar18 * fVar18 + fVar20 * fVar20 + fVar3 * fVar3;
      fVar18 = SQRT(fVar20);
      this[0x225] = (btConeTwistConstraint)0x1;
      *(float *)(this + 0x1fc) = fVar3;
      *(undefined4 *)(this + 0x200) = 0;
      if (NAN(fVar18)) {
        fVar18 = sqrtf(fVar20);
      }
      fVar18 = 1.0 / fVar18;
      fVar20 = fVar18 * *(float *)(this + 500);
      fVar3 = fVar18 * *(float *)(this + 0x1f8);
      fVar18 = fVar18 * *(float *)(this + 0x1fc);
    }
    *(float *)(this + 500) = fVar20;
    *(float *)(this + 0x1f8) = fVar3;
    *(float *)(this + 0x1fc) = fVar18;
  }
  return;
}

