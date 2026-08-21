
/* cocos2d::TMXLayer::getPositionForIsoAt(cocos2d::Vec2 const&) */

float __thiscall cocos2d::TMXLayer::getPositionForIsoAt(TMXLayer *this,Vec2 *param_1)

{
  return *(float *)(this + 0x3e4) * 0.5 *
         (((*(float *)(this + 0x3dc) + *(float *)param_1) - *(float *)(param_1 + 4)) + -1.0);
}

