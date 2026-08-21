
/* cocos2d::ui::Widget::create() */

Widget * cocos2d::ui::Widget::create(void)

{
  Widget *this;
  ulong uVar1;
  
  this = operator_new(0x4f0,(nothrow_t *)&std::nothrow);
  if (this != (Widget *)0x0) {
    Widget(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Widget *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

