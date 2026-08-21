
void FUN_008d3790(long *param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  uVar6 = param_1[1];
  if (uVar6 == 0) {
    return;
  }
  uVar7 = uVar6 - 1;
  uVar1 = uVar7 & uVar6;
  uVar8 = (ulong)param_2;
  if (uVar1 == 0) {
    uVar9 = uVar7 & uVar8;
  }
  else {
    uVar9 = uVar8;
    if (uVar6 <= uVar8) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar8 / uVar6;
      }
      uVar9 = uVar8 - uVar9 * uVar6;
    }
  }
  plVar5 = *(long **)(*param_1 + uVar9 * 8);
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    while( true ) {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return;
      }
      uVar10 = plVar5[1];
      if (uVar10 == uVar8) break;
      if (uVar1 == 0) {
        if ((uVar10 & uVar7) != uVar9) {
          return;
        }
      }
      else {
        if (uVar6 <= uVar10) {
          uVar3 = 0;
          if (uVar6 != 0) {
            uVar3 = uVar10 / uVar6;
          }
          uVar10 = uVar10 - uVar3 * uVar6;
        }
        if (uVar10 != uVar9) {
          return;
        }
      }
    }
  } while (*(uint *)(plVar5 + 2) != param_2);
  uVar2 = DAT_01d36ef8;
  if (*(int *)(plVar5[3] + 0x10) != 3) {
    uVar2 = 0;
  }
  *(undefined4 *)(plVar5[3] + 0xc) = uVar2;
  uVar8 = plVar5[1];
  if (uVar1 == 0) {
    uVar8 = uVar8 & uVar7;
  }
  else if (uVar6 <= uVar8) {
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar9 = uVar8 / uVar6;
    }
    uVar8 = uVar8 - uVar9 * uVar6;
  }
  plVar4 = *(long **)(*param_1 + uVar8 * 8);
  do {
    plVar12 = plVar4;
    plVar4 = (long *)*plVar12;
  } while ((long *)*plVar12 != plVar5);
  if (plVar12 != param_1 + 2) {
    uVar9 = plVar12[1];
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar10 * uVar6;
    }
    if (uVar9 == uVar8) goto LAB_008d38f0;
  }
  if (*plVar5 != 0) {
    uVar9 = *(ulong *)(*plVar5 + 8);
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar10 = 0;
      if (uVar6 != 0) {
        uVar10 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar10 * uVar6;
    }
    if (uVar9 == uVar8) goto LAB_008d38f0;
  }
  *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
LAB_008d38f0:
  lVar11 = *plVar5;
  if (lVar11 != 0) {
    uVar9 = *(ulong *)(lVar11 + 8);
    if (uVar1 == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar6 <= uVar9) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar1 * uVar6;
    }
    if (uVar9 != uVar8) {
      *(long **)(*param_1 + uVar9 * 8) = plVar12;
      lVar11 = *plVar5;
    }
  }
  *plVar12 = lVar11;
  *plVar5 = 0;
  param_1[3] = param_1[3] + -1;
  operator_delete(plVar5);
  return;
}

