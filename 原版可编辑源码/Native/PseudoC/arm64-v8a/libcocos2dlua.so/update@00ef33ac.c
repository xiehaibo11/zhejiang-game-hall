
/* cocos2d::Component::update(float) */

void cocos2d::Component::update(float param_1)

{
  long lVar1;
  long in_x0;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 local_60 [2];
  undefined1 *local_58;
  undefined1 local_50 [8];
  undefined4 *puStack_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(in_x0 + 0x4c) == 2) {
    local_3c = 4;
    puVar2 = (undefined8 *)ScriptEngineManager::getInstance();
    plVar4 = (long *)*puVar2;
    uVar3 = (**(code **)(*plVar4 + 0x90))(plVar4);
    if ((uVar3 & 1) == 0) {
      puStack_48 = &local_3c;
      local_58 = local_50;
      local_60[0] = 10;
      param_1 = (float)(**(code **)(*plVar4 + 0x78))(plVar4,local_60);
    }
    else {
      param_1 = (float)(**(code **)(*plVar4 + 0x88))(plVar4,0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}

