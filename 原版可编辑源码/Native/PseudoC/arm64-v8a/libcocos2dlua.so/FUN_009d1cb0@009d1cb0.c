
undefined8 FUN_009d1cb0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_toboolean(param_1,1);
  if (iVar1 != 0) {
    uVar2 = lua_gettop(param_1);
    return uVar2;
  }
  lua_pushvalue(param_1,0xffffd8ed);
  lua_pcall(param_1,0,0,0);
  lua_settop(param_1,2);
  lua_createtable(param_1,0,0);
  lua_pushnumber(0x3ff0000000000000,param_1);
  lua_pushvalue(param_1,0xfffffffd);
  lua_settable(param_1,0xfffffffd);
  lua_insert(param_1,0xfffffffe);
  lua_settop(param_1,0xfffffffe);
  lua_error(param_1);
  return 0;
}

