
void FUN_008aea98(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = *param_2;
  local_30 = *param_3;
  local_40 = *(undefined8 *)(param_1 + 8);
  local_58[0] = 4;
  local_50 = local_48;
  local_48[0] = 0;
  puVar3 = (undefined8 *)cocos2d::ScriptEngineManager::getInstance();
  iVar2 = (**(code **)(*(long *)*puVar3 + 0x78))((long *)*puVar3,local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 != 0);
}

