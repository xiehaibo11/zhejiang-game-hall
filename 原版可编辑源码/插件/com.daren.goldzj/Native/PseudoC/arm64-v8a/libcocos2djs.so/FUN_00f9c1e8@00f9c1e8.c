
void FUN_00f9c1e8(long *param_1,long *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  
LAB_00f9c214:
  plVar18 = param_2 + -1;
  plVar13 = param_1;
LAB_00f9c220:
  param_1 = plVar13;
  lVar8 = (long)param_2 - (long)param_1;
  uVar6 = lVar8 >> 3;
  switch(uVar6) {
  case 0:
  case 1:
    return;
  case 2:
    iVar9 = *param_3;
    lVar14 = param_2[-1];
    lVar8 = *param_1;
    iVar4 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar4 = iVar9;
    }
    if (3 < iVar9) {
      iVar4 = iVar4 >> 2;
      piVar11 = (int *)(lVar8 + -1);
      piVar15 = (int *)(lVar14 + -1);
      do {
        if (*piVar15 != *piVar11) {
          return;
        }
        piVar15 = piVar15 + 1;
        iVar4 = iVar4 + -1;
        piVar11 = piVar11 + 1;
      } while (iVar4 != 0);
    }
    if ((uint)lVar8 <= (uint)lVar14) {
      return;
    }
    *param_1 = lVar14;
    param_2[-1] = lVar8;
    return;
  case 3:
    FUN_00f9c8d4(param_1,param_1 + 1,plVar18,param_3);
    return;
  case 4:
    FUN_00f9ca78(param_1,param_1 + 1,param_1 + 2,plVar18,param_3);
    return;
  case 5:
    FUN_00f9cbe4(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar18,param_3);
    return;
  }
  if (lVar8 < 0xf8) {
    FUN_00f9c8d4(param_1,param_1 + 1,param_1 + 2,param_3);
    plVar13 = param_1 + 3;
    plVar18 = param_1 + 2;
    if (param_1 + 3 == param_2) {
      return;
    }
    goto LAB_00f9c760;
  }
  uVar5 = uVar6;
  if ((long)uVar6 < 0) {
    uVar5 = uVar6 + 1;
  }
  plVar13 = (long *)((long)param_1 + (uVar5 & 0x3ffffffffffffffe) * 4);
  if (lVar8 < 0x1f39) {
    iVar4 = FUN_00f9c8d4(param_1,plVar13,plVar18,param_3);
  }
  else {
    uVar5 = uVar6 + 3;
    if (-1 < (long)uVar6) {
      uVar5 = uVar6;
    }
    lVar8 = (uVar5 & 0x7ffffffffffffffc) * 2;
    iVar4 = FUN_00f9cbe4(param_1,(long)param_1 + lVar8,plVar13,(long)plVar13 + lVar8,plVar18,param_3
                        );
  }
  iVar1 = *param_3;
  lVar8 = *param_1;
  lVar14 = *plVar13;
  iVar9 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  iVar9 = iVar9 >> 2;
  uVar10 = (uint)lVar8;
  if (3 < iVar1) {
    piVar11 = (int *)(lVar14 + -1);
    piVar15 = (int *)(lVar8 + -1);
    iVar2 = iVar9;
    do {
      if (*piVar15 != *piVar11) goto LAB_00f9c300;
      piVar15 = piVar15 + 1;
      iVar2 = iVar2 + -1;
      piVar11 = piVar11 + 1;
    } while (iVar2 != 0);
  }
  plVar12 = plVar18;
  if ((uint)lVar14 <= uVar10) {
LAB_00f9c300:
    if (param_1 != param_2 + -2) {
      plVar12 = param_2 + -2;
      do {
        lVar16 = *plVar12;
        if (3 < iVar1) {
          piVar15 = (int *)(lVar16 + -1);
          piVar11 = (int *)(lVar14 + -1);
          iVar2 = iVar9;
          do {
            if (*piVar15 != *piVar11) goto LAB_00f9c31c;
            piVar15 = piVar15 + 1;
            iVar2 = iVar2 + -1;
            piVar11 = piVar11 + 1;
          } while (iVar2 != 0);
        }
        if ((uint)lVar16 < (uint)lVar14) {
          iVar4 = iVar4 + 1;
          *param_1 = lVar16;
          *plVar12 = lVar8;
          goto LAB_00f9c414;
        }
LAB_00f9c31c:
        plVar12 = plVar12 + -1;
      } while (param_1 != plVar12);
    }
    lVar14 = param_2[-1];
    plVar12 = param_1 + 1;
    if (3 < iVar1) {
      piVar11 = (int *)(lVar14 + -1);
      piVar15 = (int *)(lVar8 + -1);
      iVar4 = iVar9;
      do {
        if (*piVar15 != *piVar11) goto LAB_00f9c3a8;
        piVar15 = piVar15 + 1;
        iVar4 = iVar4 + -1;
        piVar11 = piVar11 + 1;
      } while (iVar4 != 0);
    }
    if ((uint)lVar14 <= uVar10) {
LAB_00f9c3a8:
      if (plVar12 == plVar18) {
        return;
      }
      plVar13 = plVar12;
      while( true ) {
        lVar16 = *plVar13;
        if (3 < iVar1) {
          piVar11 = (int *)(lVar16 + -1);
          piVar15 = (int *)(lVar8 + -1);
          iVar4 = iVar9;
          do {
            if (*piVar15 != *piVar11) goto LAB_00f9c3c0;
            piVar15 = piVar15 + 1;
            iVar4 = iVar4 + -1;
            piVar11 = piVar11 + 1;
          } while (iVar4 != 0);
        }
        if (uVar10 < (uint)lVar16) break;
LAB_00f9c3c0:
        plVar13 = plVar13 + 1;
        if (plVar13 == plVar18) {
          return;
        }
      }
      plVar12 = plVar13 + 1;
      *plVar13 = lVar14;
      *plVar18 = lVar16;
    }
    plVar7 = plVar18;
    if (plVar12 == plVar18) {
      return;
    }
    do {
      iVar9 = *param_3;
      iVar4 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      piVar15 = (int *)(*param_1 + -1);
      plVar13 = plVar12;
      while( true ) {
        lVar8 = *plVar13;
        if (3 < iVar9) {
          piVar17 = (int *)(lVar8 + -1);
          piVar11 = piVar15;
          iVar1 = iVar4 >> 2;
          do {
            if (*piVar11 != *piVar17) goto LAB_00f9c5e8;
            piVar11 = piVar11 + 1;
            iVar1 = iVar1 + -1;
            piVar17 = piVar17 + 1;
          } while (iVar1 != 0);
        }
        uVar10 = (uint)*param_1;
        if (uVar10 < (uint)lVar8) break;
LAB_00f9c5e8:
        plVar13 = plVar13 + 1;
      }
      do {
        plVar7 = plVar7 + -1;
        lVar14 = *plVar7;
        if (3 < iVar9) {
          piVar17 = (int *)(lVar14 + -1);
          piVar11 = piVar15;
          iVar1 = iVar4 >> 2;
          do {
            if (*piVar11 != *piVar17) goto LAB_00f9c66c;
            piVar11 = piVar11 + 1;
            iVar1 = iVar1 + -1;
            piVar17 = piVar17 + 1;
          } while (iVar1 != 0);
        }
      } while (uVar10 < (uint)lVar14);
LAB_00f9c66c:
      if (plVar7 <= plVar13) goto LAB_00f9c220;
      plVar12 = plVar13 + 1;
      *plVar13 = lVar14;
      *plVar7 = lVar8;
    } while( true );
  }
