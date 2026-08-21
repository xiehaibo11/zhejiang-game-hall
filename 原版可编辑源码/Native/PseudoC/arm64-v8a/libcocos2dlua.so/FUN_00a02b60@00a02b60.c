
undefined8 FUN_00a02b60(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  GuoPengFei *this;
  ulong local_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,&DAT_012f6999);
  }
  uVar3 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,0x12f69db);
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    uVar3 = universe::get_cstr(param_1,2,&local_40,&local_48,
                               "lua_universe_network_TcpConnection_setAesKey");
    if ((uVar3 & 1) != 0) {
      universe::network::GuoPengFei::setAesKey(this,local_40,local_48);
    }
  }
                    /* try { // try from 00a02c10 to 00b02c17 has its CatchHandler @ 00a02c84 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00a02c1c to 00b02c23 has its CatchHandler @ 00a02c74 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a02c34 to 00b02c3b has its CatchHandler @ 00a02c6c */
  __stack_chk_fail();
}

