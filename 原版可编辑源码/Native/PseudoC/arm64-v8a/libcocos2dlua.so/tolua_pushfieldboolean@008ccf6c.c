
void tolua_pushfieldboolean(undefined8 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  lua_pushnumber((double)param_3);
  lua_pushboolean(param_1,param_4);
  lua_settable(param_1,param_2);
  return;
}

