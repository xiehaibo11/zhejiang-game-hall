
undefined8 FUN_00a03f0c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  uchar *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a03f28 to 00b03f73 has its CatchHandler @ 00a03f28
                       catch() { ... } // from try @ 00a03f28 with catch @ 00a03f28
                       catch() { ... } // from try @ 00a03f78 with catch @ 00a03f28 */
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_network_IStream_writeByteArray: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  if ((uVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00a03f74 with catch @ 00a03fac */
    luaL_error(param_1,"lua_universe_network_IStream_writeByteArray: invalid \'cobj\'");
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
                    /* try { // try from 00a03f74 to 00b03f77 has its CatchHandler @ 00a03fac */
                    /* try { // try from 00a03f78 to 00b03fbf has its CatchHandler @ 00a03f28 */
    uVar3 = universe::get_byte_array
                      (param_1,2,&local_40,"lua_universe_network_IStream_writeByteArray");
    if ((uVar3 & 1) != 0) {
      universe::network::AUpdates::operator<<(this,(char *)local_40);
      free(local_40);
    }
  }
                    /* try { // try from 00a03fc0 to 00b041f7 has its CatchHandler @ 00a03fc0
                       catch() { ... } // from try @ 00a03fc0 with catch @ 00a03fc0
                       catch() { ... } // from try @ 00a04278 with catch @ 00a03fc0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

