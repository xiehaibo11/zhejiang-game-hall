
undefined4 tolua_getfieldboolean(undefined8 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  lua_pushnumber((double)param_3);
  lua_gettable(param_1,param_2);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = lua_toboolean(param_1,0xffffffff);
  }
  lua_settop(param_1,0xfffffffe);
  return uVar2;
}

