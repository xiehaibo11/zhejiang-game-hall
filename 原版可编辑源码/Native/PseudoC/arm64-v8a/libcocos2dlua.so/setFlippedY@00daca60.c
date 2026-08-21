
/* cocos2d::ui::Widget::setFlippedY(bool) */

void __thiscall cocos2d::ui::Widget::setFlippedY(Widget *this,bool param_1)

{
  (**(code **)(*(long *)this + 0x68))();
  this[0x3e1] = (Widget)param_1;
                    /* WARNING: Could not recover jumptable at 0x00daca98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))(this);
  return;
}

