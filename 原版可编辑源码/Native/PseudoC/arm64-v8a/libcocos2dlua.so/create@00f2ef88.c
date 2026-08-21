
/* cocos2d::ParticleFlower::create() */

ParticleSystemQuad * cocos2d::ParticleFlower::create(void)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170a7a8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleFlower_0170aec0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleFlower_0170ae80;
    uVar1 = init((ParticleFlower *)this);
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

