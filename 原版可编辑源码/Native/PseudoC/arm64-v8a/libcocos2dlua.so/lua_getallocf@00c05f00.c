
undefined8 lua_getallocf(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return *(undefined8 *)(lVar1 + 0x10);
}

