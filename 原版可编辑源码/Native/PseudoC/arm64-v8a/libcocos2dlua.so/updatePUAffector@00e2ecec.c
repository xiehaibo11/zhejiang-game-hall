
/* cocos2d::PUTextureAnimator::updatePUAffector(cocos2d::PUParticle3D*, float) */

void __thiscall
cocos2d::PUTextureAnimator::updatePUAffector
          (PUTextureAnimator *this,PUParticle3D *param_1,float param_2)

{
  float fVar1;
  
  if (this[0xb5] == (PUTextureAnimator)0x0) {
    fVar1 = *(float *)(param_1 + 0x140) + param_2;
    *(float *)(param_1 + 0x140) = fVar1;
    if (*(float *)(param_1 + 0x13c) < fVar1) {
      *(float *)(param_1 + 0x140) = fVar1 - *(float *)(param_1 + 0x13c);
      determineNextTextureCoords(this,param_1);
      return;
    }
  }
  else if (this[0xb6] != (PUTextureAnimator)0x0) {
    determineNextTextureCoords(this,param_1);
    return;
  }
  return;
}

