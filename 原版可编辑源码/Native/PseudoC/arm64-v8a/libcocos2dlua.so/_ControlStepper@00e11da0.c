
/* cocos2d::extension::ControlStepper::~ControlStepper() */

void __thiscall cocos2d::extension::ControlStepper::~ControlStepper(ControlStepper *this)

{
  *(undefined ***)this = &PTR__ControlStepper_016eb790;
  Node::unscheduleAllCallbacks((Node *)this);
  if (*(Ref **)(this + 0x390) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x390));
  }
  if (*(Ref **)(this + 0x398) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x398));
  }
  if (*(Ref **)(this + 0x3a0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3a0));
  }
  if (*(Ref **)(this + 0x3a8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3a8));
  }
  Control::~Control((Control *)this);
  return;
}

