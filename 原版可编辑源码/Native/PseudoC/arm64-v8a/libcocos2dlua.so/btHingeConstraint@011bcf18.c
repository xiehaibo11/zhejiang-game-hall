
/* btHingeConstraint::btHingeConstraint(btRigidBody&, btTransform const&, bool) */

void __thiscall
btHingeConstraint::btHingeConstraint
          (btHingeConstraint *this,btRigidBody *param_1,btTransform *param_2,bool param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
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
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,4,param_1);
  *(undefined ***)this = &PTR__btTypedConstraint_0172d710;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x248) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x240) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 600) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x250) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x268) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x260) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x278) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x270) = uVar2;
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x288) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0x280) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x298) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x290) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x2a8) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x2a0) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x2b8) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x2b0) = uVar2;
  *(undefined8 *)(this + 0x2d0) = 0x3e99999a3f666666;
  *(undefined8 *)(this + 0x2c8) = 0xbf80000000000000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  this[0x2e4] = (btHingeConstraint)0x0;
  *(undefined8 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2f8) = 0x1000000;
  lVar1 = *(long *)(this + 0x28);
  uVar3 = 0xbf800000;
  this[0x2fc] = (btHingeConstraint)param_3;
  *(undefined4 *)(this + 0x304) = 0;
  if (!param_3) {
    uVar3 = 0x3f800000;
  }
  fVar4 = *(float *)(this + 0x270);
  fVar8 = *(float *)(lVar1 + 8);
  fVar9 = *(float *)(lVar1 + 0xc);
  fVar13 = *(float *)(lVar1 + 0x18);
  fVar14 = *(float *)(lVar1 + 0x1c);
  fVar16 = *(float *)(lVar1 + 0x28);
  fVar18 = *(float *)(lVar1 + 0x2c);
  fVar5 = *(float *)(this + 0x274);
  fVar6 = *(float *)(this + 0x278);
  fVar11 = *(float *)(lVar1 + 0x10);
  fVar15 = *(float *)(lVar1 + 0x20);
  fVar17 = *(float *)(lVar1 + 0x30);
  fVar10 = *(float *)(lVar1 + 0x38);
  fVar12 = *(float *)(lVar1 + 0x3c);
  fVar7 = *(float *)(lVar1 + 0x40);
  *(undefined4 *)(this + 700) = 0;
  *(float *)(this + 0x2b0) = fVar4 * fVar8 + fVar5 * fVar9 + fVar6 * fVar11 + fVar10;
  *(float *)(this + 0x2b4) = fVar4 * fVar13 + fVar5 * fVar14 + fVar6 * fVar15 + fVar12;
  *(float *)(this + 0x2b8) = fVar4 * fVar16 + fVar5 * fVar18 + fVar6 * fVar17 + fVar7;
  *(undefined4 *)(this + 0x2f4) = uVar3;
  return;
}

