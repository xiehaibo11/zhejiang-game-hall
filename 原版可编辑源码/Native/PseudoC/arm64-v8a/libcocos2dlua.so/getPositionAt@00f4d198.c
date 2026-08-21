
/* cocos2d::TMXLayer::getPositionAt(cocos2d::Vec2 const&) */

float __thiscall cocos2d::TMXLayer::getPositionAt(TMXLayer *this,Vec2 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 00f4d1a8 to 0104d1e3 has its CatchHandler @ 00f4d5b4 */
  switch(*(undefined4 *)(this + 0x400)) {
  case 0:
    fVar3 = *(float *)param_1 * *(float *)(this + 0x3e4);
    break;
  case 1:
    fVar3 = (float)getPositionForHexAt(this,param_1);
    break;
  case 2:
    fVar3 = *(float *)(this + 0x3e4) * 0.5 *
            (((*(float *)(this + 0x3dc) + *(float *)param_1) - *(float *)(param_1 + 4)) + -1.0);
    break;
  case 3:
    fVar3 = *(float *)(this + 0x3e4) * 0.5;
    if ((int)*(float *)(param_1 + 4) % 2 != 1) {
      fVar3 = 0.0;
    }
    fVar3 = *(float *)(this + 0x3e4) * *(float *)param_1 + fVar3;
    break;
  default:
                    /* try { // try from 00f4d1f0 to 0104d20b has its CatchHandler @ 00f4d40c */
    fVar3 = 0.0;
  }
  lVar1 = Director::getInstance();
  fVar2 = *(float *)(lVar1 + 0x1a0);
  Director::getInstance();
  return fVar3 / fVar2;
}

