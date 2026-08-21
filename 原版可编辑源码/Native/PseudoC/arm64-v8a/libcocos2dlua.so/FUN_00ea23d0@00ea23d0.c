
void FUN_00ea23d0(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x80);
  if (plVar2 != (long *)0x0) {
    uStack_30 = *param_3;
    local_38 = *param_4;
    local_40 = *param_5;
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,&uStack_30,&local_38,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

