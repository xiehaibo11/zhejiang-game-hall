
void FUN_008ae78c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = *param_3;
  local_40 = *(undefined8 *)(param_1 + 8);
  local_48[0] = 1;
  local_58[0] = 5;
  local_50 = local_48;
  uStack_38 = param_2;
  puVar2 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
  (**(code **)(*(long *)*puVar2 + 0x78))((long *)*puVar2,local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

