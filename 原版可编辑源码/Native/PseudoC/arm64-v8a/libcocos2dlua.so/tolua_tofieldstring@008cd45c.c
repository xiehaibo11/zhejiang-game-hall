
undefined8 tolua_tofieldstring(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  
  lua_pushnumber((double)param_3);
  lua_gettable(param_1,param_2);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 0) {
    param_4 = lua_tolstring(param_1,0xffffffff,0);
  }
  lua_settop(param_1,0xfffffffe);
  return param_4;
}

