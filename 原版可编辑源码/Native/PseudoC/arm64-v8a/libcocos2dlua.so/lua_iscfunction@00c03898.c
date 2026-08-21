
bool lua_iscfunction(void)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)FUN_00c03214();
  if ((int)((long)*puVar1 >> 0x2f) != -9) {
    return false;
  }
  return *(char *)((*puVar1 & 0x7fffffffffff) + 10) != '\0';
}

