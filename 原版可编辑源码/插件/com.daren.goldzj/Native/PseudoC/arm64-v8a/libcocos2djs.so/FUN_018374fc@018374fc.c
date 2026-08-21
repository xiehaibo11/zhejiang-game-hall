
void FUN_018374fc(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *__s1;
  undefined8 *puVar10;
  undefined4 uVar11;
  
  if ((param_5 & 1) == 0) {
    if (param_1 == param_2[2]) goto LAB_0183770c;
    if (param_1 == *param_2) goto LAB_01837628;
  }
  else {
    __s1 = *(char **)(param_1 + 8);
    iVar5 = strcmp(__s1,*(char **)(param_2[2] + 8));
    if (iVar5 == 0) {
LAB_0183770c:
      if ((long *)param_2[1] != param_3) {
        return;
      }
      if (*(int *)((long)param_2 + 0x34) == 1) {
        return;
      }
      *(int *)((long)param_2 + 0x34) = param_4;
      return;
    }
    iVar5 = strcmp(__s1,*(char **)(*param_2 + 8));
    if (iVar5 == 0) {
LAB_01837628:
      if (((long *)param_2[4] == param_3) || ((long *)param_2[5] == param_3)) {
        if (param_4 != 1) {
          return;
        }
        *(undefined4 *)(param_2 + 7) = 1;
        return;
      }
      *(int *)(param_2 + 7) = param_4;
      if (*(int *)((long)param_2 + 0x44) != 4) {
        uVar1 = *(uint *)(param_1 + 0x14);
        if (uVar1 == 0) {
          *(undefined4 *)((long)param_2 + 0x44) = 4;
        }
        else {
          bVar3 = false;
          bVar2 = false;
          puVar10 = (undefined8 *)(param_1 + 0x18);
          do {
            *(undefined2 *)((long)param_2 + 0x4c) = 0;
            uVar6 = puVar10[1];
            lVar7 = (long)uVar6 >> 8;
            if ((uVar6 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            uVar11 = 1;
            if ((uVar6 & 2) == 0) {
              uVar11 = 2;
            }
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,param_2,param_3,(long)param_3 + lVar7,uVar11,param_5 & 1);
            if (*(char *)((long)param_2 + 0x4e) != '\0') break;
            bVar4 = bVar3;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_01837824;
                bVar2 = true;
              }
              else {
                if ((int)param_2[6] == 1) {
                  bVar3 = true;
                  goto LAB_01837824;
                }
                bVar2 = true;
                bVar3 = bVar2;
                bVar4 = true;
                if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) goto LAB_01837824;
              }
            }
            bVar3 = bVar4;
            puVar10 = puVar10 + 2;
          } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
          if (bVar2) {
LAB_01837824:
            *(undefined4 *)((long)param_2 + 0x44) = 3;
            if (bVar3) {
              return;
            }
          }
          else {
            *(undefined4 *)((long)param_2 + 0x44) = 4;
            if (bVar3) {
              return;
            }
          }
        }
      }
      param_2[5] = (long)param_3;
      *(int *)(param_2 + 8) = (int)param_2[8] + 1;
      if (*(int *)((long)param_2 + 0x3c) != 1) {
        return;
      }
      if ((int)param_2[6] != 2) {
        return;
      }
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
      return;
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x14);
  lVar7 = (long)uVar6 >> 8;
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(*param_3 + lVar7);
  }
  iVar5 = 2;
  if ((uVar6 & 2) != 0) {
    iVar5 = param_4;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
            (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
  if (1 < uVar1) {
    puVar10 = (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18);
    puVar9 = (undefined8 *)(param_1 + 0x28);
    if (((*(uint *)(param_1 + 0x10) >> 1 & 1) == 0) && (*(int *)((long)param_2 + 0x3c) != 1)) {
      if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
        do {
          if (*(char *)((long)param_2 + 0x4e) != '\0') {
            return;
          }
          if (*(int *)((long)param_2 + 0x3c) == 1) {
            return;
          }
          uVar6 = puVar9[1];
          lVar7 = (long)uVar6 >> 8;
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)(*param_3 + lVar7);
          }
          puVar8 = puVar9 + 2;
          iVar5 = 2;
          if ((uVar6 & 2) != 0) {
            iVar5 = param_4;
          }
          (**(code **)(*(long *)*puVar9 + 0x30))
                    ((long *)*puVar9,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
          puVar9 = puVar8;
        } while (puVar8 < puVar10);
      }
      else {
        do {
          if (*(char *)((long)param_2 + 0x4e) != '\0') {
            return;
          }
          if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 1)) {
            return;
          }
          uVar6 = puVar9[1];
          lVar7 = (long)uVar6 >> 8;
          if ((uVar6 & 1) != 0) {
            lVar7 = *(long *)(*param_3 + lVar7);
          }
          puVar8 = puVar9 + 2;
          iVar5 = 2;
          if ((uVar6 & 2) != 0) {
            iVar5 = param_4;
          }
          (**(code **)(*(long *)*puVar9 + 0x30))
                    ((long *)*puVar9,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
          puVar9 = puVar8;
        } while (puVar8 < puVar10);
      }
    }
    else {
      do {
        if (*(char *)((long)param_2 + 0x4e) != '\0') {
          return;
        }
        uVar6 = puVar9[1];
        lVar7 = (long)uVar6 >> 8;
        if ((uVar6 & 1) != 0) {
          lVar7 = *(long *)(*param_3 + lVar7);
        }
        puVar8 = puVar9 + 2;
        iVar5 = 2;
        if ((uVar6 & 2) != 0) {
          iVar5 = param_4;
        }
        (**(code **)(*(long *)*puVar9 + 0x30))
                  ((long *)*puVar9,param_2,(long)param_3 + lVar7,iVar5,param_5 & 1);
        puVar9 = puVar8;
      } while (puVar8 < puVar10);
    }
  }
  return;
}

