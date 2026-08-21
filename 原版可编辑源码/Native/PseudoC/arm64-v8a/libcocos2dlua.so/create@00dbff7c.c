
/* cocos2d::ui::Button::create() */

Button * cocos2d::ui::Button::create(void)

{
  Button *this;
  ulong uVar1;
  
  this = operator_new(0x5e0,(nothrow_t *)&std::nothrow);
  if (this != (Button *)0x0) {
    Button(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Button *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

