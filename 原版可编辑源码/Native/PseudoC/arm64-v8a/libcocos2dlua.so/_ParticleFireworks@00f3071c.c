
/* cocos2d::ParticleFireworks::~ParticleFireworks() */

void __thiscall cocos2d::ParticleFireworks::~ParticleFireworks(ParticleFireworks *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

