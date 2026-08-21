
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c00660(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_00bff3ac(auStack_18);
  FUN_00bfba1c(param_1,auStack_18,iVar1 - (int)auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

