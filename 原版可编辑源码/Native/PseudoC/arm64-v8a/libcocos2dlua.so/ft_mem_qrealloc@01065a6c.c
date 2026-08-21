
void * ft_mem_qrealloc(long param_1,ulong param_2,ulong param_3,ulong param_4,void *param_5,
                      int *param_6)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  size_t __n;
  
  if ((long)(param_3 | param_2 | param_4) < 0) {
    iVar3 = 6;
    goto LAB_01065b38;
  }
  if ((param_2 == 0) || (param_4 == 0)) {
    if (param_5 != (void *)0x0) {
      (**(code **)(param_1 + 0x10))(param_1,param_5);
      iVar3 = 0;
      param_5 = (void *)0x0;
      goto LAB_01065b38;
    }
  }
  else {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = 0x7fffffff / (long)param_2;
    }
    if (lVar1 < (long)param_4) {
      iVar3 = 10;
      goto LAB_01065b38;
    }
    if (param_3 != 0) {
      pvVar2 = (void *)(**(code **)(param_1 + 0x18))
                                 (param_1,param_3 * param_2,param_4 * param_2,param_5);
      iVar3 = (uint)(pvVar2 == (void *)0x0) << 6;
      if (pvVar2 != (void *)0x0) {
        param_5 = pvVar2;
      }
      goto LAB_01065b38;
    }
    __n = param_4 * param_2;
    if ((long)__n < 1) {
      iVar3 = 6;
      param_5 = (void *)0x0;
      if (__n == 0) {
        iVar3 = 0;
      }
      goto LAB_01065b38;
    }
    param_5 = (void *)(**(code **)(param_1 + 8))(param_1,__n);
    if (param_5 == (void *)0x0) {
      iVar3 = 0x40;
      goto LAB_01065b38;
    }
    memset(param_5,0,__n);
  }
  iVar3 = 0;
LAB_01065b38:
  *param_6 = iVar3;
  return param_5;
}

