
/* cocos2d::ParticleFireworks::create() */

ParticleSystemQuad * cocos2d::ParticleFireworks::create(void)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_01709188;
    *(undefined ***)(this + 0x300) = &PTR__ParticleFireworks_017098a0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleFireworks_01709860;
    uVar1 = init((ParticleFireworks *)this);
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

