
/* cocos2d::ParticleSpiral::create() */

ParticleSystemQuad * cocos2d::ParticleSpiral::create(void)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
                    /* try { // try from 00f2f668 to 0102f69f has its CatchHandler @ 00f2ee30 */
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170b668;
                    /* catch() { ... } // from try @ 00f2f3e4 with catch @ 00f2f684
                       catch() { ... } // from try @ 00f2f564 with catch @ 00f2f684 */
    *(undefined ***)(this + 0x300) = &PTR__ParticleSpiral_0170bd80;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSpiral_0170bd40;
    uVar1 = init((ParticleSpiral *)this);
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

