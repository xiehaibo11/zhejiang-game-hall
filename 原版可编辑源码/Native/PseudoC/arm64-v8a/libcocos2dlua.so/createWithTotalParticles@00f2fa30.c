
/* cocos2d::ParticleExplosion::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleExplosion::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
                    /* try { // try from 00f2fa40 to 0102fa47 has its CatchHandler @ 00f2fa60 */
                    /* try { // try from 00f2fa48 to 0102fa7b has its CatchHandler @ 00f2fa1c */
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
                    /* catch() { ... } // from try @ 00f2fa40 with catch @ 00f2fa60 */
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170bdc8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleExplosion_0170c4e0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleExplosion_0170c4a0;
    uVar1 = initWithTotalParticles((ParticleExplosion *)this,param_1);
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

