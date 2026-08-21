
/* cocos2d::extension::ControlSlider::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

undefined4 cocos2d::extension::ControlSlider::onTouchBegan(Touch *param_1,Event *param_2)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fVar5;
  float local_40 [2];
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
    local_40[0] = (float)Touch::getLocation((Touch *)param_2);
    fVar5 = (float)Node::convertToNodeSpace((Node *)param_1,(Vec2 *)local_40);
    if (0.0 <= fVar5) {
      local_40[0] = fVar5;
      pfVar3 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))();
      if (*pfVar3 < fVar5) {
        pfVar3 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))();
        local_40[0] = *pfVar3;
      }
    }
    else {
      local_40[0] = 0.0;
    }
    fVar5 = local_40[0];
    uVar4 = 1;
    (**(code **)(*(long *)param_1 + 0x660))(param_1,1);
    (**(code **)(**(long **)(param_1 + 0x370) + 0x170))(*(long **)(param_1 + 0x370),0);
    (**(code **)(**(long **)(param_1 + 0x378) + 0x170))(*(long **)(param_1 + 0x378),1);
    pfVar3 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))();
    fVar5 = *(float *)(param_1 + 0x35c) +
            (fVar5 / *pfVar3) * (*(float *)(param_1 + 0x360) - *(float *)(param_1 + 0x35c));
    if (*(float *)(param_1 + 0x368) <= fVar5) {
      fVar5 = *(float *)(param_1 + 0x368);
    }
    if (fVar5 <= *(float *)(param_1 + 0x364)) {
      fVar5 = *(float *)(param_1 + 0x364);
    }
    (**(code **)(*(long *)param_1 + 0x6d0))(fVar5,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

