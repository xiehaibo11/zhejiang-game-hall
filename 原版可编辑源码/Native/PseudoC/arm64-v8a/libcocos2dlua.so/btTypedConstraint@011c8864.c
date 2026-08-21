
/* btTypedConstraint::btTypedConstraint(btTypedConstraintType, btRigidBody&) */

void __thiscall
btTypedConstraint::btTypedConstraint(btTypedConstraint *this,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(this + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(undefined2 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 8) = param_2;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined8 *)(this + 0x28) = param_3;
  *(undefined ***)this = &PTR__btTypedConstraint_0172d5d8;
  getFixedBody();
  *(undefined **)(this + 0x30) = &DAT_01793728;
  *(undefined8 *)(this + 0x38) = 0x3e99999a00000000;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}

