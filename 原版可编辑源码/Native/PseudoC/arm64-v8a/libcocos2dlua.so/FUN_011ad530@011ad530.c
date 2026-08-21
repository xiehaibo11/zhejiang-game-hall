
void FUN_011ad530(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  long *plVar10;
  
  if (((int)param_1[6] != 0) || (param_1 + 4 != (long *)param_1[4])) {
    return;
  }
  plVar8 = (long *)param_1[1];
  plVar1 = (long *)(param_2 + 0x340);
  if ((long *)*param_1 == (long *)0x0) {
    plVar3 = (long *)param_1[2];
    iVar2 = (int)param_1[3];
    if (plVar8 != (long *)0x0) goto LAB_011ad5c4;
  }
  else {
    if (plVar8 != (long *)0x0) {
      do {
        plVar4 = plVar8;
        plVar8 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
      plVar8 = (long *)plVar4[1];
      plVar5 = (long *)plVar4[2];
      iVar2 = (int)plVar4[3];
      if (plVar8 != (long *)0x0) {
        plVar8[2] = (long)plVar5;
      }
      plVar3 = plVar1;
      if ((plVar5 != (long *)0x0) && (plVar3 = plVar5, (long *)*plVar5 != plVar4)) {
        plVar3 = plVar5 + 1;
      }
      *plVar3 = (long)plVar8;
      lVar7 = param_1[2];
      plVar10 = (long *)plVar4[2];
      plVar4[3] = param_1[3];
      plVar4[2] = lVar7;
      lVar7 = *param_1;
      plVar3 = plVar4;
      if (plVar10 != param_1) {
        plVar3 = plVar5;
      }
      plVar4[1] = param_1[1];
      *plVar4 = lVar7;
      plVar10 = (long *)param_1[2];
      plVar5 = plVar1;
      if ((plVar10 != (long *)0x0) && (plVar5 = plVar10, (long *)*plVar10 != param_1)) {
        plVar5 = plVar10 + 1;
      }
      *plVar5 = (long)plVar4;
      *(long **)(*param_1 + 0x10) = plVar4;
      plVar5 = plVar3;
      if (param_1[1] != 0) {
        *(long **)(param_1[1] + 0x10) = plVar4;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
      }
      goto joined_r0x011ad5e0;
    }
    plVar3 = (long *)param_1[2];
    iVar2 = (int)param_1[3];
    plVar8 = (long *)*param_1;
LAB_011ad5c4:
    plVar8[2] = (long)plVar3;
  }
  if (plVar3 == (long *)0x0) {
    *plVar1 = (long)plVar8;
  }
  else {
    plVar4 = plVar3;
    if ((long *)*plVar3 != param_1) {
      plVar4 = plVar3 + 1;
    }
    *plVar4 = (long)plVar8;
  }
joined_r0x011ad5e0:
  if (iVar2 == 0) {
    if (plVar8 != (long *)0x0) goto LAB_011ad68c;
    do {
      do {
        plVar4 = plVar3;
        if (plVar8 == (long *)*plVar1) {
LAB_011ad958:
          if (plVar8 == (long *)0x0) goto LAB_011ad964;
          plVar4 = plVar8 + 3;
          goto LAB_011ad960;
        }
        plVar3 = (long *)*plVar4;
        if (plVar3 == plVar8) {
          plVar3 = (long *)plVar4[1];
          if ((int)plVar3[3] == 1) {
            *(undefined4 *)(plVar3 + 3) = 0;
            *(undefined4 *)(plVar4 + 3) = 1;
            lVar7 = *plVar3;
            plVar4[1] = lVar7;
            if (lVar7 != 0) {
              *(long **)(lVar7 + 0x10) = plVar4;
            }
            lVar7 = plVar4[2];
            plVar3[2] = lVar7;
            plVar8 = plVar1;
            if (lVar7 != 0) {
              plVar8 = (long *)plVar4[2];
              if (plVar4 != (long *)*plVar8) {
                plVar8 = plVar8 + 1;
              }
            }
            *plVar8 = (long)plVar3;
            *plVar3 = (long)plVar4;
            plVar4[2] = (long)plVar3;
            plVar3 = (long *)plVar4[1];
          }
          lVar7 = *plVar3;
          if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
            if ((plVar3[1] == 0) || (piVar9 = (int *)(plVar3[1] + 0x18), *piVar9 == 0))
            goto LAB_011ad678;
LAB_011ad7e0:
            *(int *)(plVar3 + 3) = (int)plVar4[3];
            *(undefined4 *)(plVar4 + 3) = 0;
LAB_011ad90c:
            *piVar9 = 0;
          }
          else {
            if ((plVar3[1] != 0) && (piVar9 = (int *)(plVar3[1] + 0x18), *piVar9 != 0))
            goto LAB_011ad7e0;
            *(undefined4 *)(lVar7 + 0x18) = 0;
            *(undefined4 *)(plVar3 + 3) = 1;
            lVar6 = *(long *)(lVar7 + 8);
            *plVar3 = lVar6;
            if (lVar6 != 0) {
              *(long **)(lVar6 + 0x10) = plVar3;
            }
            lVar6 = plVar3[2];
            *(long *)(lVar7 + 0x10) = lVar6;
            plVar8 = plVar1;
            if (lVar6 != 0) {
              plVar8 = (long *)plVar3[2];
              if (plVar3 != (long *)*plVar8) {
                plVar8 = plVar8 + 1;
              }
            }
            *plVar8 = lVar7;
            *(long **)(lVar7 + 8) = plVar3;
            plVar3[2] = lVar7;
            plVar3 = (long *)plVar4[1];
            lVar7 = plVar3[1];
            *(int *)(plVar3 + 3) = (int)plVar4[3];
            *(undefined4 *)(plVar4 + 3) = 0;
            if (lVar7 != 0) {
              piVar9 = (int *)(lVar7 + 0x18);
              goto LAB_011ad90c;
            }
          }
          lVar7 = *plVar3;
          plVar4[1] = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar4;
          }
          lVar7 = plVar4[2];
          plVar3[2] = lVar7;
          plVar8 = plVar1;
          if (lVar7 != 0) {
            plVar8 = (long *)plVar4[2];
            if (plVar4 != (long *)*plVar8) {
              plVar8 = plVar8 + 1;
            }
          }
          *plVar8 = (long)plVar3;
          *plVar3 = (long)plVar4;
LAB_011ad950:
          plVar4[2] = (long)plVar3;
          plVar8 = (long *)*plVar1;
          goto LAB_011ad958;
        }
        if ((int)plVar3[3] == 1) {
          *(undefined4 *)(plVar3 + 3) = 0;
          *(undefined4 *)(plVar4 + 3) = 1;
          lVar7 = plVar3[1];
          *plVar4 = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar4;
          }
          lVar7 = plVar4[2];
          plVar3[2] = lVar7;
          plVar8 = plVar1;
          if (lVar7 != 0) {
            plVar8 = (long *)plVar4[2];
            if (plVar4 != (long *)*plVar8) {
              plVar8 = plVar8 + 1;
            }
          }
          *plVar8 = (long)plVar3;
          plVar3[1] = (long)plVar4;
          plVar4[2] = (long)plVar3;
          plVar3 = (long *)*plVar4;
        }
        lVar7 = *plVar3;
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 0)) {
LAB_011ad7c0:
          *(int *)(plVar3 + 3) = (int)plVar4[3];
          *(undefined4 *)(plVar4 + 3) = 0;
LAB_011ad898:
          *(undefined4 *)(lVar7 + 0x18) = 0;
LAB_011ad89c:
          lVar7 = plVar3[1];
          *plVar4 = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar4;
          }
          lVar7 = plVar4[2];
          plVar3[2] = lVar7;
          plVar8 = plVar1;
          if (lVar7 != 0) {
            plVar8 = (long *)plVar4[2];
            if (plVar4 != (long *)*plVar8) {
              plVar8 = plVar8 + 1;
            }
          }
          *plVar8 = (long)plVar3;
          plVar3[1] = (long)plVar4;
          goto LAB_011ad950;
        }
        plVar8 = (long *)plVar3[1];
        if ((plVar8 != (long *)0x0) && ((int)plVar8[3] != 0)) {
          if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 0)) goto LAB_011ad7c0;
          *(undefined4 *)(plVar8 + 3) = 0;
          *(undefined4 *)(plVar3 + 3) = 1;
          lVar7 = *plVar8;
          plVar3[1] = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar3;
          }
          lVar7 = plVar3[2];
          plVar8[2] = lVar7;
          plVar5 = plVar1;
          if (lVar7 != 0) {
            plVar5 = (long *)plVar3[2];
            if (plVar3 != (long *)*plVar5) {
              plVar5 = plVar5 + 1;
            }
          }
          *plVar5 = (long)plVar8;
          *plVar8 = (long)plVar3;
          plVar3[2] = (long)plVar8;
          plVar3 = (long *)*plVar4;
          lVar7 = *plVar3;
          *(int *)(plVar3 + 3) = (int)plVar4[3];
          *(undefined4 *)(plVar4 + 3) = 0;
          if (lVar7 != 0) goto LAB_011ad898;
          goto LAB_011ad89c;
        }
LAB_011ad678:
        *(undefined4 *)(plVar3 + 3) = 1;
        plVar3 = (long *)plVar4[2];
        plVar8 = plVar4;
      } while (plVar4 == (long *)0x0);
LAB_011ad68c:
      plVar4 = plVar8 + 3;
    } while ((int)*plVar4 == 0);
LAB_011ad960:
    *(undefined4 *)plVar4 = 0;
  }
LAB_011ad964:
  FUN_011ae2a0(*(undefined4 *)(param_2 + 0x348),(int)param_1[8]);
  FUN_0119f27c(param_1);
  return;
}

