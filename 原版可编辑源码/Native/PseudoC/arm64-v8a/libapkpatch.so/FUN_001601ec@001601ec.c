
void FUN_001601ec(long param_1,long *param_2,long *param_3,int param_4,uint param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char *__s1;
  undefined8 *puVar10;
  undefined4 uVar11;
  
  lVar6 = param_2[2];
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar6 + 8)) {
      if (*(long *)(param_1 + 8) != *(long *)(*param_2 + 8)) {
LAB_001602cc:
        uVar7 = *(ulong *)(param_1 + 0x20);
        uVar1 = *(uint *)(param_1 + 0x14);
        lVar6 = (long)uVar7 >> 8;
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)(*param_3 + lVar6);
        }
        iVar5 = 2;
        if ((uVar7 & 2) != 0) {
          iVar5 = param_4;
        }
        (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
                  (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
        if (uVar1 < 2) {
          return;
        }
        puVar10 = (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18);
        puVar9 = (undefined8 *)(param_1 + 0x28);
        if (((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) || (*(int *)((long)param_2 + 0x3c) == 1)) {
          do {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            uVar7 = puVar9[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            puVar8 = puVar9 + 2;
            iVar5 = 2;
            if ((uVar7 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar9 + 0x30))
                      ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
            puVar9 = puVar8;
          } while (puVar8 < puVar10);
          return;
        }
        if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
          while( true ) {
            if (*(char *)((long)param_2 + 0x4e) != '\0') {
              return;
            }
            if (*(int *)((long)param_2 + 0x3c) == 1) break;
            uVar7 = puVar9[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            puVar8 = puVar9 + 2;
            iVar5 = 2;
            if ((uVar7 & 2) != 0) {
              iVar5 = param_4;
            }
            (**(code **)(*(long *)*puVar9 + 0x30))
                      ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
            puVar9 = puVar8;
            if (puVar10 <= puVar8) {
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
          uVar7 = puVar9[1];
          lVar6 = (long)uVar7 >> 8;
          if ((uVar7 & 1) != 0) {
            lVar6 = *(long *)(*param_3 + lVar6);
          }
          puVar8 = puVar9 + 2;
          iVar5 = 2;
          if ((uVar7 & 2) != 0) {
            iVar5 = param_4;
          }
          (**(code **)(*(long *)*puVar9 + 0x30))
                    ((long *)*puVar9,param_2,(long)param_3 + lVar6,iVar5,param_5 & 1);
          puVar9 = puVar8;
          if (puVar10 <= puVar8) {
            return;
          }
        }
        return;
      }
LAB_00160260:
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
            uVar7 = puVar10[1];
            lVar6 = (long)uVar7 >> 8;
            if ((uVar7 & 1) != 0) {
              lVar6 = *(long *)(*param_3 + lVar6);
            }
            uVar11 = 1;
            if ((uVar7 & 2) == 0) {
              uVar11 = 2;
            }
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,param_2,param_3,(long)param_3 + lVar6,uVar11,param_5 & 1);
            if (*(char *)((long)param_2 + 0x4e) != '\0') break;
            bVar4 = bVar3;
            if (*(char *)((long)param_2 + 0x4d) != '\0') {
              if (*(char *)((long)param_2 + 0x4c) == '\0') {
                if ((*(byte *)(param_1 + 0x10) & 1) == 0) goto LAB_0016053c;
                bVar2 = true;
              }
              else {
                if ((int)param_2[6] == 1) {
                  bVar3 = true;
                  goto LAB_0016053c;
                }
                bVar2 = true;
                bVar3 = bVar2;
                bVar4 = true;
                if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) goto LAB_0016053c;
              }
            }
            bVar3 = bVar4;
            puVar10 = puVar10 + 2;
          } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
          if (bVar2) {
LAB_0016053c:
            uVar11 = 3;
          }
          else {
            uVar11 = 4;
          }
          *(undefined4 *)((long)param_2 + 0x44) = uVar11;
          if (bVar3) {
            return;
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
  else if (param_1 != lVar6) {
    __s1 = *(char **)(param_1 + 8);
    iVar5 = strcmp(__s1,*(char **)(lVar6 + 8));
    if (iVar5 != 0) {
      if ((param_1 != *param_2) && (iVar5 = strcmp(__s1,*(char **)(*param_2 + 8)), iVar5 != 0))
      goto LAB_001602cc;
      goto LAB_00160260;
    }
  }
  if (((long *)param_2[1] == param_3) && (*(int *)((long)param_2 + 0x34) != 1)) {
    *(int *)((long)param_2 + 0x34) = param_4;
  }
  return;
}

