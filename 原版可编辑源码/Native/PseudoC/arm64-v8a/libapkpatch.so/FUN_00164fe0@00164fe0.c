
undefined8 FUN_00164fe0(uint param_1)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  switch(param_1 & 0xf) {
  case 1:
  case 9:
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getTableEntrySize",
            "Can\'t binary search on variable length encoded data.");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  case 2:
  case 10:
    goto code_r0x00165028;
  case 3:
  case 0xb:
    uVar1 = 8;
code_r0x00165028:
    return uVar1;
  case 4:
  case 0xc:
    return 0x10;
  default:
    fprintf((FILE *)0x16d358,"libunwind: %s - %s\n","getTableEntrySize",
            "Unknown DWARF encoding for search table.");
    fflush((FILE *)0x16d358);
                    /* WARNING: Subroutine does not return */
    abort();
  }
}

