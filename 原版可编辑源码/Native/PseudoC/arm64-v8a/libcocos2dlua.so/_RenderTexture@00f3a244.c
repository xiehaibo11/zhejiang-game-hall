
/* cocos2d::RenderTexture::~RenderTexture() */

void __thiscall cocos2d::RenderTexture::~RenderTexture(RenderTexture *this)

{
  RenderTexture *pRVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__RenderTexture_0170f680;
  if (*(Ref **)(this + 0x380) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x380));
  }
  if (*(Ref **)(this + 0x348) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x348));
  }
  glDeleteFramebuffers(1,this + 0x32c);
  if (*(int *)(this + 0x330) != 0) {
    glDeleteRenderbuffers(1,this + 0x330);
  }
  if (*(int *)(this + 0x334) != 0) {
    glDeleteRenderbuffers(1,this + 0x334);
  }
  if (*(long **)(this + 0x350) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x350) + 8))();
  }
  *(undefined8 *)(this + 0x350) = 0;
  Mat4::~Mat4((Mat4 *)(this + 0x680));
  Mat4::~Mat4((Mat4 *)(this + 0x640));
  Mat4::~Mat4((Mat4 *)(this + 0x600));
  Mat4::~Mat4((Mat4 *)(this + 0x5c0));
  pRVar1 = *(RenderTexture **)(this + 0x5b0);
  if (this + 0x590 == pRVar1) {
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x20);
  }
  else {
    if (pRVar1 == (RenderTexture *)0x0) goto LAB_00f3a314;
    pcVar2 = *(code **)(*(long *)pRVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00f3a314:
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x540));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x4f0));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x4a0));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x450));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x400));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x3b0));
  GroupCommand::~GroupCommand((GroupCommand *)(this + 0x388));
  Node::~Node((Node *)this);
  return;
}

