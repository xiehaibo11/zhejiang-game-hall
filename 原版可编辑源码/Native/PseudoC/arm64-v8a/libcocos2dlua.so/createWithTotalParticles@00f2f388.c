
/* cocos2d::ParticleMeteor::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleMeteor::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170af08;
                    /* try { // try from 00f2f3e4 to 0102f3eb has its CatchHandler @ 00f2f684 */
    *(undefined ***)(this + 0x300) = &PTR__ParticleMeteor_0170b620;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleMeteor_0170b5e0;
    uVar1 = initWithTotalParticles((ParticleMeteor *)this,param_1);
                    /* try { // try from 00f2f3ec to 0102f563 has its CatchHandler @ 00f2ee30 */
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystemQuad *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

