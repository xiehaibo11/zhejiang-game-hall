
undefined8 FUN_0139a560(ulong param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x26;
  long unaff_x27;
  
  if (((param_1 & 1) == 0) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar4 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xc68));
  iVar2 = (int)uVar4;
  if (iVar2 == *(int *)(unaff_x26 +
                        (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) + 899)
     ) {
    uVar4 = FUN_0137a8e0(1,uVar4);
    return uVar4;
  }
  if ((iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) ||
     (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xa0))) {
    if ((*(byte *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 9) >> 1 & 1) != 0) {
      uVar4 = FUN_0139a360(param_2);
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar5 = FUN_0133fc20(1,uVar4,param_2,1);
  uVar4 = *(undefined8 *)(unaff_x26 + 0xc0);
  uVar3 = (uint)uVar5;
  if (uVar3 == (uint)uVar4) {
    return uVar4;
  }
  if ((uVar5 & 1) != 0) {
    if (uVar3 == (uint)*(undefined8 *)(unaff_x26 + 200)) {
      return uVar4;
    }
    lVar1 = unaff_x26 + (ulong)*(uint *)(uVar5 - 1);
    if ((*(byte *)(lVar1 + 9) >> 4 & 1) != 0) {
      return uVar4;
    }
    if ((int)lVar1 == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      if (ABS(*(double *)(uVar5 + 3)) <= 0.0) {
        return uVar4;
      }
      goto LAB_0139a658;
    }
    if (*(short *)(lVar1 + 7) != 0x41) goto LAB_0139a658;
    uVar3 = *(uint *)(uVar5 + 3) >> 1 & 0x3fffffff;
  }
  if (uVar3 == 0) {
    return uVar4;
  }
LAB_0139a658:
  return *(undefined8 *)(unaff_x26 + 0xb8);
}

