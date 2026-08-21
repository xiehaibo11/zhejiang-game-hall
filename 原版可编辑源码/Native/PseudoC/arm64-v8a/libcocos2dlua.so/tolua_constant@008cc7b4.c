
void tolua_constant(undefined8 param_1,undefined8 param_2)

{
  lua_pushstring();
  tolua_pushnumber(param_1,param_2);
  lua_rawset(param_2,0xfffffffd);
  return;
}

