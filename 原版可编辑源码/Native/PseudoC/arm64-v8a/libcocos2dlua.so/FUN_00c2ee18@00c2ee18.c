
long FUN_00c2ee18(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(ulong **)(param_1 + 0x20) < *(ulong **)(param_1 + 0x28)) {
    uVar2 = **(ulong **)(param_1 + 0x20);
    if ((int)((long)uVar2 >> 0x2f) == -0xd) {
      uVar2 = uVar2 & 0x7fffffffffff;
      if (*(char *)(uVar2 + 10) == '\x01') {
        if (*(long *)(uVar2 + 0x30) != 0) {
          lua_pushfstring(param_1,"file (%p)");
          return 1;
        }
        lua_pushlstring(param_1,"file (closed)",0xd);
        return 1;
      }
    }
  }
  lVar1 = FUN_00c2ee00(param_1);
  if (*(ulong **)(lVar1 + 0x20) < *(ulong **)(lVar1 + 0x28)) {
    uVar2 = **(ulong **)(lVar1 + 0x20);
    if ((int)((long)uVar2 >> 0x2f) == -0xd) {
      uVar2 = uVar2 & 0x7fffffffffff;
      if (*(char *)(uVar2 + 10) == '\x01') {
        if (*(long *)(uVar2 + 0x30) != 0) {
          return uVar2 + 0x30;
        }
        goto LAB_00c2ef00;
      }
    }
  }
  lVar1 = FUN_00c2ee00(lVar1);
LAB_00c2ef00:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(lVar1,0x5d3);
}

