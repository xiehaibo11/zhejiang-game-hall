
int uv__close_nocheckstdio(int param_1)

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
  iVar2 = -*piVar3;
  if ((iVar2 == -0x73) || (*piVar3 == 4)) {
    iVar2 = 0;
    *piVar3 = iVar1;
  }
  else {
    *piVar3 = iVar1;
  }
  return iVar2;
}

