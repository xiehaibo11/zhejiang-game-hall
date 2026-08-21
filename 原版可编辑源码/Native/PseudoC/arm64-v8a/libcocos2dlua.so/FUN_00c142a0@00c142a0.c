
void FUN_00c142a0(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  
  puVar2 = *(ulong **)(param_1 + 0x20);
  if (puVar2 < *(ulong **)(param_1 + 0x28)) {
    if ((int)((long)*puVar2 >> 0x2f) == -0xd) {
      uVar1 = *puVar2 & 0x7fffffffffff;
      if (*(char *)(uVar1 + 10) == '\x02') {
        if (puVar2 + 1 < *(ulong **)(param_1 + 0x28)) {
          if ((int)((long)puVar2[1] >> 0x2f) == -5) {
            FUN_00c24ac4(param_1,uVar1 + 0x30,puVar2[1] & 0x7fffffffffff);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_00bfb554(param_1,2,4);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,7);
}

