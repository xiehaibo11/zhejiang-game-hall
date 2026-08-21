
/* cocos2d::ui::ScrollView::handlePressLogic(cocos2d::Touch*) */

void cocos2d::ui::ScrollView::handlePressLogic(Touch *param_1)

{
  undefined8 uVar1;
  Touch *pTVar2;
  long lVar3;
  long lVar4;
  Touch *pTVar5;
  
                    /* try { // try from 00dbde00 to 00ebde2f has its CatchHandler @ 00dbd918 */
  param_1[0x7d4] = (Touch)0x1;
  param_1[0x81d] = (Touch)0x0;
  uVar1 = utils::getTimeInMilliseconds();
  *(undefined8 *)(param_1 + 0x810) = uVar1;
  if (*(long *)(param_1 + 0x7f0) != 0) {
    lVar3 = *(long *)(param_1 + 0x7e0);
                    /* try { // try from 00dbde30 to 00ebde3f has its CatchHandler @ 00dbe2e0 */
    pTVar2 = *(Touch **)(param_1 + 0x7e8);
    lVar4 = *(long *)pTVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    *(undefined8 *)(param_1 + 0x7f0) = 0;
                    /* try { // try from 00dbde54 to 00ebde5f has its CatchHandler @ 00dbe384 */
    while (pTVar2 != param_1 + 0x7e0) {
      pTVar5 = *(Touch **)(pTVar2 + 8);
      operator_delete(pTVar2);
      pTVar2 = pTVar5;
    }
  }
  if (*(long *)(param_1 + 0x808) != 0) {
    lVar3 = *(long *)(param_1 + 0x7f8);
    pTVar2 = *(Touch **)(param_1 + 0x800);
    lVar4 = *(long *)pTVar2;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    *(undefined8 *)(param_1 + 0x808) = 0;
                    /* try { // try from 00dbde9c to 00ebdf6b has its CatchHandler @ 00dbe378 */
    while (pTVar2 != param_1 + 0x7f8) {
      pTVar5 = *(Touch **)(pTVar2 + 8);
      operator_delete(pTVar2);
      pTVar2 = pTVar5;
    }
  }
  if (*(ScrollViewBar **)(param_1 + 0x858) != (ScrollViewBar *)0x0) {
    ScrollViewBar::onTouchBegan(*(ScrollViewBar **)(param_1 + 0x858));
  }
  if (*(ScrollViewBar **)(param_1 + 0x860) == (ScrollViewBar *)0x0) {
    return;
  }
  ScrollViewBar::onTouchBegan(*(ScrollViewBar **)(param_1 + 0x860));
  return;
}

