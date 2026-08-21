
/* cocos2d::ParticleSnow::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleSnow::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
                    /* try { // try from 00f300a0 to 010300a7 has its CatchHandler @ 00f30108 */
                    /* try { // try from 00f300a8 to 0103012f has its CatchHandler @ 00f2fb48 */
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170cc88;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSnow_0170d3a0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSnow_0170d360;
    uVar1 = initWithTotalParticles((ParticleSnow *)this,param_1);
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00f2ff24 with catch @ 00f30110 */
                    /* catch() { ... } // from try @ 00f2fe44 with catch @ 00f30114 */
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystemQuad *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00f300a0 with catch @ 00f30108 */
      Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 00f3002c with catch @ 00f3010c */
    }
  }
                    /* try { // try from 00f30130 to 01030287 has its CatchHandler @ 00f30130
                       catch() { ... } // from try @ 00f30130 with catch @ 00f30130
                       catch() { ... } // from try @ 00f3041c with catch @ 00f30130 */
  return this;
}

