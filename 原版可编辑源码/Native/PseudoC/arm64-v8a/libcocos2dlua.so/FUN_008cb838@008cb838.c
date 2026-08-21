
int FUN_008cb838(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = luaL_newmetatable();
  if (iVar1 != 0) {
    lua_pushvalue(param_1,0xffffffff);
    lua_pushstring(param_1,param_2);
    lua_settable(param_1,0xffffd8f0);
    tolua_classevents(param_1);
  }
  lua_pushlstring(param_1,".classname",10);
  lua_pushstring(param_1,param_2);
  lua_rawset(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffe);
  return iVar1;
}

