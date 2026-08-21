
void tolua_pushfieldusertype
               (undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,
               undefined8 param_5)

{
  lua_pushnumber((double)param_3);
  tolua_pushusertype_internal(param_1,param_4,param_5,0);
  lua_settable(param_1,param_2);
  return;
}

