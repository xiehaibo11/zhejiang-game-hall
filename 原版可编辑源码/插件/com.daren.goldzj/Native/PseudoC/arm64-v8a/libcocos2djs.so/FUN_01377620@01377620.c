
long FUN_01377620(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x26;
  
  lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x27);
  FUN_013f9920(lVar1,param_2,*(undefined8 *)(unaff_x26 + 0xc0));
  if ((**(long **)(unaff_x26 + 0x1478) == 0) && (**(char **)(unaff_x26 + 0x1498) == '\0')) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1d58));
}

