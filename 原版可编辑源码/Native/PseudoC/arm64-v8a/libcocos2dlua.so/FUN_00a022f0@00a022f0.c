
void FUN_00a022f0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  GuoPengFei *this;
  AUpdates *pAVar5;
  undefined8 uVar6;
  int local_44;
  int local_40;
  int iStack_3c;
  long local_38;
  
                    /* try { // try from 00a022f4 to 00b02327 has its CatchHandler @ 00a023f4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 5) {
                    /* try { // try from 00a02328 to 00b0233b has its CatchHandler @ 00a023c0 */
    luaL_argerror(param_1,5,"lua_universe_network_TcpConnection_sendMessage: expected 5 argument");
  }
                    /* try { // try from 00a02340 to 00b02373 has its CatchHandler @ 00a023c4 */
  uVar4 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar4 & 1) == 0) {
LAB_00a023fc:
    luaL_error(param_1,"lua_universe_network_TcpConnection_sendMessage: invalid \'cobj\'");
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    uVar4 = universe::get_int(param_1,2,&iStack_3c,"lua_universe_network_TcpConnection_sendMessage")
    ;
                    /* try { // try from 00a02374 to 00b0240f has its CatchHandler @ 00a0220c */
    if ((((uVar4 & 1) != 0) &&
        (uVar4 = universe::get_int(param_1,3,&local_40,
                                   "lua_universe_network_TcpConnection_sendMessage"),
        (uVar4 & 1) != 0)) &&
       (uVar4 = universe::get_int(param_1,4,&local_44,
                                  "lua_universe_network_TcpConnection_sendMessage"),
       (uVar4 & 1) != 0)) {
                    /* catch() { ... } // from try @ 00a02328 with catch @ 00a023c0 */
      uVar4 = universe::is_class(param_1,5,"un.network.IStream");
                    /* catch() { ... } // from try @ 00a02340 with catch @ 00a023c4 */
      if ((uVar4 & 1) != 0) {
        pAVar5 = (AUpdates *)universe::get_instance(param_1,5);
        uVar3 = universe::network::GuoPengFei::sendMessage(this,iStack_3c,local_40,local_44,pAVar5);
        lua_pushboolean(param_1,uVar3 & 1);
                    /* catch() { ... } // from try @ 00a022f4 with catch @ 00a023f4 */
        uVar6 = 1;
        goto LAB_00a02410;
      }
      goto LAB_00a023fc;
    }
  }
  uVar6 = 0;
LAB_00a02410:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

