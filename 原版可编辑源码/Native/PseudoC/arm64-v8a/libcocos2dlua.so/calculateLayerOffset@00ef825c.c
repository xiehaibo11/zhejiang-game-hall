
/* cocos2d::experimental::TMXLayer::calculateLayerOffset(cocos2d::Vec2 const&) */

float __thiscall cocos2d::experimental::TMXLayer::calculateLayerOffset(TMXLayer *this,Vec2 *param_1)

{
  float fVar1;
  
  if (*(int *)(this + 0x330) == 2) {
                    /* try { // try from 00ef82a4 to 00ff82cb has its CatchHandler @ 00ef83f8 */
    fVar1 = *(float *)(this + 0x318) * 0.5 * (*(float *)param_1 - *(float *)(param_1 + 4));
  }
  else {
    fVar1 = 0.0;
    if (*(int *)(this + 0x330) == 0) {
      return *(float *)param_1 * *(float *)(this + 0x318);
    }
  }
  return fVar1;
}

