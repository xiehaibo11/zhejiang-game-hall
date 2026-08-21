
/* btSliderConstraint::btSliderConstraint(btRigidBody&, btTransform const&, bool) */

void __thiscall
btSliderConstraint::btSliderConstraint
          (btSliderConstraint *this,btRigidBody *param_1,btTransform *param_2,bool param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
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
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar1 = btTypedConstraint::getFixedBody();
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,7,uVar1,param_1);
  this[0x48] = (btSliderConstraint)0x0;
  *(undefined ***)this = &PTR__btTypedConstraint_0172d8e0;
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x94) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x8c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  fVar6 = *(float *)(this + 0x8c);
  fVar7 = *(float *)(this + 0x90);
  fVar8 = *(float *)(this + 0x94);
  *(undefined8 *)(this + 0xa4) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x9c) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  fVar9 = *(float *)(this + 0x9c);
  fVar10 = *(float *)(this + 0xa0);
  fVar11 = *(float *)(this + 0xa4);
  *(undefined8 *)(this + 0xb4) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0xac) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  this[0xcc] = (btSliderConstraint)param_3;
  *(undefined8 *)(this + 0xc4) = uVar4;
  *(undefined8 *)(this + 0xbc) = uVar1;
  fVar24 = *(float *)(param_1 + 0x38);
  fVar2 = *(float *)(param_1 + 8);
  fVar12 = *(float *)(param_1 + 0xc);
  fVar13 = *(float *)(param_1 + 0x10);
  fVar14 = *(float *)(param_1 + 0x18);
  fVar15 = *(float *)(param_1 + 0x1c);
  fVar16 = *(float *)(param_1 + 0x20);
  fVar17 = *(float *)(param_1 + 0x28);
  fVar18 = *(float *)(param_1 + 0x2c);
  fVar19 = *(float *)(param_1 + 0x30);
  fVar20 = *(float *)(this + 0xbc);
  fVar22 = *(float *)(this + 0xc0);
  fVar25 = *(float *)(param_1 + 0x3c);
  fVar26 = *(float *)(param_1 + 0x40);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3f3333333f800000;
  fVar21 = *(float *)(this + 0xac);
  fVar23 = *(float *)(this + 0xb0);
  fVar5 = *(float *)(this + 0xb4);
  fVar3 = *(float *)(this + 0xc4);
  *(undefined4 *)(this + 0x120) = 0x3f800000;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(float *)(this + 0x4c) = fVar6 * fVar2 + fVar9 * fVar12 + fVar21 * fVar13;
  *(float *)(this + 0x50) = fVar2 * fVar7 + fVar12 * fVar10 + fVar13 * fVar23;
  *(float *)(this + 0x54) = fVar2 * fVar8 + fVar12 * fVar11 + fVar13 * fVar5;
  *(float *)(this + 0x5c) = fVar6 * fVar14 + fVar9 * fVar15 + fVar21 * fVar16;
  *(float *)(this + 0x60) = fVar7 * fVar14 + fVar10 * fVar15 + fVar23 * fVar16;
  *(float *)(this + 100) = fVar8 * fVar14 + fVar11 * fVar15 + fVar5 * fVar16;
  *(float *)(this + 0x6c) = fVar6 * fVar17 + fVar9 * fVar18 + fVar21 * fVar19;
  *(float *)(this + 0x70) = fVar7 * fVar17 + fVar10 * fVar18 + fVar23 * fVar19;
  *(float *)(this + 0x74) = fVar8 * fVar17 + fVar11 * fVar18 + fVar5 * fVar19;
  *(float *)(this + 0x7c) = fVar24 + fVar2 * fVar20 + fVar12 * fVar22 + fVar13 * fVar3;
  *(float *)(this + 0x80) = fVar14 * fVar20 + fVar15 * fVar22 + fVar16 * fVar3 + fVar25;
  *(float *)(this + 0x84) = fVar17 * fVar20 + fVar18 * fVar22 + fVar19 * fVar3 + fVar26;
  *(undefined8 *)(this + 300) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x124) = 0x3f8000003f333333;
  *(undefined8 *)(this + 0x134) = 0x3f8000003f333333;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined8 *)(this + 0x108) = 0x3f800000;
  *(undefined8 *)(this + 0x100) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0x118) = 0x3f800000;
  *(undefined8 *)(this + 0x110) = 0x3f3333333f800000;
  this[0x460] = (btSliderConstraint)0x0;
  *(undefined8 *)(this + 0x474) = 0;
  *(undefined4 *)(this + 0x47c) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined8 *)(this + 0x469) = 0;
  *(undefined8 *)(this + 0x464) = 0;
  this[0x49] = (btSliderConstraint)0x1;
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  return;
}

