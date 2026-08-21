
undefined4 FUN_00e1bbd0(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  undefined4 uVar3;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1] - uVar1;
  if (uVar1 <= (ulong)param_1[1] && uVar2 != 0) {
    if ((code *)param_1[5] == (code *)0x0) {
      __n = param_3;
      if (uVar2 <= param_3) {
        __n = uVar2;
      }
      memcpy(param_2,(void *)(*param_1 + uVar1),__n);
    }
    else {
      __n = (*(code *)param_1[5])(param_1,uVar1,param_2,param_3);
    }
    uVar3 = 0x55;
    if (param_3 <= __n) {
      uVar3 = 0;
    }
    param_1[2] = __n + uVar1;
    return uVar3;
  }
  return 0x55;
}

