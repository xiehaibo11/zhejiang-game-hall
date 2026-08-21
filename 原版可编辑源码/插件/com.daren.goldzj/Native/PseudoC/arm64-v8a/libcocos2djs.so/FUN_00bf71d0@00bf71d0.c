
void FUN_00bf71d0(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)param_1[1];
    plVar4 = (long *)param_1[2];
    iVar9 = (int)param_1[3];
    if (plVar6 != (long *)0x0) {
      plVar6[2] = (long)plVar4;
    }
  }
  else {
    plVar4 = (long *)param_1[1];
    if ((long *)param_1[1] != (long *)0x0) {
      do {
        plVar3 = plVar4;
        plVar4 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
      plVar6 = (long *)plVar3[1];
      plVar4 = (long *)plVar3[2];
      iVar9 = (int)plVar3[3];
      if (plVar6 == (long *)0x0) {
        plVar5 = (long *)0x0;
        plVar1 = plVar4;
        if (plVar4 != (long *)0x0) goto LAB_00bf7218;
LAB_00bf74a0:
        lVar7 = *param_1;
        lVar8 = param_1[1];
        *(long **)(param_2 + 0x340) = plVar6;
        *plVar3 = lVar7;
        plVar3[1] = lVar8;
        if (param_1 == plVar5) {
          plVar4 = plVar3;
        }
        lVar7 = param_1[3];
        plVar3[2] = param_1[2];
        plVar3[3] = lVar7;
        puVar2 = (undefined8 *)param_1[2];
        if (puVar2 != (undefined8 *)0x0) goto LAB_00bf7248;
LAB_00bf74c4:
        *(long **)(param_2 + 0x340) = plVar3;
      }
      else {
        plVar6[2] = (long)plVar4;
        plVar5 = (long *)plVar3[2];
        plVar1 = plVar5;
        if (plVar4 == (long *)0x0) goto LAB_00bf74a0;
LAB_00bf7218:
        if ((long *)*plVar4 == plVar3) {
          *plVar4 = (long)plVar6;
        }
        else {
          plVar4[1] = (long)plVar6;
        }
        lVar7 = param_1[1];
        *plVar3 = *param_1;
        plVar3[1] = lVar7;
        lVar7 = param_1[3];
        plVar3[2] = param_1[2];
        plVar3[3] = lVar7;
        if (param_1 == plVar1) {
          plVar4 = plVar3;
        }
        puVar2 = (undefined8 *)param_1[2];
        if (puVar2 == (undefined8 *)0x0) goto LAB_00bf74c4;
LAB_00bf7248:
        if (param_1 == (long *)*puVar2) {
          *puVar2 = plVar3;
        }
        else {
          puVar2[1] = plVar3;
        }
      }
      lVar7 = param_1[1];
      *(long **)(*param_1 + 0x10) = plVar3;
      plVar5 = plVar4;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 0x10) = plVar3;
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
      }
      goto LAB_00bf727c;
    }
    plVar4 = (long *)param_1[2];
    iVar9 = (int)param_1[3];
    plVar6[2] = (long)plVar4;
  }
  if (plVar4 == (long *)0x0) {
    *(long **)(param_2 + 0x340) = plVar6;
  }
  else if (param_1 == (long *)*plVar4) {
    *plVar4 = (long)plVar6;
  }
  else {
    plVar4[1] = (long)plVar6;
  }
