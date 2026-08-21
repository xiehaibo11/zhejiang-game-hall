
/* cocos2d::extension::ControlSlider::~ControlSlider() */

void __thiscall cocos2d::extension::ControlSlider::~ControlSlider(ControlSlider *this)

{
  *(undefined ***)this = &PTR__ControlSlider_016eb010;
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  if (*(Ref **)(this + 0x380) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x380));
  }
  if (*(Ref **)(this + 0x388) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x388));
  }
  Control::~Control((Control *)this);
  return;
}

