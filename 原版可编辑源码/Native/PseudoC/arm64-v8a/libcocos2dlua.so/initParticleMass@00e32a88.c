
/* cocos2d::PUEmitter::initParticleMass(cocos2d::PUParticle3D*) */

void __thiscall cocos2d::PUEmitter::initParticleMass(PUEmitter *this,PUParticle3D *param_1)

{
  undefined4 uVar1;
  
  uVar1 = PUDynamicAttributeHelper::calculate
                    ((PUDynamicAttributeHelper *)(this + 0x194),
                     *(PUDynamicAttribute **)(this + 0x128),
                     *(float *)(*(long *)(this + 0x28) + 0x440),PUParticle3D::DEFAULT_MASS);
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  return;
}

