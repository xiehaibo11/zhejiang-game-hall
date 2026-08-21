
long FUN_0015723c(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_00157290:
    lVar3 = FUN_0014ceb0(param_1);
    if (*(long *)(lVar2 + 0x28) != local_38) goto LAB_001572f8;
  }
  else {
    cVar1 = *(char *)*param_1;
    if (cVar1 == 'D') {
      lVar3 = FUN_0014dad8(param_1);
    }
    else {
      if (cVar1 != 'T') goto LAB_00157290;
      lVar3 = FUN_0014d768(param_1);
    }
    local_40 = lVar3;
    if (lVar3 != 0) {
      FUN_0014c270(param_1 + 0x25,&local_40);
    }
    if (*(long *)(lVar2 + 0x28) != local_38) {
LAB_001572f8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return lVar3;
}

