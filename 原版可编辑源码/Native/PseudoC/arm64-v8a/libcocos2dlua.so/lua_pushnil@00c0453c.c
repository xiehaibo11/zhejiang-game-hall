
void lua_pushnil(long param_1)

{
  ulong uVar1;
  
  **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    return;
  }
  FUN_00bfe164();
  return;
}

