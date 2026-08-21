
undefined8 FUN_00a02190(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  GuoPengFei *this;
  uint local_74;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
                    /* try { // try from 00a021c0 to 00b021c3 has its CatchHandler @ 00a021f8 */
                    /* try { // try from 00a021c4 to 00b0220b has its CatchHandler @ 00a02174 */
    luaL_argerror(param_1,2,&DAT_012f629a);
  }
  uVar3 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_TcpConnection_setMessageCallback: invalid \'cobj\'");
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
                    /* catch() { ... } // from try @ 00a021c0 with catch @ 00a021f8 */
                    /* try { // try from 00a0220c to 00b022f3 has its CatchHandler @ 00a0220c
                       catch() { ... } // from try @ 00a0220c with catch @ 00a0220c
                       catch() { ... } // from try @ 00a02374 with catch @ 00a0220c */
    uVar3 = universe::create_multi_function
                      (param_1,2,"message",(int *)&local_74,(Literally *)this,
                       "lua_universe_network_TcpConnection_setMessageCallback");
    if ((uVar3 & 1) != 0) {
      local_60 = (ulong)local_74;
      local_70 = &PTR_FUN_016a1ae0;
      plStack_68 = param_1;
      local_50 = &local_70;
      universe::network::GuoPengFei::setMessageCallback(this,(function *)&local_70);
      if (&local_70 == local_50) {
        (*(code *)(*local_50)[4])();
      }
      else if (local_50 != (undefined ***)0x0) {
        (*(code *)(*local_50)[5])();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

