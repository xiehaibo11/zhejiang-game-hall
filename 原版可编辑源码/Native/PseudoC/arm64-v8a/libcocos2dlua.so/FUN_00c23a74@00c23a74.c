
long FUN_00c23a74(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  for (; (param_2 & 1) == 0; param_2 = param_2 >> 1) {
    param_1 = param_1 * param_1;
  }
  param_2 = param_2 >> 1;
  if (param_2 != 0) {
    lVar2 = param_1 * param_1;
    while (param_2 != 1) {
      uVar3 = param_2 & 1;
      param_2 = param_2 >> 1;
      lVar1 = param_1 * lVar2;
      if (uVar3 == 0) {
        lVar1 = param_1;
      }
      lVar2 = lVar2 * lVar2;
      param_1 = lVar1;
    }
    param_1 = param_1 * lVar2;
  }
  return param_1;
}