LAB_00f9c414:
  plVar7 = param_1 + 1;
  plVar3 = plVar13;
  plVar19 = plVar7;
  if (plVar7 < plVar12) {
LAB_00f9c420:
    plVar13 = plVar3;
    iVar1 = *param_3;
    iVar9 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar9 = iVar1;
    }
    piVar15 = (int *)(*plVar13 + -1);
    plVar19 = plVar7;
    while( true ) {
      lVar8 = *plVar19;
      uVar10 = (uint)*plVar13;
      if (3 < iVar1) {
        piVar11 = (int *)(lVar8 + -1);
        piVar17 = piVar15;
        iVar2 = iVar9 >> 2;
        do {
          if (*piVar11 != *piVar17) goto LAB_00f9c48c;
          piVar11 = piVar11 + 1;
          iVar2 = iVar2 + -1;
          piVar17 = piVar17 + 1;
        } while (iVar2 != 0);
      }
      if (uVar10 <= (uint)lVar8) break;
      plVar19 = plVar19 + 1;
    }
LAB_00f9c48c:
    do {
      plVar12 = plVar12 + -1;
      lVar14 = *plVar12;
      if (3 < iVar1) {
        piVar11 = (int *)(lVar14 + -1);
        piVar17 = piVar15;
        iVar2 = iVar9 >> 2;
        do {
          if (*piVar11 != *piVar17) goto LAB_00f9c48c;
          piVar11 = piVar11 + 1;
          iVar2 = iVar2 + -1;
          piVar17 = piVar17 + 1;
        } while (iVar2 != 0);
      }
    } while (uVar10 <= (uint)lVar14);
    if (plVar19 <= plVar12) {
      plVar7 = plVar19 + 1;
      *plVar19 = lVar14;
      *plVar12 = lVar8;
      iVar4 = iVar4 + 1;
      plVar3 = plVar12;
      if (plVar13 != plVar19) {
        plVar3 = plVar13;
      }
      goto LAB_00f9c420;
    }
  }
  if (plVar19 != plVar13) {
    iVar1 = *param_3;
    lVar14 = *plVar13;
    lVar8 = *plVar19;
    iVar9 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar9 = iVar1;
    }
    if (3 < iVar1) {
      iVar9 = iVar9 >> 2;
      piVar11 = (int *)(lVar8 + -1);
      piVar15 = (int *)(lVar14 + -1);
      do {
        if (*piVar15 != *piVar11) goto LAB_00f9c550;
        piVar15 = piVar15 + 1;
        iVar9 = iVar9 + -1;
        piVar11 = piVar11 + 1;
      } while (iVar9 != 0);
    }
    if ((uint)lVar14 < (uint)lVar8) {
      iVar4 = iVar4 + 1;
      *plVar19 = lVar14;
      *plVar13 = lVar8;
    }
  }
