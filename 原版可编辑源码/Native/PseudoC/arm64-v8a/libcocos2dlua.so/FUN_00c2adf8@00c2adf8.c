
undefined8 FUN_00c2adf8(ulong param_1)

{
  ulong uVar1;
  
  if (*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) {
    uVar1 = **(ulong **)(param_1 + 0x20);
    if ((int)((long)uVar1 >> 0x2f) == -7) {
      uVar1 = uVar1 & 0x7fffffffffff;
      if (uVar1 == param_1) {
        lua_pushstring(param_1,"running");
        return 1;
      }
      if (*(char *)(uVar1 + 0xb) != '\x01') {
        if (*(char *)(uVar1 + 0xb) == '\0') {
          if (*(long *)(uVar1 + 0x38) + 0x10U < *(ulong *)(uVar1 + 0x20)) {
            lua_pushstring(param_1,"normal");
            return 1;
          }
          if (*(ulong *)(uVar1 + 0x20) != *(ulong *)(uVar1 + 0x28)) goto LAB_00c2ae5c;
        }
        lua_pushstring(param_1,&DAT_01411880);
        return 1;
      }
LAB_00c2ae5c:
      lua_pushstring(param_1,"suspended");
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb458(param_1,1,0x236);
}

