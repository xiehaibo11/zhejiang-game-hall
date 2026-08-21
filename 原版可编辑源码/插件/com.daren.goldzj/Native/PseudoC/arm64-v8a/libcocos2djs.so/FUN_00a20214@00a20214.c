
int FUN_00a20214(long param_1,undefined1 *param_2)

{
  int iVar1;
  
  FUN_00a11300(param_1,0);
  iVar1 = FUN_00a3f8d8(param_1,0);
  if (iVar1 == 0) {
    if (((*(int *)(param_1 + 0x180) == 2) && (*(char *)(param_1 + 0x3d9) == '\0')) ||
       (*(int *)(param_1 + 0x710) == 1)) {
      iVar1 = 0;
    }
    else if ((*(byte *)(*(long *)(param_1 + 0x408) + 0x7c) & 1) == 0) {
      iVar1 = 0;
      *param_2 = 1;
    }
    else {
      iVar1 = FUN_00a17c8c(param_1,0,param_2);
      if (iVar1 != 0) {
        FUN_00a11300(param_1,1);
      }
    }
  }
  return iVar1;
}

