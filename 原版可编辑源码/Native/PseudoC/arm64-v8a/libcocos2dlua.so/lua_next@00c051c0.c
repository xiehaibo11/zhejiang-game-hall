
int lua_next(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong *puVar3;
  
  puVar3 = (ulong *)FUN_00c03214();
  iVar2 = FUN_00c1c788(param_1,*puVar3 & 0x7fffffffffff,*(long *)(param_1 + 0x28) + -8);
  if (iVar2 == 0) {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
    return 0;
  }
  uVar1 = *(long *)(param_1 + 0x28) + 8;
  *(ulong *)(param_1 + 0x28) = uVar1;
  if (uVar1 < *(ulong *)(param_1 + 0x30)) {
    return iVar2;
  }
  FUN_00bfe164(param_1);
  return iVar2;
}

