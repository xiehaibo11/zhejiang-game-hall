
void FUN_009d6d84(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_2 + 0x10) & 0xf000) - 0x1000;
  if (uVar1 >> 0xe < 3) {
    lua_pushstring(param_1,(&PTR_DAT_016a0020)[uVar1 >> 0xc]);
    return;
  }
  lua_pushstring(param_1,"other");
  return;
}

