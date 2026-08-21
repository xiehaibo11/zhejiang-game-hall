
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_walk(long param_1,code *param_2,undefined8 param_3)

{
  long ****pppplVar1;
  uint uVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  long ***local_18;
  long ***local_10;
  long local_8;
  
  pppplVar1 = (long ****)(param_1 + 0x10);
  local_18 = *(long ****)(param_1 + 0x10);
  local_8 = ___stack_chk_guard;
  if (pppplVar1 == (long ****)local_18) {
    local_18 = (long ***)&local_18;
    local_10 = local_18;
  }
  else {
    local_10 = (long ***)*(long *****)(param_1 + 0x18);
    **(long *****)(param_1 + 0x18) = (long ***)&local_18;
    ppplVar5 = (long ***)local_18[1];
    *(long ****)(param_1 + 0x18) = ppplVar5;
    *ppplVar5 = (long **)pppplVar1;
    local_18[1] = (long **)&local_18;
  }
  pppplVar3 = (long ****)local_18;
  while (local_18 = (long ***)pppplVar3, pppplVar3 != &local_18) {
    pppplVar4 = pppplVar3 + -4;
    uVar2 = *(uint *)(pppplVar3 + 7);
    *pppplVar3[1] = (long **)*pppplVar3;
    (*pppplVar3)[1] = (long **)pppplVar3[1];
    *pppplVar3 = (long ***)pppplVar1;
    ppplVar5 = *(long ****)(param_1 + 0x18);
    pppplVar3[1] = ppplVar5;
    *ppplVar5 = (long **)pppplVar3;
    *(long *****)(param_1 + 0x18) = pppplVar3;
    pppplVar3 = (long ****)local_18;
    if ((uVar2 >> 0xf & 1) == 0) {
      (*param_2)(pppplVar4,param_3);
      pppplVar3 = (long ****)local_18;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

