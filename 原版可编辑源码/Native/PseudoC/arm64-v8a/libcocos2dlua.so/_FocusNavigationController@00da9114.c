
/* cocos2d::ui::Widget::FocusNavigationController::~FocusNavigationController() */

void __thiscall
cocos2d::ui::Widget::FocusNavigationController::~FocusNavigationController
          (FocusNavigationController *this)

{
  long lVar1;
  
  if (*(long *)this != 0) {
    lVar1 = Director::getInstance();
                    /* catch() { ... } // from try @ 00da9160 with catch @ 00da9134 */
    EventDispatcher::removeEventListener
              (*(EventDispatcher **)(lVar1 + 0xb0),*(EventListener **)this);
    *(undefined8 *)this = 0;
  }
  return;
}

