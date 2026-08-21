
/* cocos2d::Menu::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

undefined4 cocos2d::Menu::onTouchBegan(Touch *param_1,Event *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
                    /* try { // try from 00f1b754 to 0101b75b has its CatchHandler @ 00f1bb60 */
  lVar1 = Camera::getVisitingCamera();
  if ((*(int *)(param_1 + 800) == 0) && (param_1[0x1f9] != (Touch)0x0)) {
    if (lVar1 == 0) {
      return 0;
    }
                    /* try { // try from 00f1b798 to 0101b79b has its CatchHandler @ 00f1bb14 */
    if (param_1[0x31d] == (Touch)0x0) {
      return 0;
    }
    for (plVar3 = *(long **)(param_1 + 400); plVar3 != (long *)0x0;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x260))(plVar3)) {
                    /* try { // try from 00f1b7a8 to 0101b7af has its CatchHandler @ 00f1baa4 */
      uVar2 = (**(code **)(*plVar3 + 0x178))(plVar3);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x660))(param_1,param_2,lVar1);
    *(long **)(param_1 + 0x328) = plVar3;
    if (plVar3 != (long *)0x0) {
      *(undefined4 *)(param_1 + 800) = 1;
      *(long *)(param_1 + 0x330) = lVar1;
      (**(code **)(*plVar3 + 0x538))();
      return 1;
    }
  }
  return 0;
}

