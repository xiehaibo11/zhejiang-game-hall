
void FUN_00924024(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  
LAB_00924068:
  plVar11 = param_2 + -1;
LAB_00924088:
  plVar14 = param_1;
  lVar9 = (long)param_2 - (long)plVar14;
  uVar6 = lVar9 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    lVar9 = *plVar14;
    if (**(int **)(lVar9 + 0xa8) <= **(int **)(param_2[-1] + 0xa8)) {
      return;
    }
    *plVar14 = param_2[-1];
    param_2[-1] = lVar9;
    return;
  case 3:
    lVar9 = *plVar14;
    lVar10 = plVar14[1];
    lVar12 = param_2[-1];
    iVar4 = **(int **)(lVar10 + 0xa8);
    if (**(int **)(lVar9 + 0xa8) <= iVar4) {
      if (iVar4 <= **(int **)(lVar12 + 0xa8)) {
        return;
      }
      plVar14[1] = lVar12;
      param_2[-1] = lVar10;
      lVar9 = *plVar14;
      if (**(int **)(lVar9 + 0xa8) <= **(int **)(plVar14[1] + 0xa8)) {
        return;
      }
      *plVar14 = plVar14[1];
      plVar14[1] = lVar9;
      return;
    }
    if (**(int **)(lVar12 + 0xa8) < iVar4) {
      *plVar14 = lVar12;
      param_2[-1] = lVar9;
      return;
    }
    *plVar14 = lVar10;
    plVar14[1] = lVar9;
    if (**(int **)(lVar9 + 0xa8) <= **(int **)(param_2[-1] + 0xa8)) {
      return;
    }
    plVar14[1] = param_2[-1];
    param_2[-1] = lVar9;
    return;
  case 4:
    FUN_0092478c(plVar14,plVar14 + 1,plVar14 + 2,plVar11);
    return;
  case 5:
    plVar11 = plVar14 + 2;
    plVar8 = plVar14 + 3;
    FUN_0092478c(plVar14,plVar14 + 1,plVar11,plVar8);
    lVar9 = plVar14[3];
    if (**(int **)(lVar9 + 0xa8) <= **(int **)(param_2[-1] + 0xa8)) {
      return;
    }
    *plVar8 = param_2[-1];
    param_2[-1] = lVar9;
    lVar9 = *plVar8;
    lVar10 = *plVar11;
    if (**(int **)(lVar10 + 0xa8) <= **(int **)(lVar9 + 0xa8)) {
      return;
    }
    *plVar11 = lVar9;
    *plVar8 = lVar10;
    lVar10 = plVar14[1];
    if (**(int **)(lVar10 + 0xa8) <= **(int **)(lVar9 + 0xa8)) {
      return;
    }
    lVar12 = *plVar14;
    plVar14[1] = lVar9;
    plVar14[2] = lVar10;
    if (**(int **)(lVar12 + 0xa8) <= **(int **)(lVar9 + 0xa8)) {
      return;
    }
    *plVar14 = lVar9;
    plVar14[1] = lVar12;
    return;
  }
  if (0xf7 < lVar9) {
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    plVar8 = (long *)((long)plVar14 + (uVar5 & 0x3ffffffffffffffe) * 4);
    if (lVar9 < 0x1f39) {
      lVar10 = *plVar8;
      lVar9 = *plVar14;
      lVar12 = *plVar11;
      iVar4 = **(int **)(lVar10 + 0xa8);
      if (iVar4 < **(int **)(lVar9 + 0xa8)) {
        if (**(int **)(lVar12 + 0xa8) < iVar4) {
          *plVar14 = lVar12;
          *plVar11 = lVar9;
          iVar4 = 1;
        }
        else {
          *plVar14 = lVar10;
          *plVar8 = lVar9;
          if (**(int **)(lVar9 + 0xa8) <= **(int **)(*plVar11 + 0xa8)) goto LAB_0092425c;
          *plVar8 = *plVar11;
          *plVar11 = lVar9;
LAB_0092424c:
          iVar4 = 2;
        }
      }
      else if (**(int **)(lVar12 + 0xa8) < iVar4) {
        *plVar8 = lVar12;
        *plVar11 = lVar10;
        lVar9 = *plVar14;
        if (**(int **)(*plVar8 + 0xa8) < **(int **)(lVar9 + 0xa8)) {
          *plVar14 = *plVar8;
          *plVar8 = lVar9;
          goto LAB_0092424c;
        }
LAB_0092425c:
        iVar4 = 1;
      }
      else {
        iVar4 = 0;
      }
    }
    else {
      uVar5 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar5 = uVar6;
      }
      lVar9 = (uVar5 & 0x7ffffffffffffffc) * 2;
      plVar7 = (long *)((long)plVar14 + lVar9);
      plVar16 = (long *)((long)plVar8 + lVar9);
      iVar4 = FUN_0092478c(plVar14,plVar7,plVar8,plVar16);
      lVar9 = *plVar16;
      if (**(int **)(*plVar11 + 0xa8) < **(int **)(lVar9 + 0xa8)) {
        *plVar16 = *plVar11;
        *plVar11 = lVar9;
        lVar9 = *plVar8;
        if (**(int **)(*plVar16 + 0xa8) < **(int **)(lVar9 + 0xa8)) {
          *plVar8 = *plVar16;
          *plVar16 = lVar9;
          lVar9 = *plVar7;
          if (**(int **)(*plVar8 + 0xa8) < **(int **)(lVar9 + 0xa8)) {
            *plVar7 = *plVar8;
            *plVar8 = lVar9;
            lVar9 = *plVar14;
            if (**(int **)(*plVar7 + 0xa8) < **(int **)(lVar9 + 0xa8)) {
              *plVar14 = *plVar7;
              *plVar7 = lVar9;
              iVar4 = iVar4 + 4;
            }
            else {
              iVar4 = iVar4 + 3;
            }
          }
          else {
            iVar4 = iVar4 + 2;
          }
        }
        else {
          iVar4 = iVar4 + 1;
        }
      }
    }
    lVar9 = *plVar14;
    iVar1 = **(int **)(lVar9 + 0xa8);
    plVar7 = plVar11;
    plVar16 = param_2 + -2;
    if (**(int **)(*plVar8 + 0xa8) <= iVar1) {
LAB_0092429c:
      plVar7 = plVar16;
      if (plVar14 != plVar7) goto code_r0x009242a4;
      plVar8 = plVar14 + 1;
      if (**(int **)(*plVar11 + 0xa8) <= iVar1) {
        if (plVar8 == plVar11) {
          return;
        }
        plVar8 = plVar14 + 2;
        while (lVar9 = plVar8[-1], **(int **)(lVar9 + 0xa8) <= iVar1) {
          plVar8 = plVar8 + 1;
          if (param_2 == plVar8) {
            return;
          }
        }
        plVar8[-1] = *plVar11;
        *plVar11 = lVar9;
      }
      if (plVar8 == plVar11) {
        return;
      }
      while( true ) {
        do {
          param_1 = plVar8;
          plVar8 = param_1 + 1;
          lVar9 = *param_1;
        } while (**(int **)(lVar9 + 0xa8) <= **(int **)(*plVar14 + 0xa8));
        do {
          plVar11 = plVar11 + -1;
        } while (**(int **)(*plVar14 + 0xa8) < **(int **)(*plVar11 + 0xa8));
        if (plVar11 <= param_1) break;
        *param_1 = *plVar11;
        *plVar11 = lVar9;
      }
      uVar17 = 4;
      goto LAB_00924460;
    }
    goto LAB_009242c4;
  }
  lVar9 = *plVar14;
  lVar10 = plVar14[1];
  lVar13 = plVar14[2];
  iVar4 = **(int **)(lVar10 + 0xa8);
  lVar12 = lVar13;
  if (iVar4 < **(int **)(lVar9 + 0xa8)) {
    if (**(int **)(lVar13 + 0xa8) < iVar4) {
      *plVar14 = lVar13;
    }
    else {
      *plVar14 = lVar10;
      plVar14[1] = lVar9;
      if (**(int **)(lVar9 + 0xa8) <= **(int **)(lVar13 + 0xa8)) goto LAB_00924560;
      plVar14[1] = lVar13;
    }
    plVar14[2] = lVar9;
    lVar12 = lVar9;
  }
  else if (**(int **)(lVar13 + 0xa8) < iVar4) {
    plVar14[1] = lVar13;
    plVar14[2] = lVar10;
    lVar12 = lVar10;
    if (**(int **)(lVar13 + 0xa8) < **(int **)(lVar9 + 0xa8)) {
      *plVar14 = lVar13;
      plVar14[1] = lVar9;
    }
  }
