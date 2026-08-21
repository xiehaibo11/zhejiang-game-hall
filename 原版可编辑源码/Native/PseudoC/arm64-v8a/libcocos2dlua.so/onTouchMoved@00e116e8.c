
/* cocos2d::extension::ControlSlider::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlSlider::onTouchMoved(Touch *param_1,Event *param_2)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  float local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40[0] = (float)Touch::getLocation((Touch *)param_2);
  fVar3 = (float)Node::convertToNodeSpace((Node *)param_1,(Vec2 *)local_40);
  if (0.0 <= fVar3) {
    local_40[0] = fVar3;
    pfVar2 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))();
    if (*pfVar2 < fVar3) {
      pfVar2 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))();
      local_40[0] = *pfVar2;
    }
  }
  else {
    local_40[0] = 0.0;
  }
  fVar3 = local_40[0];
  pfVar2 = (float *)(**(code **)(**(long **)(param_1 + 0x388) + 0x168))();
  fVar3 = *(float *)(param_1 + 0x35c) +
          (fVar3 / *pfVar2) * (*(float *)(param_1 + 0x360) - *(float *)(param_1 + 0x35c));
  if (*(float *)(param_1 + 0x368) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0x368);
  }
  if (fVar3 <= *(float *)(param_1 + 0x364)) {
    fVar3 = *(float *)(param_1 + 0x364);
  }
  (**(code **)(*(long *)param_1 + 0x6d0))(fVar3,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

