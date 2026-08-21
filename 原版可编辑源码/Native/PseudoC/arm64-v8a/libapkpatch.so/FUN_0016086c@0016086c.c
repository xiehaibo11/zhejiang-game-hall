
void FUN_0016086c(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar6 + 8)) goto LAB_00160910;
  }
  else if ((param_1 != lVar6) &&
          (iVar4 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar6 + 8)), iVar4 != 0)) {
LAB_00160910:
    bVar9 = *(byte *)(param_2 + 0x4c);
    bVar8 = *(byte *)(param_2 + 0x4d);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_2 + 0x4c) = 0;
    uVar7 = *(ulong *)(param_1 + 0x20);
    lVar6 = (long)uVar7 >> 8;
    if ((uVar7 & 1) != 0) {
      lVar6 = *(long *)(*param_4 + lVar6);
    }
    iVar4 = 2;
    if ((uVar7 & 2) != 0) {
      iVar4 = param_5;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar6,iVar4,param_6 & 1);
    bVar2 = *(byte *)(param_2 + 0x4c);
    bVar3 = *(byte *)(param_2 + 0x4d);
    bVar9 = bVar2 | bVar9;
    bVar8 = bVar3 | bVar8;
    if (1 < uVar1) {
      puVar11 = (undefined8 *)(param_1 + 0x28);
      do {
        if (*(char *)(param_2 + 0x4e) != '\0') break;
        if (bVar2 == 0) {
          if (bVar3 != 0) {
            bVar2 = *(byte *)(param_1 + 0x10);
            goto joined_r0x00160a08;
          }
        }
        else {
          if (*(int *)(param_2 + 0x30) == 1) break;
          bVar2 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x00160a08:
          if ((bVar2 & 1) == 0) break;
        }
        *(undefined2 *)(param_2 + 0x4c) = 0;
        uVar7 = puVar11[1];
        lVar6 = (long)uVar7 >> 8;
        if ((uVar7 & 1) != 0) {
          lVar6 = *(long *)(*param_4 + lVar6);
        }
        puVar10 = puVar11 + 2;
        iVar4 = 2;
        if ((uVar7 & 2) != 0) {
          iVar4 = param_5;
        }
        (**(code **)(*(long *)*puVar11 + 0x28))
                  ((long *)*puVar11,param_2,param_3,(long)param_4 + lVar6,iVar4,param_6 & 1);
        bVar2 = *(byte *)(param_2 + 0x4c);
        bVar3 = *(byte *)(param_2 + 0x4d);
        bVar9 = bVar2 | bVar9;
        bVar8 = bVar3 | bVar8;
        puVar11 = puVar10;
      } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
    }
    *(bool *)(param_2 + 0x4c) = bVar9 != 0;
    *(bool *)(param_2 + 0x4d) = bVar8 != 0;
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long **)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    iVar4 = *(int *)(param_2 + 0x48);
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    iVar5 = param_5;
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_00160a94;
    }
    iVar5 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar5 = param_5;
    }
    iVar4 = *(int *)(param_2 + 0x48);
  }
  if (iVar4 != 1) {
    return;
  }
  if (iVar5 != 1) {
    return;
  }
LAB_00160a94:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}

