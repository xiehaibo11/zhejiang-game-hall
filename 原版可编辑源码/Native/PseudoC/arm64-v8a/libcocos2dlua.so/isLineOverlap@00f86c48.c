
/* cocos2d::Vec2::isLineOverlap(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Vec2 const&) */

undefined8 cocos2d::Vec2::isLineOverlap(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)param_1;
  if ((fVar1 != *(float *)param_2) || (*(float *)(param_1 + 4) != *(float *)(param_2 + 4))) {
    fVar3 = *(float *)param_3;
    if (fVar3 == *(float *)param_4) {
      fVar5 = *(float *)(param_3 + 4);
      fVar7 = *(float *)(param_4 + 4);
      if (fVar5 == fVar7) {
        return 0;
      }
    }
    else {
      fVar7 = *(float *)(param_4 + 4);
      fVar5 = *(float *)(param_3 + 4);
    }
    fVar2 = *(float *)param_2 - fVar1;
    fVar8 = *(float *)param_4 - fVar3;
    fVar4 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
    if (fVar2 * (fVar7 - fVar5) - fVar8 * fVar4 == 0.0) {
      fVar6 = *(float *)(param_1 + 4) - fVar5;
      if (fVar8 * fVar6 - (fVar1 - fVar3) * (fVar7 - fVar5) == 0.0) {
        return 1;
      }
      if (fVar2 * fVar6 - (fVar1 - fVar3) * fVar4 == 0.0) {
        return 1;
      }
    }
  }
  return 0;
}

