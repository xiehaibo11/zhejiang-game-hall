
undefined8 FUN_009d8b8c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uStack_38;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009d8ba4 to 00ad8bb3 has its CatchHandler @ 009d8c2c */
  iVar2 = lua_gettop();
                    /* try { // try from 009d8bb4 to 00ad8c3f has its CatchHandler @ 009d8ad0 */
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Device_startApp: expected 1 argument");
  }
  uVar3 = universe::get_cstr(param_1,1,&local_30,&uStack_38,"lua_universe_Device_startApp");
  if ((uVar3 & 1) != 0) {
    universe::Device::startApp(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

