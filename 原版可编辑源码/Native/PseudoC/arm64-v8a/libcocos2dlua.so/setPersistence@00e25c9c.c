
/* cocos2d::PUForceFieldAffector::setPersistence(double) */

void __thiscall
cocos2d::PUForceFieldAffector::setPersistence(PUForceFieldAffector *this,double param_1)

{
  *(double *)(this + 0x130) = param_1;
  if (this[0x17c] != (PUForceFieldAffector)0x0) {
    return;
  }
  PUForceField::setPersistence((PUForceField *)(this + 0xb0),param_1);
  return;
}

