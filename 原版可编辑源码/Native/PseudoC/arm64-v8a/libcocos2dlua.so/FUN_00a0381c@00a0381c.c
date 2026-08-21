
bool FUN_00a0381c(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_IStream_getLength: expected 1 argument");
  }
                    /* try { // try from 00a03850 to 00b0387f has its CatchHandler @ 00a037a4 */
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
                    /* try { // try from 00a03894 to 00b038ef has its CatchHandler @ 00a037a4 */
    luaL_error(param_1,"lua_universe_network_IStream_getLength: invalid \'cobj\'");
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::network::AUpdates::getLength(this);
                    /* try { // try from 00a03880 to 00b03893 has its CatchHandler @ 00a038d4 */
    lua_pushnumber((double)uVar3,param_1);
  }
  return !bVar1;
}

