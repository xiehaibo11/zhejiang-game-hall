
/* btConeTwistConstraint::computeConeLimitInfo(btQuaternion const&, float&, btVector3&, float&) */

void __thiscall
btConeTwistConstraint::computeConeLimitInfo
          (btConeTwistConstraint *this,btQuaternion *param_1,float *param_2,btVector3 *param_3,
          float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float __x;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 0xc);
  if (fVar2 <= -1.0) {
    fVar2 = -1.0;
  }
  if (1.0 < fVar2) {
    fVar2 = 1.0;
  }
  fVar2 = acosf(fVar2);
  *param_2 = fVar2 + fVar2;
  if (1.1920929e-07 < fVar2 + fVar2) {
    fVar2 = *(float *)param_1;
    fVar4 = *(float *)(param_1 + 4);
    fVar1 = *(float *)(param_1 + 8);
    __x = fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1;
    fVar3 = SQRT(__x);
    *(float *)param_3 = fVar2;
    *(float *)(param_3 + 4) = fVar4;
    *(float *)(param_3 + 8) = fVar1;
    *(undefined4 *)(param_3 + 0xc) = 0;
    if (NAN(fVar3)) {
      fVar3 = sqrtf(__x);
    }
    fVar3 = 1.0 / fVar3;
    fVar2 = fVar3 * *(float *)(param_3 + 4);
    fVar4 = fVar3 * *(float *)(param_3 + 8);
    *(float *)param_3 = fVar3 * *(float *)param_3;
    *(float *)(param_3 + 4) = fVar2;
    *(float *)(param_3 + 8) = fVar4;
    *param_4 = *(float *)(this + 0x1d4);
    if (1.1920929e-07 < ABS(fVar2)) {
      fVar2 = (fVar4 * fVar4) / (fVar2 * fVar2);
      fVar4 = (fVar2 + 1.0) /
              (1.0 / (*(float *)(this + 0x1d8) * *(float *)(this + 0x1d8)) +
              fVar2 / (*(float *)(this + 0x1d4) * *(float *)(this + 0x1d4)));
      fVar2 = SQRT(fVar4);
      if (NAN(fVar2)) {
        fVar2 = sqrtf(fVar4);
      }
      *param_4 = fVar2;
    }
  }
  return;
}

