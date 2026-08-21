
/* cocos2d::ParticleExplosion::create() */

ParticleSystemQuad * cocos2d::ParticleExplosion::create(void)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170bdc8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleExplosion_0170c4e0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleExplosion_0170c4a0;
    uVar1 = init((ParticleExplosion *)this);
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

