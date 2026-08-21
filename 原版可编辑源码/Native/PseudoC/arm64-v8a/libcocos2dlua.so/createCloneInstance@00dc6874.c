
/* cocos2d::ui::RadioButtonGroup::createCloneInstance() */

Widget * cocos2d::ui::RadioButtonGroup::createCloneInstance(void)

{
  Widget *this;
  ulong uVar1;
  
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (Widget *)0x0) {
    Widget::Widget(this);
    *(undefined8 *)(this + 0x4f0) = 0;
    *(undefined8 *)(this + 0x500) = 0;
    *(undefined8 *)(this + 0x4f8) = 0;
    *(undefined8 *)(this + 0x530) = 0;
    *(undefined8 *)(this + 0x540) = 0;
    *(undefined ***)this = &PTR__RadioButtonGroup_016ddd60;
    *(undefined ***)(this + 0x318) = &PTR__RadioButtonGroup_016de430;
    this[0x548] = (Widget)0x0;
    uVar1 = Widget::init(this);
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

