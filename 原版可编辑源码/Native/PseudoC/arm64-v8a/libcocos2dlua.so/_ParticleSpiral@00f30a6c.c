
/* non-virtual thunk to cocos2d::ParticleSpiral::~ParticleSpiral() */

void __thiscall cocos2d::ParticleSpiral::~ParticleSpiral(ParticleSpiral *this)

{
                    /* try { // try from 00f30a6c to 01030a83 has its CatchHandler @ 00f30b44 */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x300));
  operator_delete((ParticleSystemQuad *)(this + -0x300));
  return;
}

