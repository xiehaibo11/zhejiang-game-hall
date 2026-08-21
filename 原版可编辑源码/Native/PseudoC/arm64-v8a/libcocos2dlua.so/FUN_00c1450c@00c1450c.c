
ulong FUN_00c1450c(long param_1)

{
  ulong uVar1;
  
  if ((*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) &&
     (uVar1 = **(ulong **)(param_1 + 0x20), (int)((long)uVar1 >> 0x2f) == -0xb)) {
    return uVar1 & 0x7fffffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,10);
}

