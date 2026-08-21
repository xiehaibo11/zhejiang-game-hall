
ulong FUN_013f9d00(ulong param_1,undefined4 param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  long unaff_x26;
  long unaff_x27;
  ulong local_40;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  if ((*(byte *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 9) >> 6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  lVar7 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  if ((int)param_1 != *(int *)(lVar7 + 0x393)) {
    puVar12 = *(ulong **)(unaff_x26 + 0x1428);
    puVar13 = *(ulong **)(unaff_x26 + 0x1430);
    uVar14 = *puVar12 + 0x10;
    if (uVar14 < *puVar13) {
      lVar5 = *puVar12 + 1;
      *puVar12 = uVar14;
    }
    else {
      lVar5 = FUN_01348560();
      puVar12 = *(ulong **)(unaff_x26 + 0x1428);
      puVar13 = *(ulong **)(unaff_x26 + 0x1430);
    }
    *(int *)(lVar5 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xd28);
    uVar11 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa0);
    *(undefined4 *)(lVar5 + 3) = uVar11;
    *(undefined4 *)(lVar5 + 7) = uVar11;
    *(undefined4 *)(lVar5 + 0xb) = uVar11;
    uVar14 = *puVar12 + 0x14;
    if (uVar14 < *puVar13) {
      uVar6 = *puVar12 + 1;
      *puVar12 = uVar14;
    }
    else {
      uVar6 = FUN_01348560(param_1,0x14);
      puVar12 = *(ulong **)(unaff_x26 + 0x1428);
      puVar13 = *(ulong **)(unaff_x26 + 0x1430);
      uVar11 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa0);
    }
    *(undefined4 *)(uVar6 - 1) = *(undefined4 *)(lVar7 + 0x1a7);
    *(undefined4 *)(uVar6 + 3) = 6;
    *(undefined4 *)(uVar6 + 7) = *(undefined4 *)(lVar7 + 7);
    *(undefined4 *)(uVar6 + 0xb) = uVar11;
    *(int *)(uVar6 + 0xf) = (int)lVar5;
    lVar5 = unaff_x26 + (ulong)*(uint *)(lVar7 + 0x213);
    uVar11 = *(undefined4 *)(lVar7 + 0x2c7);
    uVar14 = unaff_x26 + (ulong)*(uint *)(lVar5 + 3);
    if ((uVar14 & 1) == 0) {
      uVar15 = (undefined4)
               *(undefined8 *)(unaff_x26 + 0x5a58 + ((long)(uVar14 << 0x20) >> 0x21) * 8);
      goto LAB_013f9ecc;
    }
    uVar1 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
    if (0x74 < uVar1) {
      if ((0x94 < uVar1) && ((uVar1 == 0x95 || (uVar1 == 0x96)))) {
        uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c68);
        goto LAB_013f9ecc;
      }
      if (uVar1 == 0x75) {
        uVar15 = *(undefined4 *)(uVar14 + 7);
        goto LAB_013f9ecc;
      }
      if (uVar1 == 0x86) {
        uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c18);
        goto LAB_013f9ecc;
      }
    }
    if (0x6f < uVar1) {
      if (uVar1 == 0x70) {
        uVar15 = *(undefined4 *)(uVar14 + 0xf);
        goto LAB_013f9ecc;
      }
      if (uVar1 == 0x73) {
        uVar15 = *(undefined4 *)(uVar14 + 3);
        goto LAB_013f9ecc;
      }
    }
    if (uVar1 == 0x4e) {
      uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5cb8);
    }
    else if (uVar1 == 0x57) {
      uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c78);
    }
    else {
      uVar15 = *(undefined4 *)(uVar14 + 7);
    }
