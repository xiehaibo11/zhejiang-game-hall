
/* btRigidBody::updateInertiaTensor() */

void __thiscall btRigidBody::updateInertiaTensor(btRigidBody *this)

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
  
  fVar1 = *(float *)(this + 0x1a8);
  fVar2 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0xc);
  fVar4 = *(float *)(this + 0x1ac);
  fVar7 = *(float *)(this + 0x18);
  fVar8 = *(float *)(this + 0x1c);
  fVar10 = *(float *)(this + 0x28);
  fVar11 = *(float *)(this + 0x2c);
  fVar5 = *(float *)(this + 0x10);
  fVar6 = *(float *)(this + 0x1b0);
  fVar9 = *(float *)(this + 0x20);
  fVar12 = *(float *)(this + 0x30);
  fVar13 = fVar2 * fVar1;
  fVar14 = fVar3 * fVar4;
  fVar16 = fVar1 * fVar7;
  fVar17 = fVar4 * fVar8;
  fVar1 = fVar1 * fVar10;
  fVar4 = fVar4 * fVar11;
  fVar15 = fVar5 * fVar6;
  fVar18 = fVar6 * fVar9;
  fVar6 = fVar6 * fVar12;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(float *)(this + 0x124) = fVar13 * fVar2 + fVar14 * fVar3 + fVar15 * fVar5;
  *(float *)(this + 0x128) = fVar13 * fVar7 + fVar14 * fVar8 + fVar15 * fVar9;
  *(float *)(this + 300) = fVar13 * fVar10 + fVar14 * fVar11 + fVar15 * fVar12;
  *(float *)(this + 0x134) = fVar16 * fVar2 + fVar17 * fVar3 + fVar18 * fVar5;
  *(float *)(this + 0x138) = fVar16 * fVar7 + fVar17 * fVar8 + fVar18 * fVar9;
  *(float *)(this + 0x13c) = fVar16 * fVar10 + fVar17 * fVar11 + fVar18 * fVar12;
  *(float *)(this + 0x144) = fVar1 * fVar2 + fVar4 * fVar3 + fVar6 * fVar5;
  *(float *)(this + 0x148) = fVar1 * fVar7 + fVar4 * fVar8 + fVar6 * fVar9;
  *(float *)(this + 0x14c) = fVar1 * fVar10 + fVar4 * fVar11 + fVar6 * fVar12;
  *(undefined4 *)(this + 0x150) = 0;
  return;
}

