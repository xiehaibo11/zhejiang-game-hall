
/* btRigidBody::computeGyroscopicForce(float) const */

float __thiscall btRigidBody::computeGyroscopicForce(btRigidBody *this,float param_1)

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
  float fVar20;
  float fVar21;
  
  fVar7 = *(float *)(this + 0x18);
  fVar6 = *(float *)(this + 0x1c);
  fVar3 = *(float *)(this + 8);
  fVar2 = *(float *)(this + 0xc);
  fVar10 = *(float *)(this + 0x28);
  fVar13 = *(float *)(this + 0x2c);
  fVar4 = *(float *)(this + 0x20);
  fVar8 = 1.0 / *(float *)(this + 0x1a8);
  fVar11 = 1.0 / *(float *)(this + 0x1ac);
  fVar14 = *(float *)(this + 0x30);
  fVar16 = fVar8 * fVar3;
  fVar17 = fVar11 * fVar2;
  fVar1 = *(float *)(this + 0x10);
  fVar9 = fVar7 * fVar8;
  fVar8 = fVar10 * fVar8;
  fVar12 = fVar6 * fVar11;
  fVar11 = fVar13 * fVar11;
  fVar5 = 1.0 / *(float *)(this + 0x1b0);
  fVar18 = fVar4 * fVar5;
  fVar19 = fVar14 * fVar5;
  fVar5 = fVar5 * fVar1;
  fVar15 = *(float *)(this + 0x16c);
  fVar20 = (float)*(undefined8 *)(this + 0x164);
  fVar21 = (float)((ulong)*(undefined8 *)(this + 0x164) >> 0x20);
  fVar16 = (fVar16 * fVar3 + fVar17 * fVar2 + fVar5 * fVar1) * fVar20 +
           (fVar16 * fVar7 + fVar17 * fVar6 + fVar5 * fVar4) * fVar21 +
           (fVar16 * fVar10 + fVar17 * fVar13 + fVar5 * fVar14) * fVar15;
  fVar5 = (fVar9 * fVar3 + fVar12 * fVar2 + fVar18 * fVar1) * fVar20 +
          (fVar9 * fVar7 + fVar12 * fVar6 + fVar18 * fVar4) * fVar21 +
          (fVar9 * fVar10 + fVar12 * fVar13 + fVar18 * fVar14) * fVar15;
  fVar1 = (fVar8 * fVar3 + fVar11 * fVar2 + fVar19 * fVar1) * fVar20 +
          (fVar8 * fVar7 + fVar11 * fVar6 + fVar19 * fVar4) * fVar21 +
          (fVar8 * fVar10 + fVar11 * fVar13 + fVar19 * fVar14) * fVar15;
  fVar3 = fVar15 * fVar16 - fVar20 * fVar1;
  fVar2 = fVar20 * fVar5 - fVar21 * fVar16;
  fVar1 = fVar21 * fVar1 - fVar15 * fVar5;
  fVar5 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (param_1 * param_1 < fVar5) {
    fVar2 = SQRT(fVar5);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar5);
    }
    fVar1 = fVar1 * (1.0 / fVar2) * param_1;
  }
  return fVar1;
}

