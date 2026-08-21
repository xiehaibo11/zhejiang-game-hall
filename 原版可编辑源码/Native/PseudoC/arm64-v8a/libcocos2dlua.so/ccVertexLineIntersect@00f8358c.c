
/* cocos2d::ccVertexLineIntersect(float, float, float, float, float, float, float, float, float*) */

undefined8
cocos2d::ccVertexLineIntersect
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,float param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 0;
  }
  if ((param_5 == param_7) && (param_6 == param_8)) {
    return 0;
  }
  fVar4 = param_3 - param_1;
  fVar6 = param_4 - param_2;
  fVar1 = SQRT(fVar4 * fVar4 + fVar6 * fVar6);
  fVar4 = fVar4 / fVar1;
  fVar6 = fVar6 / fVar1;
  fVar3 = (param_6 - param_2) * fVar4 - (param_5 - param_1) * fVar6;
  fVar5 = (param_8 - param_2) * fVar4 - (param_7 - param_1) * fVar6;
  if (fVar3 == fVar5) {
    return 0;
  }
  fVar2 = (param_7 - param_1) * fVar4 + (param_8 - param_2) * fVar6;
  *param_9 = (fVar2 + (fVar5 * (((param_5 - param_1) * fVar4 + (param_6 - param_2) * fVar6) - fVar2)
                      ) / (fVar5 - fVar3)) / fVar1;
  return 1;
}

