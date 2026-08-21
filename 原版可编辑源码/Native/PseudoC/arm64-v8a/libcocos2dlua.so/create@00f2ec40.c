
/* cocos2d::ParticleGalaxy::create() */

ParticleSystemQuad * cocos2d::ParticleGalaxy::create(void)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170a048;
    *(undefined ***)(this + 0x300) = &PTR__ParticleGalaxy_0170a760;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleGalaxy_0170a720;
    uVar1 = init((ParticleGalaxy *)this);
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

