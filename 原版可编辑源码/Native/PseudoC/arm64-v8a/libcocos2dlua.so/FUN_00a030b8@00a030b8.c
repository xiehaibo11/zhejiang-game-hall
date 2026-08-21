
undefined8 FUN_00a030b8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  uchar local_3c [4];
  long local_38;
  
                    /* catch() { ... } // from try @ 00a03020 with catch @ 00a030b8 */
                    /* catch() { ... } // from try @ 00a03038 with catch @ 00a030bc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 00a02fec with catch @ 00a030ec */
    luaL_argerror(param_1,2,"lua_universe_network_IStream_writeUInt8: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,&DAT_012f6b8f);
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::get_uint(param_1,2,(uint *)local_3c,"lua_universe_network_IStream_writeUInt8")
    ;
    if ((uVar3 & 1) != 0) {
      universe::network::AUpdates::operator<<(this,local_3c[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

