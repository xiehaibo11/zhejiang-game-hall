
/* cocos2d::Grabber::~Grabber() */

void __thiscall cocos2d::Grabber::~Grabber(Grabber *this)

{
  *(undefined ***)this = &PTR__Grabber_01727bd0;
  glDeleteFramebuffers(1,this + 0x24);
  Ref::~Ref((Ref *)this);
  return;
}

