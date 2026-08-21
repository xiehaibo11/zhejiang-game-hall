
long scal_quant(short param_1,long param_2,int param_3)

{
  long lVar1;
  
  if (param_3 < 2) {
    return 0;
  }
  lVar1 = 0;
  do {
    if (param_1 <= *(short *)(param_2 + lVar1 * 2)) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 < param_3 + -1);
  return lVar1;
}

