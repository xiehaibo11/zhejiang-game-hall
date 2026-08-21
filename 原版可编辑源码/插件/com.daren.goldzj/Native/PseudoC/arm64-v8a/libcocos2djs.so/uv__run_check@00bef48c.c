
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__run_check(long param_1)

{
  long ****pppplVar1;
  long ****pppplVar2;
  long ***ppplVar3;
  long ***local_18;
  undefined8 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pppplVar1 = (long ****)(param_1 + 400);
  pppplVar2 = *(long *****)(param_1 + 400);
  if (pppplVar1 != pppplVar2) {
    local_10 = *(undefined8 **)(param_1 + 0x198);
    *local_10 = &local_18;
    ppplVar3 = pppplVar2[1];
    *(long ****)(param_1 + 0x198) = ppplVar3;
    *ppplVar3 = (long **)pppplVar1;
    pppplVar2[1] = (long ***)&local_18;
    local_18 = (long ***)pppplVar2;
    while ((long ****)local_18 != &local_18) {
      *local_18[1] = (long *)*local_18;
      (*local_18)[1] = (long *)local_18[1];
      *local_18 = (long **)pppplVar1;
      ppplVar3 = *(long ****)(param_1 + 0x198);
      local_18[1] = (long **)ppplVar3;
      *ppplVar3 = (long **)local_18;
      *(long ****)(param_1 + 0x198) = local_18;
      (*(code *)local_18[-1])(local_18 + -0xd);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

