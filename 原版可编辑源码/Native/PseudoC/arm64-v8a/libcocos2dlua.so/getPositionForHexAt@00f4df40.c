
/* cocos2d::TMXLayer::getPositionForHexAt(cocos2d::Vec2 const&) */

float __thiscall cocos2d::TMXLayer::getPositionForHexAt(TMXLayer *this,Vec2 *param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = -1;
  if (*(int *)(this + 0x408) == 0) {
    iVar1 = 1;
  }
  if (*(int *)(this + 0x404) == 0) {
    fVar2 = *(float *)param_1 *
            (*(float *)(this + 0x3e4) +
            (*(float *)(this + 0x3e4) - (float)*(int *)(this + 0x40c)) * -0.5);
  }
  else {
    if (*(int *)(this + 0x404) != 1) {
      return 0.0;
    }
    fVar2 = 0.0;
    if ((int)*(float *)(param_1 + 4) % 2 == 1) {
      fVar2 = *(float *)(this + 0x3e4) * 0.5 * (float)iVar1;
    }
    fVar2 = fVar2 + *(float *)param_1 * *(float *)(this + 0x3e4);
  }
  return *(float *)(*(long *)(this + 0x3f8) + 0x54) + fVar2;
}

