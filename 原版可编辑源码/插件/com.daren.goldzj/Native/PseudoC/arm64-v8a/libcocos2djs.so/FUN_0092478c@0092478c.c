
int FUN_0092478c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar5 = *param_1;
  iVar2 = **(int **)(lVar6 + 0xa8);
  puVar4 = (undefined8 *)(lVar5 + 0xa8);
  lVar3 = *param_3;
  iVar1 = **(int **)(lVar3 + 0xa8);
  if (iVar2 < *(int *)*puVar4) {
    if (iVar1 < iVar2) {
      *param_1 = lVar3;
      *param_3 = lVar5;
      iVar2 = 1;
    }
    else {
      *param_1 = lVar6;
      *param_2 = lVar5;
      lVar3 = *param_3;
      if (**(int **)(lVar3 + 0xa8) < **(int **)(lVar5 + 0xa8)) {
        iVar2 = 2;
        *param_2 = lVar3;
        *param_3 = lVar5;
      }
      else {
        iVar2 = 1;
        lVar5 = lVar3;
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
    }
  }
  else if (iVar1 < iVar2) {
    *param_2 = lVar3;
    *param_3 = lVar6;
    lVar5 = *param_1;
    if (**(int **)(*param_2 + 0xa8) < **(int **)(lVar5 + 0xa8)) {
      *param_1 = *param_2;
      *param_2 = lVar5;
      iVar2 = 2;
      lVar5 = *param_3;
      puVar4 = (undefined8 *)(*param_3 + 0xa8);
    }
    else {
      iVar2 = 1;
      lVar5 = lVar6;
      puVar4 = (undefined8 *)(lVar6 + 0xa8);
    }
  }
  else {
    iVar2 = 0;
    lVar5 = lVar3;
    puVar4 = (undefined8 *)(lVar3 + 0xa8);
  }
  if (**(int **)(*param_4 + 0xa8) < *(int *)*puVar4) {
    *param_3 = *param_4;
    *param_4 = lVar5;
    lVar5 = *param_2;
    if (**(int **)(lVar5 + 0xa8) <= **(int **)(*param_3 + 0xa8)) {
      return iVar2 + 1;
    }
    *param_2 = *param_3;
    *param_3 = lVar5;
    lVar5 = *param_1;
    if (**(int **)(lVar5 + 0xa8) <= **(int **)(*param_2 + 0xa8)) {
      return iVar2 + 2;
    }
    iVar2 = iVar2 + 3;
    *param_1 = *param_2;
    *param_2 = lVar5;
  }
  return iVar2;
}

