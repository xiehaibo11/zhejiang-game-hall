
void FUN_00ac411c(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,uint param_6,
                 int param_7,int param_8,long *param_9,long *param_10)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long **pplVar9;
  long *local_18;
  
  local_18 = (long *)*param_9;
  plVar4 = (long *)*param_10;
  plVar5 = plVar4;
  plVar6 = local_18;
  if ((param_7 != 3) && (param_7 != 6)) {
    plVar5 = local_18;
    plVar6 = plVar4;
  }
  if ((plVar5 != (long *)0x0) && (plVar6 != (long *)0x0)) {
    do {
      plVar3 = plVar5 + 3;
      lVar8 = *plVar5;
      plVar1 = plVar5 + 2;
      plVar7 = plVar3;
      if (param_7 != 3 && param_7 != 6) {
        plVar7 = plVar1;
      }
      plVar7 = (long *)*plVar7;
      if (param_8 < 0) {
        if ((((((param_1 == 0) || ((*(uint *)(lVar8 + 0x14) & param_1) != 0)) &&
              ((param_2 == 0 || ((*(uint *)(lVar8 + 0x18) & param_2) != 0)))) &&
             ((param_3 == 0 || ((*(uint *)(lVar8 + 0x1c) & param_3) != 0)))) &&
            ((param_4 == 0 || ((*(uint *)(lVar8 + 0x20) & param_4) != 0)))) &&
           ((((param_5 == 0 || (*(int *)(lVar8 + 0x24) == param_5)) &&
             (((param_6 & 0x1f) == 0 || ((*(uint *)(lVar8 + 0x34) & param_6 & 0x1f) != 0)))) &&
            (((param_6 & 0x20) == 0 || ((*(uint *)(lVar8 + 0x34) & param_6 & 0x20) != 0))))))
        goto LAB_00ac41a8;
      }
      else if (*(int *)(lVar8 + 0x3c) == param_8) {
LAB_00ac41a8:
        if (param_7 == 4) {
          if (((int)plVar5[1] != 0) && (plVar5 != plVar4)) {
            if (local_18 == plVar5) {
              local_18 = (long *)*plVar1;
            }
            lVar8 = *plVar3;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x10) = *plVar1;
            }
            if (*plVar1 != 0) {
              *(long *)(*plVar1 + 0x18) = lVar8;
            }
            plVar4[2] = (long)plVar5;
            plVar5[2] = 0;
            plVar5[3] = (long)plVar4;
            plVar4 = plVar5;
          }
        }
        else if (param_7 == 1) {
          if ((int)plVar5[1] == 0) {
            if (plVar5 != plVar4) {
              if (local_18 == plVar5) {
                local_18 = (long *)*plVar1;
              }
              lVar8 = *plVar3;
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x10) = *plVar1;
              }
              if (*plVar1 != 0) {
                *(long *)(*plVar1 + 0x18) = lVar8;
              }
              plVar4[2] = (long)plVar5;
              plVar5[2] = 0;
              plVar5[3] = (long)plVar4;
              plVar4 = plVar5;
            }
            *(undefined4 *)(plVar5 + 1) = 1;
          }
        }
        else if (param_7 == 3) {
          if ((int)plVar5[1] != 0) {
            if (local_18 != plVar5) {
              if (plVar5 == plVar4) {
                plVar4 = (long *)*plVar3;
              }
              lVar8 = *plVar1;
              if (lVar8 != 0) {
                *(long *)(lVar8 + 0x18) = *plVar3;
              }
              if (*plVar3 != 0) {
                *(long *)(*plVar3 + 0x10) = lVar8;
              }
              local_18[3] = (long)plVar5;
              plVar5[2] = (long)local_18;
              plVar5[3] = 0;
              local_18 = plVar5;
            }
            *(undefined4 *)(plVar5 + 1) = 0;
          }
        }
        else if (param_7 == 6) {
          if (((int)plVar5[1] != 0) && (local_18 != plVar5)) {
            if (plVar5 == plVar4) {
              plVar4 = (long *)*plVar3;
            }
            lVar8 = *plVar1;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x18) = *plVar3;
            }
            if (*plVar3 != 0) {
              *(long *)(*plVar3 + 0x10) = lVar8;
            }
            local_18[3] = (long)plVar5;
            plVar5[2] = (long)local_18;
            plVar5[3] = 0;
            local_18 = plVar5;
          }
        }
        else if (param_7 == 2) {
                    /* try { // try from 00ac43a0 to 00bc43ab has its CatchHandler @ 00ac4470 */
          if (local_18 == plVar5) {
            pplVar9 = &local_18;
          }
          else {
            pplVar9 = (long **)(*plVar3 + 0x10);
                    /* try { // try from 00ac43ac to 00bc4483 has its CatchHandler @ 00ac4330 */
          }
          *pplVar9 = (long *)plVar5[2];
          if (plVar5 == plVar4) {
            plVar4 = (long *)*plVar3;
          }
          lVar8 = plVar5[2];
          *(undefined4 *)(plVar5 + 1) = 0;
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x18) = *plVar3;
          }
          if (*plVar3 != 0) {
            *(long *)(*plVar3 + 0x10) = lVar8;
          }
          *plVar1 = 0;
          plVar5[3] = 0;
        }
      }
    } while ((plVar7 != (long *)0x0) && (bVar2 = plVar5 != plVar6, plVar5 = plVar7, bVar2));
  }
  *param_9 = (long)local_18;
  *param_10 = (long)plVar4;
  return;
}

