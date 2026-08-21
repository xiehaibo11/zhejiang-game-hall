
uint uv_cwd(char *param_1,size_t *param_2)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  int *piVar4;
  
  if (param_1 != (char *)0x0) {
    bVar1 = param_2 == (size_t *)0x0;
    if (!bVar1) {
      pcVar2 = getcwd(param_1,*param_2);
      if (pcVar2 == (char *)0x0) {
        piVar4 = (int *)__errno();
        return -*piVar4;
      }
      sVar3 = strlen(param_1);
      *param_2 = sVar3;
      if (1 < sVar3) {
        if (param_1[sVar3 - 1] != '/') {
          return (uint)bVar1;
        }
        param_1[sVar3 - 1] = bVar1;
        *param_2 = *param_2 - 1;
        return (uint)bVar1;
      }
      return 0;
    }
  }
  return 0xffffffea;
}

