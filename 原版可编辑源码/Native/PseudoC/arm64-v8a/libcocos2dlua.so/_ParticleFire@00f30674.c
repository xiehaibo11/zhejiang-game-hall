
/* cocos2d::ParticleFire::~ParticleFire() */

void __thiscall cocos2d::ParticleFire::~ParticleFire(ParticleFire *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

