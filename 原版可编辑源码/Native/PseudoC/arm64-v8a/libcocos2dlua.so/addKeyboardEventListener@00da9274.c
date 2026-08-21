
/* cocos2d::ui::Widget::FocusNavigationController::addKeyboardEventListener() */

void __thiscall
cocos2d::ui::Widget::FocusNavigationController::addKeyboardEventListener
          (FocusNavigationController *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  FocusNavigationController *local_58;
  long *local_50;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00da9240 with catch @ 00da927c
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)this != 0) goto LAB_00da931c;
  lVar2 = EventListenerKeyboard::create();
  *(long *)this = lVar2;
  local_70 = &PTR_FUN_016d8e10;
                    /* try { // try from 00da92cc to 00ea92cf has its CatchHandler @ 00da9310 */
  uStack_60 = 0;
  local_68 = onKeypadKeyPressed;
  local_58 = this;
  local_50 = (long *)&local_70;
  FUN_008af1b8(&local_70,lVar2 + 0xd0);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00da9304:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00da9304;
  }
  lVar2 = Director::getInstance();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00da92cc with catch @ 00da9310
                        */
  EventDispatcher::addEventListenerWithFixedPriority
            (*(EventDispatcher **)(lVar2 + 0xb0),*(EventListener **)this,*(int *)(this + 0x14));
LAB_00da931c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

