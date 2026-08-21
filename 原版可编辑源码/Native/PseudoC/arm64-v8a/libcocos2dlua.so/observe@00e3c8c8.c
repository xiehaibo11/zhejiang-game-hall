
/* cocos2d::PUOnVelocityObserver::observe(cocos2d::PUParticle3D*, float) */

bool cocos2d::PUOnVelocityObserver::observe(PUParticle3D *param_1,float param_2)

{
  int iVar1;
  bool bVar2;
  PUParticle3D *in_x1;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (in_x1 == (PUParticle3D *)0x0) {
    bVar2 = false;
  }
  else {
    fVar3 = (float)PUParticleSystem3D::getParticleSystemScaleVelocity
                             (*(PUParticleSystem3D **)(param_1 + 0x28));
    iVar1 = *(int *)(param_1 + 0xa8);
    if (iVar1 == 2) {
      fVar4 = (float)PUParticle3D::calculateVelocity(in_x1);
      bVar2 = fVar3 * *(float *)(param_1 + 0xa4) < fVar4;
    }
    else {
      fVar4 = (float)PUParticle3D::calculateVelocity(in_x1);
      fVar3 = fVar3 * *(float *)(param_1 + 0xa4);
      if (iVar1 == 0) {
        bVar2 = fVar4 < fVar3;
      }
      else {
        fVar5 = ABS(fVar3);
        if (ABS(fVar3) <= ABS(fVar4)) {
          fVar5 = ABS(fVar4);
        }
        bVar2 = ABS(fVar4 - fVar3) <= fVar5 * 0.01;
      }
    }
  }
  return bVar2;
}

