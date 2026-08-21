
undefined4 FUN_01083270(uint *param_1,uint *param_2,uint *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  
  lVar4 = *param_4;
  uVar1 = lVar4 + (ulong)*param_2;
  uVar2 = lVar4 + (ulong)*param_1;
  iVar6 = (int)uVar1;
  iVar5 = (int)uVar2;
  if (((uVar1 & 1) == 0) || (iVar6 != *(int *)(lVar4 + 0xa0))) {
    if (((uVar2 & 1) == 0) || (iVar5 != *(int *)(lVar4 + 0xa0))) {
      if ((uVar1 & 1) == 0) {
        dVar7 = (double)(iVar6 >> 1);
      }
      else {
        dVar7 = *(double *)(uVar1 + 3);
      }
      if ((uVar2 & 1) == 0) {
        dVar8 = (double)(iVar5 >> 1);
      }
      else {
        dVar8 = *(double *)(uVar2 + 3);
      }
      if (dVar8 <= dVar7) goto LAB_010832d0;
    }
  }
  else if (((uVar2 & 1) == 0) || (iVar5 != iVar6)) {
LAB_010832d0:
    uVar1 = (ulong)*param_3 + lVar4;
    uVar2 = (ulong)*param_2 + lVar4;
    iVar6 = (int)uVar1;
    iVar5 = (int)uVar2;
    if (((uVar1 & 1) == 0) || (iVar6 != *(int *)(lVar4 + 0xa0))) {
      if (((uVar2 & 1) == 0) || (iVar5 != *(int *)(lVar4 + 0xa0))) {
        if ((uVar1 & 1) == 0) {
          dVar7 = (double)(iVar6 >> 1);
        }
        else {
          dVar7 = *(double *)(uVar1 + 3);
        }
        if ((uVar2 & 1) == 0) {
          dVar8 = (double)(iVar5 >> 1);
        }
        else {
          dVar8 = *(double *)(uVar2 + 3);
        }
        if (dVar8 <= dVar7) {
          return 0;
        }
      }
    }
    else {
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (iVar5 != iVar6) {
        return 0;
      }
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    lVar4 = *param_4;
    uVar1 = lVar4 + (ulong)*param_2;
    uVar2 = lVar4 + (ulong)*param_1;
    iVar6 = (int)uVar1;
    iVar5 = (int)uVar2;
    if (((uVar1 & 1) == 0) || (iVar6 != *(int *)(lVar4 + 0xa0))) {
      if (((uVar2 & 1) == 0) || (iVar5 != *(int *)(lVar4 + 0xa0))) {
        if ((uVar1 & 1) == 0) {
          dVar7 = (double)(iVar6 >> 1);
        }
        else {
          dVar7 = *(double *)(uVar1 + 3);
        }
        if ((uVar2 & 1) == 0) {
          dVar8 = (double)(iVar5 >> 1);
        }
        else {
          dVar8 = *(double *)(uVar2 + 3);
        }
        if (dVar8 <= dVar7) {
          return 1;
        }
      }
    }
    else {
      if ((uVar2 & 1) == 0) {
        return 1;
      }
      if (iVar5 != iVar6) {
        return 1;
      }
    }
    uVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar3;
    return 2;
  }
  uVar1 = (ulong)*param_3 + lVar4;
  uVar2 = (ulong)*param_2 + lVar4;
  iVar6 = (int)uVar1;
  iVar5 = (int)uVar2;
  if (((uVar1 & 1) == 0) || (iVar6 != *(int *)(lVar4 + 0xa0))) {
    if (((uVar2 & 1) == 0) || (iVar5 != *(int *)(lVar4 + 0xa0))) {
      if ((uVar1 & 1) == 0) {
        dVar7 = (double)(iVar6 >> 1);
      }
      else {
        dVar7 = *(double *)(uVar1 + 3);
      }
      if ((uVar2 & 1) == 0) {
        dVar8 = (double)(iVar5 >> 1);
      }
      else {
        dVar8 = *(double *)(uVar2 + 3);
      }
      if (dVar8 <= dVar7) goto LAB_010833ac;
    }
  }
  else if (((uVar2 & 1) == 0) || (iVar5 != iVar6)) {
LAB_010833ac:
    uVar3 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar3;
    lVar4 = *param_4;
    uVar1 = lVar4 + (ulong)*param_3;
    uVar2 = lVar4 + (ulong)*param_2;
    iVar6 = (int)uVar1;
    iVar5 = (int)uVar2;
    if (((uVar1 & 1) == 0) || (iVar6 != *(int *)(lVar4 + 0xa0))) {
      if (((uVar2 & 1) == 0) || (iVar5 != *(int *)(lVar4 + 0xa0))) {
        if ((uVar1 & 1) == 0) {
          dVar7 = (double)(iVar6 >> 1);
        }
        else {
          dVar7 = *(double *)(uVar1 + 3);
        }
        if ((uVar2 & 1) == 0) {
          dVar8 = (double)(iVar5 >> 1);
        }
        else {
          dVar8 = *(double *)(uVar2 + 3);
        }
        if (dVar8 <= dVar7) {
          return 1;
        }
      }
    }
    else {
      if ((uVar2 & 1) == 0) {
        return 1;
      }
      if (iVar5 != iVar6) {
        return 1;
      }
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    return 2;
  }
  uVar3 = *param_1;
  *param_1 = *param_3;
  *param_3 = uVar3;
  return 1;
}

