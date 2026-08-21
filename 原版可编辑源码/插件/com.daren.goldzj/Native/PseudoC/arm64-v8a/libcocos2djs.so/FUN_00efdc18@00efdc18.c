
void FUN_00efdc18(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined4 local_70;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
LAB_00efdc60:
  plVar13 = param_2 + -3;
  plVar15 = param_1;
LAB_00efdc6c:
  param_1 = plVar15;
  uVar7 = (long)param_2 - (long)param_1;
  switch(((long)uVar7 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    goto switchD_00efe2d0_caseD_0;
  case 2:
    if (*(int *)((long)param_2 - 0xc) == *(int *)((long)param_1 + 0xc)) {
      if ((int)param_2[-1] == (int)param_1[2]) {
        if ((*(uint *)(*plVar13 + 0x1b) >> 0x1c & 1) ==
            (*(uint *)(*param_1 + 0x1b) & 0x10000000) >> 0x1c) {
          if (*(uint *)(param_2 + -2) <= *(uint *)(param_1 + 1)) goto switchD_00efe2d0_caseD_0;
        }
        else if ((*(uint *)(*plVar13 + 0x1b) >> 0x1c & 1) == 0) goto switchD_00efe2d0_caseD_0;
      }
      else if ((int)param_2[-1] <= (int)param_1[2]) goto switchD_00efe2d0_caseD_0;
    }
    else if (*(int *)((long)param_1 + 0xc) <= *(int *)((long)param_2 - 0xc))
    goto switchD_00efe2d0_caseD_0;
    lVar12 = param_1[2];
    lVar16 = param_1[1];
    lVar18 = *param_1;
    lVar19 = param_2[-2];
    lVar14 = *plVar13;
    *(int *)(param_1 + 2) = (int)param_2[-1];
    param_1[1] = lVar19;
    *param_1 = lVar14;
    local_70 = (undefined4)lVar12;
    *(undefined4 *)(param_2 + -1) = local_70;
    param_2[-2] = lVar16;
    *plVar13 = lVar18;
    goto switchD_00efe2d0_caseD_0;
  case 3:
    FUN_00efe574(param_1,param_1 + 3,plVar13);
    goto switchD_00efe2d0_caseD_0;
  case 4:
    FUN_00efe86c(param_1,param_1 + 3,param_1 + 6,plVar13);
    goto switchD_00efe2d0_caseD_0;
  case 5:
    FUN_00efeab8(param_1,param_1 + 3,param_1 + 6,param_1 + 9,plVar13);
    goto switchD_00efe2d0_caseD_0;
  }
  if ((long)uVar7 < 0x2e8) {
    FUN_00efe574(param_1,param_1 + 3,param_1 + 6);
    if (param_1 + 9 == param_2) goto switchD_00efe2d0_caseD_0;
    lVar12 = 0;
    plVar15 = param_1 + 9;
    plVar13 = param_1 + 6;
    goto LAB_00efe368;
  }
  uVar17 = uVar7 / 0x30;
  plVar15 = param_1 + uVar17 * 3;
  if ((long)uVar7 < 0x5da9) {
    iVar5 = FUN_00efe574(param_1,plVar15,plVar13);
  }
  else {
    iVar5 = FUN_00efeab8(param_1,param_1 + (uVar7 / 0x60) * 3,plVar15,plVar15 + (uVar7 / 0x60) * 3,
                         plVar13);
  }
  iVar11 = *(int *)((long)param_1 + 0xc);
  iVar2 = *(int *)((long)param_1 + uVar17 * 0x18 + 0xc);
  plVar8 = plVar13;
  if (iVar11 != iVar2) {
    if (iVar2 <= iVar11) goto LAB_00efdd3c;
LAB_00efddfc:
    plVar9 = param_1 + 3;
    if (plVar9 < plVar8) {
      iVar11 = *(int *)((long)plVar15 + 0xc);
LAB_00efde18:
      for (; *(int *)((long)plVar9 + 0xc) == iVar11; plVar9 = plVar9 + 3) {
        if ((int)plVar9[2] != (int)plVar15[2]) {
          if ((int)plVar15[2] < (int)plVar9[2]) goto LAB_00efde14;
          goto LAB_00efde80;
        }
        if ((*(uint *)(*plVar9 + 0x1b) >> 0x1c & 1) ==
            (*(uint *)(*plVar15 + 0x1b) & 0x10000000) >> 0x1c) {
          if (*(uint *)(plVar15 + 1) < *(uint *)(plVar9 + 1)) goto LAB_00efde14;
          goto LAB_00efde80;
        }
        if ((*(uint *)(*plVar9 + 0x1b) >> 0x1c & 1) == 0) goto LAB_00efde80;
LAB_00efde14:
      }
      if (*(int *)((long)plVar9 + 0xc) < iVar11) goto LAB_00efde14;
LAB_00efde80:
      do {
        while( true ) {
          plVar10 = plVar8;
          plVar8 = plVar10 + -3;
          if (*(int *)((long)plVar10 + -0xc) != iVar11) break;
          if ((int)plVar10[-1] == (int)plVar15[2]) {
            if ((*(uint *)(*plVar8 + 0x1b) >> 0x1c & 1) ==
                (*(uint *)(*plVar15 + 0x1b) & 0x10000000) >> 0x1c) {
              if (*(uint *)(plVar15 + 1) < *(uint *)(plVar10 + -2)) goto LAB_00efdee4;
            }
            else if ((*(uint *)(*plVar8 + 0x1b) >> 0x1c & 1) != 0) goto LAB_00efdee4;
          }
          else if ((int)plVar15[2] < (int)plVar10[-1]) goto LAB_00efdee4;
        }
      } while (iVar11 <= *(int *)((long)plVar10 + -0xc));
LAB_00efdee4:
      if (plVar9 <= plVar8) {
        lVar12 = plVar9[2];
        lVar14 = plVar9[1];
        lVar18 = *plVar9;
        plVar1 = plVar8;
        if (plVar15 != plVar9) {
          plVar1 = plVar15;
        }
        lVar19 = plVar10[-2];
        lVar16 = *plVar8;
        iVar5 = iVar5 + 1;
        *(int *)(plVar9 + 2) = (int)plVar10[-1];
        plVar9[1] = lVar19;
        *plVar9 = lVar16;
        local_70 = (undefined4)lVar12;
        plVar9 = plVar9 + 3;
        *(undefined4 *)(plVar10 + -1) = local_70;
        plVar10[-2] = lVar14;
        *plVar8 = lVar18;
        iVar11 = *(int *)((long)plVar1 + 0xc);
        plVar15 = plVar1;
        goto LAB_00efde18;
      }
    }
    if (plVar9 != plVar15) {
      if (*(int *)((long)plVar15 + 0xc) == *(int *)((long)plVar9 + 0xc)) {
        if ((int)plVar15[2] == (int)plVar9[2]) {
          if ((*(uint *)(*plVar15 + 0x1b) >> 0x1c & 1) ==
              (*(uint *)(*plVar9 + 0x1b) & 0x10000000) >> 0x1c) {
            if (*(uint *)(plVar9 + 1) < *(uint *)(plVar15 + 1)) goto LAB_00efdfd8;
          }
          else if ((*(uint *)(*plVar15 + 0x1b) >> 0x1c & 1) != 0) {
LAB_00efdfd8:
            lVar12 = plVar9[2];
            lVar16 = plVar9[1];
            lVar18 = *plVar9;
            iVar5 = iVar5 + 1;
            lVar19 = plVar15[1];
            lVar14 = *plVar15;
            *(int *)(plVar9 + 2) = (int)plVar15[2];
            plVar9[1] = lVar19;
            *plVar9 = lVar14;
            local_70 = (undefined4)lVar12;
            *(undefined4 *)(plVar15 + 2) = local_70;
            plVar15[1] = lVar16;
            *plVar15 = lVar18;
          }
        }
        else if ((int)plVar9[2] < (int)plVar15[2]) goto LAB_00efdfd8;
      }
      else if (*(int *)((long)plVar15 + 0xc) < *(int *)((long)plVar9 + 0xc)) goto LAB_00efdfd8;
    }
    if (iVar5 == 0) {
      uVar7 = FUN_00efeda8(param_1,plVar9);
      uVar17 = FUN_00efeda8(plVar9 + 3,param_2);
      if ((uVar17 & 1) != 0) goto LAB_00efe2b0;
      plVar15 = plVar9 + 3;
      if ((uVar7 & 1) != 0) goto LAB_00efdc6c;
    }
    if (((long)param_2 - (long)plVar9 >> 3) * -0x5555555555555555 <=
        ((long)plVar9 - (long)param_1 >> 3) * -0x5555555555555555) {
      FUN_00efdc18(plVar9 + 3,param_2);
      param_2 = plVar9;
      goto LAB_00efdc60;
    }
    FUN_00efdc18(param_1,plVar9);
    plVar15 = plVar9 + 3;
    goto LAB_00efdc6c;
  }
  if ((int)param_1[2] != (int)param_1[uVar17 * 3 + 2]) {
    if ((int)param_1[2] <= (int)param_1[uVar17 * 3 + 2]) goto LAB_00efdd3c;
    goto LAB_00efddfc;
  }
  if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) == (*(uint *)(*plVar15 + 0x1b) & 0x10000000) >> 0x1c)
  {
    if (*(uint *)(param_1 + 1) <= *(uint *)(param_1 + uVar17 * 3 + 1)) goto LAB_00efdd3c;
    goto LAB_00efddfc;
  }
  if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) != 0) goto LAB_00efddfc;
