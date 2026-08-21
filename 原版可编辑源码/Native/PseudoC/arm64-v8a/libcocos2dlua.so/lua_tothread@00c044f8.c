
ulong lua_tothread(void)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)FUN_00c03214();
  uVar2 = *puVar1 & 0x7fffffffffff;
  if ((int)((long)*puVar1 >> 0x2f) != -7) {
    uVar2 = 0;
  }
  return uVar2;
}

