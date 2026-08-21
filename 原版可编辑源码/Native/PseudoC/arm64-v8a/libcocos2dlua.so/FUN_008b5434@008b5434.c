
void FUN_008b5434(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puStack_38 = &local_30;
  local_30 = *param_2;
  local_40 = *(undefined8 *)(param_1 + 8);
  plVar2 = (long *)cocos2d::LuaEngine::getInstance();
  (**(code **)(*plVar2 + 0x128))(plVar2,*(undefined4 *)(param_1 + 0x10),&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

