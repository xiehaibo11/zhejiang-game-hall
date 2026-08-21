
undefined8 lua_setfenv(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar2 = *puVar1;
  iVar4 = (int)((long)uVar2 >> 0x2f);
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x28) + -8) & 0x7fffffffffff;
  if ((iVar4 == -9) || (iVar4 == -0xd)) {
    *(ulong *)((uVar2 & 0x7fffffffffff) + 0x10) = uVar3;
  }
  else {
    if (iVar4 != -7) {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
      return 0;
    }
    *(ulong *)((uVar2 & 0x7fffffffffff) + 0x48) = uVar3;
  }
  if (((*(byte *)(uVar3 + 8) & 3) != 0) &&
     ((*(byte *)((*puVar1 & 0x7fffffffffff) + 8) >> 2 & 1) != 0)) {
    FUN_00c1a1ac(*(undefined8 *)(param_1 + 0x10));
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -8;
  return 1;
}

