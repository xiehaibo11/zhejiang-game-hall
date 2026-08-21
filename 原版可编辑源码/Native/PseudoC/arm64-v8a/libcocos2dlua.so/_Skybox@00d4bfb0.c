
/* cocos2d::Skybox::~Skybox() */

void __thiscall cocos2d::Skybox::~Skybox(Skybox *this)

{
  Configuration *this_00;
  ulong uVar1;
  
  *(undefined ***)this = &PTR__Skybox_016d4ba0;
  glDeleteBuffers(1,this + 0x2fc);
  glDeleteBuffers(1,this + 0x300);
  *(undefined8 *)(this + 0x2fc) = 0;
  this_00 = (Configuration *)Configuration::getInstance();
  uVar1 = Configuration::supportsShareableVAO(this_00);
  if ((uVar1 & 1) != 0) {
    (*glDeleteVertexArraysOESEXT)(1,this + 0x2f8);
    GL::bindVAO(0);
    *(undefined4 *)(this + 0x2f8) = 0;
  }
  Ref::release(*(Ref **)(this + 0x360));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x310));
  Node::~Node((Node *)this);
  return;
}

