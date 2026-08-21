
undefined8 FUN_009cb324(undefined8 param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,&DAT_012a5cc6);
  lua_rawget(param_1,0xfffffffd);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushvalue(param_1,2);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_iscfunction(param_1,0xffffffff);
    if (iVar1 != 0) {
      lua_call(param_1,0,1);
      return 1;
    }
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      return 1;
    }
  }
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 != 0) {
    lua_pushstring(param_1,"__index");
    lua_rawget(param_1,0xfffffffe);
    lua_pushvalue(param_1,1);
    lua_pushvalue(param_1,2);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 6) {
      lua_call(param_1,2,1);
      return 1;
    }
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_gettable(param_1,0xfffffffd);
      return 1;
    }
  }
  lua_pushnil(param_1);
  return 1;
}

