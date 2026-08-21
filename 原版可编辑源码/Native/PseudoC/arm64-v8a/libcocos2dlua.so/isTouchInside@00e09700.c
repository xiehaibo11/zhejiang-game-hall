
/* cocos2d::extension::Control::isTouchInside(cocos2d::Touch*) */

uint cocos2d::extension::Control::isTouchInside(Touch *param_1)

{
  long lVar1;
  uint uVar2;
  Node *this;
  Touch *in_x1;
  Rect aRStack_40 [16];
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30[0] = Touch::getLocation(in_x1);
  this = (Node *)(**(code **)(*(long *)param_1 + 0x260))(param_1);
  local_30[0] = Node::convertToNodeSpace(this,(Vec2 *)local_30);
  (**(code **)(*(long *)param_1 + 0x370))(aRStack_40,param_1);
  uVar2 = Rect::containsPoint(aRStack_40,(Vec2 *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

