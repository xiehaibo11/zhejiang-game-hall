
void tolua_remove_value_from_root(undefined8 param_1,undefined8 param_2)

{
  lua_pushstring(param_1,"tolua_value_root");
  lua_rawget(param_1,0xffffd8f0);
  lua_pushlightuserdata(param_1,param_2);
  lua_pushnil(param_1);
  lua_rawset(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffe);
  return;
}

