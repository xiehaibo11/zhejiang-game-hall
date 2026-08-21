
/* cocos2d::ParticleExplosion::~ParticleExplosion() */

void __thiscall cocos2d::ParticleExplosion::~ParticleExplosion(ParticleExplosion *this)

{
                    /* try { // try from 00f30aa4 to 01030abb has its CatchHandler @ 00f30b40 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

