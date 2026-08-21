
int FUN_01349ae0(long param_1)

{
  long unaff_x26;
  
  if ((*(uint *)(param_1 + 3) & 0xc0000002) == 0) {
    return (*(uint *)(param_1 + 3) >> 3 & 0xffffff) * 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2190));
}

