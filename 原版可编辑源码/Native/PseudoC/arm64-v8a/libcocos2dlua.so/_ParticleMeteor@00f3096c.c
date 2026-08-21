
/* cocos2d::ParticleMeteor::~ParticleMeteor() */

void __thiscall cocos2d::ParticleMeteor::~ParticleMeteor(ParticleMeteor *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

