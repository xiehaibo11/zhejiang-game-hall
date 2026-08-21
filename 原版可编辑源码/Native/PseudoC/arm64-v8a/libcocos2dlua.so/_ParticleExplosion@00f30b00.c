
/* non-virtual thunk to cocos2d::ParticleExplosion::~ParticleExplosion() */

void __thiscall cocos2d::ParticleExplosion::~ParticleExplosion(ParticleExplosion *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x300));
  operator_delete((ParticleSystemQuad *)(this + -0x300));
  return;
}

