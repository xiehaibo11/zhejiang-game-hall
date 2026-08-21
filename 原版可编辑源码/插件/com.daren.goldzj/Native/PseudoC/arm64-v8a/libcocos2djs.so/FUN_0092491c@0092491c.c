
bool FUN_0092491c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = *param_1;
    if (**(int **)(param_2[-1] + 0xa8) < **(int **)(lVar6 + 0xa8)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar6;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar3 = param_1[1];
    lVar1 = param_2[-1];
    iVar7 = **(int **)(lVar3 + 0xa8);
    if (iVar7 < **(int **)(lVar6 + 0xa8)) {
      if (**(int **)(lVar1 + 0xa8) < iVar7) {
        *param_1 = lVar1;
      }
      else {
        *param_1 = lVar3;
        param_1[1] = lVar6;
        if (**(int **)(lVar6 + 0xa8) <= **(int **)(param_2[-1] + 0xa8)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = lVar6;
    }
    else if (**(int **)(lVar1 + 0xa8) < iVar7) {
      param_1[1] = lVar1;
      param_2[-1] = lVar3;
      lVar6 = *param_1;
      if (**(int **)(param_1[1] + 0xa8) < **(int **)(lVar6 + 0xa8)) {
        *param_1 = param_1[1];
        param_1[1] = lVar6;
      }
    }
    break;
  case 4:
    FUN_0092478c(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    plVar4 = param_1 + 2;
    plVar2 = param_1 + 3;
    FUN_0092478c(param_1,param_1 + 1,plVar4,plVar2);
    lVar6 = param_1[3];
    if (**(int **)(param_2[-1] + 0xa8) < **(int **)(lVar6 + 0xa8)) {
      *plVar2 = param_2[-1];
      param_2[-1] = lVar6;
      lVar6 = *plVar2;
      lVar3 = *plVar4;
      if (**(int **)(lVar6 + 0xa8) < **(int **)(lVar3 + 0xa8)) {
        *plVar4 = lVar6;
        *plVar2 = lVar3;
        lVar3 = param_1[1];
        if (**(int **)(lVar6 + 0xa8) < **(int **)(lVar3 + 0xa8)) {
          lVar1 = *param_1;
          param_1[1] = lVar6;
          param_1[2] = lVar3;
          if (**(int **)(lVar6 + 0xa8) < **(int **)(lVar1 + 0xa8)) {
            *param_1 = lVar6;
            param_1[1] = lVar1;
          }
        }
      }
    }
    break;
  default:
    lVar6 = *param_1;
    lVar3 = param_1[1];
    lVar5 = param_1[2];
    iVar7 = **(int **)(lVar3 + 0xa8);
    lVar1 = lVar5;
    if (iVar7 < **(int **)(lVar6 + 0xa8)) {
      if (**(int **)(lVar5 + 0xa8) < iVar7) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar3;
        param_1[1] = lVar6;
        if (**(int **)(lVar6 + 0xa8) <= **(int **)(lVar5 + 0xa8)) goto LAB_00924b88;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar6;
      lVar1 = lVar6;
    }
    else if (**(int **)(lVar5 + 0xa8) < iVar7) {
      param_1[1] = lVar5;
      param_1[2] = lVar3;
      lVar1 = lVar3;
      if (**(int **)(lVar5 + 0xa8) < **(int **)(lVar6 + 0xa8)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
LAB_00924b88:
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar4 = param_1 + 3;
      do {
        lVar5 = *plVar4;
        lVar3 = lVar6;
        if (**(int **)(lVar5 + 0xa8) < **(int **)(lVar1 + 0xa8)) {
          do {
            lVar1 = lVar3;
            *(undefined8 *)((long)param_1 + lVar1 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar1 + 0x10);
            plVar2 = param_1;
            if (lVar1 == -0x10) goto LAB_00924c10;
            lVar3 = lVar1 + -8;
          } while (**(int **)(lVar5 + 0xa8) <
                   **(int **)(*(long *)((long)param_1 + lVar1 + 8) + 0xa8));
          plVar2 = (long *)((long)param_1 + lVar1 + 0x10);
LAB_00924c10:
          iVar7 = iVar7 + 1;
          *plVar2 = lVar5;
          if (iVar7 == 8) {
            return plVar4 + 1 == param_2;
          }
        }
        if (plVar4 + 1 == param_2) {
          return true;
        }
        lVar1 = *plVar4;
        lVar6 = lVar6 + 8;
        plVar4 = plVar4 + 1;
      } while( true );
    }
  }
  return true;
}

