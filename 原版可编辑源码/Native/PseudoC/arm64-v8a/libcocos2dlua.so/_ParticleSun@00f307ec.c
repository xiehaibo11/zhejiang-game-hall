
/* non-virtual thunk to cocos2d::ParticleSun::~ParticleSun() */

void __thiscall cocos2d::ParticleSun::~ParticleSun(ParticleSun *this)

{
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
                    /* try { // try from 00f30810 to 01030853 has its CatchHandler @ 00f30810
                       catch() { ... } // from try @ 00f30810 with catch @ 00f30810
                       catch() { ... } // from try @ 00f30894 with catch @ 00f30810 */
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

