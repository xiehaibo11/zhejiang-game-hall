
/* cocos2d::PUEmitter::initParticleVelocity(cocos2d::PUParticle3D*) */

void __thiscall cocos2d::PUEmitter::initParticleVelocity(PUEmitter *this,PUParticle3D *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)PUDynamicAttributeHelper::calculate
                           ((PUDynamicAttributeHelper *)(this + 0x194),
                            *(PUDynamicAttribute **)(this + 0x130),
                            *(float *)(*(long *)(this + 0x28) + 0x440),1.0);
  fVar2 = fVar1 * *(float *)(param_1 + 0xac);
  fVar3 = fVar1 * *(float *)(param_1 + 0xb0);
  fVar4 = fVar1 * *(float *)(param_1 + 0xb4);
  *(float *)(param_1 + 0xac) = fVar2;
  *(float *)(param_1 + 0xb0) = fVar3;
  *(float *)(param_1 + 0xb4) = fVar4;
  *(float *)(param_1 + 200) = fVar1;
  *(float *)(param_1 + 0xcc) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  return;
}

