
/* cocos2d::extension::ControlPotentiometer::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

undefined4 cocos2d::extension::ControlPotentiometer::onTouchBegan(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 in_s1;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x6a8))();
  if ((((uVar1 & 1) == 0) ||
      (uVar1 = (**(code **)(*(long *)param_1 + 0x658))(param_1), (uVar1 & 1) == 0)) ||
     (uVar1 = (**(code **)(*(long *)param_1 + 0x178))(param_1), (uVar1 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*(long *)param_1 + 0x6a0))(param_1,param_2);
    *(undefined4 *)(param_1 + 0x378) = uVar3;
    *(undefined4 *)(param_1 + 0x37c) = in_s1;
    uVar3 = 1;
    (**(code **)(*(long *)param_1 + 0x660))(param_1,1);
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x6b8))(param_1);
    (**(code **)(*plVar2 + 0x4c0))(plVar2,&Color3B::GRAY);
  }
  return uVar3;
}

