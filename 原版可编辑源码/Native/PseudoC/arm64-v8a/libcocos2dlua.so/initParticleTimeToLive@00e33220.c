
/* cocos2d::PUEmitter::initParticleTimeToLive() */

void __thiscall cocos2d::PUEmitter::initParticleTimeToLive(PUEmitter *this)

{
  PUDynamicAttributeHelper::calculate
            ((PUDynamicAttributeHelper *)(this + 0x194),*(PUDynamicAttribute **)(this + 0x120),
             *(float *)(*(long *)(this + 0x28) + 0x440),PUParticle3D::DEFAULT_TTL);
  return;
}

