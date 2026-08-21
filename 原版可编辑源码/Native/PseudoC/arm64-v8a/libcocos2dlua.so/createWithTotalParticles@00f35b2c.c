
/* cocos2d::ParticleSystemQuad::createWithTotalParticles(int) */

ParticleSystem * cocos2d::ParticleSystemQuad::createWithTotalParticles(int param_1)

{
  ParticleSystem *this;
  ulong uVar1;
  
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (ParticleSystem *)0x0) {
    ParticleSystem::ParticleSystem(this);
    *(undefined ***)this = &PTR__ParticleSystemQuad_0170e2d8;
    *(undefined ***)(this + 0x300) = &PTR__ParticleSystemQuad_0170e9f0;
    *(undefined ***)(this + 0x2f8) = &PTR__ParticleSystemQuad_0170e9b0;
    *(undefined4 *)(this + 0x540) = 0;
    *(undefined8 *)(this + 0x538) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    QuadCommand::QuadCommand((QuadCommand *)(this + 0x550));
    *(undefined8 *)(this + 0x544) = 0;
    uVar1 = (**(code **)(*(long *)this + 0x6a0))(this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ParticleSystem *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

