
int FUN_01140284(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (*(int *)(param_1 + 0x18) + iVar1 + -1) / iVar1;
  }
  if (iVar2 <= param_2) {
    param_2 = iVar2;
  }
  return param_2;
}

