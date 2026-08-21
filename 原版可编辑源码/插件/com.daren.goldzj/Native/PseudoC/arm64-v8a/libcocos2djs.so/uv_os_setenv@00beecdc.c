
int uv_os_setenv(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    iVar2 = -0x16;
  }
  else {
    iVar1 = setenv(param_1,param_2,1);
    iVar2 = 0;
    if (iVar1 != 0) {
      piVar3 = (int *)__errno();
      iVar2 = -*piVar3;
    }
  }
  return iVar2;
}

