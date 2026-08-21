
void FUN_0143c2e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  short sVar2;
  ulong *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint extraout_w9;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  undefined8 local_60;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  
  uVar8 = *(undefined8 *)(unaff_x29 + (long)*(char *)(unaff_x20 + unaff_x19 + 1) * 8);
  uVar9 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(uVar9 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    uVar9 = *(ulong *)(unaff_x26 + 0xa0);
  }
  lVar10 = *(long *)(unaff_x29 + -8);
  bVar4 = (param_1 & 1) == 0;
  uVar11 = (uint)bVar4;
  uVar6 = (uint)bVar4;
  local_48 = uVar8;
  local_40 = param_1;
  if ((int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    lVar1 = (ulong)*(byte *)(unaff_x20 + unaff_x19 + 2) * 4 + 0x1f;
    uVar12 = (int)unaff_x26 + *(int *)(uVar9 + lVar1);
    if (((uVar12 & 0xfffffffd) != (uint)param_1) &&
       (uVar14 = (uint)*(undefined8 *)(unaff_x26 + 0xb88), uVar12 != uVar14)) {
      if (((uVar12 == (uint)*(undefined8 *)(unaff_x26 + 0xc08)) || (uVar12 == 3)) &&
         (uVar13 = param_1, uVar6 == 0)) {
        while (sVar2 = *(short *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7), sVar2 == 0x438) {
          uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
        }
        if ((sVar2 == 0x439) &&
           (*(int *)(unaff_x26 + (ulong)*(uint *)(lVar10 + -1) + 0x13) ==
            *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) +
                    0x13))) {
          *(int *)(uVar9 + lVar1) = (int)(param_1 | 3);
          uVar6 = uVar11;
          if ((((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             ((((param_1 | 3) & 1) != 0 &&
              (((uint)*(undefined8 *)
                       ((unaff_x26 + (param_1 & 0xffffffff | 3) & 0xfffffffffffc0000) + 8) >> 1 & 1)
               != 0)))) {
            local_60 = uVar8;
            FUN_0133eb00(uVar9,uVar9 + lVar1,0,2);
            uVar8 = local_60;
            uVar6 = extraout_w9;
          }
          *(undefined4 *)(uVar9 + 0x17) = 0;
          goto LAB_0143c38c;
        }
      }
      *(uint *)(uVar9 + lVar1) = uVar14;
      *(undefined4 *)(uVar9 + 0x17) = 0;
    }
  }
LAB_0143c38c:
  uVar11 = (int)unaff_x19 * 2;
  local_50 = (ulong)uVar11;
  if ((uVar6 != 0) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) < 0xa9)) {
    *(uint *)(unaff_x29 + -0x20) = uVar11;
    local_60 = 0xa6;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8),param_3,0xa6,uVar8);
  }
  *(uint *)(unaff_x29 + -0x20) = uVar11;
  uVar8 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xc68));
  iVar5 = (int)uVar8;
  uVar7 = (undefined4)local_50;
  if (iVar5 == *(int *)(unaff_x26 +
                        (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar10 + -1) + 0x13) + 899)) {
    *(undefined4 *)(unaff_x29 + -0x20) = uVar7;
    local_60 = local_48;
    uVar8 = FUN_0137a8e0(1,uVar8);
    puVar3 = &local_60;
    goto LAB_0143c4b0;
  }
  if ((iVar5 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) ||
     (iVar5 == (int)*(undefined8 *)(unaff_x26 + 0xa0))) {
    if ((*(byte *)(unaff_x26 + (ulong)*(uint *)(local_40 - 1) + 9) >> 1 & 1) == 0) {
      *(undefined4 *)(unaff_x29 + -0x20) = uVar7;
      local_60 = 0x9e;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    *(undefined4 *)(unaff_x29 + -0x20) = uVar7;
    uVar8 = FUN_0139a360(local_48);
    puVar3 = &local_50;
    goto LAB_0143c4b0;
  }
  *(undefined4 *)(unaff_x29 + -0x20) = uVar7;
  local_60 = local_48;
  uVar9 = FUN_0133fc20(1,uVar8);
  uVar8 = *(undefined8 *)(unaff_x26 + 0xc0);
  uVar6 = (uint)uVar9;
  puVar3 = &local_60;
  if (uVar6 == (uint)uVar8) goto LAB_0143c4b0;
  if ((uVar9 & 1) == 0) {
joined_r0x0143c470:
    puVar3 = &local_60;
    if (uVar6 == 0) goto LAB_0143c4b0;
  }
  else {
    puVar3 = &local_60;
    if ((uVar6 == (uint)*(undefined8 *)(unaff_x26 + 200)) ||
       (lVar10 = unaff_x26 + (ulong)*(uint *)(uVar9 - 1), puVar3 = &local_60,
       (*(byte *)(lVar10 + 9) >> 4 & 1) != 0)) goto LAB_0143c4b0;
    if ((int)lVar10 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      puVar3 = &local_60;
      if (ABS(*(double *)(uVar9 + 3)) <= 0.0) goto LAB_0143c4b0;
    }
    else if (*(short *)(lVar10 + 7) == 0x41) {
      uVar6 = *(uint *)(uVar9 + 3) >> 1 & 0x3fffffff;
      goto joined_r0x0143c470;
    }
  }
  uVar8 = *(undefined8 *)(unaff_x26 + 0xb8);
  puVar3 = &local_60;
LAB_0143c4b0:
                    /* WARNING: Could not recover jumptable at 0x0143c4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar3[4] + (ulong)*(byte *)(*(long *)(puVar3[5] + -0x18) + puVar3[3] + 3) * 8))
            (uVar8);
  return;
}

