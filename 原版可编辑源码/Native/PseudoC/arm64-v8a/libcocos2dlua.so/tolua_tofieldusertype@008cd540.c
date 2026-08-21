
undefined8
tolua_tofieldusertype(undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  lua_pushnumber((double)param_3);
  lua_gettable(param_1,param_2);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)lua_touserdata(param_1,0xffffffff);
    param_4 = *puVar2;
  }
  lua_settop(param_1,0xfffffffe);
  return param_4;
}

