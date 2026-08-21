
/* cocos2d::ParticleSpiral::~ParticleSpiral() */

void __thiscall cocos2d::ParticleSpiral::~ParticleSpiral(ParticleSpiral *this)

{
                    /* try { // try from 00f30a04 to 01030a3f has its CatchHandler @ 00f30a04
                       catch() { ... } // from try @ 00f30a04 with catch @ 00f30a04
                       catch() { ... } // from try @ 00f30ae8 with catch @ 00f30a04 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)this);
  operator_delete(this);
  return;
}

