
undefined8 FUN_008cbccc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_isuserdata(param_1,0xfffffffe);
  if (iVar1 == 0) {
    lua_pushstring(param_1,"Invalid argument #1 to setpeer: userdata expected.");
    lua_error(param_1);
  }
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 0) {
    lua_settop(param_1,0xfffffffe);
    lua_pushvalue(param_1,0xffffd8f0);
  }
  lua_setfenv(param_1,0xfffffffe);
  return 0;
}

