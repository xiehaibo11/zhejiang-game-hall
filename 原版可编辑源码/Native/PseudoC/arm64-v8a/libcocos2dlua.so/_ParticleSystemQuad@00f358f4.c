
/* cocos2d::ParticleSystemQuad::~ParticleSystemQuad() */

void __thiscall cocos2d::ParticleSystemQuad::~ParticleSystemQuad(ParticleSystemQuad *this)

{
  Configuration *this_00;
  ulong uVar1;
  
  *(undefined ***)this = &PTR__ParticleSystemQuad_0170e2d8;
  *(undefined ***)(this + 0x300) = &PTR__ParticleSystemQuad_0170e9f0;
  *(undefined ***)(this + 0x2f8) = &PTR__ParticleSystemQuad_0170e9b0;
  if (*(long *)(this + 0x460) == 0) {
    if (*(void **)(this + 0x530) != (void *)0x0) {
      free(*(void **)(this + 0x530));
      *(undefined8 *)(this + 0x530) = 0;
    }
    if (*(void **)(this + 0x538) != (void *)0x0) {
      free(*(void **)(this + 0x538));
      *(undefined8 *)(this + 0x538) = 0;
    }
    glDeleteBuffers(2,this + 0x544);
    this_00 = (Configuration *)Configuration::getInstance();
    uVar1 = Configuration::supportsShareableVAO(this_00);
    if ((uVar1 & 1) != 0) {
                    /* try { // try from 00f35970 to 010359b3 has its CatchHandler @ 00f35970
                       catch() { ... } // from try @ 00f35970 with catch @ 00f35970
                       catch() { ... } // from try @ 00f359d8 with catch @ 00f35970 */
      (*glDeleteVertexArraysOESEXT)(1,this + 0x540);
      GL::bindVAO(0);
    }
  }
  QuadCommand::~QuadCommand((QuadCommand *)(this + 0x550));
  ParticleSystem::~ParticleSystem((ParticleSystem *)this);
  return;
}

