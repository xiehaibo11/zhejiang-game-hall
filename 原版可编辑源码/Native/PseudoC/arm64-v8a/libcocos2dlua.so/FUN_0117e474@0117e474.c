
void * FUN_0117e474(undefined4 *param_1,int param_2,char *param_3)

{
  uint uVar1;
  void *__ptr;
  void *extraout_x0;
  size_t sVar2;
  size_t sVar3;
  char *__s;
  char *__s_00;
  
  __ptr = *(void **)(param_1 + 0x1c);
  if (__ptr != (void *)0x0) {
    if (param_1[0x1b] != -4) {
      free(__ptr);
      __ptr = extraout_x0;
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
  }
  if ((param_2 != -5) && (param_2 != 0)) {
    *param_1 = 0;
  }
  param_1[0x1b] = param_2;
  if ((param_2 != -4) && (param_3 != (char *)0x0)) {
    __s_00 = *(char **)(param_1 + 8);
    sVar2 = strlen(__s_00);
    sVar3 = strlen(param_3);
    __s = malloc(sVar2 + sVar3 + 3);
    *(char **)(param_1 + 0x1c) = __s;
    if (__s != (char *)0x0) {
      sVar2 = strlen(__s_00);
      sVar3 = strlen(param_3);
      uVar1 = snprintf(__s,sVar2 + sVar3 + 3,"%s%s%s",__s_00,": ",param_3);
      return (void *)(ulong)uVar1;
    }
    param_1[0x1b] = 0xfffffffc;
    __ptr = (void *)0x0;
  }
  return __ptr;
}

