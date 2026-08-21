
/* btHingeConstraint::getInfo1(btTypedConstraint::btConstraintInfo1*) */

void __thiscall btHingeConstraint::getInfo1(btHingeConstraint *this,btConstraintInfo1 *param_1)

{
  float fVar1;
  
  if (this[0x2fa] == (btHingeConstraint)0x0) {
    *(undefined8 *)param_1 = 0x100000005;
    fVar1 = (float)getHingeAngle(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                                 (btTransform *)(*(long *)(this + 0x30) + 8));
    *(float *)(this + 0x2f0) = fVar1;
    btAngularLimit::test((btAngularLimit *)(this + 0x2c8),fVar1);
    if ((this[0x2e4] != (btHingeConstraint)0x0) || (this[0x2f9] != (btHingeConstraint)0x0)) {
      *(int *)param_1 = *(int *)param_1 + 1;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  return;
}

