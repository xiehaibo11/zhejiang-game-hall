
/* btPoint2PointConstraint::btPoint2PointConstraint(btRigidBody&, btVector3 const&) */

void __thiscall
btPoint2PointConstraint::btPoint2PointConstraint
          (btPoint2PointConstraint *this,btRigidBody *param_1,btVector3 *param_2)

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
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,3,param_1);
  *(undefined ***)this = &PTR__btTypedConstraint_0172d7a0;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x144) = uVar2;
  fVar1 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0xc);
  fVar11 = *(float *)(param_1 + 0x18);
  fVar12 = *(float *)(param_1 + 0x1c);
  fVar14 = *(float *)(param_1 + 0x28);
  fVar16 = *(float *)(param_1 + 0x2c);
  fVar7 = *(float *)(param_2 + 8);
  fVar9 = *(float *)(param_1 + 0x10);
  fVar13 = *(float *)(param_1 + 0x20);
  fVar15 = *(float *)(param_1 + 0x30);
  fVar6 = *(float *)(param_1 + 0x38);
  fVar10 = *(float *)(param_1 + 0x3c);
  fVar8 = *(float *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x160) = 0;
  this[0x170] = (btPoint2PointConstraint)0x0;
  *(undefined4 *)(this + 0x174) = 0x3e99999a;
  *(float *)(this + 0x154) = fVar1 * fVar4 + fVar3 * fVar5 + fVar7 * fVar9 + fVar6;
  *(float *)(this + 0x158) = fVar1 * fVar11 + fVar3 * fVar12 + fVar7 * fVar13 + fVar10;
  *(float *)(this + 0x15c) = fVar1 * fVar14 + fVar3 * fVar16 + fVar7 * fVar15 + fVar8;
  *(undefined8 *)(this + 0x178) = 0x3f800000;
  return;
}

