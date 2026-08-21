
/* cocos2d::extension::ControlSwitch::~ControlSwitch() */

void __thiscall cocos2d::extension::ControlSwitch::~ControlSwitch(ControlSwitch *this)

{
  *(undefined ***)this = &PTR__ControlSwitch_016ec680;
  if (*(Ref **)(this + 0x358) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x358));
  }
  Control::~Control((Control *)this);
  return;
}