LAB_013f9ecc:
    uVar14 = *puVar12 + 0x1c;
    if (uVar14 < *puVar13) {
      lVar7 = *puVar12 + 1;
      *puVar12 = uVar14;
    }
    else {
      lVar7 = FUN_01348560(param_1,0x1c);
      local_40 = uVar6;
    }
    *(undefined4 *)(lVar7 + -1) = uVar11;
    uVar11 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
    *(undefined4 *)(lVar7 + 3) = uVar11;
    *(undefined4 *)(lVar7 + 7) = uVar11;
    *(int *)(lVar7 + 0x13) = (int)*(undefined8 *)(unaff_x26 + 0xe90);
    *(int *)(lVar7 + 0xb) = (int)lVar5;
    *(int *)(lVar7 + 0xf) = (int)uVar6;
    *(undefined4 *)(lVar7 + 0x17) = uVar15;
    uVar4 = FUN_01341380(1,param_1);
    *(uint *)(local_40 + 3) = uVar4;
    if (((((uint)*(undefined8 *)((local_40 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar4 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar4 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
    {
      FUN_0133eb00(local_40,local_40 + 3,0,2);
    }
    uVar14 = unaff_x26 + (ulong)*(uint *)(local_40 + 7);
    if ((uVar14 & 1) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = (*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 9) & 2) != 0;
    }
    bVar3 = false;
    if (bVar2) {
      uVar14 = unaff_x26 + (ulong)*(uint *)(local_40 + 0xb);
      if ((uVar14 & 1) != 0) {
        bVar3 = (*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 9) & 2) != 0;
      }
      if (bVar3) {
        return local_40;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar6 = **(ulong **)(unaff_x26 + 0x1428);
  uVar14 = uVar6 + 0x14;
  uVar11 = *(undefined4 *)
            (unaff_x26 +
             (ulong)*(uint *)(unaff_x26 +
                              (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar7 + -1) + 0x13) +
                             0x393) + 0x1b);
  if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
    **(ulong **)(unaff_x26 + 0x1428) = uVar14;
    uVar14 = uVar6 + 1;
  }
  else {
    param_1 = FUN_01348560(param_1,0x14);
    uVar14 = param_1;
  }
  *(undefined4 *)(uVar14 - 1) = uVar11;
  uVar11 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(uVar14 + 3) = uVar11;
  *(undefined4 *)(uVar14 + 7) = uVar11;
  *(undefined4 *)(uVar14 + 0xb) = 0;
  *(undefined4 *)(uVar14 + 0xf) = 0;
  if (**(char **)(unaff_x26 + 0x1480) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x23d8));
  }
  puVar12 = *(ulong **)(unaff_x26 + 0x1428);
  puVar13 = *(ulong **)(unaff_x26 + 0x1430);
  uVar6 = *puVar12 + 0x1c;
  if (uVar6 < *puVar13) {
    lVar5 = *puVar12 + 1;
    *puVar12 = uVar6;
  }
  else {
    lVar5 = FUN_01348560(param_1,0x1c);
    puVar12 = *(ulong **)(unaff_x26 + 0x1428);
    puVar13 = *(ulong **)(unaff_x26 + 0x1430);
  }
  *(undefined4 *)(lVar5 + -1) = *(undefined4 *)(lVar7 + 0x1a7);
  *(undefined4 *)(lVar5 + 3) = 10;
  *(undefined4 *)(lVar5 + 7) = *(undefined4 *)(lVar7 + 7);
  *(int *)(lVar5 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  *(int *)(lVar5 + 0xf) = (int)uVar14;
  *(int *)(lVar5 + 0x13) = (int)*(undefined8 *)(unaff_x26 + 0xc0);
  *(undefined4 *)(lVar5 + 0x17) = param_2;
  lVar9 = unaff_x26 + (ulong)*(uint *)(lVar7 + 0x21b);
  uVar11 = *(undefined4 *)(lVar7 + 0x2c7);
  uVar6 = unaff_x26 + (ulong)*(uint *)(lVar9 + 3);
  if ((uVar6 & 1) == 0) {
    uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5a58 + ((long)(uVar6 << 0x20) >> 0x21) * 8);
  }
  else {
    uVar1 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7);
    if (uVar1 < 0x75) {
LAB_013fa130:
      if (uVar1 < 0x70) {
LAB_013fa148:
        if (uVar1 == 0x4e) {
          uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5cb8);
        }
        else if (uVar1 == 0x57) {
          uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c78);
        }
        else {
          uVar15 = *(undefined4 *)(uVar6 + 7);
        }
      }
      else if (uVar1 == 0x70) {
        uVar15 = *(undefined4 *)(uVar6 + 0xf);
      }
      else {
        if (uVar1 != 0x73) goto LAB_013fa148;
        uVar15 = *(undefined4 *)(uVar6 + 3);
      }
    }
    else if ((uVar1 < 0x95) || ((uVar1 != 0x95 && (uVar1 != 0x96)))) {
      if (uVar1 == 0x75) {
        uVar15 = *(undefined4 *)(uVar6 + 7);
      }
      else {
        if (uVar1 != 0x86) goto LAB_013fa130;
        uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c18);
      }
    }
    else {
      uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c68);
    }
  }
  uVar6 = *puVar12 + 0x1c;
  if (uVar6 < *puVar13) {
    lVar8 = *puVar12 + 1;
    *puVar12 = uVar6;
  }
  else {
    lVar8 = FUN_01348560(uVar14,0x1c);
    puVar12 = *(ulong **)(unaff_x26 + 0x1428);
    puVar13 = *(ulong **)(unaff_x26 + 0x1430);
  }
  *(undefined4 *)(lVar8 + -1) = uVar11;
  uVar16 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar8 + 3) = uVar16;
  *(undefined4 *)(lVar8 + 7) = uVar16;
  uVar17 = (undefined4)*(undefined8 *)(unaff_x26 + 0xe90);
  *(undefined4 *)(lVar8 + 0x13) = uVar17;
  *(int *)(lVar8 + 0xb) = (int)lVar9;
  *(int *)(lVar8 + 0xf) = (int)lVar5;
  *(undefined4 *)(lVar8 + 0x17) = uVar15;
  lVar7 = unaff_x26 + (ulong)*(uint *)(lVar7 + 0x217);
  uVar6 = unaff_x26 + (ulong)*(uint *)(lVar7 + 3);
  if ((uVar6 & 1) == 0) {
    uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5a58 + ((long)(uVar6 << 0x20) >> 0x21) * 8);
    goto LAB_013fa2a0;
  }
  uVar1 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7);
  if (0x74 < uVar1) {
    if ((0x94 < uVar1) && ((uVar1 == 0x95 || (uVar1 == 0x96)))) {
      uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c68);
      goto LAB_013fa2a0;
    }
    if (uVar1 == 0x75) {
      uVar15 = *(undefined4 *)(uVar6 + 7);
      goto LAB_013fa2a0;
    }
    if (uVar1 == 0x86) {
      uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c18);
      goto LAB_013fa2a0;
    }
  }
  if (0x6f < uVar1) {
    if (uVar1 == 0x70) {
      uVar15 = *(undefined4 *)(uVar6 + 0xf);
      goto LAB_013fa2a0;
    }
    if (uVar1 == 0x73) {
      uVar15 = *(undefined4 *)(uVar6 + 3);
      goto LAB_013fa2a0;
    }
  }
  if (uVar1 == 0x4e) {
    uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5cb8);
  }
  else if (uVar1 == 0x57) {
    uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x5c78);
  }
  else {
    uVar15 = *(undefined4 *)(uVar6 + 7);
  }
