
/* cocos2d::ui::Widget::onFocusChange(cocos2d::ui::Widget*, cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::Widget::onFocusChange(Widget *this,Widget *param_1,Widget *param_2)

{
  if (param_1 != (Widget *)0x0) {
    param_1[0x414] = (Widget)0x0;
  }
  if (param_2 != (Widget *)0x0) {
    param_2[0x414] = (Widget)0x1;
    _focusedWidget = param_2;
    if (_focusNavigationController != 0) {
      *(Widget **)(_focusNavigationController + 8) = param_2;
    }
  }
  return;
}