LAB_00efdd3c:
  if (param_1 != param_2 + -6) {
    plVar8 = param_2 + -6;
    do {
      if (*(int *)((long)plVar8 + 0xc) == iVar2) {
        if ((int)plVar8[2] == (int)param_1[uVar17 * 3 + 2]) {
          if ((*(uint *)(*plVar8 + 0x1b) >> 0x1c & 1) ==
              (*(uint *)(*plVar15 + 0x1b) & 0x10000000) >> 0x1c) {
            if (*(uint *)(param_1 + uVar17 * 3 + 1) < *(uint *)(plVar8 + 1)) goto LAB_00efddc8;
          }
          else if ((*(uint *)(*plVar8 + 0x1b) >> 0x1c & 1) != 0) {
LAB_00efddc8:
            lVar12 = param_1[2];
            lVar16 = param_1[1];
            lVar18 = *param_1;
            iVar5 = iVar5 + 1;
            lVar19 = plVar8[1];
            lVar14 = *plVar8;
            *(int *)(param_1 + 2) = (int)plVar8[2];
            param_1[1] = lVar19;
            *param_1 = lVar14;
            local_70 = (undefined4)lVar12;
            *(undefined4 *)(plVar8 + 2) = local_70;
            plVar8[1] = lVar16;
            *plVar8 = lVar18;
            goto LAB_00efddfc;
          }
        }
        else if ((int)param_1[uVar17 * 3 + 2] < (int)plVar8[2]) goto LAB_00efddc8;
      }
      else if (*(int *)((long)plVar8 + 0xc) < iVar2) goto LAB_00efddc8;
      plVar8 = plVar8 + -3;
    } while (param_1 != plVar8);
  }
  plVar8 = param_1 + 3;
  if (iVar11 != *(int *)((long)param_2 - 0xc)) {
    if (*(int *)((long)param_2 - 0xc) <= iVar11) goto LAB_00efe0a0;
    goto joined_r0x00efe074;
  }
  if ((int)param_1[2] == (int)param_2[-1]) {
    if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) ==
        (*(uint *)(*plVar13 + 0x1b) & 0x10000000) >> 0x1c) {
      if (*(uint *)(param_1 + 1) <= *(uint *)(param_2 + -2)) goto LAB_00efe0a0;
    }
    else if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) == 0) {
LAB_00efe0a0:
      if (plVar8 != plVar13) {
        plVar8 = param_1 + 6;
        do {
          if (iVar11 == *(int *)((long)plVar8 - 0xc)) {
            if ((int)param_1[2] == (int)plVar8[-1]) {
              if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) ==
                  (*(uint *)(plVar8[-3] + 0x1b) & 0x10000000) >> 0x1c) {
                if (*(uint *)(plVar8 + -2) < *(uint *)(param_1 + 1)) goto LAB_00efe120;
              }
              else if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) != 0) goto LAB_00efe120;
            }
            else if ((int)plVar8[-1] < (int)param_1[2]) goto LAB_00efe120;
          }
          else if (iVar11 < *(int *)((long)plVar8 - 0xc)) goto LAB_00efe120;
          plVar8 = plVar8 + 3;
          if (param_2 == plVar8) break;
        } while( true );
      }
      goto switchD_00efe2d0_caseD_0;
    }
  }
  else if ((int)param_1[2] <= (int)param_2[-1]) goto LAB_00efe0a0;
  goto joined_r0x00efe074;
