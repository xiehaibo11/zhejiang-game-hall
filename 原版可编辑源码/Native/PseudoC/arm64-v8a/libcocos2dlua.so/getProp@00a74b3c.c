
/* fairygui::GGraph::getProp(fairygui::ObjectPropID) */

void fairygui::GGraph::getProp(Value *param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined2 local_38;
  undefined1 local_36;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 2) {
    cocos2d::Color3B::Color3B((Color3B *)&local_30,(Color4F *)(param_2 + 0x1ec));
    local_36 = local_2e;
    local_38 = local_30;
    uVar2 = ToolSet::colorToInt((Color3B *)&local_38);
    cocos2d::Value::Value(param_1,uVar2);
  }
  else {
    GObject::getProp(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00a74bb8 to 00b74c0f has its CatchHandler @ 00a74bb8
                       catch() { ... } // from try @ 00a74bb8 with catch @ 00a74bb8
                       catch() { ... } // from try @ 00a74c98 with catch @ 00a74bb8
                       catch() { ... } // from try @ 00a74ce0 with catch @ 00a74bb8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

