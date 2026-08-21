
undefined8 FUN_00a02ae4(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  GuoPengFei *this;
  
                    /* try { // try from 00a02ae8 to 00b02aff has its CatchHandler @ 00a02c7c */
  iVar1 = lua_gettop();
  if (iVar1 != 1) {
                    /* try { // try from 00a02b04 to 00b02b23 has its CatchHandler @ 00a02c78 */
    luaL_argerror(param_1,1,&DAT_012f690e);
  }
  uVar2 = universe::is_class(param_1,1,"un.network.TcpConnection");
                    /* try { // try from 00a02b28 to 00b02b57 has its CatchHandler @ 00a02c68 */
  if ((uVar2 & 1) == 0) {
    luaL_error(param_1,&DAT_012f6956);
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    universe::network::GuoPengFei::setNotAutoSetup(this);
  }
                    /* try { // try from 00a02b58 to 00b02c0f has its CatchHandler @ 00a028bc */
  return 0;
}

