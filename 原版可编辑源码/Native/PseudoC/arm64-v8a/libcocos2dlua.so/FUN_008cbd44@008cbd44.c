
undefined8 FUN_008cbd44(undefined8 param_1)

{
  int iVar1;
  
  lua_getfenv(param_1,0xffffffff);
  iVar1 = lua_rawequal(param_1,0xffffffff,0xffffd8f0);
  if (iVar1 != 0) {
    lua_settop(param_1,0xfffffffe);
    lua_pushnil(param_1);
  }
  return 1;
}

