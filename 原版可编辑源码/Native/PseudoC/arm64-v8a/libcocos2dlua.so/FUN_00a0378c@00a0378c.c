
bool FUN_00a0378c(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  
  iVar2 = lua_gettop();
                    /* try { // try from 00a037a4 to 00b037f3 has its CatchHandler @ 00a037a4
                       catch() { ... } // from try @ 00a037a4 with catch @ 00a037a4
                       catch() { ... } // from try @ 00a03850 with catch @ 00a037a4
                       catch() { ... } // from try @ 00a03894 with catch @ 00a037a4 */
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_IStream_getSize: expected 1 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_network_IStream_writeString: invalid \'cobj\'");
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::network::AUpdates::getSize(this);
    lua_pushnumber((double)uVar3,param_1);
                    /* try { // try from 00a037f4 to 00b0384f has its CatchHandler @ 00a038d4 */
  }
  return !bVar1;
}

