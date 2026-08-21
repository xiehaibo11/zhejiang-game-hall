
undefined8 FUN_00a04ca0(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  OStream *this;
  
  iVar1 = lua_gettop();
  if (iVar1 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_OStream_resetCursor: expected 1 argument");
  }
  uVar2 = universe::is_class(param_1,1,"un.network.OStream");
  if ((uVar2 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_OStream_resetCursor: invalid \'cobj\'");
  }
  else {
                    /* catch() { ... } // from try @ 00a04c50 with catch @ 00a04ce8 */
                    /* catch() { ... } // from try @ 00a04c68 with catch @ 00a04cec */
    this = (OStream *)universe::get_instance(param_1,1);
    universe::network::OStream::resetCursor(this);
  }
  return 0;
}

