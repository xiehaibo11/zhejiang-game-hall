
void FUN_01023e4c(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
LAB_01023e78:
  plVar6 = param_2 + -1;
  plVar9 = param_1;
LAB_01023e84:
  param_1 = plVar9;
  lVar7 = (long)param_2 - (long)param_1;
  uVar4 = lVar7 >> 3;
  switch(uVar4) {
  case 0:
  case 1:
    goto switchD_01024230_caseD_0;
  case 2:
    lVar7 = *param_1;
    if (*(long *)(lVar7 + 0x68) < *(long *)(param_2[-1] + 0x68)) {
      *param_1 = param_2[-1];
      param_2[-1] = lVar7;
      return;
    }
    return;
  case 3:
    lVar7 = *param_1;
    lVar11 = param_1[1];
    lVar10 = param_2[-1];
    lVar12 = *(long *)(lVar11 + 0x68);
    if (*(long *)(lVar7 + 0x68) < lVar12) {
      if (lVar12 < *(long *)(lVar10 + 0x68)) {
        *param_1 = lVar10;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar7;
        if (*(long *)(param_2[-1] + 0x68) <= *(long *)(lVar7 + 0x68)) {
          return;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = lVar7;
      return;
    }
    if (lVar12 < *(long *)(lVar10 + 0x68)) {
      param_1[1] = lVar10;
      param_2[-1] = lVar11;
      lVar7 = *param_1;
      if (*(long *)(lVar7 + 0x68) < *(long *)(param_1[1] + 0x68)) {
        *param_1 = param_1[1];
        param_1[1] = lVar7;
        return;
      }
      return;
    }
    return;
  case 4:
    FUN_010244b0(param_1,param_1 + 1,param_1 + 2,plVar6,param_3);
    return;
  case 5:
    plVar9 = param_1 + 2;
    plVar6 = param_1 + 3;
    FUN_010244b0(param_1,param_1 + 1,plVar9,plVar6,param_3);
    lVar7 = param_1[3];
    if (*(long *)(param_2[-1] + 0x68) <= *(long *)(lVar7 + 0x68)) {
      return;
    }
    *plVar6 = param_2[-1];
    param_2[-1] = lVar7;
    lVar7 = *plVar6;
    lVar11 = *plVar9;
    if (*(long *)(lVar7 + 0x68) <= *(long *)(lVar11 + 0x68)) {
      return;
    }
    *plVar9 = lVar7;
    *plVar6 = lVar11;
    lVar11 = param_1[1];
    if (*(long *)(lVar7 + 0x68) <= *(long *)(lVar11 + 0x68)) {
      return;
    }
    lVar10 = *param_1;
    param_1[1] = lVar7;
    param_1[2] = lVar11;
    if (*(long *)(lVar7 + 0x68) <= *(long *)(lVar10 + 0x68)) {
      return;
    }
    *param_1 = lVar7;
    param_1[1] = lVar10;
    return;
  default:
    if (0xf7 < lVar7) {
      uVar3 = uVar4;
      if ((long)uVar4 < 0) {
        uVar3 = uVar4 + 1;
      }
      plVar9 = (long *)((long)param_1 + (uVar3 & 0x3ffffffffffffffe) * 4);
      if (lVar7 < 0x1f39) {
        lVar11 = *plVar9;
        lVar7 = *param_1;
        lVar10 = *plVar6;
        lVar12 = *(long *)(lVar11 + 0x68);
        if (*(long *)(lVar7 + 0x68) < lVar12) {
          if (lVar12 < *(long *)(lVar10 + 0x68)) {
            *param_1 = lVar10;
            *plVar6 = lVar7;
            iVar2 = 1;
          }
          else {
            *param_1 = lVar11;
            *plVar9 = lVar7;
            if (*(long *)(*plVar6 + 0x68) <= *(long *)(lVar7 + 0x68)) goto LAB_01024020;
            *plVar9 = *plVar6;
            *plVar6 = lVar7;
LAB_01024010:
            iVar2 = 2;
          }
        }
        else if (lVar12 < *(long *)(lVar10 + 0x68)) {
          *plVar9 = lVar10;
          *plVar6 = lVar11;
          lVar7 = *param_1;
          if (*(long *)(lVar7 + 0x68) < *(long *)(*plVar9 + 0x68)) {
            *param_1 = *plVar9;
            *plVar9 = lVar7;
            goto LAB_01024010;
          }
LAB_01024020:
          iVar2 = 1;
        }
        else {
          iVar2 = 0;
        }
      }
      else {
        uVar3 = uVar4 + 3;
        if (-1 < (long)uVar4) {
          uVar3 = uVar4;
        }
        lVar7 = (uVar3 & 0x7ffffffffffffffc) * 2;
        plVar5 = (long *)((long)param_1 + lVar7);
        plVar8 = (long *)((long)plVar9 + lVar7);
        iVar2 = FUN_010244b0(param_1,plVar5,plVar9,plVar8,param_3);
        lVar7 = *plVar8;
        if (*(long *)(lVar7 + 0x68) < *(long *)(*plVar6 + 0x68)) {
          *plVar8 = *plVar6;
          *plVar6 = lVar7;
          lVar7 = *plVar9;
          if (*(long *)(lVar7 + 0x68) < *(long *)(*plVar8 + 0x68)) {
            *plVar9 = *plVar8;
            *plVar8 = lVar7;
            lVar7 = *plVar5;
            if (*(long *)(lVar7 + 0x68) < *(long *)(*plVar9 + 0x68)) {
              *plVar5 = *plVar9;
              *plVar9 = lVar7;
              lVar7 = *param_1;
              if (*(long *)(lVar7 + 0x68) < *(long *)(*plVar5 + 0x68)) {
                *param_1 = *plVar5;
                *plVar5 = lVar7;
                iVar2 = iVar2 + 4;
              }
              else {
                iVar2 = iVar2 + 3;
              }
            }
            else {
              iVar2 = iVar2 + 2;
            }
          }
          else {
            iVar2 = iVar2 + 1;
          }
        }
      }
      lVar11 = *param_1;
      lVar7 = *(long *)(lVar11 + 0x68);
      plVar5 = plVar6;
      plVar8 = param_2 + -2;
      if (lVar7 <= *(long *)(*plVar9 + 0x68)) break;
      goto LAB_0102407c;
    }
    lVar7 = *param_1;
    lVar11 = param_1[1];
    lVar12 = param_1[2];
    lVar13 = *(long *)(lVar11 + 0x68);
    lVar10 = lVar12;
    if (*(long *)(lVar7 + 0x68) < lVar13) {
      if (lVar13 < *(long *)(lVar12 + 0x68)) {
        *param_1 = lVar12;
      }
      else {
        *param_1 = lVar11;
        param_1[1] = lVar7;
        if (*(long *)(lVar12 + 0x68) <= *(long *)(lVar7 + 0x68)) goto LAB_010242d0;
        param_1[1] = lVar12;
      }
      param_1[2] = lVar7;
      lVar10 = lVar7;
    }
    else if (lVar13 < *(long *)(lVar12 + 0x68)) {
      param_1[1] = lVar12;
      param_1[2] = lVar11;
      lVar10 = lVar11;
      if (*(long *)(lVar7 + 0x68) < *(long *)(lVar12 + 0x68)) {
        *param_1 = lVar12;
        param_1[1] = lVar7;
      }
    }
LAB_010242d0:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar7 = 0;
    plVar9 = param_1 + 3;
    goto LAB_010242e0;
  }
  while (plVar5 = plVar8, param_1 != plVar5) {
    plVar8 = plVar5 + -1;
    if (*(long *)(*plVar9 + 0x68) < *(long *)(*plVar5 + 0x68)) goto code_r0x01024070;
  }
  plVar5 = param_1 + 1;
  if (lVar7 <= *(long *)(*plVar6 + 0x68)) {
    if (plVar5 == plVar6) {
      return;
    }
    plVar5 = param_1 + 2;
    while (lVar11 = plVar5[-1], lVar7 <= *(long *)(lVar11 + 0x68)) {
      plVar5 = plVar5 + 1;
      if (param_2 == plVar5) {
        return;
      }
    }
    plVar5[-1] = *plVar6;
    *plVar6 = lVar11;
  }
  plVar8 = plVar6;
  if (plVar5 == plVar6) {
    return;
  }
  while( true ) {
    do {
      plVar9 = plVar5;
      plVar5 = plVar9 + 1;
      lVar7 = *plVar9;
    } while (*(long *)(*param_1 + 0x68) <= *(long *)(lVar7 + 0x68));
    do {
      plVar8 = plVar8 + -1;
    } while (*(long *)(*plVar8 + 0x68) < *(long *)(*param_1 + 0x68));
    if (plVar8 <= plVar9) break;
    *plVar9 = *plVar8;
    *plVar8 = lVar7;
  }
  goto LAB_01023e84;
code_r0x01024070:
  *param_1 = *plVar5;
  *plVar5 = lVar11;
  iVar2 = iVar2 + 1;
LAB_0102407c:
  plVar8 = param_1 + 1;
  plVar1 = plVar9;
  plVar14 = plVar8;
  if (plVar8 < plVar5) {
    while( true ) {
      plVar9 = plVar1;
      plVar8 = plVar14 + -1;
      do {
        plVar14 = plVar8;
        plVar8 = plVar14 + 1;
        lVar7 = *plVar8;
      } while (*(long *)(*plVar9 + 0x68) < *(long *)(lVar7 + 0x68));
      plVar14 = plVar14 + 2;
      do {
        plVar5 = plVar5 + -1;
      } while (*(long *)(*plVar5 + 0x68) <= *(long *)(*plVar9 + 0x68));
      if (plVar5 < plVar8) break;
      *plVar8 = *plVar5;
      *plVar5 = lVar7;
      iVar2 = iVar2 + 1;
      plVar1 = plVar5;
      if (plVar9 != plVar8) {
        plVar1 = plVar9;
      }
    }
  }
  if (plVar8 != plVar9) {
    lVar7 = *plVar8;
    if (*(long *)(lVar7 + 0x68) < *(long *)(*plVar9 + 0x68)) {
      iVar2 = iVar2 + 1;
      *plVar8 = *plVar9;
      *plVar9 = lVar7;
    }
  }
  if (iVar2 == 0) {
    uVar4 = FUN_010245ec(param_1,plVar8,param_3);
    uVar3 = FUN_010245ec(plVar8 + 1,param_2,param_3);
    if ((uVar3 & 1) != 0) goto LAB_01024210;
    plVar9 = plVar8 + 1;
    if ((uVar4 & 1) != 0) goto LAB_01023e84;
  }
  if ((long)param_2 - (long)plVar8 <= (long)plVar8 - (long)param_1) {
    FUN_01023e4c(plVar8 + 1,param_2,param_3);
    param_2 = plVar8;
    goto LAB_01023e78;
  }
  FUN_01023e4c(param_1,plVar8,param_3);
  plVar9 = plVar8 + 1;
  goto LAB_01023e84;
LAB_01024210:
  param_2 = plVar8;
  if ((uVar4 & 1) != 0) {
    return;
  }
  goto LAB_01023e78;
LAB_010242e0:
  lVar12 = *plVar9;
  lVar11 = lVar7;
  if (*(long *)(lVar10 + 0x68) < *(long *)(lVar12 + 0x68)) {
    do {
      lVar10 = lVar11;
      *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
           *(undefined8 *)((long)param_1 + lVar10 + 0x10);
      plVar6 = param_1;
      if (lVar10 == -0x10) goto LAB_01024334;
      lVar11 = lVar10 + -8;
    } while (*(long *)(*(long *)((long)param_1 + lVar10 + 8) + 0x68) < *(long *)(lVar12 + 0x68));
    plVar6 = (long *)((long)param_1 + lVar10 + 0x10);
LAB_01024334:
    *plVar6 = lVar12;
  }
  if (plVar9 + 1 == param_2) {
switchD_01024230_caseD_0:
    return;
  }
  lVar10 = *plVar9;
  lVar7 = lVar7 + 8;
  plVar9 = plVar9 + 1;
  goto LAB_010242e0;
}

