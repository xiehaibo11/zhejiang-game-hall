
/* non-virtual thunk to cocos2d::ParticleFire::~ParticleFire() */

void __thiscall cocos2d::ParticleFire::~ParticleFire(ParticleFire *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

