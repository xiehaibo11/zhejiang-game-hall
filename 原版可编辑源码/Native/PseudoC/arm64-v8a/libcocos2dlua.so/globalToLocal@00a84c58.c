
/* fairygui::GObject::globalToLocal(cocos2d::Vec2 const&) */

void fairygui::GObject::globalToLocal(Vec2 *param_1)

{
  long lVar1;
  Vec2 *in_x1;
  float in_s1;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (float)GRoot::rootToWorld(GRoot::_inst,in_x1);
  local_30 = (float)cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),(Vec2 *)&local_30);
  fStack_2c = *(float *)(param_1 + 0xcc) - in_s1;
  if (param_1[0xe8] != '\0') {
    local_30 = local_30 - *(float *)(param_1 + 200) * *(float *)(param_1 + 0xd8);
    fStack_2c = fStack_2c - *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xdc);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

