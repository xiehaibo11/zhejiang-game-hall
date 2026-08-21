
ulong lua_newthread(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80();
  }
  uVar2 = FUN_00bfe3dc(param_1);
  **(ulong **)(param_1 + 0x28) = uVar2 | 0xfffc800000000000;
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (*(ulong *)(param_1 + 0x30) <= uVar1) {
    FUN_00bfe164(param_1);
  }
  return uVar2;
}

