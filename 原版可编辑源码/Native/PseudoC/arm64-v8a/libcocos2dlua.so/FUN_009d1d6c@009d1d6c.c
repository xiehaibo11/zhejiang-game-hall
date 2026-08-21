
undefined8 FUN_009d1d6c(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  lua_pushvalue(param_1,0xffffd8ed);
  lua_insert(param_1,1);
  iVar1 = lua_gettop(param_1);
  iVar1 = lua_pcall(param_1,iVar1 + -1,0xffffffff,0);
  if (iVar1 != 0) {
    iVar1 = lua_type(param_1,0xffffffff);
    if (iVar1 == 5) {
      lua_pushnumber(0x3ff0000000000000,param_1);
      lua_gettable(param_1,0xfffffffe);
      lua_pushnil(param_1);
      lua_insert(param_1,0xfffffffe);
      uVar2 = 2;
    }
    else {
      lua_error(param_1);
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar2 = lua_gettop(param_1);
  return uVar2;
}

