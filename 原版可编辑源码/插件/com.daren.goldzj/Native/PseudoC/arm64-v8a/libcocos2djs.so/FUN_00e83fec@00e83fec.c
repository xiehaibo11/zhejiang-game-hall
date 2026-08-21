
void FUN_00e83fec(long param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(int *)param_2 == 0) {
    iVar9 = 0;
    uVar3 = *(uint *)(param_1 + 0x20);
    param_2 = param_3;
  }
  else if (*(int *)param_3 == 0) {
    iVar9 = 0;
    uVar3 = *(uint *)(param_1 + 0x20);
  }
  else {
    if (*(int *)(param_3 + 0x10) < *(int *)(param_2 + 0x10)) {
      return;
    }
    iVar9 = 1;
    uVar3 = *(uint *)(param_1 + 0x20);
  }
  if (uVar3 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      iVar5 = *(int *)(param_1 + (ulong)uVar10 * 0x20 + 0x38);
      if (*(int *)(param_2 + 0x10) <= iVar5) {
        if (iVar5 == *(int *)(param_2 + 0x10)) {
          return;
        }
        if ((iVar9 != 0) && (iVar5 <= *(int *)(param_3 + 0x10))) {
          return;
        }
        if ((*(byte *)(param_1 + (ulong)uVar10 * 0x20 + 0x28) >> 3 & 1) != 0) {
          return;
        }
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar3);
  }
  lVar7 = *(long *)(param_1 + 8);
  if ((*(char *)(lVar7 + 0x18) != '\0') && ((*param_2 >> 4 & 1) == 0)) {
    if (iVar9 == 0) {
      iVar5 = FUN_00e83f08(lVar7,*(int *)(param_2 + 0x10));
      *(int *)(param_2 + 0x14) = iVar5;
    }
    else {
      iVar5 = *(int *)(param_2 + 0x10) + *(int *)(param_3 + 0x10);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = FUN_00e83f08(lVar7,iVar5 >> 1);
      uVar3 = *(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10);
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 1;
      }
      iVar6 = FT_MulFix((long)((ulong)uVar3 << 0x20) >> 0x21,(long)*(int *)(param_1 + 0x1c));
      *(int *)(param_2 + 0x14) = iVar5 - iVar6;
      *(int *)(param_3 + 0x14) = iVar5 + iVar6;
    }
  }
  if ((uVar10 == 0) ||
     (*(int *)(param_1 + (ulong)(uVar10 - 1) * 0x20 + 0x3c) <= *(int *)(param_2 + 0x14))) {
    uVar3 = *(uint *)(param_1 + 0x20);
    if (uVar10 < uVar3) {
      if (iVar9 == 0) {
        iVar5 = *(int *)(param_2 + 0x14);
      }
      else {
        iVar5 = *(int *)(param_3 + 0x14);
      }
      if (*(int *)(param_1 + (ulong)uVar10 * 0x20 + 0x3c) < iVar5) {
        return;
      }
    }
    if (uVar3 + iVar9 < 0xc0) {
      if (uVar3 != uVar10) {
        uVar8 = (ulong)uVar3;
        do {
          iVar5 = (int)uVar8;
          uVar4 = iVar5 - 1;
          uVar8 = (ulong)uVar4;
          puVar1 = (undefined8 *)(param_1 + 0x28 + uVar8 * 0x20);
          uVar11 = *puVar1;
          uVar13 = puVar1[3];
          uVar12 = puVar1[2];
          puVar2 = (undefined8 *)(param_1 + 0x28 + (ulong)(uint)(iVar9 + iVar5) * 0x20);
          puVar2[1] = puVar1[1];
          *puVar2 = uVar11;
          puVar2[3] = uVar13;
          puVar2[2] = uVar12;
        } while (uVar10 != uVar4);
      }
      uVar12 = *(undefined8 *)(param_2 + 8);
      uVar11 = *(undefined8 *)param_2;
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      lVar7 = param_1 + (ulong)uVar10 * 0x20;
      *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar7 + 0x38) = uVar13;
      *(undefined8 *)(lVar7 + 0x30) = uVar12;
      *(undefined8 *)(lVar7 + 0x28) = uVar11;
      *(uint *)(param_1 + 0x20) = uVar3 + 1;
      if (iVar9 != 0) {
        uVar12 = *(undefined8 *)(param_3 + 8);
        uVar11 = *(undefined8 *)param_3;
        uVar13 = *(undefined8 *)(param_3 + 0x10);
        lVar7 = param_1 + (ulong)(uVar10 + 1) * 0x20;
        *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)(param_3 + 0x18);
        *(undefined8 *)(lVar7 + 0x38) = uVar13;
        *(undefined8 *)(lVar7 + 0x30) = uVar12;
        *(undefined8 *)(lVar7 + 0x28) = uVar11;
        *(uint *)(param_1 + 0x20) = uVar3 + 2;
      }
    }
  }
  return;
}

