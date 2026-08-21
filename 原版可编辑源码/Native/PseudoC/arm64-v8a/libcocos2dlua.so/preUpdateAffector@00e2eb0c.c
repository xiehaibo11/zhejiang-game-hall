
/* cocos2d::PUTextureAnimator::preUpdateAffector(float) */

void __thiscall cocos2d::PUTextureAnimator::preUpdateAffector(PUTextureAnimator *this,float param_1)

{
  float fVar1;
  
  if (this[0xb5] != (PUTextureAnimator)0x0) {
    this[0xb6] = (PUTextureAnimator)0x0;
    fVar1 = *(float *)(this + 0xb0) + param_1;
    *(float *)(this + 0xb0) = fVar1;
    if (*(float *)(this + 0xac) < fVar1) {
      *(float *)(this + 0xb0) = fVar1 - *(float *)(this + 0xac);
      this[0xb6] = (PUTextureAnimator)0x1;
    }
  }
  return;
}

