
/* cocos2d::MathUtil::crossVec3(float const*, float const*, float*) */

void cocos2d::MathUtil::crossVec3(float *param_1,float *param_2,float *param_3)

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
                    /* try { // try from 00999810 to 00a9984b has its CatchHandler @ 00999914 */
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
                    /* try { // try from 0099984c to 00a9996b has its CatchHandler @ 009995d8 */
  *param_3 = fVar1 * fVar6 - fVar2 * fVar5;
  param_3[1] = fVar2 * fVar4 - fVar3 * fVar6;
  param_3[2] = fVar3 * fVar5 - fVar1 * fVar4;
  return;
}

