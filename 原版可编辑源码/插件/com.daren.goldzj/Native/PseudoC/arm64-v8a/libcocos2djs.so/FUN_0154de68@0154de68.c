
void FUN_0154de68(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
LAB_0154de8c:
  plVar7 = param_2 + -1;
  plVar11 = param_1;
LAB_0154de98:
  param_1 = plVar11;
  lVar8 = (long)param_2 - (long)param_1;
  uVar5 = lVar8 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_0154e230_caseD_0;
  case 2:
    lVar8 = *param_1;
    if (*(int *)(param_2[-1] + 0x10) < *(int *)(lVar8 + 0x10)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar8;
      return;
    }
    return;
  case 3:
    lVar8 = *param_1;
    lVar9 = param_1[1];
    lVar12 = param_2[-1];
    iVar3 = *(int *)(lVar9 + 0x10);
    if (iVar3 < *(int *)(lVar8 + 0x10)) {
      if (*(int *)(lVar12 + 0x10) < iVar3) {
        *param_1 = lVar12;
      }
      else {
        *param_1 = lVar9;
        param_1[1] = lVar8;
        if (*(int *)(lVar8 + 0x10) <= *(int *)(param_2[-1] + 0x10)) {
          return;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = lVar8;
      return;
    }
    if (*(int *)(lVar12 + 0x10) < iVar3) {
      param_1[1] = lVar12;
      param_2[-1] = lVar9;
      lVar8 = *param_1;
      if (*(int *)(param_1[1] + 0x10) < *(int *)(lVar8 + 0x10)) {
        *param_1 = param_1[1];
        param_1[1] = lVar8;
        return;
      }
      return;
    }
    return;
  case 4:
    FUN_0154e4a0(param_1,param_1 + 1,param_1 + 2,plVar7);
    return;
  case 5:
    plVar11 = param_1 + 2;
    plVar7 = param_1 + 3;
    FUN_0154e4a0(param_1,param_1 + 1,plVar11,plVar7);
    lVar8 = param_1[3];
    if (*(int *)(lVar8 + 0x10) <= *(int *)(param_2[-1] + 0x10)) {
      return;
    }
    *plVar7 = param_2[-1];
    param_2[-1] = lVar8;
    lVar8 = *plVar7;
    lVar9 = *plVar11;
    if (*(int *)(lVar9 + 0x10) <= *(int *)(lVar8 + 0x10)) {
      return;
    }
    *plVar11 = lVar8;
    *plVar7 = lVar9;
    lVar9 = param_1[1];
    if (*(int *)(lVar9 + 0x10) <= *(int *)(lVar8 + 0x10)) {
      return;
    }
    lVar12 = *param_1;
    param_1[1] = lVar8;
    param_1[2] = lVar9;
    if (*(int *)(lVar12 + 0x10) <= *(int *)(lVar8 + 0x10)) {
      return;
    }
    *param_1 = lVar8;
    param_1[1] = lVar12;
    return;
  default:
    if (0xf7 < lVar8) {
      uVar4 = uVar5;
      if ((long)uVar5 < 0) {
        uVar4 = uVar5 + 1;
      }
      plVar11 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
      if (lVar8 < 0x1f39) {
        lVar9 = *plVar11;
        lVar8 = *param_1;
        lVar12 = *plVar7;
        iVar3 = *(int *)(lVar9 + 0x10);
        if (iVar3 < *(int *)(lVar8 + 0x10)) {
          if (*(int *)(lVar12 + 0x10) < iVar3) {
            *param_1 = lVar12;
            *plVar7 = lVar8;
            iVar3 = 1;
          }
          else {
            *param_1 = lVar9;
            *plVar11 = lVar8;
            if (*(int *)(lVar8 + 0x10) <= *(int *)(*plVar7 + 0x10)) goto LAB_0154e030;
            *plVar11 = *plVar7;
            *plVar7 = lVar8;
LAB_0154e020:
            iVar3 = 2;
          }
        }
        else if (*(int *)(lVar12 + 0x10) < iVar3) {
          *plVar11 = lVar12;
          *plVar7 = lVar9;
          lVar8 = *param_1;
          if (*(int *)(*plVar11 + 0x10) < *(int *)(lVar8 + 0x10)) {
            *param_1 = *plVar11;
            *plVar11 = lVar8;
            goto LAB_0154e020;
          }
LAB_0154e030:
          iVar3 = 1;
        }
        else {
          iVar3 = 0;
        }
      }
      else {
        uVar4 = uVar5 + 3;
        if (-1 < (long)uVar5) {
          uVar4 = uVar5;
        }
        lVar8 = (uVar4 & 0x7ffffffffffffffc) * 2;
        plVar6 = (long *)((long)param_1 + lVar8);
        plVar10 = (long *)((long)plVar11 + lVar8);
        iVar3 = FUN_0154e4a0(param_1,plVar6,plVar11,plVar10);
        lVar8 = *plVar10;
        if (*(int *)(*plVar7 + 0x10) < *(int *)(lVar8 + 0x10)) {
          *plVar10 = *plVar7;
          *plVar7 = lVar8;
          lVar8 = *plVar11;
          if (*(int *)(*plVar10 + 0x10) < *(int *)(lVar8 + 0x10)) {
            *plVar11 = *plVar10;
            *plVar10 = lVar8;
            lVar8 = *plVar6;
            if (*(int *)(*plVar11 + 0x10) < *(int *)(lVar8 + 0x10)) {
              *plVar6 = *plVar11;
              *plVar11 = lVar8;
              lVar8 = *param_1;
              if (*(int *)(*plVar6 + 0x10) < *(int *)(lVar8 + 0x10)) {
                *param_1 = *plVar6;
                *plVar6 = lVar8;
                iVar3 = iVar3 + 4;
              }
              else {
                iVar3 = iVar3 + 3;
              }
            }
            else {
              iVar3 = iVar3 + 2;
            }
          }
          else {
            iVar3 = iVar3 + 1;
          }
        }
      }
      lVar8 = *param_1;
      iVar1 = *(int *)(lVar8 + 0x10);
      plVar6 = plVar7;
      plVar10 = param_2 + -2;
      if (*(int *)(*plVar11 + 0x10) <= iVar1) break;
      goto LAB_0154e08c;
    }
    lVar8 = *param_1;
    lVar9 = param_1[1];
    lVar13 = param_1[2];
    iVar3 = *(int *)(lVar9 + 0x10);
    lVar12 = lVar13;
    if (iVar3 < *(int *)(lVar8 + 0x10)) {
      if (*(int *)(lVar13 + 0x10) < iVar3) {
        *param_1 = lVar13;
      }
      else {
        *param_1 = lVar9;
        param_1[1] = lVar8;
        if (*(int *)(lVar8 + 0x10) <= *(int *)(lVar13 + 0x10)) goto LAB_0154e2d0;
        param_1[1] = lVar13;
      }
      param_1[2] = lVar8;
      lVar12 = lVar8;
    }
    else if (*(int *)(lVar13 + 0x10) < iVar3) {
      param_1[1] = lVar13;
      param_1[2] = lVar9;
      lVar12 = lVar9;
      if (*(int *)(lVar13 + 0x10) < *(int *)(lVar8 + 0x10)) {
        *param_1 = lVar13;
        param_1[1] = lVar8;
      }
    }
LAB_0154e2d0:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar8 = 0;
    plVar11 = param_1 + 3;
    goto LAB_0154e2e0;
  }
  while (plVar6 = plVar10, param_1 != plVar6) {
    plVar10 = plVar6 + -1;
    if (*(int *)(*plVar6 + 0x10) < *(int *)(*plVar11 + 0x10)) goto code_r0x0154e080;
  }
  plVar6 = param_1 + 1;
  if (*(int *)(*plVar7 + 0x10) <= iVar1) {
    if (plVar6 == plVar7) {
      return;
    }
    plVar6 = param_1 + 2;
    while (lVar8 = plVar6[-1], *(int *)(lVar8 + 0x10) <= iVar1) {
      plVar6 = plVar6 + 1;
      if (param_2 == plVar6) {
        return;
      }
    }
    plVar6[-1] = *plVar7;
    *plVar7 = lVar8;
  }
  plVar10 = plVar7;
  if (plVar6 == plVar7) {
    return;
  }
  while( true ) {
    do {
      plVar11 = plVar6;
      plVar6 = plVar11 + 1;
      lVar8 = *plVar11;
    } while (*(int *)(lVar8 + 0x10) <= *(int *)(*param_1 + 0x10));
    do {
      plVar10 = plVar10 + -1;
    } while (*(int *)(*param_1 + 0x10) < *(int *)(*plVar10 + 0x10));
    if (plVar10 <= plVar11) break;
    *plVar11 = *plVar10;
    *plVar10 = lVar8;
  }
  goto LAB_0154de98;
code_r0x0154e080:
  *param_1 = *plVar6;
  *plVar6 = lVar8;
  iVar3 = iVar3 + 1;
LAB_0154e08c:
  plVar10 = param_1 + 1;
  plVar2 = plVar11;
  plVar14 = plVar10;
  if (plVar10 < plVar6) {
    while( true ) {
      plVar11 = plVar2;
      plVar10 = plVar14 + -1;
      do {
        plVar14 = plVar10;
        plVar10 = plVar14 + 1;
        lVar8 = *plVar10;
      } while (*(int *)(lVar8 + 0x10) < *(int *)(*plVar11 + 0x10));
      plVar14 = plVar14 + 2;
      do {
        plVar6 = plVar6 + -1;
      } while (*(int *)(*plVar11 + 0x10) <= *(int *)(*plVar6 + 0x10));
      if (plVar6 < plVar10) break;
      *plVar10 = *plVar6;
      *plVar6 = lVar8;
      iVar3 = iVar3 + 1;
      plVar2 = plVar6;
      if (plVar11 != plVar10) {
        plVar2 = plVar11;
      }
    }
  }
  if (plVar10 != plVar11) {
    lVar8 = *plVar10;
    if (*(int *)(*plVar11 + 0x10) < *(int *)(lVar8 + 0x10)) {
      iVar3 = iVar3 + 1;
      *plVar10 = *plVar11;
      *plVar11 = lVar8;
    }
  }
  if (iVar3 == 0) {
    uVar5 = FUN_0154e5dc(param_1,plVar10);
    uVar4 = FUN_0154e5dc(plVar10 + 1,param_2);
    if ((uVar4 & 1) != 0) goto LAB_0154e210;
    plVar11 = plVar10 + 1;
    if ((uVar5 & 1) != 0) goto LAB_0154de98;
  }
  if ((long)param_2 - (long)plVar10 <= (long)plVar10 - (long)param_1) {
    FUN_0154de68(plVar10 + 1,param_2);
    param_2 = plVar10;
    goto LAB_0154de8c;
  }
  FUN_0154de68(param_1,plVar10);
  plVar11 = plVar10 + 1;
  goto LAB_0154de98;
LAB_0154e210:
  param_2 = plVar10;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_0154de8c;
LAB_0154e2e0:
  lVar13 = *plVar11;
  lVar9 = lVar8;
  if (*(int *)(lVar13 + 0x10) < *(int *)(lVar12 + 0x10)) {
    do {
      lVar12 = lVar9;
      *(undefined8 *)((long)param_1 + lVar12 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar12 + 0x10);
      plVar7 = param_1;
      if (lVar12 == -0x10) goto LAB_0154e334;
      lVar9 = lVar12 + -8;
    } while (*(int *)(lVar13 + 0x10) < *(int *)(*(long *)((long)param_1 + lVar12 + 8) + 0x10));
    plVar7 = (long *)((long)param_1 + lVar12 + 0x10);
LAB_0154e334:
    *plVar7 = lVar13;
  }
  if (plVar11 + 1 == param_2) {
switchD_0154e230_caseD_0:
    return;
  }
  lVar12 = *plVar11;
  lVar8 = lVar8 + 8;
  plVar11 = plVar11 + 1;
  goto LAB_0154e2e0;
}

