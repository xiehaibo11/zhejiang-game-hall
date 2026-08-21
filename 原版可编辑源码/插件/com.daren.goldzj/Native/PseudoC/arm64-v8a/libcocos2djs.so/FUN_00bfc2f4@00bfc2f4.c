
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfc2f4(long param_1)

{
  int iVar1;
  utimbuf local_18;
  long local_8;
  
  local_18.modtime = (__time_t)*(double *)(param_1 + 0x148);
  local_18.actime = (__time_t)*(double *)(param_1 + 0x140);
  local_8 = ___stack_chk_guard;
  iVar1 = utime(*(char **)(param_1 + 0x68),&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((long)iVar1);
}

