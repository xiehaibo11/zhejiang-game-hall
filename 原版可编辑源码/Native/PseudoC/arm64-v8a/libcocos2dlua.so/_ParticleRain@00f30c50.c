
/* cocos2d::ParticleRain::~ParticleRain() */

void __thiscall cocos2d::ParticleRain::~ParticleRain(ParticleRain *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

