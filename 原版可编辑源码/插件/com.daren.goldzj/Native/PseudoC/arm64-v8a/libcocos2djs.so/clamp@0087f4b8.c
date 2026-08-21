
/* cocos2d::Vec2::clamp(cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

void __thiscall cocos2d::Vec2::clamp(Vec2 *this,Vec2 *param_1,Vec2 *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  fVar1 = *(float *)this;
  if (*(float *)this < fVar2) {
    *(float *)this = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)param_2 < fVar1) {
    *(float *)this = *(float *)param_2;
  }
  fVar2 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(this + 4);
  if (*(float *)(this + 4) < fVar2) {
    *(float *)(this + 4) = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)(param_2 + 4) < fVar1) {
    *(float *)(this + 4) = *(float *)(param_2 + 4);
  }
  return;
}

