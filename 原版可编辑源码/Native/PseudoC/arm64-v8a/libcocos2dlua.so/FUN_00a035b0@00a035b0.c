
undefined8 FUN_00a035b0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  ulonglong local_40;
  long local_38;
  
                    /* try { // try from 00a035b0 to 00b036bb has its CatchHandler @ 00a03710 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_network_IStream_writeUInt64: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_network_IStream_writeUInt64: invalid \'cobj\'");
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::get_ulong_long(param_1,2,&local_40,"lua_universe_network_IStream_writeUInt64")
    ;
    if ((uVar3 & 1) != 0) {
      universe::network::AUpdates::operator<<(this,local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

