
undefined8 FUN_009d7c28(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,&DAT_012f1765);
  }
  iVar1 = universe::Device::getOsVersion();
  lua_pushinteger(param_1,(long)iVar1);
  return 1;
}

