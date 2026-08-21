
size_t FUN_00e1d538(long *param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1] - uVar1;
  if (uVar1 <= (ulong)param_1[1] && uVar2 != 0) {
    if ((code *)param_1[5] == (code *)0x0) {
      if (uVar2 <= param_3) {
        param_3 = uVar2;
      }
      memcpy(param_2,(void *)(*param_1 + uVar1),param_3);
    }
    else {
      param_3 = (*(code *)param_1[5])(param_1,uVar1);
    }
    param_1[2] = param_1[2] + param_3;
    return param_3;
  }
  return 0;
}

