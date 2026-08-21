
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfc280(char *param_1,undefined8 param_2)

{
  int iVar1;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = stat(param_1,(stat *)&stack0xffffffffffffff78);
  if (iVar1 == 0) {
    FUN_00bfbafc((stat *)&stack0xffffffffffffff78,param_2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

