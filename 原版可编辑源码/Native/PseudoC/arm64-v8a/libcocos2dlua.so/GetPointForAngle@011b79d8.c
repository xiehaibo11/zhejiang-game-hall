
/* btConeTwistConstraint::GetPointForAngle(float, float) const */

float __thiscall
btConeTwistConstraint::GetPointForAngle(btConeTwistConstraint *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = cosf(param_1);
  fVar2 = sinf(param_1);
  fVar4 = *(float *)(this + 0x1d4);
  if (1.1920929e-07 < ABS(fVar1)) {
    fVar3 = (fVar2 * fVar2) / (fVar1 * fVar1);
    fVar3 = (fVar3 + 1.0) /
            (1.0 / (*(float *)(this + 0x1d8) * *(float *)(this + 0x1d8)) + fVar3 / (fVar4 * fVar4));
    fVar4 = SQRT(fVar3);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar3);
    }
  }
  fVar3 = fVar1 * fVar1 + 0.0 + fVar2 * fVar2;
  fVar5 = SQRT(fVar3);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar3);
  }
  fVar3 = sinf(fVar4 * 0.5);
  fVar3 = fVar3 / fVar5;
  fVar5 = fVar3 * 0.0;
  fVar1 = fVar1 * fVar3;
  fVar2 = fVar2 * fVar3;
  fVar4 = cosf(fVar4 * 0.5);
  return fVar2 * ((fVar4 * 0.0 - fVar2 * param_2) - fVar5 * 0.0) +
         (fVar4 * ((fVar4 * param_2 + fVar1 * 0.0) - fVar2 * -0.0) -
         ((-(fVar5 * param_2) - fVar1 * 0.0) - fVar2 * -0.0) * fVar5) +
         ((fVar4 * 0.0 + fVar5 * 0.0) - fVar1 * param_2) * fVar1;
}

