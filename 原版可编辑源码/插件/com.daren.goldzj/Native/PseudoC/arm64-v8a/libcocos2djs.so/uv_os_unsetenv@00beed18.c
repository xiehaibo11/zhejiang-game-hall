
int uv_os_unsetenv(char *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = unsetenv(param_1);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)__errno();
    iVar2 = -*piVar3;
  }
  return iVar2;
}

