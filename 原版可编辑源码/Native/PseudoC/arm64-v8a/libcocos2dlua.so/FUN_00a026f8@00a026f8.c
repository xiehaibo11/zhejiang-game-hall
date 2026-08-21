
undefined8 FUN_00a026f8(lua_State *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  GuoPengFei *this;
  char *pcVar4;
  int local_40;
  int local_3c;
  long local_38;
  
                    /* catch() { ... } // from try @ 00a02674 with catch @ 00a0270c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00a0268c with catch @ 00a02710 */
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = lua_gettop();
  if ((uVar2 | 1) == 3) {
                    /* catch() { ... } // from try @ 00a02640 with catch @ 00a02740 */
    uVar3 = universe::is_class(param_1,1,"un.network.TcpConnection");
    if ((uVar3 & 1) != 0) {
      this = (GuoPengFei *)universe::get_instance(param_1,1);
      uVar3 = universe::get_int(param_1,2,&local_3c,
                                "lua_universe_network_TcpConnection_startHeartBeat");
      if ((uVar3 & 1) != 0) {
        if (uVar2 == 2) {
          local_40 = 5000;
        }
        else {
          uVar3 = universe::get_int(param_1,3,&local_40,
                                    "lua_universe_network_TcpConnection_startHeartBeat");
          if ((uVar3 & 1) == 0) goto LAB_00a027a4;
        }
        universe::network::GuoPengFei::startHeartBeat(this,local_3c,local_40);
      }
      goto LAB_00a027a4;
    }
    pcVar4 = "lua_universe_network_TcpConnection_startHeartBeat: invalid \'cobj\'";
  }
  else {
    pcVar4 = "lua_universe_network_TcpConnection_startHeartBeat: expected 2 or 3 argument";
  }
  luaL_error(param_1,pcVar4);
LAB_00a027a4:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

