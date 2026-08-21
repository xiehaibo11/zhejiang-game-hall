
/* btTypedConstraint::btTypedConstraint(btTypedConstraintType, btRigidBody&, btRigidBody&) */

void __thiscall
btTypedConstraint::btTypedConstraint
          (btTypedConstraint *this,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined4 *)(this + 8) = param_2;
  *(undefined8 *)(this + 0xc) = 0xffffffffffffffff;
  *(undefined2 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x18) = 0x7f7fffff;
  *(undefined8 *)(this + 0x28) = param_3;
  *(undefined8 *)(this + 0x30) = param_4;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined ***)this = &PTR__btTypedConstraint_0172d5d8;
  *(undefined8 *)(this + 0x38) = 0x3e99999a00000000;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}

