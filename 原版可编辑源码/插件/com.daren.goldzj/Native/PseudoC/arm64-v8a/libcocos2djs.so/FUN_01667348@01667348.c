
void FUN_01667348(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x8c);
  iVar2 = *(int *)(*(long *)(*param_2 + 8) + 4);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  *(int *)(*(long *)(param_1 + 8) + 0x8c) = iVar2;
  return;
}

