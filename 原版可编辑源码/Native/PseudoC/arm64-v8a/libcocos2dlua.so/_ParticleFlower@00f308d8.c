
/* cocos2d::ParticleFlower::~ParticleFlower() */

void __thiscall cocos2d::ParticleFlower::~ParticleFlower(ParticleFlower *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

