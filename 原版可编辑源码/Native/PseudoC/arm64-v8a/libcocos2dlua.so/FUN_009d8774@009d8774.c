
undefined8 FUN_009d8774(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int local_44;
  ulong uStack_40;
  char *local_38;
  int local_2c;
  long local_28;
  
                    /* try { // try from 009d8780 to 00ad8797 has its CatchHandler @ 009d8820 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 3) {
                    /* try { // try from 009d87a8 to 00ad87c3 has its CatchHandler @ 009d881c */
    luaL_argerror(param_1,3,"lua_universe_Device_createNotification: expected 3 argument");
  }
  uVar3 = universe::get_int(param_1,1,&local_2c,"lua_universe_Device_createNotification");
                    /* try { // try from 009d87cc to 00ad87df has its CatchHandler @ 009d8820 */
                    /* try { // try from 009d87e0 to 00ad8833 has its CatchHandler @ 009d85b4 */
  if ((((uVar3 & 1) != 0) &&
      (uVar3 = universe::get_cstr(param_1,2,&local_38,&uStack_40,
                                  "lua_universe_Device_createNotification"), (uVar3 & 1) != 0)) &&
     (uVar3 = universe::get_int(param_1,3,&local_44,"lua_universe_Device_createNotification"),
     (uVar3 & 1) != 0)) {
    universe::Device::createNotification((long)local_2c,local_38,local_44);
  }
                    /* catch() { ... } // from try @ 009d87a8 with catch @ 009d881c */
                    /* catch() { ... } // from try @ 009d86ec with catch @ 009d8820
                       catch() { ... } // from try @ 009d8780 with catch @ 009d8820
                       catch() { ... } // from try @ 009d87cc with catch @ 009d8820 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009d8834 to 00ad88d3 has its CatchHandler @ 009d8834
                       catch() { ... } // from try @ 009d8834 with catch @ 009d8834
                       catch() { ... } // from try @ 009d88e8 with catch @ 009d8834
                       catch() { ... } // from try @ 009d8994 with catch @ 009d8834 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

