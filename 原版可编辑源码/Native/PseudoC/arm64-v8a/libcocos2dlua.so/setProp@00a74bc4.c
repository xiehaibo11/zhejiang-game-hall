
/* fairygui::GGraph::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GGraph::setProp(GGraph *this,int param_2,Value *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 == 2) {
    uVar2 = cocos2d::Value::asUnsignedInt(param_3);
    uVar3 = ToolSet::intToColor(uVar2);
    local_4e = (undefined1)((ulong)uVar3 >> 0x10);
    local_50 = (undefined2)uVar3;
                    /* try { // try from 00a74c10 to 00b74c5f has its CatchHandler @ 00a74d38 */
    cocos2d::Color4F::Color4F((Color4F *)&local_48,(Color3B *)&local_50,*(float *)(this + 0x1f8));
    *(undefined8 *)(this + 500) = uStack_40;
    *(undefined8 *)(this + 0x1ec) = local_48;
    updateShape(this);
  }
  else {
    GObject::setProp(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

