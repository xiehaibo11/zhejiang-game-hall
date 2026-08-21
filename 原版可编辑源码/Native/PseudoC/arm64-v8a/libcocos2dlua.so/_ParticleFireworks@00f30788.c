
/* non-virtual thunk to cocos2d::ParticleFireworks::~ParticleFireworks() */

void __thiscall cocos2d::ParticleFireworks::~ParticleFireworks(ParticleFireworks *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x300));
  operator_delete((ParticleSystemQuad *)(this + -0x300));
  return;
}

