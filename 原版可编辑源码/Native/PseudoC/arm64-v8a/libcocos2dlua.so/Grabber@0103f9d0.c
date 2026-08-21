
/* cocos2d::Grabber::Grabber() */

void __thiscall cocos2d::Grabber::Grabber(Grabber *this)

{
  Ref::Ref((Ref *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__Grabber_01727bd0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  glGenFramebuffers(1);
  return;
}

