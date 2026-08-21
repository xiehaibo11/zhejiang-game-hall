
/* cocos2d::Vec2::getIntersectPoint(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2
   const&, cocos2d::Vec2 const&) */

float cocos2d::Vec2::getIntersectPoint(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)param_1;
  if ((fVar1 != *(float *)param_2) || (*(float *)(param_1 + 4) != *(float *)(param_2 + 4))) {
    fVar2 = *(float *)param_3;
    if (fVar2 == *(float *)param_4) {
      fVar3 = *(float *)(param_3 + 4);
      fVar5 = *(float *)(param_4 + 4);
      if (fVar3 == fVar5) {
        return 0.0;
      }
    }
    else {
      fVar5 = *(float *)(param_4 + 4);
      fVar3 = *(float *)(param_3 + 4);
    }
    fVar6 = *(float *)param_2 - fVar1;
    fVar7 = *(float *)param_4 - fVar2;
    fVar4 = fVar6 * (fVar5 - fVar3) - fVar7 * (*(float *)(param_2 + 4) - *(float *)(param_1 + 4));
    if (fVar4 != 0.0) {
      return fVar1 + fVar6 * ((fVar7 * (*(float *)(param_1 + 4) - fVar3) -
                              (fVar1 - fVar2) * (fVar5 - fVar3)) / fVar4);
    }
  }
  return 0.0;
}

