
void hash_table_iterate(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = (long)param_1;
  param_2[1] = 0;
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*param_1 + lVar1 * 8);
      if (lVar2 != 0) {
        param_2[1] = lVar2;
        *(int *)(param_2 + 2) = (int)lVar1;
        return;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[1]);
  }
  return;
}

