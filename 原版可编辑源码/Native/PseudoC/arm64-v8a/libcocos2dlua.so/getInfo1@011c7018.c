
/* btSliderConstraint::getInfo1(btTypedConstraint::btConstraintInfo1*) */

void __thiscall btSliderConstraint::getInfo1(btSliderConstraint *this,btConstraintInfo1 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (this[0x48] != (btSliderConstraint)0x0) {
    *(undefined8 *)param_1 = 0;
    return;
  }
  *(undefined8 *)param_1 = 0x200000004;
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  *(undefined4 *)(this + 0x458) = 0;
  this[0x141] = (btSliderConstraint)0x0;
  if (*(float *)(this + 0xd8) <= *(float *)(this + 0xdc)) {
    fVar1 = atan2f(*(float *)(this + 0x358) * *(float *)(this + 0x394) +
                   *(float *)(this + 0x368) * *(float *)(this + 0x3a4) +
                   *(float *)(this + 0x378) * *(float *)(this + 0x3b4),
                   *(float *)(this + 0x354) * *(float *)(this + 0x394) +
                   *(float *)(this + 0x364) * *(float *)(this + 0x3a4) +
                   *(float *)(this + 0x374) * *(float *)(this + 0x3b4));
    fVar1 = (float)btAdjustAngleToLimits(fVar1,*(float *)(this + 0xd8),*(float *)(this + 0xdc));
    fVar2 = *(float *)(this + 0xd8);
    *(float *)(this + 0x454) = fVar1;
    if ((fVar1 < fVar2) || (fVar2 = *(float *)(this + 0xdc), fVar2 < fVar1)) {
      *(float *)(this + 0x458) = fVar1 - fVar2;
      this[0x141] = (btSliderConstraint)0x1;
    }
  }
  fVar3 = *(float *)(this + 0xd0);
  fVar2 = *(float *)(this + 0xd4);
  fVar1 = *(float *)(this + 0x420);
  this[0x140] = (btSliderConstraint)0x0;
  *(float *)(this + 0x450) = fVar1;
  if ((fVar2 < fVar3) || ((fVar1 <= fVar2 && (fVar2 = fVar3, fVar3 <= fVar1)))) {
    *(undefined4 *)(this + 0x420) = 0;
    if (this[0x460] == (btSliderConstraint)0x0) goto LAB_011c7154;
  }
  else {
    *(float *)(this + 0x420) = fVar1 - fVar2;
    this[0x140] = (btSliderConstraint)0x1;
  }
  *(int *)param_1 = *(int *)param_1 + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
LAB_011c7154:
  if ((this[0x141] != (btSliderConstraint)0x0) || (this[0x470] != (btSliderConstraint)0x0)) {
    *(int *)param_1 = *(int *)param_1 + 1;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return;
}

