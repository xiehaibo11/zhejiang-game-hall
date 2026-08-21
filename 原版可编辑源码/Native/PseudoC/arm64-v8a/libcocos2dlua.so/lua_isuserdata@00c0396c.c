
bool lua_isuserdata(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)FUN_00c03214();
  iVar2 = (int)((long)*puVar1 >> 0x2f);
  return iVar2 == -4 || iVar2 == -0xd;
}

