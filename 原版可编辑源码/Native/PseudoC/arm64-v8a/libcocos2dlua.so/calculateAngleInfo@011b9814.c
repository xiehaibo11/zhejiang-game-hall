
/* btGeneric6DofConstraint::calculateAngleInfo() */

void __thiscall btGeneric6DofConstraint::calculateAngleInfo(btGeneric6DofConstraint *this)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  
  fVar2 = *(float *)(this + 0x454);
  fVar3 = *(float *)(this + 0x468);
  fVar8 = *(float *)(this + 0x458);
  fVar10 = *(float *)(this + 0x464);
  fVar12 = *(float *)(this + 0x460);
  fVar13 = *(float *)(this + 0x450);
  fVar15 = *(float *)(this + 0x444);
  fVar16 = *(float *)(this + 0x448);
  fVar14 = *(float *)(this + 0x440);
  fVar17 = fVar2 * fVar3 - fVar8 * fVar10;
  fVar22 = fVar8 * fVar12 - fVar3 * fVar13;
  fVar21 = fVar10 * fVar13 - fVar2 * fVar12;
  fVar7 = *(float *)(this + 0x484);
  fVar9 = *(float *)(this + 0x494);
  fVar4 = *(float *)(this + 0x480);
  fVar5 = *(float *)(this + 0x490);
  fVar11 = *(float *)(this + 0x4a4);
  fVar23 = 1.0 / (fVar17 * fVar14 + fVar15 * fVar22 + fVar21 * fVar16);
  fVar6 = *(float *)(this + 0x4a0);
  fVar17 = fVar17 * fVar23;
  fVar20 = (fVar10 * fVar16 - fVar3 * fVar15) * fVar23;
  fVar22 = fVar22 * fVar23;
  fVar18 = (fVar3 * fVar14 - fVar12 * fVar16) * fVar23;
  fVar19 = (fVar8 * fVar15 - fVar2 * fVar16) * fVar23;
  fVar21 = fVar21 * fVar23;
  fVar12 = (fVar12 * fVar15 - fVar10 * fVar14) * fVar23;
  fVar10 = (fVar2 * fVar14 - fVar13 * fVar15) * fVar23;
  fVar23 = (fVar13 * fVar16 - fVar8 * fVar14) * fVar23;
  fVar2 = fVar17 * fVar7 + fVar20 * fVar9 + fVar19 * fVar11;
  fVar3 = fVar6 * fVar10 + fVar4 * fVar21 + fVar5 * fVar12;
  fVar8 = fVar7 * fVar22 + fVar18 * fVar9 + fVar23 * fVar11;
  if (1.0 <= fVar3) {
    fVar2 = atan2f(fVar2,fVar8);
    uVar1 = 0x3fc90fdb;
  }
  else {
    if (-1.0 < fVar3) {
      fVar2 = atan2f(-(fVar7 * fVar21 + fVar12 * fVar9 + fVar10 * fVar11),
                     fVar21 * *(float *)(this + 0x488) + fVar12 * *(float *)(this + 0x498) +
                     fVar10 * *(float *)(this + 0x4a8));
      *(float *)(this + 0x4c0) = fVar2;
      if (fVar3 <= -1.0) {
        fVar3 = -1.0;
      }
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      fVar2 = asinf(fVar3);
      *(float *)(this + 0x4c4) = fVar2;
      fVar2 = atan2f(-(fVar6 * fVar23 + fVar4 * fVar22 + fVar5 * fVar18),
                     fVar6 * fVar19 + fVar4 * fVar17 + fVar5 * fVar20);
      goto LAB_011b9a1c;
    }
    fVar2 = atan2f(fVar2,fVar8);
    fVar2 = -fVar2;
    uVar1 = 0xbfc90fdb;
  }
  *(float *)(this + 0x4c0) = fVar2;
  fVar2 = 0.0;
  *(undefined4 *)(this + 0x4c4) = uVar1;
LAB_011b9a1c:
  *(float *)(this + 0x4c8) = fVar2;
  fVar2 = *(float *)(this + 0x490);
  fVar8 = *(float *)(this + 0x4a0);
  fVar3 = *(float *)(this + 0x458);
  fVar4 = *(float *)(this + 0x468);
  fVar7 = *(float *)(this + 0x480);
  fVar5 = *(float *)(this + 0x448);
  fVar9 = fVar8 * fVar3 - fVar2 * fVar4;
  fVar11 = fVar7 * fVar4 - fVar8 * fVar5;
  fVar12 = fVar2 * fVar5 - fVar7 * fVar3;
  *(float *)(this + 0x4e4) = fVar11;
  *(float *)(this + 0x4e8) = fVar12;
  *(float *)(this + 0x4e0) = fVar9;
  fVar10 = fVar4 * fVar11 - fVar3 * fVar12;
  fVar6 = fVar5 * fVar12 - fVar4 * fVar9;
  fVar5 = fVar3 * fVar9 - fVar5 * fVar11;
  *(float *)(this + 0x4f4) = fVar8 * fVar9 - fVar7 * fVar12;
  *(float *)(this + 0x4f8) = fVar7 * fVar11 - fVar2 * fVar9;
  fVar4 = fVar10 * fVar10 + fVar6 * fVar6 + fVar5 * fVar5;
  fVar3 = SQRT(fVar4);
  *(undefined4 *)(this + 0x4ec) = 0;
  *(undefined4 *)(this + 0x4dc) = 0;
  *(float *)(this + 0x4d0) = fVar10;
  *(float *)(this + 0x4d4) = fVar6;
  *(float *)(this + 0x4d8) = fVar5;
  *(float *)(this + 0x4f0) = fVar2 * fVar12 - fVar8 * fVar11;
  *(undefined4 *)(this + 0x4fc) = 0;
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar3 = 1.0 / fVar3;
  *(float *)(this + 0x4d0) = fVar3 * *(float *)(this + 0x4d0);
  *(float *)(this + 0x4d4) = fVar3 * *(float *)(this + 0x4d4);
  fVar8 = *(float *)(this + 0x4e0) * *(float *)(this + 0x4e0) +
          *(float *)(this + 0x4e4) * *(float *)(this + 0x4e4) +
          *(float *)(this + 0x4e8) * *(float *)(this + 0x4e8);
  fVar2 = SQRT(fVar8);
  *(float *)(this + 0x4d8) = fVar3 * *(float *)(this + 0x4d8);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar8);
  }
  fVar2 = 1.0 / fVar2;
  *(float *)(this + 0x4e0) = fVar2 * *(float *)(this + 0x4e0);
  *(float *)(this + 0x4e4) = fVar2 * *(float *)(this + 0x4e4);
  fVar8 = *(float *)(this + 0x4f0) * *(float *)(this + 0x4f0) +
          *(float *)(this + 0x4f4) * *(float *)(this + 0x4f4) +
          *(float *)(this + 0x4f8) * *(float *)(this + 0x4f8);
  fVar3 = SQRT(fVar8);
  *(float *)(this + 0x4e8) = fVar2 * *(float *)(this + 0x4e8);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar8);
  }
  fVar3 = 1.0 / fVar3;
  *(float *)(this + 0x4f0) = fVar3 * *(float *)(this + 0x4f0);
  *(float *)(this + 0x4f4) = fVar3 * *(float *)(this + 0x4f4);
  *(float *)(this + 0x4f8) = fVar3 * *(float *)(this + 0x4f8);
  return;
}

