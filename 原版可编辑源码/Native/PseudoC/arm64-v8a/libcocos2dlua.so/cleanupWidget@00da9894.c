
/* cocos2d::ui::Widget::cleanupWidget() */

void __thiscall cocos2d::ui::Widget::cleanupWidget(Widget *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)(this + 0x3c0));
  if (*(Ref **)(this + 0x3c0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3c0));
    *(undefined8 *)(this + 0x3c0) = 0;
  }
  plVar1 = _focusNavigationController;
  if (_focusedWidget == this) {
    if (_focusNavigationController != (long *)0x0) {
      if (*_focusNavigationController != 0) {
        lVar2 = Director::getInstance();
        EventDispatcher::removeEventListener
                  (*(EventDispatcher **)(lVar2 + 0xb0),(EventListener *)*plVar1);
      }
      operator_delete(plVar1);
    }
    _focusNavigationController = (long *)0x0;
    _focusedWidget = (Widget *)0x0;
  }
  return;
}

