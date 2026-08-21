
bool FUN_00a028d0(lua_State *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,&DAT_012f671e);
  }
  uVar3 = universe::is_class(param_1,1,"un.network.TcpConnection");
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
                    /* try { // try from 00a02940 to 00b02957 has its CatchHandler @ 00a02c94 */
    luaL_error(param_1,"lua_universe_network_TcpConnection_getSRSType: invalid \'cobj\'");
  }
  else {
    lVar4 = universe::get_instance(param_1,1);
    lua_pushinteger(param_1,(long)*(int *)(lVar4 + 0x418));
  }
  return !bVar1;
}

