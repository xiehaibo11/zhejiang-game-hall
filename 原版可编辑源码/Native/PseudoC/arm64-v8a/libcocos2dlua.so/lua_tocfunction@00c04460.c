
undefined8 lua_tocfunction(void)

{
  ulong *puVar1;
  ulong uVar2;
  
  puVar1 = (ulong *)FUN_00c03214();
  if (((int)((long)*puVar1 >> 0x2f) == -9) &&
     (uVar2 = *puVar1 & 0x7fffffffffff, **(byte **)(uVar2 + 0x20) - 0x5f < 2)) {
    return *(undefined8 *)(uVar2 + 0x28);
  }
  return 0;
}

