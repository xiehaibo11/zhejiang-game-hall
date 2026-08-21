
void FUN_00a02438(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  GuoPengFei *this;
  undefined8 uVar5;
  ulong local_58;
  char *pcStack_50;
  int local_44;
  int local_40;
  int iStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 5) {
    luaL_argerror(param_1,5,
                  "lua_universe_network_TcpConnection_sendMessageData: expected 5 argument");
  }
  uVar4 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 00a02540 to 00b02587 has its CatchHandler @ 00a024f0 */
    luaL_error(param_1,"lua_universe_network_TcpConnection_sendMessageData: invalid \'cobj\'");
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    uVar4 = universe::get_int(param_1,2,&iStack_3c,
                              "lua_universe_network_TcpConnection_sendMessageData");
                    /* try { // try from 00a024f0 to 00b0253b has its CatchHandler @ 00a024f0
                       catch() { ... } // from try @ 00a024f0 with catch @ 00a024f0
                       catch() { ... } // from try @ 00a02540 with catch @ 00a024f0 */
    if (((((uVar4 & 1) != 0) &&
         (uVar4 = universe::get_int(param_1,3,&local_40,
                                    "lua_universe_network_TcpConnection_sendMessageData"),
         (uVar4 & 1) != 0)) &&
        (uVar4 = universe::get_int(param_1,4,&local_44,
                                   "lua_universe_network_TcpConnection_sendMessageData"),
        (uVar4 & 1) != 0)) &&
       (uVar4 = universe::get_cstr(param_1,5,&pcStack_50,&local_58,
                                   "lua_universe_network_TcpConnection_sendMessageData"),
       (uVar4 & 1) != 0)) {
      uVar3 = universe::network::GuoPengFei::sendMessage
                        (this,iStack_3c,local_40,local_44,pcStack_50,local_58);
      lua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
                    /* try { // try from 00a0253c to 00b0253f has its CatchHandler @ 00a02574 */
      goto LAB_00a02554;
    }
  }
  uVar5 = 0;
LAB_00a02554:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00a0253c with catch @ 00a02574 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

