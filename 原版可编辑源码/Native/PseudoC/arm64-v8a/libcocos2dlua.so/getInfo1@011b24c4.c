
/* btConeTwistConstraint::getInfo1(btTypedConstraint::btConstraintInfo1*) */

void __thiscall
btConeTwistConstraint::getInfo1(btConeTwistConstraint *this,btConstraintInfo1 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (this[0x227] == (btConeTwistConstraint)0x0) {
    *(undefined8 *)param_1 = 0x300000003;
    calcAngleInfo2(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                   (btTransform *)(*(long *)(this + 0x30) + 8),
                   (btMatrix3x3 *)(*(long *)(this + 0x28) + 0x124),
                   (btMatrix3x3 *)(*(long *)(this + 0x30) + 0x124));
    if (this[0x226] != (btConeTwistConstraint)0x0) {
      iVar1 = *(int *)param_1;
      iVar2 = *(int *)(param_1 + 4);
      *(int *)param_1 = iVar1 + 1;
      *(int *)(param_1 + 4) = iVar2 + -1;
      if ((*(float *)(this + 0x1d4) < *(float *)(this + 0x1e0)) &&
         (*(float *)(this + 0x1d8) < *(float *)(this + 0x1e0))) {
        *(int *)param_1 = iVar1 + 2;
        *(int *)(param_1 + 4) = iVar2 + -2;
      }
    }
    if (this[0x225] != (btConeTwistConstraint)0x0) {
      *(int *)param_1 = *(int *)param_1 + 1;
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    }
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  return;
}

