
bool FUN_00a04be8(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  OStream *this;
  undefined8 uVar4;
  
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_OStream_readAll: expected 1 argument");
  }
                    /* try { // try from 00a04c1c to 00b04c4f has its CatchHandler @ 00a04d1c */
  uVar3 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_network_OStream_readAll: invalid \'cobj\'");
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    uVar3 = universe::network::OStream::getAvailableSize(this);
                    /* try { // try from 00a04c50 to 00b04c63 has its CatchHandler @ 00a04ce8 */
    uVar4 = universe::network::OStream::getReadData(this);
    lua_pushlstring(param_1,uVar4,uVar3);
                    /* try { // try from 00a04c68 to 00b04c9b has its CatchHandler @ 00a04cec */
    universe::network::OStream::pop(this,uVar3);
  }
                    /* try { // try from 00a04c9c to 00b04d37 has its CatchHandler @ 00a04aa4 */
  return !bVar1;
}

