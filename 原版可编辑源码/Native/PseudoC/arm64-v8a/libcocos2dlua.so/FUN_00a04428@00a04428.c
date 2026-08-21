
bool FUN_00a04428(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_OStream_readInt32: expected 1 argument");
  }
                    /* try { // try from 00a0446c to 00b044bb has its CatchHandler @ 00a0446c
                       catch() { ... } // from try @ 00a0446c with catch @ 00a0446c
                       catch() { ... } // from try @ 00a04504 with catch @ 00a0446c
                       catch() { ... } // from try @ 00a04584 with catch @ 00a0446c */
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
                    /* try { // try from 00a044bc to 00b044d3 has its CatchHandler @ 00a0459c */
    luaL_error(param_1,"lua_universe_network_OStream_readInt32: invalid \'cobj\'");
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    local_3c = 0;
    universe::network::OStream::operator>>(this,&local_3c);
    lua_pushnumber((double)(long)local_3c,param_1);
  }
                    /* try { // try from 00a044d8 to 00b04503 has its CatchHandler @ 00a04598 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

