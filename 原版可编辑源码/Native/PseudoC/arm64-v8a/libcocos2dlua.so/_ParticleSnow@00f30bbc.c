
/* cocos2d::ParticleSnow::~ParticleSnow() */

void __thiscall cocos2d::ParticleSnow::~ParticleSnow(ParticleSnow *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

