
void FUN_00c276a0(long param_1)

{
  uint uVar1;
  int local_8;
  uint local_4;
  
  FUN_00c26828(param_1,&local_8);
  FUN_00c26d5c(param_1,&local_8,0);
  for (uVar1 = *(uint *)(**(long **)(param_1 + 0x50) + (ulong)local_4 * 0x18); uVar1 >> 0x1c == 8;
      uVar1 = *(uint *)(**(long **)(param_1 + 0x50) + (ulong)(ushort)uVar1 * 0x18)) {
  }
  if ((uVar1 & 0xfc000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00c2520c(param_1,0x219);
  }
  if (local_8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00c2520c(param_1,0xb92);
  }
  return;
}

