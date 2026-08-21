
void FUN_008b3708(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 local_48;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_30 = *param_3;
  local_38 = *param_2;
  local_48 = *(undefined8 *)(param_1 + 8);
  puStack_40 = &local_38;
  plVar2 = (long *)cocos2d::LuaEngine::getInstance();
  (**(code **)(*plVar2 + 0x128))(plVar2,*(undefined4 *)(param_1 + 0x10),&local_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

