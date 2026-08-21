
/* cocos2d::PUForceFieldAffector::setMovementFrequency(float) */

void __thiscall
cocos2d::PUForceFieldAffector::setMovementFrequency(PUForceFieldAffector *this,float param_1)

{
  *(float *)(this + 0x15c) = param_1;
  this[0x158] = (PUForceFieldAffector)(0.0 < param_1);
  return;
}

