
/* cocos2d::ParticleSun::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleSun::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_017098e8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSun_0170a000;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSun_01709fc0;
    uVar1 = initWithTotalParticles((ParticleSun *)this,param_1);
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

