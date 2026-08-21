
/* cocos2d::ui::Widget::FocusNavigationController::enableFocusNavigation(bool) */

void __thiscall
cocos2d::ui::Widget::FocusNavigationController::enableFocusNavigation
          (FocusNavigationController *this,bool param_1)

{
  long lVar1;
  
  if (this[0x10] != (FocusNavigationController)param_1) {
    this[0x10] = (FocusNavigationController)param_1;
    if (param_1) {
                    /* try { // try from 00da9240 to 00ea9243 has its CatchHandler @ 00da927c */
      addKeyboardEventListener(this);
      return;
    }
    if (*(long *)this != 0) {
      lVar1 = Director::getInstance();
      EventDispatcher::removeEventListener
                (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)this);
      *(undefined8 *)this = 0;
    }
  }
  return;
}

