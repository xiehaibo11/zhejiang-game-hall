
int uv_cwd(char *param_1,size_t *param_2)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  int *piVar4;
  
  iVar1 = -0x16;
  if ((param_1 != (char *)0x0) && (param_2 != (size_t *)0x0)) {
    pcVar2 = getcwd(param_1,*param_2);
    if (pcVar2 == (char *)0x0) {
      piVar4 = (int *)__errno();
      return -*piVar4;
    }
    sVar3 = strlen(param_1);
    *param_2 = sVar3;
    if (sVar3 < 2) {
      return 0;
    }
    if (param_1[sVar3 - 1] != '/') {
      return 0;
    }
    param_1[sVar3 - 1] = '\0';
    iVar1 = 0;
    *param_2 = *param_2 - 1;
  }
  return iVar1;
}

