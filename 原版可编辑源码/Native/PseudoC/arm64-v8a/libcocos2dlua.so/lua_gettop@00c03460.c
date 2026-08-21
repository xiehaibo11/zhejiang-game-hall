
ulong lua_gettop(long param_1)

{
  return (ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20)) >> 3;
}

