
/* cocos2d::extension::ControlSwitch::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlSwitch::onTouchBegan(Touch *param_1,Event *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_1 + 0x6a8))();
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = (**(code **)(*(long *)param_1 + 0x658))(param_1), (uVar2 & 1) == 0)) ||
     (uVar2 = (**(code **)(*(long *)param_1 + 0x178))(param_1), (uVar2 & 1) == 0)) {
    uVar4 = 0;
  }
  else {
    param_1[0x364] = (Touch)0x0;
    local_40[0] = Touch::getLocation((Touch *)param_2);
    fVar5 = (float)Node::convertToNodeSpace((Node *)param_1,(Vec2 *)local_40);
    *(float *)(param_1 + 0x360) = fVar5 - *(float *)(*(long **)(param_1 + 0x358) + 0xa7);
    plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x358) + 0x6e8))();
    (**(code **)(*plVar3 + 0x4c0))(plVar3,&Color3B::GRAY);
    ControlSwitchSprite::needsLayout(*(ControlSwitchSprite **)(param_1 + 0x358));
    uVar4 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

