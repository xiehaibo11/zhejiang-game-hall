
ulong lua_touserdata(void)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar2 = *puVar1 & 0x7fffffffffff;
  iVar3 = (int)((long)*puVar1 >> 0x2f);
  if (iVar3 != -0xd) {
    if (iVar3 != -4) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return uVar2 + 0x30;
}

