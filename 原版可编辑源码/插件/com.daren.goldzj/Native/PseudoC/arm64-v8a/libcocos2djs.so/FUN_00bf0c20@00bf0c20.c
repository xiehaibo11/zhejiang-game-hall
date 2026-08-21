
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf0c20(undefined8 param_1)

{
  int iVar1;
  ulong local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = sigfillset((sigset_t *)&stack0xfffffffffffffff0);
  if (((iVar1 == 0) &&
      (iVar1 = uv__pthread_sigmask(2,(sigset_t *)&stack0xfffffffffffffff0,param_1), iVar1 == 0)) &&
     (iVar1 = FUN_00bf0ba0(), iVar1 == 0)) {
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

