
undefined8 FUN_00a029ec(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  GuoPengFei *this;
  
  iVar1 = lua_gettop();
  if (iVar1 != 1) {
                    /* try { // try from 00a02a14 to 00b02a2b has its CatchHandler @ 00a02c8c */
    luaL_argerror(param_1,1,"lua_universe_network_TcpConnection_close: expected 1 argument");
  }
  uVar2 = universe::is_class(param_1,1,"un.network.TcpConnection");
                    /* try { // try from 00a02a30 to 00b02a4f has its CatchHandler @ 00a02c88 */
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 00a02a54 to 00b02a6b has its CatchHandler @ 00a02c70 */
    luaL_error(param_1,&LAB_012f685c);
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    universe::network::GuoPengFei::close(this);
  }
  return 0;
}

