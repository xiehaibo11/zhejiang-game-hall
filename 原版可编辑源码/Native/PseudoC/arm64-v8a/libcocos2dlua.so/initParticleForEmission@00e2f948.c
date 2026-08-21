
/* cocos2d::PUTextureRotator::initParticleForEmission(cocos2d::PUParticle3D*) */

void __thiscall
cocos2d::PUTextureRotator::initParticleForEmission(PUTextureRotator *this,PUParticle3D *param_1)

{
  undefined4 uVar1;
  
  uVar1 = PUDynamicAttributeHelper::calculate
                    ((PUDynamicAttributeHelper *)(this + 200),*(PUDynamicAttribute **)(this + 0xb8),
                     *(float *)(*(long *)(this + 0x28) + 0x440),0.0);
  *(undefined4 *)(param_1 + 0x14c) = uVar1;
  uVar1 = PUDynamicAttributeHelper::calculate
                    ((PUDynamicAttributeHelper *)(this + 200),*(PUDynamicAttribute **)(this + 0xc0),
                     *(float *)(param_1 + 0x134),0.0);
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  return;
}

