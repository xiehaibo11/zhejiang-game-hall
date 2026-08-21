
/* cocos2d::Vec2::isLineIntersect(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Vec2 const&, float*, float*) */

undefined8
cocos2d::Vec2::isLineIntersect
          (Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)param_1;
  if ((fVar1 == *(float *)param_2) && (*(float *)(param_1 + 4) == *(float *)(param_2 + 4))) {
    return 0;
  }
  fVar2 = *(float *)param_3;
  if (fVar2 == *(float *)param_4) {
    fVar4 = *(float *)(param_3 + 4);
    fVar6 = *(float *)(param_4 + 4);
    if (fVar4 == fVar6) {
      return 0;
    }
  }
  else {
    fVar6 = *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_3 + 4);
  }
  fVar5 = *(float *)param_4 - fVar2;
  fVar3 = (*(float *)param_2 - fVar1) * (fVar6 - fVar4) -
          fVar5 * (*(float *)(param_2 + 4) - *(float *)(param_1 + 4));
  if (fVar3 == 0.0) {
    return 0;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = (fVar5 * (*(float *)(param_1 + 4) - fVar4) - (fVar1 - fVar2) * (fVar6 - fVar4)) /
               fVar3;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = ((*(float *)(param_1 + 4) - *(float *)(param_3 + 4)) *
                (*(float *)param_2 - *(float *)param_1) -
               (*(float *)param_1 - *(float *)param_3) *
               (*(float *)(param_2 + 4) - *(float *)(param_1 + 4))) / fVar3;
  }
  return 1;
}

