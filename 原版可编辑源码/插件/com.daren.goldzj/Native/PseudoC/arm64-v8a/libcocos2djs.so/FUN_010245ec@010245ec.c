
bool FUN_010245ec(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar6 = *param_1;
    if (*(long *)(lVar6 + 0x68) < *(long *)(param_2[-1] + 0x68)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar6;
    }
    break;
  case 3:
    lVar6 = *param_1;
    lVar2 = param_1[1];
    lVar4 = param_2[-1];
    lVar5 = *(long *)(lVar2 + 0x68);
    if (*(long *)(lVar6 + 0x68) < lVar5) {
      if (lVar5 < *(long *)(lVar4 + 0x68)) {
        *param_1 = lVar4;
      }
      else {
        *param_1 = lVar2;
        param_1[1] = lVar6;
        if (*(long *)(param_2[-1] + 0x68) <= *(long *)(lVar6 + 0x68)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = lVar6;
    }
    else if (lVar5 < *(long *)(lVar4 + 0x68)) {
      param_1[1] = lVar4;
      param_2[-1] = lVar2;
      lVar6 = *param_1;
      if (*(long *)(lVar6 + 0x68) < *(long *)(param_1[1] + 0x68)) {
        *param_1 = param_1[1];
        param_1[1] = lVar6;
      }
    }
    break;
  case 4:
    FUN_010244b0(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    plVar1 = param_1 + 2;
    plVar3 = param_1 + 3;
    FUN_010244b0(param_1,param_1 + 1,plVar1,plVar3,param_3);
    lVar6 = param_1[3];
    if (*(long *)(lVar6 + 0x68) < *(long *)(param_2[-1] + 0x68)) {
      *plVar3 = param_2[-1];
      param_2[-1] = lVar6;
      lVar6 = *plVar3;
      lVar2 = *plVar1;
      if (*(long *)(lVar2 + 0x68) < *(long *)(lVar6 + 0x68)) {
        *plVar1 = lVar6;
        *plVar3 = lVar2;
        lVar2 = param_1[1];
        if (*(long *)(lVar2 + 0x68) < *(long *)(lVar6 + 0x68)) {
          lVar4 = *param_1;
          param_1[1] = lVar6;
          param_1[2] = lVar2;
          if (*(long *)(lVar4 + 0x68) < *(long *)(lVar6 + 0x68)) {
            *param_1 = lVar6;
            param_1[1] = lVar4;
          }
        }
      }
    }
    break;
  default:
    lVar6 = *param_1;
    lVar2 = param_1[1];
    lVar5 = param_1[2];
    lVar8 = *(long *)(lVar2 + 0x68);
    lVar4 = lVar5;
    if (*(long *)(lVar6 + 0x68) < lVar8) {
      if (lVar8 < *(long *)(lVar5 + 0x68)) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar2;
        param_1[1] = lVar6;
        if (*(long *)(lVar5 + 0x68) <= *(long *)(lVar6 + 0x68)) goto LAB_010247fc;
        param_1[1] = lVar5;
      }
      param_1[2] = lVar6;
      lVar4 = lVar6;
    }
    else if (lVar8 < *(long *)(lVar5 + 0x68)) {
      param_1[1] = lVar5;
      param_1[2] = lVar2;
      lVar4 = lVar2;
      if (*(long *)(lVar6 + 0x68) < *(long *)(lVar5 + 0x68)) {
        *param_1 = lVar5;
        param_1[1] = lVar6;
      }
    }
LAB_010247fc:
    if (param_1 + 3 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar1 = param_1 + 3;
      do {
        lVar5 = *plVar1;
        lVar2 = lVar6;
        if (*(long *)(lVar4 + 0x68) < *(long *)(lVar5 + 0x68)) {
          do {
            lVar4 = lVar2;
            *(undefined8 *)((long)param_1 + lVar4 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar4 + 0x10);
            plVar3 = param_1;
            if (lVar4 == -0x10) goto LAB_01024864;
            lVar2 = lVar4 + -8;
          } while (*(long *)(*(long *)((long)param_1 + lVar4 + 8) + 0x68) < *(long *)(lVar5 + 0x68))
          ;
          plVar3 = (long *)((long)param_1 + lVar4 + 0x10);
LAB_01024864:
          iVar7 = iVar7 + 1;
          *plVar3 = lVar5;
          if (iVar7 == 8) {
            return plVar1 + 1 == param_2;
          }
        }
        if (plVar1 + 1 == param_2) {
          return true;
        }
        lVar4 = *plVar1;
        lVar6 = lVar6 + 8;
        plVar1 = plVar1 + 1;
      } while( true );
    }
  }
  return true;
}

