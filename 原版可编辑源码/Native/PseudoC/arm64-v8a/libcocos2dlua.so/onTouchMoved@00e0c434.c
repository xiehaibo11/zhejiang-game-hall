
/* cocos2d::extension::ControlButton::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlButton::onTouchMoved(Touch *param_1,Event *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
  uVar1 = (**(code **)(*(long *)param_1 + 0x658))();
  if ((((uVar1 & 1) == 0) || (param_1[0x358] == (Touch)0x0)) ||
     (uVar1 = (**(code **)(*(long *)param_1 + 0x668))(param_1), (uVar1 & 1) != 0)) {
    uVar1 = (**(code **)(*(long *)param_1 + 0x678))(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar3 = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)param_1 + 0x670);
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1 + 0x6a8))(param_1,param_2);
    uVar2 = (**(code **)(*(long *)param_1 + 0x678))(param_1);
    if ((uVar1 & 1) == 0) {
      if ((uVar2 & 1) == 0) {
        uVar1 = (**(code **)(*(long *)param_1 + 0x678))(param_1);
        if ((uVar1 & 1) != 0) {
          return;
        }
        lVar4 = *(long *)param_1;
        uVar3 = 4;
      }
      else {
        (**(code **)(*(long *)param_1 + 0x670))(param_1,0);
        lVar4 = *(long *)param_1;
        uVar3 = 0x10;
      }
    }
    else if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)param_1 + 0x670))(param_1,1);
      lVar4 = *(long *)param_1;
      uVar3 = 8;
    }
    else {
      uVar1 = (**(code **)(*(long *)param_1 + 0x678))(param_1);
      if ((uVar1 & 1) == 0) {
        return;
      }
      lVar4 = *(long *)param_1;
      uVar3 = 2;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x688);
  }
                    /* WARNING: Could not recover jumptable at 0x00e0c568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
  return;
}

