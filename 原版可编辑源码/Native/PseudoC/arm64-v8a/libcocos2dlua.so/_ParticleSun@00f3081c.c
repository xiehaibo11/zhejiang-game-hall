
/* non-virtual thunk to cocos2d::ParticleSun::~ParticleSun() */

void __thiscall cocos2d::ParticleSun::~ParticleSun(ParticleSun *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x300));
  operator_delete((ParticleSystemQuad *)(this + -0x300));
  return;
}