LAB_013fa2a0:
  uVar6 = *puVar12 + 0x1c;
  if (uVar6 < *puVar13) {
    lVar9 = *puVar12 + 1;
    *puVar12 = uVar6;
  }
  else {
    lVar9 = FUN_01348560(uVar14,0x1c);
    puVar12 = *(ulong **)(unaff_x26 + 0x1428);
    puVar13 = *(ulong **)(unaff_x26 + 0x1430);
    uVar17 = (undefined4)*(undefined8 *)(unaff_x26 + 0xe90);
    uVar16 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  }
  *(undefined4 *)(lVar9 + -1) = uVar11;
  *(undefined4 *)(lVar9 + 3) = uVar16;
  *(undefined4 *)(lVar9 + 7) = uVar16;
  *(undefined4 *)(lVar9 + 0x13) = uVar17;
  *(int *)(lVar9 + 0xb) = (int)lVar7;
  *(int *)(lVar9 + 0xf) = (int)lVar5;
  *(undefined4 *)(lVar9 + 0x17) = uVar15;
  uVar6 = *puVar12 + 0x10;
  if (uVar6 < *puVar13) {
    uVar10 = *puVar12 + 1;
    *puVar12 = uVar6;
  }
  else {
    uVar10 = FUN_01348560(uVar14,0x10);
  }
  *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xd28);
  *(int *)(uVar10 + 3) = (int)uVar14;
  *(int *)(uVar10 + 7) = (int)lVar8;
  *(int *)(uVar10 + 0xb) = (int)lVar9;
  return uVar10;
}

