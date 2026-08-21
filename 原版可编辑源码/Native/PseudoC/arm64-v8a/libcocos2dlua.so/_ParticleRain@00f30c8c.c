
/* non-virtual thunk to cocos2d::ParticleRain::~ParticleRain() */

void __thiscall cocos2d::ParticleRain::~ParticleRain(ParticleRain *this)

{
                    /* catch() { ... } // from try @ 00f30cc8 with catch @ 00f30c9c */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

