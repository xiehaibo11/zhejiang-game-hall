
void FUN_00c2a484(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00c29da0(param_1,2,1);
  lua_settop(param_1,1);
  iVar2 = lua_isstring(param_1,1);
  if ((iVar2 != 0) && (0 < iVar1)) {
    luaL_where(param_1,iVar1);
    lua_pushvalue(param_1,1);
    lua_concat(param_1,2);
  }
  lua_error(param_1);
  return;
}

