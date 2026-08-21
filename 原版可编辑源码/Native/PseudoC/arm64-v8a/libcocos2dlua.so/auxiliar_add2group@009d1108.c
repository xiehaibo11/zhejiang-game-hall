
void auxiliar_add2group(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  lua_getfield(param_1,0xffffd8f0,param_2);
  lua_pushstring(param_1,param_3);
  lua_pushboolean(param_1,1);
  lua_rawset(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffe);
  return;
}