LAB_00f9c550:
  if (iVar4 == 0) {
    uVar6 = FUN_00f9cdb4(param_1,plVar19,param_3);
    uVar5 = FUN_00f9cdb4(plVar19 + 1,param_2,param_3);
    if ((uVar5 & 1) != 0) goto LAB_00f9c698;
    plVar13 = plVar19 + 1;
    if ((uVar6 & 1) != 0) goto LAB_00f9c220;
  }
  if ((long)param_2 - (long)plVar19 <= (long)plVar19 - (long)param_1) {
    FUN_00f9c1e8(plVar19 + 1,param_2,param_3);
    param_2 = plVar19;
    goto LAB_00f9c214;
  }
  FUN_00f9c1e8(param_1,plVar19,param_3);
  plVar13 = plVar19 + 1;
  goto LAB_00f9c220;
LAB_00f9c760:
  plVar12 = plVar13;
  iVar9 = *param_3;
  lVar8 = *plVar12;
  lVar14 = *plVar18;
  iVar4 = iVar9 + 3;
  if (-1 < iVar9) {
    iVar4 = iVar9;
  }
  if (3 < iVar9) {
    iVar4 = iVar4 >> 2;
    piVar11 = (int *)(lVar14 + -1);
    piVar15 = (int *)(lVar8 + -1);
    do {
      if (*piVar15 != *piVar11) goto LAB_00f9c74c;
      piVar15 = piVar15 + 1;
      iVar4 = iVar4 + -1;
      piVar11 = piVar11 + 1;
    } while (iVar4 != 0);
  }
  if ((uint)lVar8 < (uint)lVar14) {
    plVar13 = plVar12;
    while (*plVar13 = lVar14, plVar13 = param_1, plVar18 != param_1) {
      lVar14 = plVar18[-1];
      iVar9 = *param_3;
      iVar4 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      plVar13 = plVar18;
      if (3 < iVar9) {
        iVar4 = iVar4 >> 2;
        piVar11 = (int *)(lVar14 + -1);
        piVar15 = (int *)(lVar8 + -1);
        do {
          if (*piVar15 != *piVar11) goto LAB_00f9c748;
          piVar15 = piVar15 + 1;
          iVar4 = iVar4 + -1;
          piVar11 = piVar11 + 1;
        } while (iVar4 != 0);
      }
      plVar18 = plVar18 + -1;
      if ((uint)lVar14 <= (uint)lVar8) break;
    }
LAB_00f9c748:
    *plVar13 = lVar8;
  }
LAB_00f9c74c:
  plVar13 = plVar12 + 1;
  plVar18 = plVar12;
  if (plVar12 + 1 == param_2) {
    return;
  }
  goto LAB_00f9c760;
LAB_00f9c698:
  param_2 = plVar19;
  if ((uVar6 & 1) != 0) {
    return;
  }
  goto LAB_00f9c214;
}

