
bool FUN_00a038ac(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
                    /* catch() { ... } // from try @ 00a037f4 with catch @ 00a038d4
                       catch() { ... } // from try @ 00a03880 with catch @ 00a038d4 */
    luaL_argerror(param_1,1,"lua_universe_network_IStream_getAvailableSize: expected 1 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_network_IStream_getAvailableSize: invalid \'cobj\'");
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::network::AUpdates::getAvailableSize(this);
    lua_pushnumber((double)uVar3,param_1);
  }
  return !bVar1;
}

