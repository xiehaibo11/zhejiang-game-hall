
/* cocostudio::ComRender::~ComRender() */

void __thiscall cocostudio::ComRender::~ComRender(ComRender *this)

{
  *(undefined ***)this = &PTR__ComRender_016ca1b8;
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  cocos2d::Component::~Component((Component *)this);
  return;
}

