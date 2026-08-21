
undefined8 FUN_00a02a68(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  GuoPengFei *this;
  
                    /* try { // try from 00a02a74 to 00b02a9f has its CatchHandler @ 00a02c6c */
  iVar1 = lua_gettop();
  if (iVar1 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_TcpConnection_remove: expected 1 argument");
  }
  uVar2 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar2 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_TcpConnection_remove: invalid \'cobj\'");
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    universe::network::GuoPengFei::remove(this);
  }
  return 0;
}

