
/* fairygui::GObject::localToGlobal(cocos2d::Vec2 const&) */

void __thiscall fairygui::GObject::localToGlobal(GObject *this,Vec2 *param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *(ulong *)param_1;
  fVar2 = (float)(local_30 >> 0x20);
  if (this[0xe8] == (GObject)0x0) {
    fVar4 = *(float *)(this + 0xcc);
  }
  else {
    fVar4 = *(float *)(this + 0xcc);
    fVar2 = fVar4 * *(float *)(this + 0xdc) + fVar2;
    local_30 = (ulong)(uint)(*(float *)(this + 200) * *(float *)(this + 0xd8) + (float)local_30);
  }
  local_30 = CONCAT44(fVar4 - fVar2,(undefined4)local_30);
  uVar3 = cocos2d::Node::convertToWorldSpace(*(Node **)(this + 0xa8),(Vec2 *)&local_30);
  local_30 = CONCAT44(fVar4,uVar3);
  GRoot::worldToRoot(GRoot::_inst,(Vec2 *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

