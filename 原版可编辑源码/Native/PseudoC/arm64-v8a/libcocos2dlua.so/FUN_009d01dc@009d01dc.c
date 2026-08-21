
long FUN_009d01dc(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = lua_gettop();
  if (param_2 < iVar1) {
    luaL_argerror(param_1,param_2 + 1,"found too many arguments");
  }
  while (iVar1 = lua_gettop(param_1), iVar1 < param_2) {
    lua_pushnil(param_1);
  }
  lVar2 = lua_touserdata(param_1,0xffffd8ed);
  if (lVar2 == 0) {
    luaL_error(param_1,"BUG: Unable to fetch CJSON configuration");
  }
  return lVar2;
}

