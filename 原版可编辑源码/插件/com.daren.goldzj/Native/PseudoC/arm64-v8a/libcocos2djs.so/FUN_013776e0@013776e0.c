
long FUN_013776e0(long param_1)

{
  uint uVar1;
  long unaff_x26;
  
  uVar1 = *(uint *)(param_1 + 0x27);
  FUN_0139b2c0();
  if ((**(long **)(unaff_x26 + 0x1478) == 0) && (**(char **)(unaff_x26 + 0x1498) == '\0')) {
    return unaff_x26 + (ulong)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1d58));
}

