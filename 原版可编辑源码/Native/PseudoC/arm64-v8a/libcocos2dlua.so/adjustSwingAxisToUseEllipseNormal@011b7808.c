
/* btConeTwistConstraint::adjustSwingAxisToUseEllipseNormal(btVector3&) const */

void __thiscall
btConeTwistConstraint::adjustSwingAxisToUseEllipseNormal
          (btConeTwistConstraint *this,btVector3 *param_1)

{
  float fVar1;
  float fVar2;
  float __x;
  
  fVar1 = *(float *)(param_1 + 4);
  if (1.1920929e-07 < ABS(fVar1)) {
    fVar2 = ABS(fVar1 * (-*(float *)(param_1 + 8) / fVar1) *
                        (*(float *)(this + 0x1d8) / *(float *)(this + 0x1d4)));
    if (-0.0 <= *(float *)(param_1 + 8)) {
      fVar2 = -fVar2;
    }
    __x = fVar1 * fVar1 + *(float *)param_1 * *(float *)param_1 + fVar2 * fVar2;
    fVar1 = SQRT(__x);
    *(float *)(param_1 + 8) = -fVar2;
    if (NAN(fVar1)) {
      fVar1 = sqrtf(__x);
    }
    fVar1 = 1.0 / fVar1;
    *(float *)param_1 = fVar1 * *(float *)param_1;
    *(float *)(param_1 + 4) = fVar1 * *(float *)(param_1 + 4);
    *(float *)(param_1 + 8) = fVar1 * *(float *)(param_1 + 8);
  }
  return;
}

