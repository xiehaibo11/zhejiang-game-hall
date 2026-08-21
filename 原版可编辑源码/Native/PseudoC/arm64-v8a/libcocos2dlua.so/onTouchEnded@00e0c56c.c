
/* cocos2d::extension::ControlButton::onTouchEnded(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlButton::onTouchEnded(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  param_1[0x358] = (Touch)0x0;
  (**(code **)(*(long *)param_1 + 0x670))(param_1,0);
  uVar1 = (**(code **)(*(long *)param_1 + 0x6a8))(param_1,param_2);
  uVar2 = 0x20;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0x40;
  }
                    /* WARNING: Could not recover jumptable at 0x00e0c5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x688))(param_1,uVar2);
  return;
}

