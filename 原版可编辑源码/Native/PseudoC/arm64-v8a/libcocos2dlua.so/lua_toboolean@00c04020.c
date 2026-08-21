
bool lua_toboolean(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00c03214();
  return (uint)((long)*puVar1 >> 0x2f) < 0xfffffffe;
}

