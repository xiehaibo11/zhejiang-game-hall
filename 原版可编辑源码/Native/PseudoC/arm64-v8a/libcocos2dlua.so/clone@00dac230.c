
/* cocos2d::ui::Widget::clone() */

Widget * __thiscall cocos2d::ui::Widget::clone(Widget *this)

{
  Widget *this_00;
  
  this_00 = (Widget *)(**(code **)(*(long *)this + 0x668))();
  copyProperties(this_00,this);
  (**(code **)(*(long *)this_00 + 0x678))(this_00,this);
  return this_00;
}

