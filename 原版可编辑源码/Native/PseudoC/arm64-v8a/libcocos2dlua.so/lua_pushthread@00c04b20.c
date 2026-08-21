
bool lua_pushthread(ulong param_1)

{
  ulong uVar1;
  
  **(ulong **)(param_1 + 0x28) = param_1 | 0xfffc800000000000;
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (*(ulong *)(param_1 + 0x30) <= uVar1) {
    FUN_00bfe164();
  }
  return param_1 == *(ulong *)(*(long *)(param_1 + 0x10) + 200);
}

