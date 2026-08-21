
undefined8 FUN_009cc014(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = lua_isuserdata(param_1,1);
  if (iVar1 != 0) {
    lua_pushvalue(param_1,1);
    iVar1 = lua_getmetatable(param_1,0xffffffff);
    while (iVar1 != 0) {
      lua_remove(param_1,0xfffffffe);
      lua_pushstring(param_1,&DAT_012efc25);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 == 6) {
        lua_pushvalue(param_1,1);
        lua_pushvalue(param_1,2);
        lua_call(param_1,2,1);
        return 1;
      }
      lua_settop(param_1,3);
      iVar1 = lua_getmetatable(param_1,0xffffffff);
    }
  }
  lua_settop(param_1,3);
  lua_pushboolean(param_1,0);
  return 1;
}

