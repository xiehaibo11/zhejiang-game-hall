
/* cocos2d::extension::ControlColourPicker::~ControlColourPicker() */

void __thiscall
cocos2d::extension::ControlColourPicker::~ControlColourPicker(ControlColourPicker *this)

{
  *(undefined ***)this = &PTR__ControlColourPicker_016e9390;
  if (*(Ref **)(this + 0x380) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x380));
  }
  if (*(Ref **)(this + 0x378) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x378));
  }
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x370));
  }
  Control::~Control((Control *)this);
  return;
}

