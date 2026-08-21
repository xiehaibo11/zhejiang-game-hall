
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv__work_done(long param_1)

{
  long ***ppplVar1;
  undefined4 uVar2;
  long ***local_18;
  long ***local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uv_mutex_lock(param_1 + -0x28);
  local_18 = *(long ****)(param_1 + -0x38);
  if ((long ****)(param_1 + -0x38) == (long ****)local_18) {
    local_18 = (long ***)&local_18;
    local_10 = local_18;
  }
  else {
    local_10 = *(long ****)(param_1 + -0x30);
    *local_10 = (long **)&local_18;
    ppplVar1 = (long ***)local_18[1];
    *(long ****)(param_1 + -0x30) = ppplVar1;
    *ppplVar1 = (long **)(param_1 + -0x38);
    local_18[1] = (long **)&local_18;
  }
  uv_mutex_unlock(param_1 + -0x28);
  while ((long ****)local_18 != &local_18) {
    *local_18[1] = (long *)*local_18;
    (*local_18)[1] = (long *)local_18[1];
    uVar2 = 0xffffff83;
    if (local_18[-3] != (long **)FUN_00bfafb8) {
      uVar2 = 0;
    }
    (*(code *)local_18[-2])(local_18 + -3,uVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

