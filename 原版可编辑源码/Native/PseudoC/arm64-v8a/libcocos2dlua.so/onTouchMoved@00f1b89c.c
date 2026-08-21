
/* cocos2d::Menu::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::Menu::onTouchMoved(Touch *param_1,Event *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x660))
                             (param_1,param_2,*(undefined8 *)(param_1 + 0x330));
  plVar2 = *(long **)(param_1 + 0x328);
  if (plVar1 != plVar2) {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x540))(plVar2);
    }
    *(long **)(param_1 + 0x328) = plVar1;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00f1b8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x538))(plVar1);
      return;
    }
  }
  return;
}

