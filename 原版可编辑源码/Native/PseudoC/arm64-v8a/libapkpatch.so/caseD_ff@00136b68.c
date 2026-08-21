
undefined8 switchD_00136940::caseD_ff(long *param_1,void *param_2,ulong param_3)

{
  long lVar1;
  size_t __n;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar4 = param_1[3];
    do {
      if (((ulong)param_1[4] <= param_3) && (lVar4 == 0)) {
        uVar2 = (**(code **)(param_1[1] + 0x18))
                          (param_1[1],*param_1,param_2,(long)param_2 + param_3);
        if ((int)uVar2 != 0) {
          *param_1 = *param_1 + param_3;
          return 1;
        }
        return uVar2;
      }
      uVar3 = param_1[4] - lVar4;
      __n = param_3;
      if (uVar3 <= param_3) {
        __n = uVar3;
      }
      memcpy((void *)(param_1[2] + lVar4),param_2,__n);
      lVar4 = __n + lVar4;
      param_1[3] = lVar4;
      if ((lVar4 != 0) && (lVar4 == param_1[4])) {
        uVar2 = (**(code **)(param_1[1] + 0x18))(param_1[1],*param_1,param_1[2],param_1[2] + lVar4);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        param_1[3] = 0;
        lVar1 = *param_1 + lVar4;
        lVar4 = 0;
        *param_1 = lVar1;
      }
      param_3 = param_3 - __n;
      param_2 = (void *)((long)param_2 + __n);
    } while (param_3 != 0);
  }
  return 1;
}

