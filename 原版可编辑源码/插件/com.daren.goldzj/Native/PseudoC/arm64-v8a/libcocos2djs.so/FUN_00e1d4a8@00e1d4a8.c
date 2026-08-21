
undefined4 FUN_00e1d4a8(long *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  size_t __n;
  undefined4 uVar2;
  
  uVar1 = param_1[1] - param_2;
  if (param_2 <= (ulong)param_1[1] && uVar1 != 0) {
    if ((code *)param_1[5] == (code *)0x0) {
      __n = param_4;
      if (uVar1 <= param_4) {
        __n = uVar1;
      }
      memcpy(param_3,(void *)(*param_1 + param_2),__n);
    }
    else {
      __n = (*(code *)param_1[5])(param_1,param_2,param_3,param_4);
    }
    param_1[2] = __n + param_2;
    uVar2 = 0x55;
    if (param_4 <= __n) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x55;
}

