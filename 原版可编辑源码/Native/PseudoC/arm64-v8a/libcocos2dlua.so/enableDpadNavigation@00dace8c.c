
/* cocos2d::ui::Widget::enableDpadNavigation(bool) */

void cocos2d::ui::Widget::enableDpadNavigation(bool param_1)

{
  FocusNavigationController *pFVar1;
  long lVar2;
  
  pFVar1 = _focusNavigationController;
  if (param_1) {
    if (_focusNavigationController == (FocusNavigationController *)0x0) {
      pFVar1 = operator_new(0x18,(nothrow_t *)&std::nothrow);
      if (pFVar1 != (FocusNavigationController *)0x0) {
        *(long *)pFVar1 = 0;
        *(long *)(pFVar1 + 8) = 0;
        pFVar1[0x10] = (FocusNavigationController)0x0;
        *(undefined4 *)(pFVar1 + 0x14) = 1;
      }
      _focusNavigationController = pFVar1;
      if (_focusedWidget == 0) {
        if (pFVar1 == (FocusNavigationController *)0x0) {
          return;
        }
      }
      else {
        *(long *)(pFVar1 + 8) = _focusedWidget;
      }
    }
    if (pFVar1[0x10] != (FocusNavigationController)0x1) {
      pFVar1[0x10] = (FocusNavigationController)0x1;
      FocusNavigationController::addKeyboardEventListener(pFVar1);
      return;
    }
  }
  else {
    if (_focusNavigationController != (FocusNavigationController *)0x0) {
      if (*(long *)_focusNavigationController != 0) {
        lVar2 = Director::getInstance();
        EventDispatcher::removeEventListener
                  (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)pFVar1);
      }
      operator_delete(pFVar1);
    }
    _focusNavigationController = (FocusNavigationController *)0x0;
  }
  return;
}

