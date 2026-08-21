
undefined8 FUN_00c2f5f4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = *(ulong **)(param_1 + 0x20);
  if (puVar1 < *(ulong **)(param_1 + 0x28)) {
    if ((int)((long)*puVar1 >> 0x2f) == -0xd) {
      uVar2 = *puVar1 & 0x7fffffffffff;
      if (*(char *)(uVar2 + 10) == '\x01') {
        if (*(long *)(uVar2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfb3a0(param_1,0x5d3);
        }
        if ((int)((long)*(ulong **)(param_1 + 0x28) - (long)puVar1 >> 3) < 0x3d) {
          lua_pushcclosure(param_1,FUN_00c2ec94);
          return 1;
        }
        goto LAB_00c2f66c;
      }
    }
  }
  param_1 = FUN_00c2ee00(param_1);
LAB_00c2f66c:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x3db);
}

