
/* cocos2d::RenderTexture::initFramebuffer() */

void __thiscall cocos2d::RenderTexture::initFramebuffer(RenderTexture *this)

{
  undefined4 uVar1;
  Configuration *pCVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = Application::getMainFBO(Application::_instance);
  *(undefined4 *)(this + 4) = uVar1;
  glGenFramebuffers(1,this + 8);
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 8));
  glFramebufferTexture2D(0x8d40,0x8ce0,0xde1,*(undefined4 *)this,0);
  ccActiveOffScreenFramebuffer(*(uint *)(this + 8));
  pCVar2 = (Configuration *)Configuration::getInstance();
  uVar3 = Configuration::supportsOESPackedDepthStencil(pCVar2);
  glGenRenderbuffers(1,this + 0x18);
  if ((uVar3 & 1) == 0) {
    glGenRenderbuffers(1,this + 0x1c);
    glBindRenderbuffer(0x8d41,*(undefined4 *)(this + 0x18));
    pCVar2 = (Configuration *)Configuration::getInstance();
    uVar3 = Configuration::supportsOESDepth24(pCVar2);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0x81a5;
    }
    else {
      uVar4 = 0x81a6;
    }
    glRenderbufferStorage(0x8d41,uVar4,*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
    glBindRenderbuffer(0x8d41,*(undefined4 *)(this + 0x1c));
    glRenderbufferStorage(0x8d41,0x8d48,*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
    glFramebufferRenderbuffer(0x8d40,0x8d00,0x8d41,*(undefined4 *)(this + 0x18));
    uVar1 = *(undefined4 *)(this + 0x1c);
  }
  else {
    glBindRenderbuffer(0x8d41,*(undefined4 *)(this + 0x18));
    glRenderbufferStorage(0x8d41,0x88f0,*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34));
    glFramebufferRenderbuffer(0x8d40,0x8d00,0x8d41,*(undefined4 *)(this + 0x18));
    uVar1 = *(undefined4 *)(this + 0x18);
  }
  glFramebufferRenderbuffer(0x8d40,0x8d20,0x8d41,uVar1);
  glCheckFramebufferStatus(0x8d40);
  glBindFramebuffer(0x8d40,*(undefined4 *)(this + 4));
  return;
}

