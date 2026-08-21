
/* cocos2d::extension::ControlSwitch::onTouchMoved(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::extension::ControlSwitch::onTouchMoved(Touch *param_1,Event *param_2)

{
  long lVar1;
  ControlSwitchSprite *this;
  float fVar2;
  float fVar3;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = Touch::getLocation((Touch *)param_2);
  fVar2 = (float)Node::convertToNodeSpace((Node *)param_1,(Vec2 *)local_30);
  this = *(ControlSwitchSprite **)(param_1 + 0x358);
  param_1[0x364] = (Touch)0x1;
  fVar2 = fVar2 - *(float *)(param_1 + 0x360);
  fVar3 = *(float *)(this + 0x540);
  if ((*(float *)(this + 0x540) < fVar2) && (fVar3 = fVar2, *(float *)(this + 0x53c) <= fVar2)) {
    fVar3 = *(float *)(this + 0x53c);
  }
  *(float *)(this + 0x538) = fVar3;
  ControlSwitchSprite::needsLayout(this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

