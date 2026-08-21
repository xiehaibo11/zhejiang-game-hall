
/* btSliderConstraint::btSliderConstraint(btRigidBody&, btRigidBody&, btTransform const&,
   btTransform const&, bool) */

void __thiscall
btSliderConstraint::btSliderConstraint
          (btSliderConstraint *this,btRigidBody *param_1,btRigidBody *param_2,btTransform *param_3,
          btTransform *param_4,bool param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,7,param_1,param_2);
  this[0x48] = (btSliderConstraint)0x0;
  *(undefined ***)this = &PTR__btTypedConstraint_0172d8e0;
  uVar1 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x54) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x4c) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(this + 100) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(this + 0x5c) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(this + 0x74) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(this + 0x6c) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(this + 0x84) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(this + 0x7c) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x94) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x8c) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(this + 0xa4) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(this + 0x9c) = uVar1;
  uVar1 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(this + 0xb4) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(this + 0xac) = uVar1;
  uVar2 = *(undefined8 *)(param_4 + 0x38);
  uVar1 = *(undefined8 *)(param_4 + 0x30);
  *(undefined4 *)(this + 0x120) = 0x3f800000;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0xc4) = uVar2;
  *(undefined8 *)(this + 0xbc) = uVar1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3f3333333f800000;
  this[0xcc] = (btSliderConstraint)param_5;
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

