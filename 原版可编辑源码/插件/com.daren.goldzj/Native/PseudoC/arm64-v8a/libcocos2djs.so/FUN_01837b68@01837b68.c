
void FUN_01837b68(long param_1,long param_2,long param_3,long *param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  if ((param_6 & 1) == 0) {
    if (param_1 == *(long *)(param_2 + 0x10)) goto LAB_01837ce4;
  }
  else {
    iVar2 = strcmp(*(char **)(param_1 + 8),*(char **)(*(long *)(param_2 + 0x10) + 8));
    if (iVar2 == 0) {
LAB_01837ce4:
      *(undefined1 *)(param_2 + 0x4d) = 1;
      if (*(long **)(param_2 + 8) != param_4) {
        return;
      }
      *(undefined1 *)(param_2 + 0x4c) = 1;
      if (*(long *)(param_2 + 0x20) == 0) {
        *(long *)(param_2 + 0x20) = param_3;
        *(int *)(param_2 + 0x30) = param_5;
        *(undefined4 *)(param_2 + 0x3c) = 1;
        iVar2 = param_5;
      }
      else {
        if (*(long *)(param_2 + 0x20) != param_3) {
          *(undefined1 *)(param_2 + 0x4e) = 1;
          *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
          return;
        }
        iVar2 = *(int *)(param_2 + 0x30);
        if (*(int *)(param_2 + 0x30) == 2) {
          *(int *)(param_2 + 0x30) = param_5;
          iVar2 = param_5;
        }
      }
      if (iVar2 != 1) {
        return;
      }
      if (*(int *)(param_2 + 0x48) != 1) {
        return;
      }
      *(undefined1 *)(param_2 + 0x4e) = 1;
      return;
    }
  }
  bVar8 = *(byte *)(param_2 + 0x4c);
  bVar7 = *(byte *)(param_2 + 0x4d);
  uVar1 = *(uint *)(param_1 + 0x14);
  *(undefined2 *)(param_2 + 0x4c) = 0;
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar6 = (long)uVar4 >> 8;
  if ((uVar4 & 1) != 0) {
    lVar6 = *(long *)(*param_4 + lVar6);
  }
  iVar2 = 2;
  if ((uVar4 & 2) != 0) {
    iVar2 = param_5;
  }
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))
            (*(long **)(param_1 + 0x18),param_2,param_3,(long)param_4 + lVar6,iVar2,param_6 & 1);
  bVar3 = *(byte *)(param_2 + 0x4c);
  bVar5 = *(byte *)(param_2 + 0x4d);
  bVar8 = bVar3 | bVar8;
  bVar7 = bVar5 | bVar7;
  if (1 < uVar1) {
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      if (*(char *)(param_2 + 0x4e) != '\0') break;
      if (bVar3 == 0) {
        if (bVar5 != 0) {
          bVar3 = *(byte *)(param_1 + 0x10);
          goto joined_r0x01837c64;
        }
      }
      else {
        if (*(int *)(param_2 + 0x30) == 1) break;
        bVar3 = *(byte *)(param_1 + 0x10) >> 1;
joined_r0x01837c64:
        if ((bVar3 & 1) == 0) break;
      }
      *(undefined2 *)(param_2 + 0x4c) = 0;
      uVar4 = puVar9[1];
      lVar6 = (long)uVar4 >> 8;
      if ((uVar4 & 1) != 0) {
        lVar6 = *(long *)(*param_4 + lVar6);
      }
      puVar10 = puVar9 + 2;
      iVar2 = 2;
      if ((uVar4 & 2) != 0) {
        iVar2 = param_5;
      }
      (**(code **)(*(long *)*puVar9 + 0x28))
                ((long *)*puVar9,param_2,param_3,(long)param_4 + lVar6,iVar2,param_6 & 1);
      bVar3 = *(byte *)(param_2 + 0x4c);
      bVar5 = *(byte *)(param_2 + 0x4d);
      bVar8 = bVar3 | bVar8;
      bVar7 = bVar5 | bVar7;
      puVar9 = puVar10;
    } while (puVar10 < (undefined8 *)(param_1 + (ulong)uVar1 * 0x10 + 0x18));
  }
  *(bool *)(param_2 + 0x4c) = bVar8 != 0;
  *(bool *)(param_2 + 0x4d) = bVar7 != 0;
  return;
}

