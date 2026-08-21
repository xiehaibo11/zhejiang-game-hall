
bool lua_isstring(void)

{
  undefined8 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined8 *)FUN_00c03214();
  uVar2 = (uint)((long)*puVar1 >> 0x2f);
  return uVar2 < 0xfffffff3 || uVar2 == 0xfffffffb;
}

