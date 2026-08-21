
/* cocos2d::TMXLayer::getPositionForStaggeredAt(cocos2d::Vec2 const&) */

float __thiscall cocos2d::TMXLayer::getPositionForStaggeredAt(TMXLayer *this,Vec2 *param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0x3e4) * 0.5;
  if ((int)*(float *)(param_1 + 4) % 2 != 1) {
    fVar1 = 0.0;
  }
  return fVar1 + *(float *)param_1 * *(float *)(this + 0x3e4);
}

