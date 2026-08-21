
/* cocos2d::MathUtilNeon64::crossVec3(float const*, float const*, float*) */

void cocos2d::MathUtilNeon64::crossVec3(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = *param_1;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  *param_3 = fVar1 * fVar6 - fVar2 * fVar5;
  param_3[1] = fVar2 * fVar4 - fVar3 * fVar6;
  param_3[2] = fVar3 * fVar5 - fVar1 * fVar4;
  return;
}

