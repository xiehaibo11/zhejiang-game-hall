
undefined8 FUN_00c2e7f0(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  puVar1 = (ulong *)FUN_00c29a84(param_1,1);
  if (((int)((long)*puVar1 >> 0x2f) == -0xd) &&
     (uVar3 = *puVar1 & 0x7fffffffffff, *(char *)(uVar3 + 10) == '\x01')) {
    if (*(long *)(uVar3 + 0x30) != 0) {
      lua_pushlstring(param_1,&DAT_01411db0,4);
      return 1;
    }
    lua_pushlstring(param_1,"closed file",0xb);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x28) = puVar2 + 1;
    *puVar2 = 0xffffffffffffffff;
  }
  return 1;
}

