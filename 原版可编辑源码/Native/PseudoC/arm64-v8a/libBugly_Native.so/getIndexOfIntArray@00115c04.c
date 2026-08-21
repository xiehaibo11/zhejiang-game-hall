
long getIndexOfIntArray(int param_1,long param_2,int param_3)

{
  long lVar1;
  
  if (0 < param_3) {
    lVar1 = 0;
    do {
      if (*(int *)(param_2 + lVar1 * 4) == param_1) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
  return 0xffffffff;
}

