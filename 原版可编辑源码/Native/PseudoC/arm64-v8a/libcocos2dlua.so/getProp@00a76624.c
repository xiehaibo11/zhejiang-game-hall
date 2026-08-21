
/* fairygui::GImage::getProp(fairygui::ObjectPropID) */

void fairygui::GImage::getProp(Value *param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_3 == 2) {
    puVar3 = (undefined2 *)(**(code **)(**(long **)(param_2 + 0x1d8) + 0x4b0))();
    local_2e = *(undefined1 *)(puVar3 + 1);
    local_30 = *puVar3;
    uVar2 = ToolSet::colorToInt((Color3B *)&local_30);
    cocos2d::Value::Value(param_1,uVar2);
  }
  else {
    GObject::getProp(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

