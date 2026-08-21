
bool FUN_009dabe8(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Commander_isAllTaskComplete: expected 1 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.Commander");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_Commander_isAllTaskComplete: invalid \'cobj\'");
  }
  else {
    lVar4 = universe::get_instance(param_1,1);
    lua_pushboolean(param_1,*(long *)(lVar4 + 0x10) == *(long *)(lVar4 + 0x18));
  }
  return !bVar1;
}

