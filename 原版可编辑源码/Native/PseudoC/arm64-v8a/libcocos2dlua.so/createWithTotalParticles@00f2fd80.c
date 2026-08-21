
/* cocos2d::ParticleSmoke::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleSmoke::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170c528;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSmoke_0170cc40;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSmoke_0170cc00;
    uVar1 = initWithTotalParticles((ParticleSmoke *)this,param_1);
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

