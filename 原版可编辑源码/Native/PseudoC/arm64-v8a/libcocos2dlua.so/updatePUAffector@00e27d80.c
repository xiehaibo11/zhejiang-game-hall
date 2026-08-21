
/* cocos2d::PUGravityAffector::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUGravityAffector::updatePUAffector
          (PUGravityAffector *this,PUParticle3D *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)*(undefined8 *)(this + 0x4c) - (float)*(undefined8 *)(param_1 + 8);
  fVar4 = (float)((ulong)*(undefined8 *)(this + 0x4c) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar2 = *(float *)(this + 0x54) - *(float *)(param_1 + 0x10);
  fVar5 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2;
  fVar1 = (float)PUParticleSystem3D::getParticleSystemScaleVelocity
                           (*(PUParticleSystem3D **)(this + 0x28));
  if (0.0 < fVar5) {
    fVar5 = (fVar1 * *(float *)(this + 0xac) * *(float *)(param_1 + 0x138) * *(float *)(this + 0xa8)
            ) / fVar5;
    fVar1 = (float)PUAffector::calculateAffectSpecialisationFactor((PUAffector *)this,param_1);
    *(ulong *)(param_1 + 0xac) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xac) >> 0x20) +
                  fVar4 * fVar5 * param_2 * fVar1,
                  (float)*(undefined8 *)(param_1 + 0xac) + fVar3 * fVar5 * param_2 * fVar1);
    *(float *)(param_1 + 0xb4) = fVar1 * fVar2 * fVar5 * param_2 + *(float *)(param_1 + 0xb4);
  }
  return;
}

