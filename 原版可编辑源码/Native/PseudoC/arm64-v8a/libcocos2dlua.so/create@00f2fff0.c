
/* cocos2d::ParticleSnow::create() */

ParticleSystemQuad * cocos2d::ParticleSnow::create(void)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
                    /* try { // try from 00f3002c to 01030033 has its CatchHandler @ 00f3010c */
                    /* try { // try from 00f30034 to 0103009f has its CatchHandler @ 00f2fb48 */
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170cc88;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSnow_0170d3a0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSnow_0170d360;
    uVar1 = init((ParticleSnow *)this);
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

