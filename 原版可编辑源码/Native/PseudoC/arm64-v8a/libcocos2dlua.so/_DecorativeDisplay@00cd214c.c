
/* cocostudio::DecorativeDisplay::~DecorativeDisplay() */

void __thiscall cocostudio::DecorativeDisplay::~DecorativeDisplay(DecorativeDisplay *this)

{
  *(undefined ***)this = &PTR__DecorativeDisplay_016ce338;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x30));
    *(undefined8 *)(this + 0x30) = 0;
  }
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(Ref **)(this + 0x38) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
    *(undefined8 *)(this + 0x38) = 0;
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

