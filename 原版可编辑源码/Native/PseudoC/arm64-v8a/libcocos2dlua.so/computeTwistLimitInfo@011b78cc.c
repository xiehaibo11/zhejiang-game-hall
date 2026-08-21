
/* btConeTwistConstraint::computeTwistLimitInfo(btQuaternion const&, float&, btVector3&) */

void __thiscall
btConeTwistConstraint::computeTwistLimitInfo
          (btConeTwistConstraint *this,btQuaternion *param_1,float *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1 + 8);
  fVar1 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)param_1;
  fVar3 = *(float *)(param_1 + 4);
  if (fVar1 <= -1.0) {
    fVar1 = -1.0;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  fVar1 = acosf(fVar1);
  *param_2 = fVar1 + fVar1;
  if (3.1415927 < fVar1 + fVar1) {
    fVar4 = -*(float *)param_1;
    fVar1 = -*(float *)(param_1 + 0xc);
    if (fVar1 <= -1.0) {
      fVar1 = -1.0;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    fVar3 = -*(float *)(param_1 + 4);
    fVar2 = -*(float *)(param_1 + 8);
    fVar1 = acosf(fVar1);
    *param_2 = fVar1 + fVar1;
  }
  *(float *)param_3 = fVar4;
  *(float *)(param_3 + 4) = fVar3;
  *(float *)(param_3 + 8) = fVar2;
  *(undefined4 *)(param_3 + 0xc) = 0;
  if (1.1920929e-07 < *param_2) {
    fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
    fVar1 = SQRT(fVar2);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar2);
    }
    fVar1 = 1.0 / fVar1;
    *(float *)param_3 = fVar1 * *(float *)param_3;
    *(float *)(param_3 + 4) = fVar1 * *(float *)(param_3 + 4);
    *(float *)(param_3 + 8) = fVar1 * *(float *)(param_3 + 8);
  }
  return;
}

