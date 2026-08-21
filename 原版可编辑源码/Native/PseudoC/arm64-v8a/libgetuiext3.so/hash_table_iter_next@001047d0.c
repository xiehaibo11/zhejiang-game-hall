
undefined8 hash_table_iter_next(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(lVar2 + 8);
  if (*(long *)(lVar2 + 0x10) != 0) {
    param_1[1] = *(long *)(lVar2 + 0x10);
    return uVar1;
  }
  param_1[1] = 0;
  lVar2 = (long)(int)param_1[2];
  do {
    lVar2 = lVar2 + 1;
    if ((int)((long *)*param_1)[1] <= lVar2) goto LAB_00104828;
    lVar3 = *(long *)(*(long *)*param_1 + lVar2 * 8);
  } while (lVar3 == 0);
  param_1[1] = lVar3;
LAB_00104828:
  *(int *)(param_1 + 2) = (int)lVar2;
  return uVar1;
}

