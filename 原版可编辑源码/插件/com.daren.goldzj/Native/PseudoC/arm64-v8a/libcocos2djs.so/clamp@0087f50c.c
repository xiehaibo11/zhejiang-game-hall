
/* cocos2d::Vec2::clamp(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Vec2*) */

void cocos2d::Vec2::clamp(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)param_1;
  *(float *)param_4 = fVar1;
  fVar2 = *(float *)param_2;
  if (fVar1 < fVar2) {
    *(float *)param_4 = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)param_3 < fVar1) {
    *(float *)param_4 = *(float *)param_3;
  }
  fVar1 = *(float *)(param_1 + 4);
  *(float *)(param_4 + 4) = fVar1;
  fVar2 = *(float *)(param_2 + 4);
  if (fVar1 < fVar2) {
    *(float *)(param_4 + 4) = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)(param_3 + 4) < fVar1) {
    *(float *)(param_4 + 4) = *(float *)(param_3 + 4);
  }
  return;
}

