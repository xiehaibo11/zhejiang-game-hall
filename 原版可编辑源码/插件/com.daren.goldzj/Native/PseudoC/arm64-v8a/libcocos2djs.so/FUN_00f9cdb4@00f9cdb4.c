
bool FUN_00f9cdb4(long *param_1,long *param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar6 = *param_3;
    lVar5 = param_2[-1];
    lVar4 = *param_1;
    iVar3 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar3 = iVar6;
    }
    if (3 < iVar6) {
      iVar3 = iVar3 >> 2;
      piVar8 = (int *)(lVar4 + -1);
      piVar9 = (int *)(lVar5 + -1);
      do {
        if (*piVar9 != *piVar8) {
          return true;
        }
        piVar9 = piVar9 + 1;
        iVar3 = iVar3 + -1;
        piVar8 = piVar8 + 1;
      } while (iVar3 != 0);
    }
    if ((uint)lVar5 < (uint)lVar4) {
      *param_1 = lVar5;
      param_2[-1] = lVar4;
      return true;
    }
    break;
  case 3:
    FUN_00f9c8d4(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00f9ca78(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00f9cbe4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00f9c8d4(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      iVar3 = 0;
      plVar7 = param_1 + 3;
      plVar10 = param_1 + 2;
      do {
        plVar2 = plVar7;
        iVar1 = *param_3;
        lVar4 = *plVar2;
        lVar5 = *plVar10;
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        if (3 < iVar1) {
          iVar6 = iVar6 >> 2;
          piVar8 = (int *)(lVar5 + -1);
          piVar9 = (int *)(lVar4 + -1);
          do {
            if (*piVar9 != *piVar8) goto LAB_00f9cf00;
            piVar9 = piVar9 + 1;
            iVar6 = iVar6 + -1;
            piVar8 = piVar8 + 1;
          } while (iVar6 != 0);
        }
        if ((uint)lVar4 < (uint)lVar5) {
          plVar7 = plVar2;
          while (*plVar7 = lVar5, plVar7 = param_1, plVar10 != param_1) {
            lVar5 = plVar10[-1];
            iVar1 = *param_3;
            iVar6 = iVar1 + 3;
            if (-1 < iVar1) {
              iVar6 = iVar1;
            }
            plVar7 = plVar10;
            if (3 < iVar1) {
              iVar6 = iVar6 >> 2;
              piVar8 = (int *)(lVar5 + -1);
              piVar9 = (int *)(lVar4 + -1);
              do {
                if (*piVar9 != *piVar8) goto LAB_00f9cef0;
                piVar9 = piVar9 + 1;
                iVar6 = iVar6 + -1;
                piVar8 = piVar8 + 1;
              } while (iVar6 != 0);
            }
            plVar10 = plVar10 + -1;
            if ((uint)lVar5 <= (uint)lVar4) break;
          }
LAB_00f9cef0:
          iVar3 = iVar3 + 1;
          *plVar7 = lVar4;
          if (iVar3 == 8) {
            return plVar2 + 1 == param_2;
          }
        }
LAB_00f9cf00:
        plVar7 = plVar2 + 1;
        plVar10 = plVar2;
      } while (plVar2 + 1 != param_2);
    }
  }
  return true;
}

