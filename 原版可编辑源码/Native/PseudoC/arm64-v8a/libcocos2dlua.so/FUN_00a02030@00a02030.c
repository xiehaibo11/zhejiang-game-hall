
undefined8 FUN_00a02030(lua_State *param_1)

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
    luaL_argerror(param_1,2,&DAT_012f61d9);
  }
  uVar3 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_TcpConnection_setSetupCallback: invalid \'cobj\'");
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
                    /* try { // try from 00a020b8 to 00b020bf has its CatchHandler @ 00a020d4 */
    uVar3 = universe::create_multi_function
                      (param_1,2,"setup",(int *)&local_74,(Literally *)this,
                       "lua_universe_network_TcpConnection_setSetupCallback");
                    /* try { // try from 00a020c0 to 00b02173 has its CatchHandler @ 00a01e68 */
    if ((uVar3 & 1) != 0) {
      local_60 = (ulong)local_74;
      local_70 = &PTR_FUN_016a1a60;
                    /* catch() { ... } // from try @ 00a01f88 with catch @ 00a020d4
                       catch() { ... } // from try @ 00a020b8 with catch @ 00a020d4 */
                    /* catch() { ... } // from try @ 00a01ecc with catch @ 00a020d8
                       catch() { ... } // from try @ 00a01fec with catch @ 00a020d8 */
      plStack_68 = param_1;
      local_50 = &local_70;
      universe::network::GuoPengFei::setSetupCallback(this,(function *)&local_70);
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

