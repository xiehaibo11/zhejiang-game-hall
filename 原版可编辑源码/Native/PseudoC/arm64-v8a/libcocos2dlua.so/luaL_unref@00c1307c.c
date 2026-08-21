
void luaL_unref(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    if (param_2 + 9999U < 10000) {
      iVar1 = lua_gettop();
      param_2 = iVar1 + param_2 + 1;
    }
    lua_rawgeti(param_1,param_2,0);
    lua_rawseti(param_1,param_2,param_3);
    lua_pushinteger(param_1,(long)param_3);
    lua_rawseti(param_1,param_2,0);
    return;
  }
  return;
}

