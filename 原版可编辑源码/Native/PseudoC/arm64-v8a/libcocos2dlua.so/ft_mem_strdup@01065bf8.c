
void * ft_mem_strdup(long param_1,char *param_2,int *param_3)

{
  size_t sVar1;
  void *__dest;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(param_2);
    sVar1 = sVar1 + 1;
    if (0 < (long)sVar1) {
      __dest = (void *)(**(code **)(param_1 + 8))(param_1,sVar1);
      iVar2 = (uint)(__dest == (void *)0x0) << 6;
      goto joined_r0x01065c80;
    }
  }
  iVar2 = 6;
  __dest = (void *)0x0;
  if (sVar1 == 0) {
    iVar2 = 0;
  }
joined_r0x01065c80:
  if ((param_2 != (char *)0x0) && (iVar2 == 0)) {
    memcpy(__dest,param_2,sVar1);
  }
  *param_3 = iVar2;
  return __dest;
}

