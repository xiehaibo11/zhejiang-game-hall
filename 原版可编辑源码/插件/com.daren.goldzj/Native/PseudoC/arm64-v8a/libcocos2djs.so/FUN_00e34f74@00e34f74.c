
long FUN_00e34f74(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x350);
  param_3 = (*(long *)(param_1 + 0x358) - lVar2) + param_3;
  if (-1 < param_2) {
    lVar1 = (param_3 + param_2 & -*(long *)(param_1 + 0x348)) + lVar2;
    if (-1 < lVar1) {
      lVar2 = lVar1;
    }
    return lVar2;
  }
  lVar1 = (param_3 - param_2 & -*(long *)(param_1 + 0x348)) + lVar2;
  lVar3 = -lVar1;
  if (lVar1 != 0 && -1 < lVar3) {
    lVar3 = -lVar2;
  }
  return lVar3;
}

