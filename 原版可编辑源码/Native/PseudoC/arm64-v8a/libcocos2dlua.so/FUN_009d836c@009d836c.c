
undefined8 FUN_009d836c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  if (iVar1 != 0) {
    luaL_argerror(param_1,0,&DAT_012f19e3);
  }
  iVar1 = universe::Device::getPlatform();
  lua_pushnumber((double)(ulong)(long)iVar1,param_1);
  return 1;
}

