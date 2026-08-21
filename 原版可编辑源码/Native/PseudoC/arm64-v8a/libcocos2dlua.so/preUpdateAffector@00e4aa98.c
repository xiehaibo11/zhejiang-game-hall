
/* cocos2d::PUBaseCollider::preUpdateAffector(float) */

void __thiscall cocos2d::PUBaseCollider::preUpdateAffector(PUBaseCollider *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PUParticleSystem3D::getParticleSystemScaleVelocity
                           (*(PUParticleSystem3D **)(this + 0x28));
  *(float *)(this + 0xbc) = fVar1 * param_1;
  return;
}

