
/* cocos2d::PUSineForceAffector::setFrequencyMin(float) */

void __thiscall
cocos2d::PUSineForceAffector::setFrequencyMin(PUSineForceAffector *this,float param_1)

{
  *(float *)(this + 0xcc) = param_1;
  if (*(float *)(this + 0xd0) < param_1) {
    *(float *)(this + 0xd4) = param_1;
  }
  return;
}

