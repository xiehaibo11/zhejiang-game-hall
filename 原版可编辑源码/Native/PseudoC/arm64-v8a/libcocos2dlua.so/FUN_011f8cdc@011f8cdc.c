
void FUN_011f8cdc(long param_1,ulong param_2)

{
  if ((param_2 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3)) &&
     (*(long *)(*(long *)(param_1 + 0x10) + param_2 * 8) != 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00cc7c00();
}

