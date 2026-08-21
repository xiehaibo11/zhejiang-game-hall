
/* cocos2d::extension::ControlColourPicker::create() */

Control * cocos2d::extension::ControlColourPicker::create(void)

{
  Control *this;
  
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Control *)0x0) {
    Control::Control(this);
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x380) = 0;
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined ***)this = &PTR__ControlColourPicker_016e9390;
  }
  (**(code **)(*(long *)this + 0x500))(this);
  Ref::autorelease((Ref *)this);
  return this;
}

