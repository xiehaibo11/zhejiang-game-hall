
void FUN_00efeda8(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 local_40;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  bVar5 = true;
  switch(((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    plVar13 = param_2 + -3;
    if (*(int *)((long)param_2 + -0xc) == *(int *)((long)param_1 + 0xc)) {
      if ((int)param_2[-1] == (int)param_1[2]) {
        if ((*(uint *)(*plVar13 + 0x1b) >> 0x1c & 1) ==
            (*(uint *)(*param_1 + 0x1b) & 0x10000000) >> 0x1c) {
          if (*(uint *)(param_2 + -2) <= *(uint *)(param_1 + 1)) goto LAB_00eff080;
        }
        else if ((*(uint *)(*plVar13 + 0x1b) >> 0x1c & 1) == 0) goto LAB_00eff080;
      }
      else if ((int)param_2[-1] <= (int)param_1[2]) goto LAB_00eff080;
    }
    else if (*(int *)((long)param_1 + 0xc) <= *(int *)((long)param_2 + -0xc)) goto LAB_00eff080;
    lVar6 = param_1[2];
    lVar14 = param_1[1];
    lVar15 = *param_1;
    bVar5 = true;
    lVar16 = param_2[-2];
    lVar12 = *plVar13;
    *(int *)(param_1 + 2) = (int)param_2[-1];
    param_1[1] = lVar16;
    *param_1 = lVar12;
    local_40 = (undefined4)lVar6;
    *(undefined4 *)(param_2 + -1) = local_40;
    param_2[-2] = lVar14;
    *plVar13 = lVar15;
    break;
  case 3:
    FUN_00efe574(param_1,param_1 + 3,param_2 + -3);
    bVar5 = true;
    break;
  case 4:
    FUN_00efe86c(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
    bVar5 = true;
    break;
  case 5:
    FUN_00efeab8(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
    bVar5 = true;
    break;
  default:
    FUN_00efe574(param_1,param_1 + 3,param_1 + 6);
    if (param_1 + 9 != param_2) {
      lVar6 = 0;
      iVar7 = 0;
      plVar13 = param_1 + 9;
      plVar11 = param_1 + 6;
      do {
        plVar9 = plVar13;
        iVar1 = *(int *)((long)plVar9 + 0xc);
        if (iVar1 == *(int *)((long)plVar11 + 0xc)) {
          iVar10 = (int)plVar9[2];
          if (iVar10 == (int)plVar11[2]) {
            if ((*(uint *)(*plVar9 + 0x1b) >> 0x1c & 1) ==
                (*(uint *)(*plVar11 + 0x1b) & 0x10000000) >> 0x1c) {
              if (*(uint *)(plVar11 + 1) < *(uint *)(plVar9 + 1)) goto LAB_00efef40;
            }
            else if ((*(uint *)(*plVar9 + 0x1b) >> 0x1c & 1) != 0) {
LAB_00efef40:
              lVar12 = *plVar9;
              lVar14 = plVar11[1];
              lVar15 = *plVar11;
              uVar2 = *(uint *)(plVar9 + 1);
              *(int *)(plVar9 + 2) = (int)plVar11[2];
              plVar9[1] = lVar14;
              *plVar9 = lVar15;
              plVar13 = param_1;
              lVar15 = lVar6;
              if (plVar11 != param_1) {
                do {
                  iVar3 = *(int *)((long)param_1 + lVar15 + 0x24);
                  plVar13 = plVar11;
                  if (iVar1 == iVar3) {
                    iVar3 = *(int *)((long)param_1 + lVar15 + 0x28);
                    if (iVar10 == iVar3) {
                      if ((*(uint *)(lVar12 + 0x1b) >> 0x1c & 1) ==
                          (*(uint *)(*(long *)((long)param_1 + lVar15 + 0x18) + 0x1b) & 0x10000000)
                          >> 0x1c) {
                        if (uVar2 <= *(uint *)((long)param_1 + lVar15 + 0x20)) {
                          plVar13 = (long *)((long)param_1 + lVar15 + 0x30);
                          break;
                        }
                      }
                      else if ((*(uint *)(lVar12 + 0x1b) >> 0x1c & 1) == 0) break;
                    }
                    else if (iVar10 <= iVar3) break;
                  }
                  else if (iVar3 <= iVar1) break;
                  lVar14 = lVar15 + -0x18;
                  plVar11 = plVar11 + -3;
                  *(undefined8 *)((long)param_1 + lVar15 + 0x38) =
                       *(undefined8 *)((long)param_1 + lVar15 + 0x20);
                  *(undefined8 *)((long)param_1 + lVar15 + 0x30) =
                       *(undefined8 *)((long)param_1 + lVar15 + 0x18);
                  *(undefined4 *)((long)param_1 + lVar15 + 0x40) =
                       *(undefined4 *)((long)param_1 + lVar15 + 0x28);
                  plVar13 = param_1;
                  lVar15 = lVar14;
                } while (lVar14 != -0x30);
              }
              iVar7 = iVar7 + 1;
              *plVar13 = lVar12;
              *(uint *)(plVar13 + 1) = uVar2;
              *(int *)((long)plVar13 + 0xc) = iVar1;
              *(int *)(plVar13 + 2) = iVar10;
              if (iVar7 == 8) {
                bVar5 = plVar9 + 3 == param_2;
                goto switchD_00efee04_caseD_0;
              }
            }
          }
          else if ((int)plVar11[2] < iVar10) goto LAB_00efef40;
        }
        else if (iVar1 < *(int *)((long)plVar11 + 0xc)) {
          iVar10 = (int)plVar9[2];
          goto LAB_00efef40;
        }
        lVar6 = lVar6 + 0x18;
        plVar13 = plVar9 + 3;
        plVar11 = plVar9;
      } while (plVar9 + 3 != param_2);
    }
LAB_00eff080:
    bVar5 = true;
  }
switchD_00efee04_caseD_0:
  if (*(long *)(lVar4 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar5);
  }
  return;
}

