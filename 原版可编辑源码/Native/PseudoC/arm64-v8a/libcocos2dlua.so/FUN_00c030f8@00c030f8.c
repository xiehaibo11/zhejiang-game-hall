
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c030f8(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = FUN_00c00ff8(*param_2,0,0xf000035,auStack_28);
  FUN_00bfba1c(param_1,auStack_28,iVar1 - (int)auStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

