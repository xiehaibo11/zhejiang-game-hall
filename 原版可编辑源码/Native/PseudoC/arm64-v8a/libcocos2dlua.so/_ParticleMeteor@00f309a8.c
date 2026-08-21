
/* non-virtual thunk to cocos2d::ParticleMeteor::~ParticleMeteor() */

void __thiscall cocos2d::ParticleMeteor::~ParticleMeteor(ParticleMeteor *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

