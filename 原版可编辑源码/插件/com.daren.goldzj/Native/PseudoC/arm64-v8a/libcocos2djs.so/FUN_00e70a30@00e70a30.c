
undefined4 FUN_00e70a30(long *param_1)

{
  long *__dest;
  int iVar1;
  long *plVar2;
  size_t __n;
  
  __dest = param_1 + 0x12;
  *(undefined4 *)(param_1 + 7) = 0x1000;
  param_1[0x413] = (long)(param_1 + 0x212);
  param_1[6] = (long)(param_1 + 0x212);
  while( true ) {
    if ((int)param_1[4] == 0) {
      plVar2 = (long *)*param_1;
      if ((code *)plVar2[5] == (code *)0x0) {
        __n = plVar2[1] - plVar2[2];
        if (0xfff < __n) {
          __n = 0x1000;
        }
        if (__n == 0) goto LAB_00e70b24;
        memcpy(__dest,(void *)(*plVar2 + plVar2[2]),__n);
      }
      else {
        __n = (*(code *)plVar2[5])(plVar2,plVar2[2],__dest,0x1000);
        if (__n == 0) goto LAB_00e70b24;
      }
      plVar2[2] = plVar2[2] + __n;
      param_1[3] = (long)__dest;
      *(int *)(param_1 + 4) = (int)__n;
    }
    iVar1 = inflate(param_1 + 3,0);
    if (iVar1 != 0) break;
    if ((int)param_1[7] == 0) {
      return 0;
    }
  }
  if (iVar1 == 1) {
    param_1[0x414] = param_1[6];
    if (param_1[6] == param_1[0x413]) {
      return 0x55;
    }
    return 0;
  }
LAB_00e70b24:
  param_1[0x414] = param_1[0x413];
  return 0x55;
}

