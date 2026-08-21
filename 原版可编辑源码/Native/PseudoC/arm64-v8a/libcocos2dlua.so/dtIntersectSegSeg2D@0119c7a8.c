
/* dtIntersectSegSeg2D(float const*, float const*, float const*, float const*, float&, float&) */

undefined8
dtIntersectSegSeg2D(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                   float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = *param_2 - *param_1;
  fVar2 = param_2[2] - param_1[2];
  fVar6 = *param_4 - *param_3;
  fVar5 = param_4[2] - param_3[2];
  fVar7 = fVar3 * fVar5;
  fVar8 = fVar2 * fVar6;
  if (ABS(fVar7 - fVar8) < 1e-06) {
    return 0;
  }
  fVar1 = *param_1 - *param_3;
  fVar4 = param_1[2] - param_3[2];
  fVar7 = fVar7 - fVar8;
  *param_5 = (fVar6 * fVar4 - fVar1 * fVar5) / fVar7;
  *param_6 = (fVar3 * fVar4 - fVar2 * fVar1) / fVar7;
  return 1;
}

