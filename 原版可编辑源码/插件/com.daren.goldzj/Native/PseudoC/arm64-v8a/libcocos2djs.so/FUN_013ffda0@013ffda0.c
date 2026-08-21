
void FUN_013ffda0(long param_1)

{
  uint uVar1;
  long unaff_x26;
  
  if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7) != 0x42e) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20e8));
  }
  uVar1 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0x7b0));
  if (((uVar1 & 0x80000001) != 0) && ((uVar1 & 1) != 0)) {
    thunk_FUN_0134a790();
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,1,*(undefined8 *)(unaff_x26 + 0x1fe8));
}

