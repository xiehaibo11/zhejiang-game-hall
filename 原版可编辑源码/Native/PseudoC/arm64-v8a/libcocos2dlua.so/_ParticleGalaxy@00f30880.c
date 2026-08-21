
/* non-virtual thunk to cocos2d::ParticleGalaxy::~ParticleGalaxy() */

void __thiscall cocos2d::ParticleGalaxy::~ParticleGalaxy(ParticleGalaxy *this)

{
                    /* try { // try from 00f30888 to 01030893 has its CatchHandler @ 00f308c0 */
                    /* try { // try from 00f30894 to 010308e3 has its CatchHandler @ 00f30810 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
                    /* catch() { ... } // from try @ 00f30874 with catch @ 00f308a4 */
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

