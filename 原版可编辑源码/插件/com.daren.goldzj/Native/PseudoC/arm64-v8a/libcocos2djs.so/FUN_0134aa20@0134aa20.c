
long FUN_0134aa20(ulong param_1)

{
  long lVar1;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41) {
    if ((*(uint *)(param_1 + 3) >> 1 & 0x3fffffff) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(long *)(param_1 + 7);
      if ((*(uint *)(param_1 + 3) & 1) != 0) {
        lVar1 = -lVar1;
      }
    }
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1c40));
}

