
undefined8 FUN_00a01ed0(lua_State *param_1)

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
    luaL_argerror(param_1,2,
                  "lua_universe_network_TcpConnection_setCloseCallback: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.TcpConnection");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_TcpConnection_setCloseCallback: invalid \'cobj\'");
  }
  else {
    this = (GuoPengFei *)universe::get_instance(param_1,1);
    uVar3 = universe::create_multi_function
                      (param_1,2,"close",(int *)&local_74,(Literally *)this,
                       "lua_universe_network_TcpConnection_setCloseCallback");
    if ((uVar3 & 1) != 0) {
      local_60 = (ulong)local_74;
      local_70 = &PTR_FUN_016a19e0;
      plStack_68 = param_1;
      local_50 = &local_70;
                    /* try { // try from 00a01f88 to 00b01fc3 has its CatchHandler @ 00a020d4 */
      universe::network::GuoPengFei::setCloseCallback(this,(function *)&local_70);
      if (&local_70 == local_50) {
                    /* try { // try from 00a01fec to 00b01fff has its CatchHandler @ 00a020d8 */
        (*(code *)(*local_50)[4])();
      }
      else if (local_50 != (undefined ***)0x0) {
        (*(code *)(*local_50)[5])();
      }
    }
  }
                    /* try { // try from 00a01fc4 to 00b01feb has its CatchHandler @ 00a01e68 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

