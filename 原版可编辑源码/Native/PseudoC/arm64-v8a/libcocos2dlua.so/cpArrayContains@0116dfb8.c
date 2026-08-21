
undefined8 cpArrayContains(int *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 < 1) {
    return 0;
  }
  lVar1 = 0;
  do {
    if (*(long *)(*(long *)(param_1 + 2) + lVar1 * 8) == param_2) {
      return 1;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 < *param_1);
  return 0;
}

