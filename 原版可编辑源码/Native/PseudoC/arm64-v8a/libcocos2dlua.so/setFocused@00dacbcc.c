
/* cocos2d::ui::Widget::setFocused(bool) */

void __thiscall cocos2d::ui::Widget::setFocused(Widget *this,bool param_1)

{
  this[0x414] = (Widget)param_1;
  if (param_1) {
    _focusedWidget = this;
    if (_focusNavigationController != 0) {
      *(Widget **)(_focusNavigationController + 8) = this;
    }
  }
  return;
}

