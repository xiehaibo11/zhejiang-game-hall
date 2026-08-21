
undefined8 FUN_00f9c8d4(long *param_1,long *param_2,long *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  
  iVar1 = *param_4;
  lVar6 = *param_2;
  lVar5 = *param_1;
  iVar7 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar7 = iVar1;
  }
  iVar7 = iVar7 >> 2;
  if (3 < iVar1) {
    piVar8 = (int *)(lVar5 + -1);
    piVar10 = (int *)(lVar6 + -1);
    iVar2 = iVar7;
    do {
      if (*piVar10 != *piVar8) {
        bVar3 = false;
        goto LAB_00f9c934;
      }
      piVar10 = piVar10 + 1;
      iVar2 = iVar2 + -1;
      piVar8 = piVar8 + 1;
    } while (iVar2 != 0);
  }
  bVar3 = (uint)lVar6 < (uint)lVar5;
LAB_00f9c934:
  lVar9 = *param_3;
  if (3 < iVar1) {
    piVar8 = (int *)(lVar6 + -1);
    piVar10 = (int *)(lVar9 + -1);
    do {
      if (*piVar10 != *piVar8) {
        bVar4 = false;
        goto joined_r0x00f9c98c;
      }
      piVar10 = piVar10 + 1;
      iVar7 = iVar7 + -1;
      piVar8 = piVar8 + 1;
    } while (iVar7 != 0);
  }
  bVar4 = (uint)lVar9 < (uint)lVar6;
joined_r0x00f9c98c:
  if (bVar3) {
    if (bVar4) {
      *param_1 = lVar9;
      *param_3 = lVar5;
      return 1;
    }
    *param_1 = lVar6;
    *param_2 = lVar5;
    iVar1 = *param_4;
    lVar6 = *param_3;
    iVar7 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar7 = iVar1;
    }
    if (3 < iVar1) {
      iVar7 = iVar7 >> 2;
      piVar8 = (int *)(lVar5 + -1);
      piVar10 = (int *)(lVar6 + -1);
      do {
        if (*piVar10 != *piVar8) {
          return 1;
        }
        piVar10 = piVar10 + 1;
        iVar7 = iVar7 + -1;
        piVar8 = piVar8 + 1;
      } while (iVar7 != 0);
    }
    if ((uint)lVar6 < (uint)lVar5) {
      *param_2 = lVar6;
      *param_3 = lVar5;
      return 2;
    }
  }
  else {
    if (!bVar4) {
      return 0;
    }
    *param_2 = lVar9;
    *param_3 = lVar6;
    iVar1 = *param_4;
    lVar6 = *param_2;
    lVar5 = *param_1;
    iVar7 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar7 = iVar1;
    }
    if (3 < iVar1) {
      iVar7 = iVar7 >> 2;
      piVar8 = (int *)(lVar5 + -1);
      piVar10 = (int *)(lVar6 + -1);
      do {
        if (*piVar10 != *piVar8) {
          return 1;
        }
        piVar10 = piVar10 + 1;
        iVar7 = iVar7 + -1;
        piVar8 = piVar8 + 1;
      } while (iVar7 != 0);
    }
    if ((uint)lVar6 < (uint)lVar5) {
      *param_1 = lVar6;
      *param_2 = lVar5;
      return 2;
    }
  }
  return 1;
}

