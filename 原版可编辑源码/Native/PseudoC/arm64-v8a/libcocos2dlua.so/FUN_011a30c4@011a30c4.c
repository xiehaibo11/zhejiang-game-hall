
int FUN_011a30c4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  iVar2 = close(param_1);
  if (iVar2 != -1) {
    return iVar2;
  }
  iVar2 = *piVar3;
  *piVar3 = iVar1;
  iVar1 = 0;
  if (iVar2 != 0x73 && iVar2 != 4) {
    iVar1 = -iVar2;
  }
  return iVar1;
}

