
/* non-virtual thunk to cocos2d::ParticleSpiral::~ParticleSpiral() */

void __thiscall cocos2d::ParticleSpiral::~ParticleSpiral(ParticleSpiral *this)

{
                    /* try { // try from 00f30a40 to 01030a4b has its CatchHandler @ 00f30b3c */
  ParticleSystemQuad::~ParticleSystemQuad((ParticleSystemQuad *)(this + -0x2f8));
  operator_delete((ParticleSystemQuad *)(this + -0x2f8));
  return;
}

