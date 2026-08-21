
/* cocos2d::ui::PageView::handlePressLogic(cocos2d::Touch*) */

void cocos2d::ui::PageView::handlePressLogic(Touch *param_1)

{
  Widget *pWVar1;
  undefined8 uVar2;
  
  ScrollView::handlePressLogic(param_1);
  if (param_1[0x9d0] == (Touch)0x0) {
    pWVar1 = (Widget *)ListView::getCenterItemInCurrentView((ListView *)param_1);
    uVar2 = ListView::getIndex((ListView *)param_1,pWVar1);
    *(undefined8 *)(param_1 + 0x960) = uVar2;
    *(undefined8 *)(param_1 + 0x9c8) = uVar2;
    param_1[0x9d0] = (Touch)0x1;
  }
  return;
}

