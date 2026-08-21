
/* cocos2d::extension::ControlStepper::stopAutorepeat() */

void __thiscall cocos2d::extension::ControlStepper::stopAutorepeat(ControlStepper *this)

{
  Node::unschedule((_func_void_float *)this);
  return;
}

