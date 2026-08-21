
ulong FUN_013fdc00(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x26;
  int local_40 [2];
  long local_38;
  ulong local_30;
  
  local_30 = param_2;
  if (local_40 <= *(undefined1 **)(unaff_x26 + 0x60)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_38 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_38 + -1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar7 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  uVar6 = FUN_013c0ba0();
  if (((int)uVar6 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
     ((int)uVar6 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
    bVar3 = (uVar7 & 1) != 0;
    if ((int)local_30 != (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
      if ((bVar3) &&
         (uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7), 0xa8 < uVar2)) {
        if (uVar2 == 0xa9) {
          uVar7 = FUN_013fdc00(uVar7,*(undefined8 *)(unaff_x26 + 0xc0));
          return uVar7;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2278));
      }
      return *(ulong *)(unaff_x26 + 0xc0);
    }
    if (!bVar3) {
      return uVar7;
    }
    uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7);
    if (uVar2 < 0xa9) {
      return uVar7;
    }
    if (uVar2 == 0xa9) {
      FUN_013fdc00(uVar7,*(undefined8 *)(unaff_x26 + 0xb8),uVar7);
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2280));
  }
  if (((uVar6 & 1) == 0) || ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 9) >> 1 & 1) == 0)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar7 = FUN_0133fcc0(1,uVar6,uVar7,1);
  uVar4 = (uint)uVar7;
  if (uVar4 == (uint)*(undefined8 *)(unaff_x26 + 0xc0)) goto LAB_013fddc8;
  if ((uVar7 & 1) != 0) {
    if ((uVar4 == (uint)*(undefined8 *)(unaff_x26 + 200)) ||
       (lVar1 = unaff_x26 + (ulong)*(uint *)(uVar7 - 1), (*(byte *)(lVar1 + 9) >> 4 & 1) != 0))
    goto LAB_013fddc8;
    if ((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      if (0.0 < ABS(*(double *)(uVar7 + 3))) goto LAB_013fdd34;
      goto LAB_013fddc8;
    }
    if (*(short *)(lVar1 + 7) != 0x41) goto LAB_013fdd34;
    uVar4 = *(uint *)(uVar7 + 3) >> 1 & 0x3fffffff;
  }
  if (uVar4 != 0) {
LAB_013fdd34:
    if (((local_30 & 1) == 0) ||
       (uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_30 - 1) + 7), uVar2 < 0xa9)) {
      iVar5 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
    }
    else {
      if (uVar2 != 0xa9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x22e8));
      }
      iVar5 = FUN_013fd820();
    }
    if (iVar5 != (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
      return *(ulong *)(unaff_x26 + 0xb8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
LAB_013fddc8:
  if (local_40[0] != (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
    return *(ulong *)(unaff_x26 + 0xc0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
}

