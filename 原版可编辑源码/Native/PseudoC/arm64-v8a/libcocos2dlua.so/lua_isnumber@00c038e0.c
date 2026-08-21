
bool lua_isnumber(void)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  undefined1 auStack_8 [8];
  
  puVar3 = (ulong *)FUN_00c03214();
  bVar1 = true;
  uVar4 = (uint)((long)*puVar3 >> 0x2f);
  if ((0xfffffff2 < uVar4) && (bVar1 = false, uVar4 == 0xfffffffb)) {
    iVar2 = FUN_00c1f7ac(*puVar3 & 0x7fffffffffff,auStack_8);
    return iVar2 != 0;
  }
  return bVar1;
}

