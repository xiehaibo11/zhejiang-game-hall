
/* non-virtual thunk to cocos2d::ParticleFlower::~ParticleFlower() */

void __thiscall cocos2d::ParticleFlower::~ParticleFlower(ParticleFlower *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x300));
  operator_delete((ParticleSystemQuad *)(this + -0x300));
  return;
}

