
undefined8 FUN_00a03408(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_network_IStream_writeUInt32: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,&DAT_012f6e07);
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::get_uint(param_1,2,&local_3c,"lua_universe_network_IStream_writeUInt32");
    if ((uVar3 & 1) != 0) {
      universe::network::AUpdates::operator<<(this,local_3c);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a034d8 to 00b03533 has its CatchHandler @ 00a034d8
                       catch() { ... } // from try @ 00a034d8 with catch @ 00a034d8
                       catch() { ... } // from try @ 00a0357c with catch @ 00a034d8
                       catch() { ... } // from try @ 00a036bc with catch @ 00a034d8 */
  __stack_chk_fail();
}

