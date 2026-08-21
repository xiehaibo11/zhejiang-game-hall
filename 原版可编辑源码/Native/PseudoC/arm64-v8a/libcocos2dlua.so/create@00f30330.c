
/* cocos2d::ParticleRain::create() */

ParticleSystemQuad * cocos2d::ParticleRain::create(void)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
                    /* try { // try from 00f30338 to 0103033f has its CatchHandler @ 00f30468 */
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170d3e8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleRain_0170db00;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleRain_0170dac0;
    uVar1 = init((ParticleRain *)this);
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

