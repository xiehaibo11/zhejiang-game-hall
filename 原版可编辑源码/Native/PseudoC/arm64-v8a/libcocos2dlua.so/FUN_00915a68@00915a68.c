
uint FUN_00915a68(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = luaL_checkinteger(param_1,1);
  iVar2 = lua_gettop(param_1);
  return iVar2 + ~uVar1 & ((int)(iVar2 + ~uVar1) >> 0x1f ^ 0xffffffffU);
}

