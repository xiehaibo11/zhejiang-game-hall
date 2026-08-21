
void FUN_0012a54c(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  undefined8 *puVar9;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar5 + 8)) goto LAB_0012a5f0;
  }
  else if ((param_1 != lVar5) &&
          (iVar4 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar5 + 8)), iVar4 != 0)) {
LAB_0012a5f0:
    bVar8 = *(byte *)(param_2 + 0x4c);
    bVar7 = *(byte *)(param_2 + 0x4d);
    uVar1 = *(uint *)(param_1 + 0x14);
    *(undefined2 *)(param_2 + 0x4c) = 0;
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar5 = (long)uVar6 >> 8;
    if ((uVar6 & 1) != 0) {
      lVar5 = *(long *)(*param_4 + lVar5);
    }
    iVar4 = 2;
    if ((uVar6 & 2) != 0) {
      iVar4 = param_5;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
              (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
    bVar2 = *(byte *)(param_2 + 0x4c);
    bVar3 = *(byte *)(param_2 + 0x4d);
    bVar8 = bVar2 | bVar8;
    bVar7 = bVar3 | bVar7;
    if (1 < uVar1) {
      puVar9 = (undefined8 *)(param_1 + 0x28);
      if (*(char *)(param_2 + 0x4e) == '\0') {
        do {
          if (bVar2 == 0) {
            if (bVar3 != 0) {
              bVar2 = *(byte *)(param_1 + 0x10);
              goto joined_r0x0012a6e8;
            }
          }
          else {
            if (*(int *)(param_2 + 0x30) == 1) break;
            bVar2 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x0012a6e8:
            if ((bVar2 & 1) == 0) break;
          }
          *(undefined2 *)(param_2 + 0x4c) = 0;
          uVar6 = puVar9[1];
          lVar5 = (long)uVar6 >> 8;
          if ((uVar6 & 1) != 0) {
            lVar5 = *(long *)(*param_4 + lVar5);
          }
          iVar4 = 2;
          if ((uVar6 & 2) != 0) {
            iVar4 = param_5;
          }
          (**(code **)(*(long *)*puVar9 + 0x28))
                    ((long *)*puVar9,param_2,param_3,(long)param_4 + lVar5,iVar4,param_6 & 1);
          bVar2 = *(byte *)(param_2 + 0x4c);
          bVar3 = *(byte *)(param_2 + 0x4d);
          bVar8 = bVar2 | bVar8;
          bVar7 = bVar3 | bVar7;
          if (((undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18) <= puVar9 + 2) ||
             (puVar9 = puVar9 + 2, *(char *)(param_2 + 0x4e) != '\0')) break;
        } while( true );
      }
    }
    *(bool *)(param_2 + 0x4c) = bVar8 != 0;
    *(bool *)(param_2 + 0x4d) = bVar7 != 0;
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long **)(param_2 + 8) == param_4) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x30) = param_5;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      iVar4 = param_5;
    }
    else {
      if (*(long *)(param_2 + 0x20) != param_3) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        return;
      }
      iVar4 = *(int *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x30) == 2) {
        *(int *)(param_2 + 0x30) = param_5;
        iVar4 = param_5;
      }
    }
    if ((iVar4 == 1) && (*(int *)(param_2 + 0x48) == 1)) {
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
  }
  return;
}

