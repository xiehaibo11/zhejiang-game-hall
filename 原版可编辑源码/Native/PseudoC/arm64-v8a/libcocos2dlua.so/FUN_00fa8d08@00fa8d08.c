
void FUN_00fa8d08(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xc0);
  if (plVar2 != (long *)0x0) {
    local_30 = *param_2;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

