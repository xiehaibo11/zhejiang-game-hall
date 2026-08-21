
void FUN_00fa99e8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_38;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *param_2;
  if (*(char *)(lVar3 + 0x3c) == '\0') {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xf0);
  }
  else {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0xc0);
  }
  if (plVar2 != (long *)0x0) {
    local_2c = *(undefined4 *)(lVar3 + 0x38);
    local_38 = lVar3;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_2c,&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

