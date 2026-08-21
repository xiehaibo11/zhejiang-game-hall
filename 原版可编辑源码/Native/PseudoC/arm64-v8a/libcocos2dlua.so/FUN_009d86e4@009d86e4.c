
undefined8 FUN_009d86e4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uStack_38;
  char *local_30;
  long local_28;
  
                    /* try { // try from 009d86ec to 00ad8747 has its CatchHandler @ 009d8820 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Device_createNotificationNow: expected 1 argument");
  }
  uVar3 = universe::get_cstr(param_1,1,&local_30,&uStack_38,
                             "lua_universe_Device_createNotificationNow");
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 009d8748 to 00ad877f has its CatchHandler @ 009d85b4 */
    universe::Device::createNotificationNow(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

