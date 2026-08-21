
/* cocos2d::ParticleSpiral::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleSpiral::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
                    /* try { // try from 00f2f71c to 0102f723 has its CatchHandler @ 00f2f788 */
                    /* try { // try from 00f2f730 to 0102f73b has its CatchHandler @ 00f2f7a0 */
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170b668;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSpiral_0170bd80;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSpiral_0170bd40;
    uVar1 = initWithTotalParticles((ParticleSpiral *)this,param_1);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00f2f754 to 0102f75b has its CatchHandler @ 00f2f784 */
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystemQuad *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00f2f768 to 0102f773 has its CatchHandler @ 00f2f7a0 */
  return this;
}

