
void FUN_00e706c8(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(param_1 + 0x10);
  plVar3 = *(long **)(param_1 + 8);
  if (iVar1 == 4) {
    plVar3 = (long *)plVar3[0x10];
    if (plVar3 == (long *)0x0) goto LAB_00e70758;
    local_2c = 4;
  }
  else {
    if (iVar1 != 5) {
      if ((plVar3 != (long *)0x0) && (iVar1 == 6)) {
        (**(code **)(*plVar3 + 8))();
      }
      goto LAB_00e70758;
    }
    if ((*(int *)(param_1 + 0x14) == 4) || (plVar3 = (long *)plVar3[0x10], plVar3 == (long *)0x0))
    goto LAB_00e70758;
    local_2c = 5;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_2c);
LAB_00e70758:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

