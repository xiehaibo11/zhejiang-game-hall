
/* cocos2d::PUAffector::calculateAffectSpecialisationFactor(cocos2d::PUParticle3D const*) */

float __thiscall
cocos2d::PUAffector::calculateAffectSpecialisationFactor(PUAffector *this,PUParticle3D *param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (*(int *)(this + 0x58) == 2) {
    if (param_1 != (PUParticle3D *)0x0) {
      fVar1 = 1.0 - *(float *)(param_1 + 0x134);
    }
  }
  else if ((*(int *)(this + 0x58) == 1) && (param_1 != (PUParticle3D *)0x0)) {
    return *(float *)(param_1 + 0x134);
  }
  return fVar1;
}

