
long scal_quant32(int param_1,long param_2,int param_3)

{
  long lVar1;
  
  if (param_3 < 2) {
    return 0;
  }
  lVar1 = 0;
  do {
    if (param_1 <= *(int *)(param_2 + lVar1 * 4)) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 < param_3 + -1);
  return lVar1;
}

