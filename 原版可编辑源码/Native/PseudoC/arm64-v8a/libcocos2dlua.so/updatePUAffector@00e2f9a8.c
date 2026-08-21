
/* cocos2d::PUTextureRotator::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUTextureRotator::updatePUAffector
          (PUTextureRotator *this,PUParticle3D *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (this[0xac] == (PUTextureRotator)0x0) {
    fVar1 = (float)PUDynamicAttributeHelper::calculate
                             ((PUDynamicAttributeHelper *)(this + 200),
                              *(PUDynamicAttribute **)(this + 0xc0),*(float *)(param_1 + 0x134),0.0)
    ;
  }
  else {
    fVar1 = *(float *)(param_1 + 0xec);
  }
  *(float *)(this + 0xb0) = fVar1 * param_2;
  fVar2 = fVar1 * param_2 + *(float *)(param_1 + 0x14c);
  fVar1 = fVar2 - *(float *)(this + 0xb4);
  if (fVar2 <= *(float *)(this + 0xb4)) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x14c) = fVar1;
  return;
}