LAB_00bf727c:
  if (iVar9 == 0) {
LAB_00bf72a0:
    plVar3 = plVar4;
    if ((plVar6 != (long *)0x0) && ((int)plVar6[3] != 0)) {
      *(undefined4 *)(plVar6 + 3) = 0;
      goto LAB_00bf73e0;
    }
    plVar4 = *(long **)(param_2 + 0x340);
    if (plVar6 == plVar4) goto LAB_00bf73d8;
    plVar4 = (long *)*plVar3;
    if (plVar4 != plVar6) {
      plVar6 = plVar4;
      if ((int)plVar4[3] == 1) {
        *(undefined4 *)(plVar4 + 3) = 0;
        plVar6 = (long *)plVar4[1];
        *plVar3 = (long)plVar6;
        *(undefined4 *)(plVar3 + 3) = 1;
        if (plVar6 != (long *)0x0) {
          plVar6[2] = (long)plVar3;
        }
        lVar7 = plVar3[2];
        plVar4[2] = lVar7;
        if (lVar7 == 0) {
          *(long **)(param_2 + 0x340) = plVar4;
        }
        else {
          puVar2 = (undefined8 *)plVar3[2];
          if (plVar3 == (long *)*puVar2) {
            *puVar2 = plVar4;
            plVar6 = (long *)*plVar3;
          }
          else {
            puVar2[1] = plVar4;
          }
        }
        plVar4[1] = (long)plVar3;
        plVar3[2] = (long)plVar4;
      }
      lVar7 = *plVar6;
      if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
        plVar4 = (long *)plVar6[1];
        if ((plVar4 == (long *)0x0) || ((int)plVar4[3] == 0)) {
          plVar4 = (long *)plVar3[2];
          *(undefined4 *)(plVar6 + 3) = 1;
          plVar6 = plVar3;
          goto LAB_00bf72a0;
        }
        if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
          *(undefined4 *)(plVar4 + 3) = 0;
          lVar7 = *plVar4;
          plVar6[1] = lVar7;
          *(undefined4 *)(plVar6 + 3) = 1;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar6;
          }
          lVar7 = plVar6[2];
          plVar4[2] = lVar7;
          if (lVar7 == 0) {
            *(long **)(param_2 + 0x340) = plVar4;
          }
          else {
            puVar2 = (undefined8 *)plVar6[2];
            if ((long *)*puVar2 == plVar6) {
              *puVar2 = plVar4;
            }
            else {
              puVar2[1] = plVar4;
            }
          }
          *plVar4 = (long)plVar6;
          plVar6[2] = (long)plVar4;
          plVar5 = (long *)*plVar3;
          lVar7 = *plVar5;
          plVar6 = plVar5;
        }
        else {
          plVar5 = (long *)*plVar3;
        }
        *(int *)(plVar6 + 3) = (int)plVar3[3];
        *(undefined4 *)(plVar3 + 3) = 0;
        if (lVar7 != 0) goto LAB_00bf74f8;
      }
      else {
        plVar5 = (long *)*plVar3;
        *(int *)(plVar6 + 3) = (int)plVar3[3];
        *(undefined4 *)(plVar3 + 3) = 0;
LAB_00bf74f8:
        *(undefined4 *)(lVar7 + 0x18) = 0;
      }
      lVar7 = plVar5[1];
      *plVar3 = lVar7;
      if (lVar7 != 0) {
        *(long **)(lVar7 + 0x10) = plVar3;
      }
      lVar7 = plVar3[2];
      plVar5[2] = lVar7;
      if (lVar7 == 0) {
        *(long **)(param_2 + 0x340) = plVar5;
        plVar4 = plVar5;
      }
      else {
        puVar2 = (undefined8 *)plVar3[2];
        if ((long *)*puVar2 == plVar3) {
          *puVar2 = plVar5;
          plVar4 = *(long **)(param_2 + 0x340);
        }
        else {
          puVar2[1] = plVar5;
          plVar4 = *(long **)(param_2 + 0x340);
        }
      }
      plVar5[1] = (long)plVar3;
      plVar3[2] = (long)plVar5;
      if (plVar4 == (long *)0x0) goto LAB_00bf7284;
      goto LAB_00bf73dc;
    }
    plVar4 = (long *)plVar3[1];
    plVar6 = plVar4;
    if ((int)plVar4[3] == 1) {
      *(undefined4 *)(plVar4 + 3) = 0;
      plVar6 = (long *)*plVar4;
      plVar3[1] = (long)plVar6;
      *(undefined4 *)(plVar3 + 3) = 1;
      if (plVar6 != (long *)0x0) {
        plVar6[2] = (long)plVar3;
      }
      lVar7 = plVar3[2];
      plVar4[2] = lVar7;
      if (lVar7 == 0) {
        *(long **)(param_2 + 0x340) = plVar4;
      }
      else {
        puVar2 = (undefined8 *)plVar3[2];
        if (plVar3 == (long *)*puVar2) {
          *puVar2 = plVar4;
        }
        else {
          puVar2[1] = plVar4;
          plVar6 = (long *)plVar3[1];
        }
      }
      *plVar4 = (long)plVar3;
      plVar3[2] = (long)plVar4;
    }
    lVar7 = *plVar6;
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 0)) {
      lVar8 = plVar6[1];
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) goto LAB_00bf7388;
      *(undefined4 *)(plVar6 + 3) = 1;
      plVar4 = (long *)plVar3[2];
      plVar6 = plVar3;
      goto LAB_00bf72a0;
    }
    lVar8 = plVar6[1];
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) == 0)) {
      *(undefined4 *)(lVar7 + 0x18) = 0;
      lVar8 = *(long *)(lVar7 + 8);
      *plVar6 = lVar8;
      *(undefined4 *)(plVar6 + 3) = 1;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 0x10) = plVar6;
      }
      lVar8 = plVar6[2];
      *(long *)(lVar7 + 0x10) = lVar8;
      if (lVar8 == 0) {
        *(long *)(param_2 + 0x340) = lVar7;
      }
      else {
        plVar4 = (long *)plVar6[2];
        if (plVar6 == (long *)*plVar4) {
          *plVar4 = lVar7;
        }
        else {
          plVar4[1] = lVar7;
        }
      }
      *(long **)(lVar7 + 8) = plVar6;
      plVar6[2] = lVar7;
      plVar5 = (long *)plVar3[1];
      lVar8 = plVar5[1];
      *(int *)(plVar5 + 3) = (int)plVar3[3];
      *(undefined4 *)(plVar3 + 3) = 0;
      if (lVar8 == 0) goto LAB_00bf739c;
      goto LAB_00bf7398;
    }
