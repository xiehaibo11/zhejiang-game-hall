
void FUN_010869a0(long param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if (*(int *)param_2 == 0) {
    uVar7 = 0;
    uVar4 = *(uint *)(param_1 + 0x20);
    param_2 = param_3;
  }
  else {
    uVar7 = (uint)(*(int *)param_3 != 0);
    uVar4 = *(uint *)(param_1 + 0x20);
  }
  if (uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    piVar6 = (int *)(param_1 + 0x38);
    do {
      if (*(int *)(param_2 + 0x10) <= *piVar6) break;
      uVar8 = uVar8 + 1;
      piVar6 = piVar6 + 8;
    } while (uVar8 < uVar4);
    if (uVar8 < uVar4) {
      iVar1 = *(int *)(param_1 + (ulong)uVar8 * 0x20 + 0x38);
      if (iVar1 == *(int *)(param_2 + 0x10)) {
        return;
      }
      if ((uVar7 != 0) && (iVar1 <= *(int *)(param_3 + 0x10))) {
        return;
      }
      if ((*(byte *)(param_1 + (ulong)uVar8 * 0x20 + 0x28) >> 3 & 1) != 0) {
        return;
      }
    }
  }
  lVar3 = *(long *)(param_1 + 8);
  if ((*(char *)(lVar3 + 0x18) != '\0') && ((*param_2 >> 4 & 1) == 0)) {
    if (uVar7 == 0) {
      iVar1 = FUN_010868b0(lVar3,*(int *)(param_2 + 0x10));
      *(int *)(param_2 + 0x14) = iVar1;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x10) + *(int *)(param_3 + 0x10);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = FUN_010868b0(lVar3,iVar1 >> 1);
      uVar4 = *(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10);
      if ((int)uVar4 < 0) {
        uVar4 = uVar4 + 1;
      }
      iVar2 = FT_MulFix((long)((ulong)uVar4 << 0x20) >> 0x21,(long)*(int *)(param_1 + 0x1c));
      *(int *)(param_2 + 0x14) = iVar1 - iVar2;
      *(int *)(param_3 + 0x14) = iVar1 + iVar2;
    }
  }
  if ((uVar8 == 0) ||
     (*(int *)(param_1 + (ulong)(uVar8 - 1) * 0x20 + 0x3c) <= *(int *)(param_2 + 0x14))) {
    uVar4 = *(uint *)(param_1 + 0x20);
    if (uVar8 < uVar4) {
      if (uVar7 == 0) {
        iVar1 = *(int *)(param_2 + 0x14);
      }
      else {
        iVar1 = *(int *)(param_3 + 0x14);
      }
      if (*(int *)(param_1 + (ulong)uVar8 * 0x20 + 0x3c) < iVar1) {
        return;
      }
    }
    if ((int)(uVar4 + uVar7) < 0xc0) {
      if (uVar4 != uVar8) {
        puVar5 = (undefined8 *)(param_1 + (long)(int)(uVar4 + uVar7) * 0x20 + 0x28);
        do {
          uVar4 = uVar4 - 1;
          lVar3 = param_1 + (long)(int)uVar4 * 0x20;
          uVar9 = *(undefined8 *)(lVar3 + 0x38);
          puVar5[3] = *(undefined8 *)(lVar3 + 0x40);
          puVar5[2] = uVar9;
          uVar9 = *(undefined8 *)(lVar3 + 0x28);
          puVar5[1] = *(undefined8 *)(lVar3 + 0x30);
          *puVar5 = uVar9;
          puVar5 = puVar5 + -4;
        } while (uVar8 != uVar4);
        uVar4 = *(uint *)(param_1 + 0x20);
      }
      uVar9 = *(undefined8 *)(param_2 + 0x10);
      lVar3 = param_1 + (ulong)uVar8 * 0x20;
      *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar3 + 0x38) = uVar9;
      uVar9 = *(undefined8 *)param_2;
      *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar3 + 0x28) = uVar9;
      *(uint *)(param_1 + 0x20) = uVar4 + 1;
      if (uVar7 != 0) {
        uVar9 = *(undefined8 *)(param_3 + 0x10);
        lVar3 = param_1 + (ulong)(uVar8 + 1) * 0x20;
        *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_3 + 0x18);
        *(undefined8 *)(lVar3 + 0x38) = uVar9;
        uVar9 = *(undefined8 *)param_3;
        *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_3 + 8);
        *(undefined8 *)(lVar3 + 0x28) = uVar9;
        *(uint *)(param_1 + 0x20) = uVar4 + 2;
      }
    }
  }
  return;
}

