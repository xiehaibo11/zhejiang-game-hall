
void FUN_00a4b0d4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < (int)param_1[4]) {
    lVar1 = 0;
    do {
      lVar2 = lVar1 * 8;
      FUN_00a4ab10(*(undefined8 *)(*param_1 + lVar2),param_1);
      lVar1 = lVar1 + 1;
      *(undefined8 *)(*param_1 + lVar2) = 0;
    } while (lVar1 < (int)param_1[4]);
  }
  (*(code *)PTR_free_01769a00)(*param_1);
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

