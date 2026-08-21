
void FUN_00a0257c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  GuoPengFei *this;
  undefined8 uVar5;
  uint local_5c;
  ulong local_58;
  char *pcStack_50;
  int local_44;
  int local_40;
  int iStack_3c;
  long local_38;
  
                    /* try { // try from 00a02588 to 00b0263f has its CatchHandler @ 00a02588
                       catch() { ... } // from try @ 00a02588 with catch @ 00a02588
                       catch() { ... } // from try @ 00a026c0 with catch @ 00a02588 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 < 5) {
    luaL_argerror(param_1,5,&DAT_012f64f7);
  }
  uVar4 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 00a026c0 to 00b0275b has its CatchHandler @ 00a02588 */
    luaL_error(param_1,"lua_universe_network_TcpConnection_sendMessagePB: invalid \'cobj\'");
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    uVar4 = universe::get_int(param_1,2,&iStack_3c,
                              "lua_universe_network_TcpConnection_sendMessagePB");
                    /* try { // try from 00a02640 to 00b02673 has its CatchHandler @ 00a02740 */
    if (((((uVar4 & 1) != 0) &&
         (uVar4 = universe::get_int(param_1,3,&local_40,
                                    "lua_universe_network_TcpConnection_sendMessagePB"),
         (uVar4 & 1) != 0)) &&
        (uVar4 = universe::get_int(param_1,4,&local_44,
                                   "lua_universe_network_TcpConnection_sendMessagePB"),
        (uVar4 & 1) != 0)) &&
       (uVar4 = universe::get_cstr(param_1,5,&pcStack_50,&local_58,
                                   "lua_universe_network_TcpConnection_sendMessagePB"),
       (uVar4 & 1) != 0)) {
      local_5c = 0;
      iVar2 = lua_gettop(param_1);
      uVar3 = 0;
                    /* try { // try from 00a02674 to 00b02687 has its CatchHandler @ 00a0270c */
                    /* try { // try from 00a0268c to 00b026bf has its CatchHandler @ 00a02710 */
      if ((iVar2 < 6) ||
         (uVar4 = universe::get_uint(param_1,6,&local_5c,
                                     "lua_universe_network_TcpConnection_sendMessagePB"),
         uVar3 = local_5c, (uVar4 & 1) != 0)) {
        uVar3 = universe::network::GuoPengFei::sendMessagePB
                          (this,iStack_3c,local_40,local_44,pcStack_50,local_58,uVar3);
        lua_pushboolean(param_1,uVar3 & 1);
        uVar5 = 1;
        goto LAB_00a026d0;
      }
    }
  }
  uVar5 = 0;
LAB_00a026d0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

