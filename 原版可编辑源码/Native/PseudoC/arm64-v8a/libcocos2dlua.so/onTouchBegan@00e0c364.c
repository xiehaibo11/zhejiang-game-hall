
/* cocos2d::extension::ControlButton::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

undefined4 cocos2d::extension::ControlButton::onTouchBegan(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x6a8))();
  if (((((uVar1 & 1) == 0) ||
       (uVar1 = (**(code **)(*(long *)param_1 + 0x658))(param_1), (uVar1 & 1) == 0)) ||
      (uVar1 = (**(code **)(*(long *)param_1 + 0x178))(param_1), (uVar1 & 1) == 0)) ||
     (uVar1 = Control::hasVisibleParents((Control *)param_1), (uVar1 & 1) == 0)) {
LAB_00e0c420:
    uVar2 = 0;
  }
  else {
    for (plVar3 = *(long **)(param_1 + 400); plVar3 != (long *)0x0;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x260))(plVar3)) {
      uVar1 = (**(code **)(*plVar3 + 0x178))(plVar3);
      if ((uVar1 & 1) == 0) goto LAB_00e0c420;
    }
    uVar2 = 1;
    param_1[0x358] = (Touch)0x1;
    (**(code **)(*(long *)param_1 + 0x670))(param_1,1);
    (**(code **)(*(long *)param_1 + 0x688))(param_1,1);
  }
  return uVar2;
}

