
/* WARNING: Removing unreachable block (ram,0x013ff194) */
/* WARNING: Removing unreachable block (ram,0x013ff240) */
/* WARNING: Removing unreachable block (ram,0x013ff250) */
/* WARNING: Removing unreachable block (ram,0x013ff198) */
/* WARNING: Removing unreachable block (ram,0x013ff1ac) */
/* WARNING: Removing unreachable block (ram,0x013ff1b8) */
/* WARNING: Removing unreachable block (ram,0x013ff1c0) */
/* WARNING: Removing unreachable block (ram,0x013ff1d4) */
/* WARNING: Removing unreachable block (ram,0x013ff1fc) */
/* WARNING: Removing unreachable block (ram,0x013ff210) */
/* WARNING: Removing unreachable block (ram,0x013ff224) */
/* WARNING: Removing unreachable block (ram,0x013ff228) */
/* WARNING: Removing unreachable block (ram,0x013ff234) */
/* WARNING: Removing unreachable block (ram,0x013ff290) */
/* WARNING: Removing unreachable block (ram,0x013ff298) */

ulong FUN_013fef60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x26;
  ulong local_40;
  undefined8 local_38;
  
  local_38 = param_3;
  if (&local_40 <= *(undefined1 **)(unaff_x26 + 0x60)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2048));
  }
  local_40 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_40 - 1) + 7) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar6 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  uVar5 = FUN_013c0ba0();
  if (((int)uVar5 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
     ((int)uVar5 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
    bVar3 = (uVar6 & 1) != 0;
    if ((int)local_38 != (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
      if ((bVar3) &&
         (uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7), 0xa8 < uVar2)) {
        if (uVar2 == 0xa9) {
          uVar6 = FUN_013fef60(uVar6,param_2,*(undefined8 *)(unaff_x26 + 0xc0));
          return uVar6;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2290));
      }
      return *(ulong *)(unaff_x26 + 0xc0);
    }
    if (!bVar3) {
      return uVar6;
    }
    uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7);
    if (uVar2 < 0xa9) {
      return uVar6;
    }
    if (uVar2 == 0xa9) {
      FUN_013fef60(uVar6,param_2,*(undefined8 *)(unaff_x26 + 0xb8),0xa9,uVar6);
      return uVar6;
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2298));
  }
  if (((uVar5 & 1) == 0) || ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar5 - 1) + 9) >> 1 & 1) == 0)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar5 = FUN_0133fcc0(2,uVar5);
  iVar4 = (int)uVar5;
  if (iVar4 != (int)*(undefined8 *)(unaff_x26 + 0xc0)) {
    if ((uVar5 & 1) == 0) {
      if (iVar4 != 0) goto LAB_013ff0a4;
    }
    else if ((iVar4 != (int)*(undefined8 *)(unaff_x26 + 200)) &&
            (lVar1 = unaff_x26 + (ulong)*(uint *)(uVar5 - 1), (*(byte *)(lVar1 + 9) >> 4 & 1) == 0))
    {
      if ((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
        if (ABS(*(double *)(uVar5 + 3)) <= 0.0) goto LAB_013ff0ac;
      }
      else if ((*(short *)(lVar1 + 7) == 0x41) && ((*(uint *)(uVar5 + 3) >> 1 & 0x3fffffff) == 0))
      goto LAB_013ff0ac;
LAB_013ff0a4:
      bVar3 = true;
      goto LAB_013ff0b0;
    }
  }
LAB_013ff0ac:
  bVar3 = false;
LAB_013ff0b0:
  if (bVar3) {
    if (((local_40 & 1) == 0) ||
       (uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_40 - 1) + 7), uVar2 < 0xa9)) {
      iVar4 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
    }
    else {
      if (uVar2 != 0xa9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x22e8));
      }
      iVar4 = FUN_013fd820(local_40);
    }
    if (iVar4 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
      uVar6 = *(ulong *)(unaff_x26 + 0xb8);
    }
    else {
      if (((local_40 & 1) == 0) ||
         (uVar6 = local_40, *(ushort *)(unaff_x26 + (ulong)*(uint *)(local_40 - 1) + 7) < 0xa9)) {
        uVar6 = FUN_013492a0();
      }
      if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7) != 0xa9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2288));
      }
      uVar6 = FUN_013fcb00();
      if (((int)uVar6 != 0) &&
         (((((uVar6 & 1) == 0 || (*(int *)(uVar6 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
           || (*(double *)(uVar6 + 3) != 0.0)) ||
          ((int)((ulong)*(double *)(uVar6 + 3) >> 0x20) != 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
      }
      uVar6 = *(ulong *)(unaff_x26 + 0xb8);
    }
  }
  else {
    if ((int)uVar6 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    uVar6 = *(ulong *)(unaff_x26 + 0xc0);
  }
  return uVar6;
}

