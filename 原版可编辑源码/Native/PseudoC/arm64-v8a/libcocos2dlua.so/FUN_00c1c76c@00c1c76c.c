
void FUN_00c1c76c(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_2 + 0x34) != 0) {
    iVar1 = ((uint)LZCOUNT(*(int *)(param_2 + 0x34)) ^ 0x1f) + 1;
  }
  FUN_00c1bf2c(param_1,param_2,param_3 + 1,iVar1);
  return;
}

