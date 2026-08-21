
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfbe20(long param_1)

{
  int iVar1;
  dirent **ppdVar2;
  long lVar3;
  dirent **local_10;
  long local_8;
  
  local_10 = (dirent **)0x0;
  local_8 = ___stack_chk_guard;
  iVar1 = scandir(*(char **)(param_1 + 0x68),&local_10,FUN_00bfbed4,FUN_00bfbec0);
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (iVar1 == 0) {
    free(local_10);
    ppdVar2 = (dirent **)0x0;
  }
  else {
    ppdVar2 = local_10;
    if (iVar1 == -1) {
      lVar3 = -1;
      goto LAB_00bfbe80;
    }
  }
  *(dirent ***)(param_1 + 0x60) = ppdVar2;
  lVar3 = (long)iVar1;
LAB_00bfbe80:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}