LAB_00bf7388:
    plVar5 = (long *)plVar3[1];
    *(int *)(plVar6 + 3) = (int)plVar3[3];
    *(undefined4 *)(plVar3 + 3) = 0;
LAB_00bf7398:
    *(undefined4 *)(lVar8 + 0x18) = 0;
LAB_00bf739c:
    lVar7 = *plVar5;
    plVar3[1] = lVar7;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 0x10) = plVar3;
    }
    lVar7 = plVar3[2];
    plVar5[2] = lVar7;
    if (lVar7 == 0) {
      *(long **)(param_2 + 0x340) = plVar5;
      plVar4 = plVar5;
    }
    else {
      puVar2 = (undefined8 *)plVar3[2];
      if ((long *)*puVar2 == plVar3) {
        *puVar2 = plVar5;
        plVar4 = *(long **)(param_2 + 0x340);
      }
      else {
        plVar4 = *(long **)(param_2 + 0x340);
        puVar2[1] = plVar5;
      }
    }
    *plVar5 = (long)plVar3;
    plVar3[2] = (long)plVar5;
LAB_00bf73d8:
    if (plVar4 != (long *)0x0) {
LAB_00bf73dc:
      *(undefined4 *)(plVar4 + 3) = 0;
LAB_00bf73e0:
      uv__inotify_rm_watch(*(undefined4 *)(param_2 + 0x348),(int)param_1[8]);
      uv__free(param_1);
      return;
    }
  }
LAB_00bf7284:
  uv__inotify_rm_watch(*(undefined4 *)(param_2 + 0x348),(int)param_1[8]);
  uv__free(param_1);
  return;
}

