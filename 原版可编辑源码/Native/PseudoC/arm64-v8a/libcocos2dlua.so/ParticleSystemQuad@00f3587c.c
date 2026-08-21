
/* cocos2d::ParticleSystemQuad::ParticleSystemQuad() */

void __thiscall cocos2d::ParticleSystemQuad::ParticleSystemQuad(ParticleSystemQuad *this)

{
  ParticleSystem::ParticleSystem((ParticleSystem *)this);
  *(undefined ***)this = &PTR__ParticleSystemQuad_0170e2d8;
  *(undefined ***)(this + 0x300) = &PTR__ParticleSystemQuad_0170e9f0;
  *(undefined ***)(this + 0x2f8) = &PTR__ParticleSystemQuad_0170e9b0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined4 *)(this + 0x540) = 0;
  QuadCommand::QuadCommand((QuadCommand *)(this + 0x550));
  *(undefined8 *)(this + 0x544) = 0;
  return;
}

