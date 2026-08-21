
/* btRigidBody::setCenterOfMassTransform(btTransform const&) */

void __thiscall btRigidBody::setCenterOfMassTransform(btRigidBody *this,btTransform *param_1)

{
  float fVar1;
  undefined8 uVar2;
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
  
  if (((byte)this[0xe0] >> 1 & 1) == 0) {
    uVar2 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x58) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x68) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x78) = uVar2;
  }
  else {
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x38);
  }
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x15c);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x154);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x16c);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x164);
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x28) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x38) = uVar2;
  fVar1 = *(float *)(this + 0x1a8);
  fVar3 = *(float *)(this + 8);
  fVar4 = *(float *)(this + 0xc);
  fVar5 = *(float *)(this + 0x1ac);
  fVar8 = *(float *)(this + 0x18);
  fVar9 = *(float *)(this + 0x1c);
  fVar11 = *(float *)(this + 0x28);
  fVar12 = *(float *)(this + 0x2c);
  fVar6 = *(float *)(this + 0x10);
  fVar7 = *(float *)(this + 0x1b0);
  fVar10 = *(float *)(this + 0x20);
  fVar13 = *(float *)(this + 0x30);
  fVar14 = fVar3 * fVar1;
  fVar15 = fVar4 * fVar5;
  fVar17 = fVar1 * fVar8;
  fVar18 = fVar5 * fVar9;
  fVar1 = fVar1 * fVar11;
  fVar5 = fVar5 * fVar12;
  fVar16 = fVar6 * fVar7;
  fVar19 = fVar7 * fVar10;
  fVar7 = fVar7 * fVar13;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(float *)(this + 0x124) = fVar3 * fVar14 + fVar4 * fVar15 + fVar6 * fVar16;
  *(float *)(this + 0x128) = fVar14 * fVar8 + fVar15 * fVar9 + fVar16 * fVar10;
  *(float *)(this + 300) = fVar14 * fVar11 + fVar15 * fVar12 + fVar16 * fVar13;
  *(float *)(this + 0x134) = fVar3 * fVar17 + fVar4 * fVar18 + fVar6 * fVar19;
  *(float *)(this + 0x138) = fVar8 * fVar17 + fVar9 * fVar18 + fVar10 * fVar19;
  *(float *)(this + 0x13c) = fVar17 * fVar11 + fVar18 * fVar12 + fVar19 * fVar13;
  *(float *)(this + 0x144) = fVar3 * fVar1 + fVar4 * fVar5 + fVar6 * fVar7;
  *(float *)(this + 0x148) = fVar8 * fVar1 + fVar9 * fVar5 + fVar10 * fVar7;
  *(float *)(this + 0x14c) = fVar11 * fVar1 + fVar12 * fVar5 + fVar13 * fVar7;
  *(undefined4 *)(this + 0x150) = 0;
  return;
}

