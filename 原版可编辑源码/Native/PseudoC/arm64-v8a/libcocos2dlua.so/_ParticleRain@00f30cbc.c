
/* non-virtual thunk to cocos2d::ParticleRain::~ParticleRain() */

void __thiscall cocos2d::ParticleRain::~ParticleRain(ParticleRain *this)

{
                    /* try { // try from 00f30cc0 to 01030cc7 has its CatchHandler @ 00f30ce0 */
                    /* try { // try from 00f30cc8 to 01030cfb has its CatchHandler @ 00f30c9c */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x300));
                    /* catch() { ... } // from try @ 00f30cc0 with catch @ 00f30ce0 */
  operator_delete((ParticleSystemQuad *)(this + -0x300));
  return;
}

