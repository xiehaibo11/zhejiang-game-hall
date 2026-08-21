
undefined8 FUN_00c31068(undefined8 param_1)

{
  int iVar1;
  
  luaL_checktype(param_1,1,5);
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 == 0) {
    lua_createtable(param_1,0,1);
    lua_pushvalue(param_1,0xffffffff);
    lua_setmetatable(param_1,1);
  }
  lua_pushvalue(param_1,0xffffd8ee);
  lua_setfield(param_1,0xfffffffe,"__index");
  return 0;
}

