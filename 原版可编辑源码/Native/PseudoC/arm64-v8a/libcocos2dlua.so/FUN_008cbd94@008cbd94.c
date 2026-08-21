
undefined8 FUN_008cbd94(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_isstring(param_1,2);
  if (iVar1 == 0) {
    lua_pushstring(param_1,"Invalid argument #2 to getcfunction: string expected.");
    lua_error(param_1);
  }
  iVar1 = lua_getmetatable(param_1,1);
  if (iVar1 == 0) {
    lua_pushstring(param_1,"Invalid argument #1 to getcfunction: class or object expected.");
    lua_error(param_1);
  }
  while( true ) {
    lua_pushstring(param_1,".backup");
    lua_rawget(param_1,0xfffffffe);
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 != 0) {
      lua_pushvalue(param_1,2);
      lua_rawget(param_1,0xfffffffe);
      iVar1 = lua_type(param_1,0xffffffff);
      if (iVar1 != 0) {
        return 1;
      }
      lua_settop(param_1,0xfffffffe);
    }
    lua_settop(param_1,0xfffffffe);
    uVar2 = lua_getmetatable(param_1,0xffffffff);
    if ((int)uVar2 == 0) break;
    lua_remove(param_1,0xfffffffe);
  }
  return uVar2;
}

