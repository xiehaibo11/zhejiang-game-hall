
int FUN_00f9ca78(long *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  iVar2 = FUN_00f9c8d4();
  iVar6 = *param_5;
  lVar4 = *param_4;
  lVar3 = *param_3;
  iVar5 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  if (3 < iVar6) {
    iVar5 = iVar5 >> 2;
    piVar7 = (int *)(lVar3 + -1);
    piVar8 = (int *)(lVar4 + -1);
    do {
      if (*piVar8 != *piVar7) {
        return iVar2;
      }
      piVar8 = piVar8 + 1;
      iVar5 = iVar5 + -1;
      piVar7 = piVar7 + 1;
    } while (iVar5 != 0);
  }
  iVar5 = iVar2;
  if ((uint)lVar4 < (uint)lVar3) {
    *param_3 = lVar4;
    *param_4 = lVar3;
    iVar1 = *param_5;
    lVar4 = *param_3;
    lVar3 = *param_2;
    iVar6 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar6 = iVar1;
    }
    iVar5 = iVar2 + 1;
    if (3 < iVar1) {
      iVar6 = iVar6 >> 2;
      piVar7 = (int *)(lVar3 + -1);
      piVar8 = (int *)(lVar4 + -1);
      do {
        if (*piVar8 != *piVar7) {
          return iVar5;
        }
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
        piVar7 = piVar7 + 1;
      } while (iVar6 != 0);
    }
    if ((uint)lVar4 < (uint)lVar3) {
      *param_2 = lVar4;
      *param_3 = lVar3;
      iVar1 = *param_5;
      lVar4 = *param_2;
      lVar3 = *param_1;
      iVar6 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar6 = iVar1;
      }
      iVar5 = iVar2 + 2;
      if (3 < iVar1) {
        iVar6 = iVar6 >> 2;
        piVar7 = (int *)(lVar3 + -1);
        piVar8 = (int *)(lVar4 + -1);
        do {
          if (*piVar8 != *piVar7) {
            return iVar5;
          }
          piVar8 = piVar8 + 1;
          iVar6 = iVar6 + -1;
          piVar7 = piVar7 + 1;
        } while (iVar6 != 0);
      }
      if ((uint)lVar4 < (uint)lVar3) {
        iVar5 = iVar2 + 3;
        *param_1 = lVar4;
        *param_2 = lVar3;
      }
    }
  }
  return iVar5;
}

