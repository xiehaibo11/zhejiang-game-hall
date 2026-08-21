
/* cocos2d::PUForceFieldAffector::setFrequency(double) */

void __thiscall
cocos2d::PUForceFieldAffector::setFrequency(PUForceFieldAffector *this,double param_1)

{
  *(double *)(this + 0x120) = param_1;
  if (this[0x17c] != (PUForceFieldAffector)0x0) {
    return;
  }
  PUForceField::setFrequency((PUForceField *)(this + 0xb0),param_1);
  return;
}

