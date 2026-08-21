
undefined8 FUN_013fd820(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x26;
  undefined8 local_40;
  ulong local_38;
  long local_30;
  
  if (&local_40 <= *(undefined1 **)(unaff_x26 + 0x60)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_30 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_30 + -1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar6 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  uVar5 = FUN_013c0ba0();
  lVar2 = local_30;
  if (((int)uVar5 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
     ((int)uVar5 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
    if (((uVar6 & 1) != 0) &&
       (uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7), 0xa8 < uVar3)) {
      if (uVar3 == 0xa9) {
        uVar7 = FUN_013fd820();
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x22e8));
    }
    return *(undefined8 *)(unaff_x26 + 0xc0);
  }
  if (((uVar5 & 1) == 0) || ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar5 - 1) + 9) >> 1 & 1) == 0)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  local_38 = (ulong)((uVar6 & 1) == 0);
  uVar6 = FUN_0133fcc0(1,uVar5,uVar6,local_38,1);
  iVar4 = (int)uVar6;
  if (iVar4 == (int)*(undefined8 *)(unaff_x26 + 0xc0)) {
LAB_013fd960:
    local_40 = 0;
  }
  else {
    if ((uVar6 & 1) == 0) {
      if (iVar4 != 0) goto LAB_013fd958;
      goto LAB_013fd960;
    }
    if ((iVar4 == (int)*(undefined8 *)(unaff_x26 + 200)) ||
       (lVar1 = unaff_x26 + (ulong)*(uint *)(uVar6 - 1), (*(byte *)(lVar1 + 9) >> 4 & 1) != 0))
    goto LAB_013fd960;
    if ((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      if (ABS(*(double *)(uVar6 + 3)) <= 0.0) goto LAB_013fd960;
    }
    else if ((*(short *)(lVar1 + 7) == 0x41) && ((*(uint *)(uVar6 + 3) >> 1 & 0x3fffffff) == 0))
    goto LAB_013fd960;
LAB_013fd958:
    local_40 = 1;
  }
  if (((int)lVar2 == 0) &&
     (uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_30 + -1) + 7), 0xa8 < uVar3)) {
    if (uVar3 != 0xa9) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x22e8));
    }
    uVar6 = FUN_013fd820();
  }
  else {
    uVar6 = *(ulong *)(unaff_x26 + 0xc0);
  }
  iVar4 = (int)uVar6;
  if (iVar4 != (int)*(undefined8 *)(unaff_x26 + 0xc0)) {
    if ((uVar6 & 1) == 0) {
      if (iVar4 != 0) goto LAB_013fda10;
    }
    else if ((iVar4 != (int)*(undefined8 *)(unaff_x26 + 200)) &&
            (lVar2 = unaff_x26 + (ulong)*(uint *)(uVar6 - 1), (*(byte *)(lVar2 + 9) >> 4 & 1) == 0))
    {
      if ((int)lVar2 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
        if (ABS(*(double *)(uVar6 + 3)) <= 0.0) goto LAB_013fda18;
      }
      else if ((*(short *)(lVar2 + 7) == 0x41) && ((*(uint *)(uVar6 + 3) >> 1 & 0x3fffffff) == 0))
      goto LAB_013fda18;
LAB_013fda10:
      iVar4 = 1;
      goto LAB_013fda1c;
    }
  }
LAB_013fda18:
  iVar4 = 0;
LAB_013fda1c:
  if ((int)local_40 == iVar4) {
    if ((int)local_40 == 0) {
      uVar7 = *(undefined8 *)(unaff_x26 + 0xc0);
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x26 + 0xb8);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
}

