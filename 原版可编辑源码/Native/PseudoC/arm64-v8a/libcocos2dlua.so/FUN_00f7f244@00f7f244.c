
long FUN_00f7f244(long *param_1,void *param_2,ulong param_3)

{
  size_t __n;
  int iVar1;
  long lVar2;
  
  if (param_3 == 0) {
LAB_00f7f2c4:
    lVar2 = 0;
  }
  else {
    iVar1 = (int)param_1[2];
    lVar2 = 0;
    do {
      __n = param_3;
      if (param_3 >> 0x1f != 0) {
        __n = 0x80000000;
      }
      if (param_1[1] < (long)(iVar1 + (int)__n)) goto LAB_00f7f2c4;
      memcpy(param_2,(void *)(*param_1 + (long)iVar1),__n);
      param_2 = (void *)((long)param_2 + __n);
      param_3 = param_3 - __n;
      lVar2 = __n + lVar2;
      iVar1 = (int)param_1[2] + (int)__n;
      *(int *)(param_1 + 2) = iVar1;
    } while (param_3 != 0);
  }
  return lVar2;
}

