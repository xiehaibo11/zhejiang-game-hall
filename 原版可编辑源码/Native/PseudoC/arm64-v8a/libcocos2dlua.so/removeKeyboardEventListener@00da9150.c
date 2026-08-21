
/* cocos2d::ui::Widget::FocusNavigationController::removeKeyboardEventListener() */

void __thiscall
cocos2d::ui::Widget::FocusNavigationController::removeKeyboardEventListener
          (FocusNavigationController *this)

{
  long lVar1;
  
                    /* try { // try from 00da9158 to 00ea915f has its CatchHandler @ 00da91a0 */
                    /* try { // try from 00da9160 to 00ea91bb has its CatchHandler @ 00da9134 */
  if (*(long *)this != 0) {
    lVar1 = Director::getInstance();
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)this);
    *(undefined8 *)this = 0;
  }
  return;
}

