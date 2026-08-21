
/* cocos2d::ParticleRain::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleRain::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
                    /* try { // try from 00f303dc to 010303e3 has its CatchHandler @ 00f30464 */
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f30400 to 0103040f has its CatchHandler @ 00f30470 */
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
                    /* try { // try from 00f30414 to 0103041b has its CatchHandler @ 00f30460 */
                    /* try { // try from 00f3041c to 01030483 has its CatchHandler @ 00f30130 */
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170d3e8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleRain_0170db00;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleRain_0170dac0;
    uVar1 = initWithTotalParticles((ParticleRain *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
                    /* catch() { ... } // from try @ 00f30414 with catch @ 00f30460 */
      this = (ParticleSystemQuad *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00f303dc with catch @ 00f30464 */
                    /* catch() { ... } // from try @ 00f30338 with catch @ 00f30468 */
                    /* catch() { ... } // from try @ 00f3029c with catch @ 00f3046c */
                    /* catch() { ... } // from try @ 00f30288 with catch @ 00f30470
                       catch() { ... } // from try @ 00f30324 with catch @ 00f30470
                       catch() { ... } // from try @ 00f303c8 with catch @ 00f30470
                       catch() { ... } // from try @ 00f30400 with catch @ 00f30470 */
  return this;
}

