
void lua_createtable(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20))
  {
    FUN_00c19f80();
  }
  puVar2 = *(ulong **)(param_1 + 0x28);
  uVar1 = FUN_00c1b8ec(param_1,param_2,param_3);
  *puVar2 = uVar1 | 0xfffa000000000000;
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    return;
  }
  FUN_00bfe164(param_1);
  return;
}

