
undefined8 FUN_009d8d24(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 009d8d38 to 00ad8db7 has its CatchHandler @ 009d8c40 */
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 1) {
    luaL_argerror(param_1,1,"lua_universe_Device_copyString: expected 1 argument");
  }
  local_40[1] = 0;
  local_30 = (void *)0x0;
  local_40[0] = 0;
  uVar3 = universe::get_string(param_1,1,(basic_string *)local_40,"lua_universe_Device_copyString");
  if ((uVar3 & 1) != 0) {
    universe::Device::copyString((basic_string *)local_40);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
                    /* catch() { ... } // from try @ 009d8d1c with catch @ 009d8da4 */
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

