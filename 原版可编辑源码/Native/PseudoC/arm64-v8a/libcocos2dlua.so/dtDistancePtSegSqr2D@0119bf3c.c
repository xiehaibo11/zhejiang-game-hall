
/* dtDistancePtSegSqr2D(float const*, float const*, float const*, float&) */

float dtDistancePtSegSqr2D(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_3 - *param_2;
  fVar1 = param_3[2] - param_2[2];
  fVar5 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar4 = fVar3 * (*param_1 - *param_2) + fVar1 * (param_1[2] - param_2[2]);
  fVar2 = fVar4 / fVar5;
  if (fVar5 <= 0.0) {
    fVar2 = fVar4;
  }
  fVar4 = 0.0;
  *param_4 = fVar2;
  if ((fVar2 < 0.0) || (fVar4 = 1.0, 1.0 < fVar2)) {
    *param_4 = fVar4;
    fVar2 = fVar4;
  }
  fVar3 = (*param_2 + fVar3 * fVar2) - *param_1;
  fVar2 = (fVar1 * fVar2 + param_2[2]) - param_1[2];
  return fVar3 * fVar3 + fVar2 * fVar2;
}

