
/* cocos2d::ParticleSun::~ParticleSun() */

void __thiscall cocos2d::ParticleSun::~ParticleSun(ParticleSun *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

