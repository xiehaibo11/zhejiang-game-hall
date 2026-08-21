
void FUN_00ea1604(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((**(byte **)(param_1 + 0x10) & 1) == 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xb8);
    local_2c = 1;
    (**(code **)(*plVar2 + 0x28))(plVar2,*(long *)(param_1 + 8),&local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

