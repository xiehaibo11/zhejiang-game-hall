
/* non-virtual thunk to cocos2d::ParticleSnow::~ParticleSnow() */

void __thiscall cocos2d::ParticleSnow::~ParticleSnow(ParticleSnow *this)

{
                    /* try { // try from 00f30c04 to 01030c9b has its CatchHandler @ 00f30b58 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

