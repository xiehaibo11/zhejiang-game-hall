
void * FUN_00e1eb6c(long param_1,char *param_2,int *param_3)

{
  int iVar1;
  size_t sVar2;
  void *__dest;
  int iVar3;
  
  if (param_2 == (char *)0x0) {
    iVar3 = 0;
    __dest = (void *)0x0;
  }
  else {
    sVar2 = strlen(param_2);
    sVar2 = sVar2 + 1;
    if ((long)sVar2 < 1) {
      __dest = (void *)0x0;
      iVar3 = 0;
      iVar1 = 6;
    }
    else {
      __dest = (void *)(**(code **)(param_1 + 8))(param_1,sVar2);
      iVar3 = (uint)(__dest == (void *)0x0) << 6;
      iVar1 = iVar3;
    }
    if ((sVar2 != 0) && (iVar3 = iVar1, iVar1 == 0)) {
      memcpy(__dest,param_2,sVar2);
      iVar3 = 0;
    }
  }
  *param_3 = iVar3;
  return __dest;
}

