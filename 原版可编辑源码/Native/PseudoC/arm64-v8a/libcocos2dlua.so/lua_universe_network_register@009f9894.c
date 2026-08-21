
/* lua_universe_network_register(lua_State*) */

undefined8 lua_universe_network_register(lua_State *param_1)

{
  long lVar1;
  char *local_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  universe::lua_get_universe_table(param_1);
  lua_createtable(param_1,0,0);
  if (DAT_01782358 == 0) {
    DAT_01782358 = universe::HeBaiChuan::getInstance();
  }
  pcStack_1a8 = FUN_00a01914;
  local_1b0 = "setCallback";
  uStack_198 = 0;
  uStack_1a0 = 0;
  universe::create_singleton(param_1,"NetStat",(luaL_Reg *)&local_1b0);
  memcpy(&local_1b0,&PTR_s_connect_013cbb3a_0x19_016a1840,0x110);
  universe::create_class
            (param_1,"TcpConnection","un.network.TcpConnection",(char *)0x0,FUN_00a02c38,
             (luaL_Reg *)&local_1b0);
  memcpy(&local_1b0,&DAT_016a1b60,0x160);
  universe::create_class
            (param_1,"IStream","un.network.IStream",(char *)0x0,FUN_00a040a0,(luaL_Reg *)&local_1b0)
  ;
  memcpy(&local_1b0,&PTR_s_readInt8_016a1cc0,0x170);
  universe::create_class
            (param_1,"OStream","un.network.OStream",(char *)0x0,FUN_00a052c8,(luaL_Reg *)&local_1b0)
  ;
  lua_setfield(param_1,0xfffffffe,"network");
  lua_settop(param_1,0xfffffffe);
  pcStack_1a8 = luaopen_pb;
  local_1b0 = "pb";
  uStack_198 = 0;
  uStack_1a0 = 0;
  lua_getfield(param_1,0xffffd8ee,"package");
  lua_getfield(param_1,0xffffffff,"preload");
  universe::set_functions(param_1,(luaL_Reg *)&local_1b0);
  lua_settop(param_1,0xfffffffd);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009f9a44 to 00af9a9b has its CatchHandler @ 009f9a44
                       catch() { ... } // from try @ 009f9a44 with catch @ 009f9a44
                       catch() { ... } // from try @ 009f9aa0 with catch @ 009f9a44 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

