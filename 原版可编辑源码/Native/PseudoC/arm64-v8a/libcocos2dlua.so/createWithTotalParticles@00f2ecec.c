
/* cocos2d::ParticleGalaxy::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleGalaxy::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
                    /* catch() { ... } // from try @ 00f2ed54 with catch @ 00f2ed28 */
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170a048;
    *(undefined ***)(this + 0x300) = &PTR__ParticleGalaxy_0170a760;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleGalaxy_0170a720;
                    /* try { // try from 00f2ed4c to 0102ed53 has its CatchHandler @ 00f2ed90 */
    uVar1 = initWithTotalParticles((ParticleGalaxy *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystemQuad *)0x0;
    }
    else {
                    /* try { // try from 00f2ed54 to 0102edab has its CatchHandler @ 00f2ed28 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

