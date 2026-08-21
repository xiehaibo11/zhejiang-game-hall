
/* cocos2d::TMXLayer::calculateLayerOffset(cocos2d::Vec2 const&) */

float __thiscall cocos2d::TMXLayer::calculateLayerOffset(TMXLayer *this,Vec2 *param_1)

{
  float fVar1;
  
  switch(*(undefined4 *)(this + 0x400)) {
  case 0:
    return *(float *)param_1 * *(float *)(this + 0x3e4);
  case 1:
    if (*(int *)(this + 0x404) == 0) {
                    /* try { // try from 00f4c5a0 to 0104c5b7 has its CatchHandler @ 00f4d5b4 */
                    /* try { // try from 00f4c5bc to 0104c5c3 has its CatchHandler @ 00f4d490 */
      return *(float *)param_1 *
             (*(float *)(this + 0x3e4) +
             (*(float *)(this + 0x3e4) - (float)*(int *)(this + 0x40c)) * -0.5);
    }
    fVar1 = 0.0;
                    /* try { // try from 00f4c4d0 to 0104c4e7 has its CatchHandler @ 00f4d5b4 */
    if (*(int *)(this + 0x404) == 1) {
      fVar1 = 0.0;
      if (*(int *)(this + 0x408) == 1) {
                    /* try { // try from 00f4c4ec to 0104c4f3 has its CatchHandler @ 00f4d488 */
        fVar1 = (float)(int)(*(float *)(this + 0x3e4) * 0.5);
      }
                    /* try { // try from 00f4c4fc to 0104c50b has its CatchHandler @ 00f4d484 */
                    /* try { // try from 00f4c518 to 0104c51f has its CatchHandler @ 00f4d458 */
      return fVar1 + *(float *)param_1 * *(float *)(this + 0x3e4);
    }
    break;
  case 2:
    fVar1 = *(float *)(this + 0x3e4) * 0.5 * (*(float *)param_1 - *(float *)(param_1 + 4));
    break;
  case 3:
    fVar1 = *(float *)(this + 0x3e4) * 0.5;
    if ((int)ABS(*(float *)(param_1 + 4)) % 2 != 1) {
      fVar1 = 0.0;
    }
    fVar1 = fVar1 + *(float *)param_1 * *(float *)(this + 0x3e4);
    break;
  default:
    return 0.0;
  }
  return fVar1;
}

