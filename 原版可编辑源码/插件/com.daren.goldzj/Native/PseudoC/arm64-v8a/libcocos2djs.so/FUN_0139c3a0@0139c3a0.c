
void FUN_0139c3a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long unaff_x26;
  long unaff_x27;
  
  if (((((int)param_3 == *(int *)(unaff_x27 + 0x413)) &&
       (lVar4 = unaff_x26 + (ulong)*(uint *)(param_2 + -1), *(short *)(lVar4 + 7) == 0x42d)) &&
      (**(char **)(unaff_x26 + 0x1488) == '\0')) &&
     ((*(int *)(lVar4 + 0xf) == *(int *)(unaff_x27 + 0x23b) &&
      (*(int *)(*(long *)(unaff_x26 + 0xec8) + 0xb) != 0)))) {
    FUN_013fa780(param_2,*(undefined8 *)(unaff_x26 + 0xa0),*(undefined8 *)(unaff_x26 + 0xa0),param_1
                );
    return;
  }
  puVar6 = *(ulong **)(unaff_x26 + 0x1428);
  puVar7 = *(ulong **)(unaff_x26 + 0x1430);
  uVar1 = *puVar6 + 0x1c;
  if (uVar1 < *puVar7) {
    lVar4 = *puVar6 + 1;
    *puVar6 = uVar1;
  }
  else {
    lVar4 = FUN_01348560();
    puVar6 = *(ulong **)(unaff_x26 + 0x1428);
    puVar7 = *(ulong **)(unaff_x26 + 0x1430);
  }
  *(undefined4 *)(lVar4 + -1) = *(undefined4 *)(unaff_x27 + 0x1a7);
  *(undefined4 *)(lVar4 + 3) = 10;
  *(undefined4 *)(lVar4 + 7) = *(undefined4 *)(unaff_x27 + 7);
  *(int *)(lVar4 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  *(int *)(lVar4 + 0xf) = (int)param_1;
  uVar8 = (undefined4)*(undefined8 *)(unaff_x26 + 0xc0);
  *(undefined4 *)(lVar4 + 0x13) = uVar8;
  *(undefined4 *)(lVar4 + 0x17) = uVar8;
  lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 0x21b);
  uVar8 = *(undefined4 *)(unaff_x27 + 0x2c7);
  uVar1 = unaff_x26 + (ulong)*(uint *)(lVar2 + 3);
  if ((uVar1 & 1) == 0) {
    uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5a58 + ((long)(uVar1 << 0x20) >> 0x21) * 8);
  }
  else {
    uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar1 - 1) + 7);
    if (uVar3 < 0x75) {
LAB_0139c594:
      if (uVar3 < 0x70) {
LAB_0139c5ac:
        if (uVar3 == 0x4e) {
          uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5cb8);
        }
        else if (uVar3 == 0x57) {
          uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c78);
        }
        else {
          uVar9 = *(undefined4 *)(uVar1 + 7);
        }
      }
      else if (uVar3 == 0x70) {
        uVar9 = *(undefined4 *)(uVar1 + 0xf);
      }
      else {
        if (uVar3 != 0x73) goto LAB_0139c5ac;
        uVar9 = *(undefined4 *)(uVar1 + 3);
      }
    }
    else if ((uVar3 < 0x95) || ((uVar3 != 0x95 && (uVar3 != 0x96)))) {
      if (uVar3 == 0x75) {
        uVar9 = *(undefined4 *)(uVar1 + 7);
      }
      else {
        if (uVar3 != 0x86) goto LAB_0139c594;
        uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c18);
      }
    }
    else {
      uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c68);
    }
  }
  uVar1 = *puVar6 + 0x1c;
  if (uVar1 < *puVar7) {
    lVar5 = *puVar6 + 1;
    *puVar6 = uVar1;
  }
  else {
    lVar5 = FUN_01348560(param_1,0x1c);
    puVar6 = *(ulong **)(unaff_x26 + 0x1428);
    puVar7 = *(ulong **)(unaff_x26 + 0x1430);
  }
  *(undefined4 *)(lVar5 + -1) = uVar8;
  uVar10 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar5 + 3) = uVar10;
  *(undefined4 *)(lVar5 + 7) = uVar10;
  uVar11 = (undefined4)*(undefined8 *)(unaff_x26 + 0xe90);
  *(undefined4 *)(lVar5 + 0x13) = uVar11;
  *(int *)(lVar5 + 0xb) = (int)lVar2;
  *(int *)(lVar5 + 0xf) = (int)lVar4;
  *(undefined4 *)(lVar5 + 0x17) = uVar9;
  lVar2 = unaff_x26 + (ulong)*(uint *)(unaff_x27 + 0x217);
  uVar1 = unaff_x26 + (ulong)*(uint *)(lVar2 + 3);
  if ((uVar1 & 1) == 0) {
    uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5a58 + ((long)(uVar1 << 0x20) >> 0x21) * 8);
    goto LAB_0139c750;
  }
  uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar1 - 1) + 7);
  if (0x74 < uVar3) {
    if ((0x94 < uVar3) && ((uVar3 == 0x95 || (uVar3 == 0x96)))) {
      uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c68);
      goto LAB_0139c750;
    }
    if (uVar3 == 0x75) {
      uVar9 = *(undefined4 *)(uVar1 + 7);
      goto LAB_0139c750;
    }
    if (uVar3 == 0x86) {
      uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c18);
      goto LAB_0139c750;
    }
  }
  if (0x6f < uVar3) {
    if (uVar3 == 0x70) {
      uVar9 = *(undefined4 *)(uVar1 + 0xf);
      goto LAB_0139c750;
    }
    if (uVar3 == 0x73) {
      uVar9 = *(undefined4 *)(uVar1 + 3);
      goto LAB_0139c750;
    }
  }
  if (uVar3 == 0x4e) {
    uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5cb8);
  }
  else if (uVar3 == 0x57) {
    uVar9 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c78);
  }
  else {
    uVar9 = *(undefined4 *)(uVar1 + 7);
  }
LAB_0139c750:
  uVar1 = *puVar6 + 0x1c;
  if (uVar1 < *puVar7) {
    lVar5 = *puVar6 + 1;
    *puVar6 = uVar1;
  }
  else {
    lVar5 = FUN_01348560(lVar5,0x1c);
    uVar11 = (undefined4)*(undefined8 *)(unaff_x26 + 0xe90);
    uVar10 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  }
  *(undefined4 *)(lVar5 + -1) = uVar8;
  *(undefined4 *)(lVar5 + 3) = uVar10;
  *(undefined4 *)(lVar5 + 7) = uVar10;
  *(undefined4 *)(lVar5 + 0x13) = uVar11;
  *(int *)(lVar5 + 0xb) = (int)lVar2;
  *(int *)(lVar5 + 0xf) = (int)lVar4;
  *(undefined4 *)(lVar5 + 0x17) = uVar9;
  FUN_0133fc20(2,param_3);
  return;
}

