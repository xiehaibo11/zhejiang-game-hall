
long FUN_00e34fcc(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x350);
  param_3 = (*(long *)(param_1 + 0x358) - lVar1) + param_3;
  if (-1 < param_2) {
    lVar3 = *(long *)(param_1 + 0x348);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = (param_3 + param_2) / lVar3;
    }
    lVar2 = lVar1 + lVar2 * lVar3;
    if (-1 < lVar2) {
      lVar1 = lVar2;
    }
    return lVar1;
  }
  lVar3 = *(long *)(param_1 + 0x348);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = (param_3 - param_2) / lVar3;
  }
  lVar2 = -lVar1 - lVar2 * lVar3;
  if (0 < lVar2) {
    lVar2 = -lVar1;
  }
  return lVar2;
}

