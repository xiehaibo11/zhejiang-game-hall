
/* cocos2d::extension::ControlButton::create() */

ControlButton * cocos2d::extension::ControlButton::create(void)

{
  ControlButton *this;
  ulong uVar1;
  
  this = operator_new(0x450,(nothrow_t *)&std::nothrow);
  if (this != (ControlButton *)0x0) {
    ControlButton(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (ControlButton *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

