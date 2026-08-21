
bool FUN_00a04998(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  OStream *this;
  
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_OStream_getSize: expected 1 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
                    /* try { // try from 00a04a0c to 00b04a57 has its CatchHandler @ 00a04a0c
                       catch() { ... } // from try @ 00a04a0c with catch @ 00a04a0c
                       catch() { ... } // from try @ 00a04a5c with catch @ 00a04a0c */
    luaL_error(param_1,"lua_universe_network_OStream_getSize: invalid \'cobj\'");
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    uVar3 = universe::network::OStream::getSize(this);
    lua_pushnumber((double)uVar3,param_1);
  }
  return !bVar1;
}

