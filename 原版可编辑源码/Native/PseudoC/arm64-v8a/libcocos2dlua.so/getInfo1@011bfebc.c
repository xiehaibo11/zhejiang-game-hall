
/* btPoint2PointConstraint::getInfo1(btTypedConstraint::btConstraintInfo1*) */

void __thiscall
btPoint2PointConstraint::getInfo1(btPoint2PointConstraint *this,btConstraintInfo1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 3;
  if (this[0x170] != (btPoint2PointConstraint)0x0) {
    uVar1 = 0;
  }
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

