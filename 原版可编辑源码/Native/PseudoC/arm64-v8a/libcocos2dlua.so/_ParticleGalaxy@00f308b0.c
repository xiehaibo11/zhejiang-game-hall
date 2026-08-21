
/* non-virtual thunk to cocos2d::ParticleGalaxy::~ParticleGalaxy() */

void __thiscall cocos2d::ParticleGalaxy::~ParticleGalaxy(ParticleGalaxy *this)

{
                    /* catch() { ... } // from try @ 00f30888 with catch @ 00f308c0 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x300));
                    /* catch() { ... } // from try @ 00f30854 with catch @ 00f308d0 */
  operator_delete((ParticleSystemQuad *)(this + -0x300));
  return;
}

