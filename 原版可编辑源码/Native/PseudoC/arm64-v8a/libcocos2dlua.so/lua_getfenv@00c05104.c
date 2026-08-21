
void lua_getfenv(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar2 = *puVar1;
  iVar3 = (int)((long)uVar2 >> 0x2f);
  if ((iVar3 == -9) || (iVar3 == -0xd)) {
    **(ulong **)(param_1 + 0x28) = *(ulong *)((uVar2 & 0x7fffffffffff) + 0x10) | 0xfffa000000000000;
    uVar2 = *(long *)(param_1 + 0x28) + 8;
    *(ulong *)(param_1 + 0x28) = uVar2;
    if (*(ulong *)(param_1 + 0x30) <= uVar2) goto LAB_00c05194;
  }
  else {
    if (iVar3 == -7) {
      **(ulong **)(param_1 + 0x28) =
           *(ulong *)((uVar2 & 0x7fffffffffff) + 0x48) | 0xfffa000000000000;
    }
    else {
      **(undefined8 **)(param_1 + 0x28) = 0xffffffffffffffff;
    }
    uVar2 = *(long *)(param_1 + 0x28) + 8;
    *(ulong *)(param_1 + 0x28) = uVar2;
    if (*(ulong *)(param_1 + 0x30) <= uVar2) {
LAB_00c05194:
      FUN_00bfe164(param_1);
      return;
    }
  }
  return;
}

