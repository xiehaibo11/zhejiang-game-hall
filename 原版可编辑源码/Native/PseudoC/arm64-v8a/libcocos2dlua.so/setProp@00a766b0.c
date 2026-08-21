
/* fairygui::GImage::setProp(fairygui::ObjectPropID, cocos2d::Value const&) */

void __thiscall fairygui::GImage::setProp(GImage *this,int param_2,Value *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 2) {
    uVar2 = cocos2d::Value::asUnsignedInt(param_3);
    uVar3 = ToolSet::intToColor(uVar2);
    local_2e = (undefined1)((ulong)uVar3 >> 0x10);
    local_30 = (undefined2)uVar3;
                    /* try { // try from 00a766f8 to 00b7675b has its CatchHandler @ 00a766f8
                       catch() { ... } // from try @ 00a766f8 with catch @ 00a766f8
                       catch() { ... } // from try @ 00a76820 with catch @ 00a766f8
                       catch() { ... } // from try @ 00a76874 with catch @ 00a766f8 */
    (**(code **)(**(long **)(this + 0x1d8) + 0x4c0))(*(long **)(this + 0x1d8),&local_30);
  }
  else {
    GObject::setProp(this);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

