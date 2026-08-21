
/* btConeTwistConstraint::btConeTwistConstraint(btRigidBody&, btTransform const&) */

void __thiscall
btConeTwistConstraint::btConeTwistConstraint
          (btConeTwistConstraint *this,btRigidBody *param_1,btTransform *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,5,param_1);
  *(undefined ***)this = &PTR__btTypedConstraint_0172d550;
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x14c) = uVar2;
  *(undefined8 *)(this + 0x144) = uVar1;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(this + 0x15c) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(this + 0x154) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(this + 0x16c) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(this + 0x164) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(this + 0x17c) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(this + 0x174) = uVar3;
  this[0x227] = (btConeTwistConstraint)0x0;
  *(undefined8 *)(this + 0x18c) = uVar2;
  *(undefined8 *)(this + 0x184) = uVar1;
  *(undefined8 *)(this + 0x19c) = *(undefined8 *)(this + 0x15c);
  *(undefined8 *)(this + 0x194) = *(undefined8 *)(this + 0x154);
  *(undefined8 *)(this + 0x1ac) = *(undefined8 *)(this + 0x16c);
  *(undefined8 *)(this + 0x1a4) = *(undefined8 *)(this + 0x164);
  *(undefined2 *)(this + 0x224) = 0;
  this[0x226] = (btConeTwistConstraint)0x0;
  this[0x240] = (btConeTwistConstraint)0x0;
  *(undefined8 *)(this + 0x1bc) = 0;
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x254) = 0xbf800000;
  *(undefined8 *)(this + 0x1cc) = 0x3c23d70a3f800000;
  *(undefined8 *)(this + 0x1c4) = 0x3e99999a3f800000;
  *(undefined8 *)(this + 0x1dc) = 0x3d4ccccd5d5e0b6b;
  *(undefined8 *)(this + 0x1d4) = 0x5d5e0b6b5d5e0b6b;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x270) = 0x3f333333;
  *(undefined4 *)(this + 0x274) = 0;
  return;
}

