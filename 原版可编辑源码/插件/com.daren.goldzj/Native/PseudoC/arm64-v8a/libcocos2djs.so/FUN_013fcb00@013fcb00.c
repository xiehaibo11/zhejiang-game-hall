
ulong FUN_013fcb00(long param_1)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long unaff_x26;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  if (&local_40 <= *(undefined1 **)(unaff_x26 + 0x60)) {
    local_28 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_30 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_30 + -1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  local_28 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  uVar6 = FUN_013c0ba0();
  if (((int)uVar6 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
     ((int)uVar6 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
    if (((local_28 & 1) == 0) ||
       (uVar6 = local_28, *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_28 - 1) + 7) < 0xa9)) {
      uVar6 = FUN_013492a0();
    }
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7) != 0xa9) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2288));
    }
    local_40 = FUN_013fcb00();
  }
  else {
    if (((uVar6 & 1) == 0) ||
       ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 9) >> 1 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    auVar10 = FUN_0133fcc0(1,uVar6,*(undefined8 *)(unaff_x26 + 0xb0),local_28,1);
    local_40 = auVar10._0_8_;
    bVar4 = (local_40 & 1) == 0;
    if ((bVar4) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_40 - 1) + 7) < 0xa9)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) && (auVar10._0_4_ != (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    if (((local_38 & 1) == 0) ||
       (uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_38 - 1) + 7), uVar2 < 0xa9)) {
      iVar5 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
    }
    else {
      if (uVar2 != 0xa9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x22e8),bVar4,local_38,local_40);
      }
      iVar5 = FUN_013fd820(local_38);
      auVar10._8_8_ = extraout_x1;
      auVar10._0_8_ = local_40;
    }
    local_40 = auVar10._0_8_;
    uVar7 = *(undefined8 *)(unaff_x26 + 0xb8);
    if (iVar5 == (int)uVar7) {
      return local_40;
    }
    if (((local_38 & 1) == 0) ||
       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_38 - 1) + 7) < 0xa9)) {
      auVar11 = FUN_013492a0();
      auVar10._8_8_ = auVar11._8_8_;
      auVar10._0_8_ = local_40;
      local_38 = auVar11._0_8_;
      uVar7 = *(undefined8 *)(unaff_x26 + 0xb8);
    }
    local_40 = auVar10._0_8_;
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(local_38 - 1) + 7) != 0xa9) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2288),uVar7,local_40);
    }
    uVar6 = FUN_013fcb00(local_38,auVar10._8_8_,uVar7);
    if ((int)uVar6 == (int)local_40) {
      return local_40;
    }
    if ((uVar6 & 1) == 0) {
      if ((bVar4) || (*(int *)(local_40 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
      goto LAB_013fce30;
      dVar9 = *(double *)(local_40 + 3);
      dVar8 = (double)((int)uVar6 >> 1);
    }
    else if (bVar4) {
      if (*(int *)(uVar6 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_013fce30;
      dVar8 = *(double *)(uVar6 + 3);
      dVar9 = (double)((int)local_40 >> 1);
    }
    else {
      lVar1 = unaff_x26 + (ulong)*(uint *)(uVar6 - 1);
      iVar5 = (int)*(undefined8 *)(unaff_x26 + 0x140);
      if ((int)lVar1 != iVar5) {
        uVar2 = *(ushort *)(lVar1 + 7);
        if (uVar2 < 0x40) {
          if ((*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_40 - 1) + 7) < 0x40) &&
             (iVar5 = FUN_01345360(local_40,uVar6), iVar5 == (int)*(undefined8 *)(unaff_x26 + 0xb8))
             ) {
            return local_40;
          }
        }
        else if ((uVar2 == 0x41) &&
                (*(short *)(unaff_x26 + (ulong)*(uint *)(local_40 - 1) + 7) == 0x41)) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1c10));
        }
        goto LAB_013fce30;
      }
      if (*(int *)(local_40 - 1) != iVar5) goto LAB_013fce30;
      dVar8 = *(double *)(uVar6 + 3);
      dVar9 = *(double *)(local_40 + 3);
    }
    if (dVar8 == dVar9) {
      if ((int)((ulong)dVar8 >> 0x20) != (int)((ulong)dVar9 >> 0x20)) goto LAB_013fce30;
    }
    else if ((!NAN(dVar8)) || (!NAN(dVar9))) {
LAB_013fce30:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
  }
  return local_40;
}

