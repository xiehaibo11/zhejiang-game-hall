
/* cocos2d::ui::Widget::FocusNavigationController::onKeypadKeyPressed(cocos2d::EventKeyboard::KeyCode,
   cocos2d::Event*) */

void cocos2d::ui::Widget::FocusNavigationController::onKeypadKeyPressed
               (long param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 00da9158 with catch @ 00da91a0 */
  if ((*(char *)(param_1 + 0x10) != '\0') &&
     (plVar1 = *(long **)(param_1 + 8), plVar1 != (long *)0x0)) {
    switch(param_2) {
    case 0x9f:
      lVar3 = *plVar1;
      uVar2 = 0;
      break;
    case 0xa0:
      lVar3 = *plVar1;
      uVar2 = 1;
      break;
    case 0xa1:
      lVar3 = *plVar1;
      uVar2 = 2;
      break;
    case 0xa2:
      lVar3 = *plVar1;
      uVar2 = 3;
      break;
    default:
      goto switchD_00da91c8_default;
    }
    uVar2 = (**(code **)(lVar3 + 0x618))(plVar1,uVar2,plVar1);
    *(undefined8 *)(param_1 + 8) = uVar2;
  }
switchD_00da91c8_default:
  return;
}

