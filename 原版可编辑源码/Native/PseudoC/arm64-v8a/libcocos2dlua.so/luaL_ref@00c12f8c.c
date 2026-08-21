
int luaL_ref(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 + 9999U < 10000) {
    iVar1 = lua_gettop();
    param_2 = iVar1 + param_2 + 1;
  }
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    iVar1 = -1;
  }
  else {
    lua_rawgeti(param_1,param_2,0);
    iVar1 = lua_tointeger(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffe);
    if (iVar1 == 0) {
      iVar1 = lua_objlen(param_1,param_2);
      iVar1 = iVar1 + 1;
    }
    else {
      lua_rawgeti(param_1,param_2,iVar1);
      lua_rawseti(param_1,param_2,0);
    }
    lua_rawseti(param_1,param_2,iVar1);
  }
  return iVar1;
}

