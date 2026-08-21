
/* cocos2d::ParticleGalaxy::~ParticleGalaxy() */

void __thiscall cocos2d::ParticleGalaxy::~ParticleGalaxy(ParticleGalaxy *this)

{
                    /* try { // try from 00f30854 to 0103085b has its CatchHandler @ 00f308d0 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

