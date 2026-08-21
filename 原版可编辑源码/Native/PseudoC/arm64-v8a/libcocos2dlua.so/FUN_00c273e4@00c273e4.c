
void FUN_00c273e4(long param_1,long param_2)

{
  uint uVar1;
  
  FUN_00c26828();
  FUN_00c26d5c(param_1,param_2,0);
  for (uVar1 = *(uint *)(**(long **)(param_1 + 0x50) + (ulong)*(uint *)(param_2 + 4) * 0x18);
      uVar1 >> 0x1c == 8;
      uVar1 = *(uint *)(**(long **)(param_1 + 0x50) + (ulong)(ushort)uVar1 * 0x18)) {
  }
  if ((uVar1 & 0xfc000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00c2520c(param_1,0x219);
  }
  return;
}

