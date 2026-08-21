
undefined8 FUN_00a027fc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  GuoPengFei *this;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_network_TcpConnection_setSRSType: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,&DAT_012f66b2);
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    uVar3 = universe::get_int(param_1,2,&local_3c,"lua_universe_network_TcpConnection_setSRSType");
    if ((uVar3 & 1) != 0) {
      universe::network::GuoPengFei::setSRSType(this,local_3c);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00a028bc to 00b0293f has its CatchHandler @ 00a028bc
                       catch() { ... } // from try @ 00a028bc with catch @ 00a028bc
                       catch() { ... } // from try @ 00a02b58 with catch @ 00a028bc
                       catch() { ... } // from try @ 00a02c54 with catch @ 00a028bc */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

