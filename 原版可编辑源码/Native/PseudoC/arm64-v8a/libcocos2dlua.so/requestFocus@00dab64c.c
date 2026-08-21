
/* cocos2d::ui::Widget::requestFocus() */

void __thiscall cocos2d::ui::Widget::requestFocus(Widget *this)

{
  if (_focusedWidget != this) {
    dispatchFocusEvent(this,_focusedWidget,this);
    return;
  }
  return;
}

