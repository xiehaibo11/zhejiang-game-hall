
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00a1798c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *(undefined1 *)((long)param_2 + 9) = *(undefined1 *)((long)param_1 + 9);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  *param_2 = *param_1;
  if (param_1[3] == 0) {
    param_2[3] = 0;
    lVar1 = param_1[2];
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01d1b758)();
    param_2[3] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[2];
  }
  if (lVar1 == 0) {
    param_2[2] = 0;
    lVar1 = param_1[7];
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01d1b758)();
    param_2[2] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[7];
  }
  if (lVar1 == 0) {
    param_2[7] = 0;
    lVar1 = param_1[6];
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01d1b758)();
    param_2[7] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[6];
  }
  if (lVar1 == 0) {
    param_2[6] = 0;
    lVar1 = param_1[5];
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01d1b758)();
    param_2[6] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[5];
  }
  if (lVar1 == 0) {
    param_2[5] = 0;
    lVar1 = param_1[4];
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01d1b758)();
    param_2[5] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = param_1[4];
  }
  if (lVar1 == 0) {
    param_2[4] = 0;
  }
  else {
    lVar1 = (*(code *)PTR_strdup_01d1b758)();
    param_2[4] = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

