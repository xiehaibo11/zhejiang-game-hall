
undefined8 FUN_00a03684(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
                    /* try { // try from 00a036bc to 00b0372b has its CatchHandler @ 00a034d8 */
    luaL_argerror(param_1,2,"lua_universe_network_IStream_writeString: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_IStream_writeString: invalid \'cobj\'");
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
                    /* catch() { ... } // from try @ 00a03534 with catch @ 00a03708 */
    uVar3 = universe::get_string
                      (param_1,2,(basic_string *)local_50,"lua_universe_network_IStream_writeString"
                      );
                    /* catch() { ... } // from try @ 00a03540 with catch @ 00a03710
                       catch() { ... } // from try @ 00a035b0 with catch @ 00a03710 */
    if ((uVar3 & 1) != 0) {
      universe::network::AUpdates::operator<<(this,(basic_string *)local_50);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

