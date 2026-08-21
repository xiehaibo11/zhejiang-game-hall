
long FUN_00c23dc4(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = 1;
  if (param_2 != 0) {
    for (; lVar2 = param_1, (param_2 & 1) == 0; param_2 = param_2 >> 1) {
      param_1 = lVar2 * lVar2;
    }
    param_2 = param_2 >> 1;
    if (param_2 != 0) {
      lVar3 = lVar2 * lVar2;
      while (param_2 != 1) {
        uVar4 = param_2 & 1;
        param_2 = param_2 >> 1;
        lVar1 = lVar2 * lVar3;
        if (uVar4 == 0) {
          lVar1 = lVar2;
        }
        lVar3 = lVar3 * lVar3;
        lVar2 = lVar1;
      }
      lVar2 = lVar2 * lVar3;
    }
  }
  return lVar2;
}

