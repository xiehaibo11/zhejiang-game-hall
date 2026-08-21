
bool FUN_00a0295c(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  GuoPengFei *this;
  
                    /* try { // try from 00a0295c to 00b02973 has its CatchHandler @ 00a02c80 */
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
                    /* try { // try from 00a0297c to 00b029a3 has its CatchHandler @ 00a02c74 */
    luaL_argerror(param_1,1,"lua_universe_network_TcpConnection_isConnect: expected 1 argument");
  }
  uVar4 = universe::is_class(param_1,1,"un.network.TcpConnection");
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
                    /* try { // try from 00a029cc to 00b029f7 has its CatchHandler @ 00a02c84 */
    luaL_error(param_1,&DAT_012f67e1);
  }
  else {
                    /* try { // try from 00a029b0 to 00b029c7 has its CatchHandler @ 00a02c90 */
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    uVar3 = universe::network::GuoPengFei::isConnect(this);
    lua_pushboolean(param_1,uVar3 & 1);
  }
  return !bVar1;
}

