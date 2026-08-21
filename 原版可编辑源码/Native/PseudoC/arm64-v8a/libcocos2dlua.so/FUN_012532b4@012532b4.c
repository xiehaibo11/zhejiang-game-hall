
void FUN_012532b4(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *__s1;
  undefined8 *puVar11;
  undefined4 uVar12;
  
  lVar7 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar7 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_01253390:
        uVar8 = *(ulong *)(param_1 + 0x20);
        uVar1 = *(uint *)(param_1 + 0x14);
        lVar7 = (long)uVar8 >> 8;
        if ((uVar8 & 1) != 0) {
          lVar7 = *(long *)(*param_3 + lVar7);
        }
        iVar6 = 2;
        if ((uVar8 & 2) != 0) {
          iVar6 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                  (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar7,iVar6,param_5 & 1);
        if (uVar1 < 2) {
          return;
        }
        puVar11 = (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18);
        puVar10 = (undefined8 *)(param_1 + 0x28);
        if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int *)((long)param_2 + 0x3c) == 1)) {
          cVar2 = *(char *)((long)param_2 + 0x4e);
          while( true ) {
            if (cVar2 != '\0') {
              return;
            }
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            iVar6 = 2;
            if ((uVar8 & 2) != 0) {
              iVar6 = param_4;
            }
            (**(code **)(*(long *)*puVar10 + 0x30))
                      ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar6,param_5 & 1);
            if (puVar11 <= puVar10 + 2) break;
            cVar2 = *(char *)((long)param_2 + 0x4e);
            puVar10 = puVar10 + 2;
          }
          return;
        }
        if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            if (*(int *)((long)param_2 + 0x3c) == 1) break;
            uVar8 = puVar10[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            puVar9 = puVar10 + 2;
            iVar6 = 2;
            if ((uVar8 & 2) != 0) {
              iVar6 = param_4;
            }
            (**(code **)(*(long *)*puVar10 + 0x30))
                      ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar6,param_5 & 1);
            puVar10 = puVar9;
            if (puVar11 <= puVar9) {
              return;
            }
          }
          return;
        }
        while( true ) {
          if (*(char *)((long)param_2 + 0x4e) != '\0') {
            return;
          }
          if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 1)) break;
          uVar8 = puVar10[1];
          lVar7 = (long)uVar8 >> 8;
          if ((uVar8 & 1) != 0) {
            lVar7 = *(long *)(*param_3 + lVar7);
          }
          puVar9 = puVar10 + 2;
          iVar6 = 2;
          if ((uVar8 & 2) != 0) {
            iVar6 = param_4;
          }
          (**(code **)(*(long *)*puVar10 + 0x30))
                    ((long *)*puVar10,param_2,(long)param_3 + lVar7,iVar6,param_5 & 1);
          puVar10 = puVar9;
          if (puVar11 <= puVar9) {
            return;
          }
        }
        return;
      }
LAB_01253324:
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
          bVar4 = false;
          bVar3 = false;
          puVar11 = (undefined8 *)(param_1 + 0x18);
          do {
            *(undefined2 *)((long)param_2 + 0x4c) = 0;
            uVar8 = puVar11[1];
            lVar7 = (long)uVar8 >> 8;
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(*param_3 + lVar7);
            }
            uVar12 = 1;
            if ((uVar8 & 2) == 0) {
              uVar12 = 2;
            }
            (**(code **)(*(long *)*puVar11 + 0x28))
                      ((long *)*puVar11,param_2,param_3,(long)param_3 + lVar7,uVar12,param_5 & 1);
            if (*(char *)((long)param_2 + 0x4e) != '\0') break;
            bVar5 = bVar4;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_01253610;
                bVar3 = true;
              }
              else {
                if ((int)param_2[6] == 1) {
                  bVar4 = true;
                  goto LAB_01253610;
                }
                bVar3 = true;
                bVar4 = bVar3;
                bVar5 = true;
                if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) goto LAB_01253610;
              }
            }
            bVar4 = bVar5;
            puVar11 = puVar11 + 2;
          } while (puVar11 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
          if (bVar3) {
LAB_01253610:
            *(undefined4 *)((long)param_2 + 0x44) = 3;
            if (bVar4) {
              return;
            }
          }
          else {
            *(undefined4 *)((long)param_2 + 0x44) = 4;
            if (bVar4) {
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
  else if (param_1 != lVar7) {
    __s1 = *(char **)(param_1 + 8);
    iVar6 = strcmp(__s1,*(char **)(lVar7 + 8));
    if (iVar6 != 0) {
      if ((param_1 != *param_2) && (iVar6 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar6 != 0))
      goto LAB_01253390;
      goto LAB_01253324;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}