LAB_00efe368:
  plVar8 = plVar15;
  iVar5 = *(int *)((long)plVar8 + 0xc);
  if (iVar5 == *(int *)((long)plVar13 + 0xc)) {
    iVar11 = (int)plVar8[2];
    if (iVar11 == (int)plVar13[2]) {
      if ((*(uint *)(*plVar8 + 0x1b) >> 0x1c & 1) ==
          (*(uint *)(*plVar13 + 0x1b) & 0x10000000) >> 0x1c) {
        if (*(uint *)(plVar13 + 1) < *(uint *)(plVar8 + 1)) goto LAB_00efe3e0;
      }
      else if ((*(uint *)(*plVar8 + 0x1b) >> 0x1c & 1) != 0) {
LAB_00efe3e0:
        lVar14 = *plVar8;
        lVar16 = plVar13[1];
        lVar18 = *plVar13;
        uVar3 = *(uint *)(plVar8 + 1);
        *(int *)(plVar8 + 2) = (int)plVar13[2];
        plVar8[1] = lVar16;
        *plVar8 = lVar18;
        plVar15 = param_1;
        lVar18 = lVar12;
        if (plVar13 != param_1) {
          do {
            iVar2 = *(int *)((long)param_1 + lVar18 + 0x24);
            plVar15 = plVar13;
            if (iVar5 == iVar2) {
              iVar2 = *(int *)((long)param_1 + lVar18 + 0x28);
              if (iVar11 == iVar2) {
                if ((*(uint *)(lVar14 + 0x1b) >> 0x1c & 1) ==
                    (*(uint *)(*(long *)((long)param_1 + lVar18 + 0x18) + 0x1b) & 0x10000000) >>
                    0x1c) {
                  if (uVar3 <= *(uint *)((long)param_1 + lVar18 + 0x20)) break;
                }
                else if ((*(uint *)(lVar14 + 0x1b) >> 0x1c & 1) == 0) {
                  plVar15 = (long *)((long)param_1 + lVar18 + 0x30);
                  break;
                }
              }
              else if (iVar11 <= iVar2) break;
            }
            else if (iVar2 <= iVar5) break;
            lVar16 = lVar18 + -0x18;
            plVar13 = plVar13 + -3;
            *(undefined8 *)((long)param_1 + lVar18 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar18 + 0x20);
            *(undefined8 *)((long)param_1 + lVar18 + 0x30) =
                 *(undefined8 *)((long)param_1 + lVar18 + 0x18);
            *(undefined4 *)((long)param_1 + lVar18 + 0x40) =
                 *(undefined4 *)((long)param_1 + lVar18 + 0x28);
            plVar15 = param_1;
            lVar18 = lVar16;
          } while (lVar16 != -0x30);
        }
        *plVar15 = lVar14;
        *(uint *)(plVar15 + 1) = uVar3;
        *(int *)((long)plVar15 + 0xc) = iVar5;
        *(int *)(plVar15 + 2) = iVar11;
      }
    }
    else if ((int)plVar13[2] < iVar11) goto LAB_00efe3e0;
  }
  else if (iVar5 < *(int *)((long)plVar13 + 0xc)) {
    iVar11 = (int)plVar8[2];
    goto LAB_00efe3e0;
  }
  lVar12 = lVar12 + 0x18;
  plVar15 = plVar8 + 3;
  plVar13 = plVar8;
  if (plVar8 + 3 == param_2) {
switchD_00efe2d0_caseD_0:
    if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  goto LAB_00efe368;
LAB_00efe120:
  lVar12 = plVar8[-1];
  lVar16 = plVar8[-2];
  lVar18 = plVar8[-3];
  lVar19 = param_2[-2];
  lVar14 = *plVar13;
  *(int *)(plVar8 + -1) = (int)param_2[-1];
  plVar8[-2] = lVar19;
  plVar8[-3] = lVar14;
  local_70 = (undefined4)lVar12;
  *(undefined4 *)(param_2 + -1) = local_70;
  param_2[-2] = lVar16;
  *plVar13 = lVar18;
joined_r0x00efe074:
  plVar9 = plVar13;
  if (plVar8 != plVar13) {
LAB_00efe15c:
    iVar5 = *(int *)((long)param_1 + 0xc);
    plVar15 = plVar8;
    do {
      if (iVar5 == *(int *)((long)plVar15 + 0xc)) {
        if ((int)param_1[2] == (int)plVar15[2]) {
          if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) ==
              (*(uint *)(*plVar15 + 0x1b) & 0x10000000) >> 0x1c) {
            if (*(uint *)(plVar15 + 1) < *(uint *)(param_1 + 1)) goto LAB_00efe1d4;
          }
          else if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) != 0) goto LAB_00efe1d4;
        }
        else if ((int)plVar15[2] < (int)param_1[2]) goto LAB_00efe1d4;
      }
      else if (iVar5 < *(int *)((long)plVar15 + 0xc)) goto LAB_00efe1d4;
      plVar15 = plVar15 + 3;
    } while( true );
  }
  goto switchD_00efe2d0_caseD_0;
  while (*(uint *)(plVar10 + -2) < *(uint *)(param_1 + 1)) {
LAB_00efe1d4:
    plVar10 = plVar9;
    plVar9 = plVar10 + -3;
    if (iVar5 != *(int *)((long)plVar10 - 0xc)) {
      if (*(int *)((long)plVar10 - 0xc) <= iVar5) break;
      goto LAB_00efe1d4;
    }
    if ((int)param_1[2] != (int)plVar10[-1]) {
      if ((int)param_1[2] <= (int)plVar10[-1]) break;
      goto LAB_00efe1d4;
    }
    if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) != (*(uint *)(*plVar9 + 0x1b) & 0x10000000) >> 0x1c
       ) {
      if ((*(uint *)(*param_1 + 0x1b) >> 0x1c & 1) == 0) break;
      goto LAB_00efe1d4;
    }
  }
  if (plVar9 <= plVar15) goto LAB_00efdc6c;
  lVar12 = plVar15[2];
  lVar16 = plVar15[1];
  lVar18 = *plVar15;
  lVar19 = plVar10[-2];
  lVar14 = *plVar9;
  *(int *)(plVar15 + 2) = (int)plVar10[-1];
  plVar8 = plVar15 + 3;
  plVar15[1] = lVar19;
  *plVar15 = lVar14;
  local_70 = (undefined4)lVar12;
  *(undefined4 *)(plVar10 + -1) = local_70;
  plVar10[-2] = lVar16;
  *plVar9 = lVar18;
  goto LAB_00efe15c;
LAB_00efe2b0:
  param_2 = plVar9;
  if ((uVar7 & 1) != 0) goto switchD_00efe2d0_caseD_0;
  goto LAB_00efdc60;
}

