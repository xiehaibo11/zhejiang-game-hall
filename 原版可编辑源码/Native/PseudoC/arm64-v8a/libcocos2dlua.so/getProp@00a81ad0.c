
/* fairygui::GMovieClip::getProp(fairygui::ObjectPropID) */

void fairygui::GMovieClip::getProp(Value *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 local_30;
  undefined1 local_2e;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(param_3) {
  case 2:
    puVar3 = (undefined2 *)(**(code **)(**(long **)(param_2 + 0x1d8) + 0x4b0))();
    local_2e = *(undefined1 *)(puVar3 + 1);
    local_30 = *puVar3;
    uVar2 = ToolSet::colorToInt((Color3B *)&local_30);
    cocos2d::Value::Value(param_1,uVar2);
    break;
  default:
    GObject::getProp(param_1);
    break;
  case 4:
    cocos2d::Value::Value(param_1,*(bool *)(param_2 + 0x1e8));
    break;
  case 5:
    cocos2d::Value::Value(param_1,*(int *)(*(long *)(param_2 + 0x1e0) + 0x58));
    break;
  case 7:
    cocos2d::Value::Value(param_1,*(float *)(*(long *)(param_2 + 0x1e0) + 0x68));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

