
undefined8 FUN_009d03d4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = lua_gettop();
  if (iVar1 != 1) {
    luaL_argerror(param_1,1,"expected 1 argument");
  }
  lua_pushvalue(param_1,0xffffd8ed);
  uVar2 = 1;
  lua_insert(param_1,1);
  iVar1 = lua_pcall(param_1,1,1,0);
  if (iVar1 != 0) {
    if (iVar1 != 2) {
      uVar2 = luaL_error(param_1,&DAT_012f08fc);
      return uVar2;
    }
    lua_pushnil(param_1);
    lua_insert(param_1,0xfffffffe);
    uVar2 = 2;
  }
  return uVar2;
}