LAB_00924560:
  if (plVar14 + 3 == param_2) {
    return;
  }
  lVar9 = 0;
  plVar11 = plVar14 + 3;
LAB_00924580:
  lVar13 = *plVar11;
  lVar10 = lVar9;
  if (**(int **)(lVar13 + 0xa8) < **(int **)(lVar12 + 0xa8)) {
    do {
      lVar12 = lVar10;
      *(undefined8 *)((long)plVar14 + lVar12 + 0x18) =
           *(undefined8 *)((long)plVar14 + lVar12 + 0x10);
      plVar8 = plVar14;
      if (lVar12 == -0x10) goto LAB_009245e4;
      lVar10 = lVar12 + -8;
    } while (**(int **)(lVar13 + 0xa8) < **(int **)(*(long *)((long)plVar14 + lVar12 + 8) + 0xa8));
    plVar8 = (long *)((long)plVar14 + lVar12 + 0x10);
LAB_009245e4:
    *plVar8 = lVar13;
  }
  if (plVar11 + 1 == param_2) {
    return;
  }
  lVar12 = *plVar11;
  lVar9 = lVar9 + 8;
  plVar11 = plVar11 + 1;
  goto LAB_00924580;
code_r0x009242a4:
  plVar16 = plVar7 + -1;
  if (**(int **)(*plVar7 + 0xa8) < **(int **)(*plVar8 + 0xa8)) goto code_r0x009242b8;
  goto LAB_0092429c;
