
/* non-virtual thunk to cocos2d::ParticleExplosion::~ParticleExplosion() */

void __thiscall cocos2d::ParticleExplosion::~ParticleExplosion(ParticleExplosion *this)

{
                    /* try { // try from 00f30adc to 01030ae7 has its CatchHandler @ 00f30b28 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
                    /* try { // try from 00f30ae8 to 01030b57 has its CatchHandler @ 00f30a04 */
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

