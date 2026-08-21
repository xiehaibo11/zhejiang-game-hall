
void FUN_009cc1bc(undefined8 param_1)

{
  int iVar1;
  
  lua_getfenv(param_1,1);
  iVar1 = lua_rawequal(param_1,0xffffffff,0xffffd8f0);
  if (iVar1 != 0) {
    lua_settop(param_1,0xfffffffe);
    lua_createtable(param_1,0,0);
    lua_pushvalue(param_1,0xffffffff);
    lua_setfenv(param_1,1);
  }
  lua_insert(param_1,0xfffffffd);
  lua_settable(param_1,0xfffffffd);
  lua_settop(param_1,0xfffffffe);
  return;
}