code_r0x009242b8:
  *plVar14 = *plVar7;
  *plVar7 = lVar9;
  iVar4 = iVar4 + 1;
LAB_009242c4:
  plVar16 = plVar14 + 1;
  plVar2 = plVar8;
  plVar15 = plVar16;
  if (plVar16 < plVar7) {
    while( true ) {
      plVar8 = plVar2;
      plVar16 = plVar15 + -1;
      do {
        plVar15 = plVar16;
        plVar16 = plVar15 + 1;
        lVar9 = *plVar16;
      } while (**(int **)(lVar9 + 0xa8) < **(int **)(*plVar8 + 0xa8));
      plVar15 = plVar15 + 2;
      do {
        plVar7 = plVar7 + -1;
      } while (**(int **)(*plVar8 + 0xa8) <= **(int **)(*plVar7 + 0xa8));
      if (plVar7 < plVar16) break;
      *plVar16 = *plVar7;
      *plVar7 = lVar9;
      iVar4 = iVar4 + 1;
      plVar2 = plVar7;
      if (plVar8 != plVar16) {
        plVar2 = plVar8;
      }
    }
    if (plVar16 == plVar8) goto LAB_0092436c;
  }
  else if (plVar16 == plVar8) goto LAB_0092436c;
  lVar9 = *plVar16;
  if (**(int **)(*plVar8 + 0xa8) < **(int **)(lVar9 + 0xa8)) {
    iVar4 = iVar4 + 1;
    *plVar16 = *plVar8;
    *plVar8 = lVar9;
  }
LAB_0092436c:
  if (iVar4 == 0) {
    uVar6 = FUN_0092491c(plVar14,plVar16);
    uVar5 = FUN_0092491c(plVar16 + 1,param_2);
    if ((uVar5 & 1) != 0) goto LAB_00924470;
    param_1 = plVar16 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00924088;
  }
  if ((long)param_2 - (long)plVar16 <= (long)plVar16 - (long)plVar14) {
    FUN_00924024(plVar16 + 1,param_2);
    param_1 = plVar14;
    param_2 = plVar16;
    goto LAB_00924068;
  }
  FUN_00924024(plVar14,plVar16);
  param_1 = plVar16 + 1;
  goto LAB_00924088;
LAB_00924470:
  bVar3 = (uVar6 & 1) == 0;
  if (bVar3) {
    param_2 = plVar16;
  }
  uVar17 = 1;
  if (bVar3) {
    uVar17 = 2;
  }
  param_1 = plVar14;
  if (4 < uVar17) {
    return;
  }
LAB_00924460:
  if ((1 << uVar17 & 0x15U) == 0) {
    return;
  }
  goto LAB_00924068;
}

