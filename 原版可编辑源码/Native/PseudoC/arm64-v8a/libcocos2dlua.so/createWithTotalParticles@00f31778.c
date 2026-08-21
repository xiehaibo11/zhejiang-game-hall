
/* cocos2d::ParticleSystem::createWithTotalParticles(int) */

ParticleSystem * cocos2d::ParticleSystem::createWithTotalParticles(int param_1)

{
  ParticleSystem *this;
  ulong uVar1;
  
                    /* try { // try from 00f31788 to 01031793 has its CatchHandler @ 00f31834 */
                    /* try { // try from 00f31794 to 010318ab has its CatchHandler @ 00f313cc */
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystem *)0x0) {
    ParticleSystem(this);
                    /* catch() { ... } // from try @ 00f31774 with catch @ 00f317b0 */
                    /* catch() { ... } // from try @ 00f3173c with catch @ 00f317b4 */
                    /* catch() { ... } // from try @ 00f31704 with catch @ 00f317b8 */
    uVar1 = (**(code **)(*(long *)this + 0x6a0))(this,param_1);
                    /* catch() { ... } // from try @ 00f316cc with catch @ 00f317bc */
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00f315e8 with catch @ 00f317cc */
                    /* catch() { ... } // from try @ 00f315b0 with catch @ 00f317d0 */
                    /* catch() { ... } // from try @ 00f31578 with catch @ 00f317d4 */
                    /* catch() { ... } // from try @ 00f31540 with catch @ 00f317d8 */
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystem *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00f31694 with catch @ 00f317c0 */
                    /* catch() { ... } // from try @ 00f3165c with catch @ 00f317c4 */
      Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 00f31624 with catch @ 00f317c8 */
    }
  }
  return this;
}

