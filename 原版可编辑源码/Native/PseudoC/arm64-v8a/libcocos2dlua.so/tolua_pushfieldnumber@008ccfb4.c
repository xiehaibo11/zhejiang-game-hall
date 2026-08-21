
void tolua_pushfieldnumber(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  lua_pushnumber((double)param_4);
  lua_pushnumber(param_1,param_2);
  lua_settable(param_2,param_3);
  return;
}

