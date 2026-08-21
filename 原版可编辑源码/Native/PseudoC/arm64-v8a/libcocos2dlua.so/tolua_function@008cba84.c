
void tolua_function(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  lua_pushstring();
  lua_pushcclosure(param_1,param_3,0);
  lua_rawset(param_1,0xfffffffd);
  return;
}

