
/* non-virtual thunk to cocos2d::ParticleSmoke::~ParticleSmoke() */

void __thiscall cocos2d::ParticleSmoke::~ParticleSmoke(ParticleSmoke *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

