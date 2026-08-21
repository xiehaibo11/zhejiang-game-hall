
long ft_corner_orientation(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    lVar1 = -param_4;
    if (-1 < param_1) {
      lVar1 = param_4;
    }
    return lVar1;
  }
  if (param_1 == 0) {
    lVar1 = -param_3;
    if (param_2 < 0) {
      lVar1 = param_3;
    }
    return lVar1;
  }
  if (param_4 == 0) {
    lVar1 = -param_2;
    if (-1 < param_3) {
      lVar1 = param_2;
    }
    return lVar1;
  }
  if (param_3 != 0) {
    uVar2 = param_4 * param_1 - param_3 * param_2;
    if (uVar2 != 0) {
      return 1 - (uVar2 >> 0x3e & 2);
    }
    return 0;
  }
  lVar1 = -param_1;
  if (param_4 < 0) {
    lVar1 = param_1;
  }
  return lVar1;
}

