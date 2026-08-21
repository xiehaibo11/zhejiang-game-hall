
/* cocos2d::extension::ControlSwitch::locationFromTouch(cocos2d::Touch*) */

void cocos2d::extension::ControlSwitch::locationFromTouch(Touch *param_1)

{
  long lVar1;
  Touch *in_x1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = Touch::getLocation(in_x1);
  Node::convertToNodeSpace((Node *)param_1,(Vec2 *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

