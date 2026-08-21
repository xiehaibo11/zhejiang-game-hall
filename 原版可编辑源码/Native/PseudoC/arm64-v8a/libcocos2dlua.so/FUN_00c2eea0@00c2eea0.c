
long FUN_00c2eea0(long param_1)

{
  ulong uVar1;
  
  if (*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) {
    uVar1 = **(ulong **)(param_1 + 0x20);
    if ((int)((long)uVar1 >> 0x2f) == -0xd) {
      uVar1 = uVar1 & 0x7fffffffffff;
      if (*(char *)(uVar1 + 10) == '\x01') {
        if (*(long *)(uVar1 + 0x30) != 0) {
          return uVar1 + 0x30;
        }
        goto LAB_00c2ef00;
      }
    }
  }
  param_1 = FUN_00c2ee00(param_1);
LAB_00c2ef00:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x5d3);
}

