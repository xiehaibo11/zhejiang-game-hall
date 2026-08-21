
undefined8 lua_getmetatable(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)FUN_00c03214();
  uVar1 = (uint)((long)*puVar2 >> 0x2f);
  if ((uVar1 == 0xfffffff4) || (uVar1 == 0xfffffff3)) {
    uVar4 = *(ulong *)((*puVar2 & 0x7fffffffffff) + 0x20);
  }
  else {
    uVar3 = 0x23;
    if (0xfffffff2 < uVar1) {
      uVar3 = 0x15 - uVar1;
    }
    uVar4 = *(ulong *)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 8 + 0x170);
  }
  if (uVar4 != 0) {
    **(ulong **)(param_1 + 0x28) = uVar4 | 0xfffa000000000000;
    uVar4 = *(long *)(param_1 + 0x28) + 8;
    *(ulong *)(param_1 + 0x28) = uVar4;
    if (*(ulong *)(param_1 + 0x30) <= uVar4) {
      FUN_00bfe164(param_1);
    }
    return 1;
  }
  return 0;
}

