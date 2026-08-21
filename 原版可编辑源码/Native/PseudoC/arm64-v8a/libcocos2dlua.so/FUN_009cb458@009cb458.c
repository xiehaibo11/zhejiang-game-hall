
undefined8 FUN_009cb458(undefined8 param_1)

{
  int iVar1;
  
  lua_pushstring(param_1,&DAT_012a5ccb);
  lua_rawget(param_1,0xfffffffc);
  iVar1 = lua_type(param_1,0xffffffff);
  if (iVar1 == 5) {
    lua_pushvalue(param_1,2);
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_iscfunction(param_1,0xffffffff);
    if (iVar1 != 0) {
      lua_pushvalue(param_1,1);
      lua_pushvalue(param_1,3);
      lua_call(param_1,2,0);
      return 0;
    }
  }
  iVar1 = lua_getmetatable(param_1,1);
  if ((iVar1 != 0) && (iVar1 = lua_getmetatable(param_1,0xffffffff), iVar1 != 0)) {
    lua_pushstring(param_1,"__newindex");
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 6) {
      lua_pushvalue(param_1,1);
      lua_pushvalue(param_1,2);
      lua_pushvalue(param_1,3);
      lua_call(param_1,3,0);
    }
  }
  lua_settop(param_1,3);
  lua_rawset(param_1,0xfffffffd);
  return 0;
}

