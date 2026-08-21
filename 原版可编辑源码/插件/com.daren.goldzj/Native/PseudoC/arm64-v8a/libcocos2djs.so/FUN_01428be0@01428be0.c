
undefined8 FUN_01428be0(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x26;
  
  if ((param_3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) == 0x41) {
    if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) + 0x1b) >> 2 & 1) == 0) {
      if ((*(uint *)(param_3 + 3) >> 1 & 0x3fffffff) == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(long *)(param_3 + 7);
        if ((*(uint *)(param_3 + 3) & 1) != 0) {
          lVar2 = -lVar2;
        }
      }
      *(long *)(*(long *)(param_1 + 0x27) + (ulong)*(uint *)(param_1 + 0x2f) + param_2 * 8) = lVar2;
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1c40),param_1,param_2);
}

