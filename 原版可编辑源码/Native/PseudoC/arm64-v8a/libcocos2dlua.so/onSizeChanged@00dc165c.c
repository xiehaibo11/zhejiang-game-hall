
/* cocos2d::ui::Button::onSizeChanged() */

void __thiscall cocos2d::ui::Button::onSizeChanged(Button *this)

{
  Widget::onSizeChanged((Widget *)this);
  if (*(long *)(this + 0x508) != 0) {
    (**(code **)(*(long *)this + 0x698))(this);
  }
  *(undefined2 *)(this + 0x563) = 0x101;
  this[0x565] = (Button)0x1;
  return;
}

