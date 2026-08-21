
/* btGeneric6DofConstraint::setAxis(btVector3 const&, btVector3 const&) */

void __thiscall
btGeneric6DofConstraint::setAxis
          (btGeneric6DofConstraint *this,btVector3 *param_1,btVector3 *param_2)

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
  
  fVar7 = *(float *)param_1;
  fVar12 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 8);
  fVar4 = fVar7 * fVar7 + fVar12 * fVar12 + fVar8 * fVar8;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar9 = *(float *)param_2;
  fVar10 = *(float *)(param_2 + 4);
  fVar11 = *(float *)(param_2 + 8);
  fVar3 = 1.0 / fVar3;
  fVar5 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
  fVar4 = SQRT(fVar5);
  fVar7 = fVar7 * fVar3;
  fVar12 = fVar12 * fVar3;
  fVar8 = fVar8 * fVar3;
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar5);
  }
  lVar1 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  fVar4 = 1.0 / fVar4;
  fVar9 = fVar9 * fVar4;
  fVar10 = fVar10 * fVar4;
  fVar11 = fVar11 * fVar4;
  fVar5 = fVar8 * fVar10 - fVar12 * fVar11;
  fVar3 = fVar7 * fVar11 - fVar8 * fVar9;
  fVar4 = fVar12 * fVar9 - fVar7 * fVar10;
  fVar6 = *(float *)(lVar1 + 8);
  fVar14 = *(float *)(lVar1 + 0xc);
  fVar15 = *(float *)(lVar1 + 0x18);
  fVar16 = *(float *)(lVar1 + 0x1c);
  fVar19 = *(float *)(lVar1 + 0x10);
  fVar20 = *(float *)(lVar1 + 0x20);
  fVar23 = *(float *)(lVar1 + 0x3c);
  fVar17 = *(float *)(lVar1 + 0x28);
  fVar18 = *(float *)(lVar1 + 0x2c);
  fVar22 = -*(float *)(lVar1 + 0x38);
  fVar13 = *(float *)(lVar1 + 0x30);
  fVar21 = *(float *)(lVar1 + 0x40);
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(float *)(this + 0x48) = fVar4 * fVar17 + fVar6 * fVar5 + fVar15 * fVar3;
  *(float *)(this + 0x4c) = fVar6 * fVar9 + fVar10 * fVar15 + fVar11 * fVar17;
  *(float *)(this + 0x50) = fVar7 * fVar6 + fVar12 * fVar15 + fVar8 * fVar17;
  *(float *)(this + 0x58) = fVar5 * fVar14 + fVar3 * fVar16 + fVar4 * fVar18;
  *(float *)(this + 0x5c) = fVar9 * fVar14 + fVar10 * fVar16 + fVar11 * fVar18;
  *(float *)(this + 0x60) = fVar7 * fVar14 + fVar12 * fVar16 + fVar8 * fVar18;
  *(float *)(this + 0x68) = fVar5 * fVar19 + fVar3 * fVar20 + fVar4 * fVar13;
  *(float *)(this + 0x6c) = fVar9 * fVar19 + fVar10 * fVar20 + fVar11 * fVar13;
  *(float *)(this + 0x70) = fVar7 * fVar19 + fVar12 * fVar20 + fVar8 * fVar13;
  *(float *)(this + 0x78) =
       fVar6 * 0.0 + fVar15 * 0.0 + fVar17 * 0.0 +
       ((fVar6 * fVar22 - fVar15 * fVar23) - fVar17 * fVar21);
  *(float *)(this + 0x7c) =
       fVar14 * 0.0 + fVar16 * 0.0 + fVar18 * 0.0 +
       ((fVar14 * fVar22 - fVar16 * fVar23) - fVar18 * fVar21);
  *(float *)(this + 0x80) =
       fVar19 * 0.0 + fVar20 * 0.0 + fVar13 * 0.0 +
       ((fVar19 * fVar22 - fVar20 * fVar23) - fVar13 * fVar21);
  fVar15 = *(float *)(lVar2 + 0x18);
  fVar16 = *(float *)(lVar2 + 0x1c);
  fVar6 = *(float *)(lVar2 + 0x3c);
  fVar17 = *(float *)(lVar2 + 0x28);
  fVar18 = *(float *)(lVar2 + 0x2c);
  fVar21 = *(float *)(lVar2 + 0x40);
  fVar20 = *(float *)(lVar2 + 0x20);
  fVar23 = -*(float *)(lVar2 + 0x38);
  fVar13 = *(float *)(lVar2 + 8);
  fVar14 = *(float *)(lVar2 + 0xc);
  fVar19 = *(float *)(lVar2 + 0x10);
  fVar22 = *(float *)(lVar2 + 0x30);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(float *)(this + 0x90) = fVar7 * fVar13 + fVar12 * fVar15 + fVar8 * fVar17;
  *(float *)(this + 0x88) = fVar5 * fVar13 + fVar3 * fVar15 + fVar4 * fVar17;
  *(float *)(this + 0x8c) = fVar9 * fVar13 + fVar10 * fVar15 + fVar11 * fVar17;
  *(float *)(this + 0x98) = fVar5 * fVar14 + fVar3 * fVar16 + fVar4 * fVar18;
  *(float *)(this + 0x9c) = fVar9 * fVar14 + fVar10 * fVar16 + fVar11 * fVar18;
  *(float *)(this + 0xa0) = fVar7 * fVar14 + fVar12 * fVar16 + fVar8 * fVar18;
  *(float *)(this + 0xa8) = fVar5 * fVar19 + fVar3 * fVar20 + fVar4 * fVar22;
  *(float *)(this + 0xac) = fVar9 * fVar19 + fVar10 * fVar20 + fVar11 * fVar22;
  *(float *)(this + 0xb0) = fVar7 * fVar19 + fVar12 * fVar20 + fVar8 * fVar22;
  *(float *)(this + 0xb8) =
       fVar13 * 0.0 + fVar15 * 0.0 + fVar17 * 0.0 +
       ((fVar13 * fVar23 - fVar15 * fVar6) - fVar17 * fVar21);
  *(float *)(this + 0xbc) =
       fVar14 * 0.0 + fVar16 * 0.0 + fVar18 * 0.0 +
       ((fVar14 * fVar23 - fVar16 * fVar6) - fVar18 * fVar21);
  *(float *)(this + 0xc0) =
       fVar19 * 0.0 + fVar20 * 0.0 + fVar22 * 0.0 +
       ((fVar19 * fVar23 - fVar20 * fVar6) - fVar22 * fVar21);
  *(undefined4 *)(this + 0xc4) = 0;
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  return;
}

