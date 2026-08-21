
void lua_pushvalue(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  puVar2 = (undefined8 *)FUN_00c03214();
  uVar3 = *(ulong *)(param_1 + 0x30);
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *puVar4 = *puVar2;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (uVar1 < uVar3) {
    return;
  }
  FUN_00bfe164(param_1);
  return;
}

