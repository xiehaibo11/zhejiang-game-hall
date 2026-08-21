
/* cocos2d::ParticleFire::createWithTotalParticles(int) */

ParticleSystemQuad * cocos2d::ParticleFire::createWithTotalParticles(int param_1)

{
  ParticleSystemQuad *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystemQuad *)0x0) {
    ParticleSystemQuad::ParticleSystemQuad(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_01708a28;
    *(undefined ***)(this + 0x300) = &PTR__ParticleFire_01709140;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleFire_01709100;
    uVar1 = initWithTotalParticles((ParticleFire *)this,param_1);
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

