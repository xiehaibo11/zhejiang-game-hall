
bool FUN_00a04fc0(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  longdouble local_50 [3];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_OStream_readLongDouble: expected 1 argument");
  }
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
                    /* catch() { ... } // from try @ 00a04ee8 with catch @ 00a05018 */
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,&DAT_012f7fe5);
  }
  else {
                    /* catch() { ... } // from try @ 00a04e2c with catch @ 00a0501c
                       catch() { ... } // from try @ 00a04f48 with catch @ 00a0501c */
    this = (OStream *)universe::get_instance(param_1,1);
    local_50[1] = 0.0;
    local_50[0] = 0.0;
    universe::network::OStream::operator>>(this,local_50);
    __trunctfdf2(local_50[0]);
    lua_pushnumber(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

