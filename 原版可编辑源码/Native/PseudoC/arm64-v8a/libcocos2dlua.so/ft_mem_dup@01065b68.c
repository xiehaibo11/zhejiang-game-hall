
void * ft_mem_dup(long param_1,void *param_2,size_t param_3,int *param_4)

{
  void *__dest;
  int iVar1;
  
  if ((long)param_3 < 1) {
    iVar1 = 6;
    __dest = (void *)0x0;
    if (param_3 == 0) {
      iVar1 = 0;
    }
  }
  else {
    __dest = (void *)(**(code **)(param_1 + 8))(param_1,param_3);
    iVar1 = (uint)(__dest == (void *)0x0) << 6;
  }
  if ((param_2 != (void *)0x0) && (iVar1 == 0)) {
    memcpy(__dest,param_2,param_3);
  }
  *param_4 = iVar1;
  return __dest;
}

