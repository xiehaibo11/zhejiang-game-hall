
/* fairygui::GObject::transformRectPoint(cocos2d::Vec2 const&, float*, fairygui::GObject*) */

void __thiscall
fairygui::GObject::transformRectPoint(GObject *this,Vec2 *param_1,float *param_2,GObject *param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float local_48;
  float fStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *(ulong *)param_1;
  fVar2 = (float)(local_40 >> 0x20);
  if (this[0xe8] == (GObject)0x0) {
    fVar4 = *(float *)(this + 0xcc);
  }
  else {
    fVar4 = *(float *)(this + 0xcc);
    fVar2 = fVar4 * *(float *)(this + 0xdc) + fVar2;
    local_40 = (ulong)(uint)(*(float *)(this + 200) * *(float *)(this + 0xd8) + (float)local_40);
  }
  local_40 = CONCAT44(fVar4 - fVar2,(undefined4)local_40);
  uVar3 = cocos2d::Node::convertToWorldSpace(*(Node **)(this + 0xa8),(Vec2 *)&local_40);
  local_40 = CONCAT44(fVar4,uVar3);
  local_48 = (float)GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_40);
  if (param_3 != (GObject *)0x0) {
    fStack_44 = fVar4;
    uVar3 = GRoot::rootToWorld(GRoot::_inst,(Vec2 *)&local_48);
    local_40 = CONCAT44(fVar4,uVar3);
    local_48 = (float)cocos2d::Node::convertToNodeSpace
                                (*(Node **)(param_3 + 0xa8),(Vec2 *)&local_40);
    fVar4 = *(float *)(param_3 + 0xcc) - fVar4;
    local_40 = CONCAT44(fVar4,local_48);
    if (param_3[0xe8] != (GObject)0x0) {
      local_48 = local_48 - *(float *)(param_3 + 200) * *(float *)(param_3 + 0xd8);
      fVar4 = fVar4 - *(float *)(param_3 + 0xcc) * *(float *)(param_3 + 0xdc);
      local_40 = CONCAT44(fVar4,local_48);
    }
  }
  if (local_48 < *param_2) {
    *param_2 = local_48;
  }
  if (param_2[2] < local_48) {
    param_2[2] = local_48;
  }
  if (fVar4 < param_2[1]) {
    param_2[1] = fVar4;
  }
  if (param_2[3] < fVar4) {
    param_2[3] = fVar4;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
  fStack_44 = fVar4;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

