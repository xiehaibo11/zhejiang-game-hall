
int FUN_01083548(uint *param_1,uint *param_2,uint *param_3,uint *param_4,long *param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  iVar4 = FUN_01083270();
  lVar8 = *param_5;
  uVar1 = lVar8 + (ulong)*param_4;
  uVar2 = lVar8 + (ulong)*param_3;
  iVar6 = (int)uVar1;
  iVar5 = (int)uVar2;
  if (((uVar1 & 1) == 0) || (iVar6 != *(int *)(lVar8 + 0xa0))) {
    if (((uVar2 & 1) == 0) || (iVar5 != *(int *)(lVar8 + 0xa0))) {
      if ((uVar1 & 1) == 0) {
        dVar9 = (double)(iVar6 >> 1);
        if ((uVar2 & 1) == 0) goto LAB_010835e0;
LAB_010835d0:
        dVar10 = *(double *)(uVar2 + 3);
      }
      else {
        dVar9 = *(double *)(uVar1 + 3);
        if ((uVar2 & 1) != 0) goto LAB_010835d0;
LAB_010835e0:
        dVar10 = (double)(iVar5 >> 1);
      }
      if (dVar10 <= dVar9) {
        return iVar4;
      }
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      return iVar4;
    }
    if (iVar5 != iVar6) {
      return iVar4;
    }
  }
  uVar3 = *param_3;
  *param_3 = *param_4;
  *param_4 = uVar3;
  lVar8 = *param_5;
  iVar5 = iVar4 + 1;
  uVar1 = lVar8 + (ulong)*param_3;
  uVar2 = lVar8 + (ulong)*param_2;
  iVar7 = (int)uVar1;
  iVar6 = (int)uVar2;
  if (((uVar1 & 1) == 0) || (iVar7 != *(int *)(lVar8 + 0xa0))) {
    if (((uVar2 & 1) == 0) || (iVar6 != *(int *)(lVar8 + 0xa0))) {
      if ((uVar1 & 1) == 0) {
        dVar9 = (double)(iVar7 >> 1);
        if ((uVar2 & 1) == 0) goto LAB_01083668;
LAB_01083658:
        dVar10 = *(double *)(uVar2 + 3);
      }
      else {
        dVar9 = *(double *)(uVar1 + 3);
        if ((uVar2 & 1) != 0) goto LAB_01083658;
LAB_01083668:
        dVar10 = (double)(iVar6 >> 1);
      }
      if (dVar10 <= dVar9) {
        return iVar5;
      }
    }
  }
  else {
    if ((uVar2 & 1) == 0) {
      return iVar5;
    }
    if (iVar6 != iVar7) {
      return iVar5;
    }
  }
  uVar3 = *param_2;
  *param_2 = *param_3;
  *param_3 = uVar3;
  lVar8 = *param_5;
  iVar5 = iVar4 + 2;
  uVar1 = lVar8 + (ulong)*param_2;
  uVar2 = lVar8 + (ulong)*param_1;
  iVar7 = (int)uVar1;
  iVar6 = (int)uVar2;
  if (((uVar1 & 1) != 0) && (iVar7 == *(int *)(lVar8 + 0xa0))) {
    if ((uVar2 & 1) == 0) {
      return iVar5;
    }
    if (iVar6 != iVar7) {
      return iVar5;
    }
    goto LAB_01083700;
  }
  if (((uVar2 & 1) != 0) && (iVar6 == *(int *)(lVar8 + 0xa0))) goto LAB_01083700;
  if ((uVar1 & 1) == 0) {
    dVar9 = (double)(iVar7 >> 1);
    if ((uVar2 & 1) == 0) goto LAB_010836f0;
LAB_010836e0:
    dVar10 = *(double *)(uVar2 + 3);
  }
  else {
    dVar9 = *(double *)(uVar1 + 3);
    if ((uVar2 & 1) != 0) goto LAB_010836e0;
LAB_010836f0:
    dVar10 = (double)(iVar6 >> 1);
  }
  if (dVar10 <= dVar9) {
    return iVar5;
  }
LAB_01083700:
  uVar3 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar3;
  return iVar4 + 3;
}

