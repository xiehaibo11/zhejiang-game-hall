
void oggpack_readinit(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  param_1[3] = param_2;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[1] = *(long *)*param_2 + param_2[1];
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if (lVar2 < 1) {
    lVar3 = 0;
    lVar1 = lVar2;
    while (lVar4 = lVar1, param_2 = (undefined8 *)param_2[3], param_2 != (undefined8 *)0x0) {
      lVar3 = lVar3 + lVar2;
      param_1[5] = lVar3;
      param_1[3] = param_2;
      lVar2 = param_2[2];
      lVar1 = lVar2 + lVar4;
      if (0 < lVar1) {
        lVar2 = param_2[1];
        lVar3 = *(long *)*param_2;
        *(undefined4 *)param_1 = 0;
        param_1[1] = (lVar3 + lVar2) - lVar4;
        param_1[2] = lVar1;
        return;
      }
    }
    param_1[2] = lVar4;
    *(undefined4 *)param_1 = 0;
    if (lVar4 < 0) {
      param_1[2] = 0xffffffffffffffff;
      return;
    }
  }
  return;
}

