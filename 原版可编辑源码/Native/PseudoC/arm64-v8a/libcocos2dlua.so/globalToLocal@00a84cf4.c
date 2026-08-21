
/* fairygui::GObject::globalToLocal(cocos2d::Rect const&) */

void fairygui::GObject::globalToLocal(Rect *param_1)

{
  long lVar1;
  Rect *in_x1;
  Rect *in_x8;
  undefined4 uVar2;
  float in_s1;
  undefined4 local_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  cocos2d::Rect::Rect(in_x8);
  local_50 = (float)GRoot::rootToWorld(GRoot::_inst,in_x1);
  local_50 = (float)cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),(Vec2 *)&local_50);
  in_s1 = *(float *)(param_1 + 0xcc) - in_s1;
  if (param_1[0xe8] != '\0') {
    local_50 = local_50 - *(float *)(param_1 + 200) * *(float *)(param_1 + 0xd8);
    in_s1 = in_s1 - *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xdc);
  }
  *(float *)in_x8 = local_50;
  *(float *)(in_x8 + 4) = in_s1;
  fStack_4c = in_s1;
  uVar2 = cocos2d::Rect::getMaxX(in_x1);
  uStack_54 = cocos2d::Rect::getMaxY(in_x1);
  local_58 = uVar2;
  local_50 = (float)GRoot::rootToWorld(GRoot::_inst,(Vec2 *)&local_58);
  fStack_4c = in_s1;
  local_50 = (float)cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),(Vec2 *)&local_50);
  fStack_4c = *(float *)(param_1 + 0xcc) - in_s1;
  if (param_1[0xe8] != '\0') {
    local_50 = local_50 - *(float *)(param_1 + 200) * *(float *)(param_1 + 0xd8);
    fStack_4c = fStack_4c - *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xdc);
  }
  *(float *)(in_x8 + 8) = local_50 - *(float *)in_x8;
  *(float *)(in_x8 + 0xc) = fStack_4c - *(float *)(in_x8 + 4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

