
long FUN_00a31030(long param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 == 0 && param_5 == 0) {
    return 0;
  }
  if (param_1 - param_2 < param_3) {
    return -1;
  }
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = ((param_1 - param_2) * 1000) / param_3;
  }
  lVar3 = FUN_00a2e888(param_6,param_7,param_4,param_5);
  lVar2 = lVar1 - lVar3;
  if (lVar2 == 0 || lVar1 < lVar3) {
    lVar2 = 0;
  }
  return lVar2;
}

