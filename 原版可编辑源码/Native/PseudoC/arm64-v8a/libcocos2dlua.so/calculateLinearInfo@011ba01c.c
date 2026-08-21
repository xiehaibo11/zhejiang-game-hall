
/* btGeneric6DofConstraint::calculateLinearInfo() */

void __thiscall btGeneric6DofConstraint::calculateLinearInfo(btGeneric6DofConstraint *this)

{
  float fVar1;
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
  
  fVar1 = *(float *)(this + 0x454);
  fVar14 = *(float *)(this + 0x468);
  fVar15 = *(float *)(this + 0x458);
  fVar2 = *(float *)(this + 0x464);
  fVar6 = *(float *)(this + 0x460);
  fVar3 = *(float *)(this + 0x450);
  fVar17 = *(float *)(this + 0x444);
  fVar18 = *(float *)(this + 0x448);
  fVar16 = *(float *)(this + 0x440);
  fVar10 = *(float *)(this + 0x4b0) - *(float *)(this + 0x470);
  fVar8 = *(float *)(this + 0x4b4) - *(float *)(this + 0x474);
  fVar9 = *(float *)(this + 0x4b8) - *(float *)(this + 0x478);
  fVar12 = fVar1 * fVar14 - fVar15 * fVar2;
  fVar13 = fVar15 * fVar6 - fVar14 * fVar3;
  fVar19 = fVar2 * fVar3 - fVar1 * fVar6;
  fVar11 = *(float *)(this + 0x2c0);
  fVar7 = *(float *)(this + 0x2d0);
  fVar4 = 1.0 / (fVar12 * fVar16 + fVar17 * fVar13 + fVar19 * fVar18);
  fVar5 = fVar9 * (fVar15 * fVar17 - fVar1 * fVar18) * fVar4 +
          fVar10 * fVar12 * fVar4 + fVar8 * (fVar2 * fVar18 - fVar14 * fVar17) * fVar4;
  fVar12 = fVar9 * (fVar3 * fVar18 - fVar15 * fVar16) * fVar4 +
           fVar10 * fVar13 * fVar4 + fVar8 * (fVar14 * fVar16 - fVar6 * fVar18) * fVar4;
  fVar1 = fVar9 * (fVar1 * fVar16 - fVar3 * fVar17) * fVar4 +
          fVar10 * fVar19 * fVar4 + fVar8 * (fVar6 * fVar17 - fVar2 * fVar16) * fVar4;
  *(undefined4 *)(this + 0x50c) = 0;
  *(float *)(this + 0x500) = fVar5;
  *(float *)(this + 0x504) = fVar12;
  *(float *)(this + 0x508) = fVar1;
  *(float *)(this + 0x360) = fVar5;
  if (fVar7 < fVar11) {
LAB_011ba1a0:
    fVar5 = 0.0;
    *(undefined4 *)(this + 0x370) = 0;
  }
  else if (fVar11 <= fVar5) {
    if (fVar5 <= fVar7) goto LAB_011ba1a0;
    *(undefined4 *)(this + 0x370) = 1;
    fVar5 = fVar5 - fVar7;
  }
  else {
    *(undefined4 *)(this + 0x370) = 2;
    fVar5 = fVar5 - fVar11;
  }
  fVar3 = *(float *)(this + 0x2c4);
  fVar2 = *(float *)(this + 0x2d4);
  *(float *)(this + 0x350) = fVar5;
  *(float *)(this + 0x364) = fVar12;
  if (fVar3 <= fVar2) {
    if (fVar12 < fVar3) {
      *(undefined4 *)(this + 0x374) = 2;
      fVar12 = fVar12 - fVar3;
      goto LAB_011ba1f8;
    }
    if (fVar2 < fVar12) {
      *(undefined4 *)(this + 0x374) = 1;
      fVar12 = fVar12 - fVar2;
      goto LAB_011ba1f8;
    }
  }
  fVar12 = 0.0;
  *(undefined4 *)(this + 0x374) = 0;
LAB_011ba1f8:
  fVar3 = *(float *)(this + 0x2c8);
  fVar2 = *(float *)(this + 0x2d8);
  *(float *)(this + 0x354) = fVar12;
  *(float *)(this + 0x368) = fVar1;
  if (fVar3 <= fVar2) {
    if (fVar1 < fVar3) {
      *(undefined4 *)(this + 0x378) = 2;
      *(float *)(this + 0x358) = fVar1 - fVar3;
      return;
    }
    if (fVar2 < fVar1) {
      *(undefined4 *)(this + 0x378) = 1;
      *(float *)(this + 0x358) = fVar1 - fVar2;
      return;
    }
  }
  *(undefined4 *)(this + 0x378) = 0;
  *(undefined4 *)(this + 0x358) = 0;
  return;
}

