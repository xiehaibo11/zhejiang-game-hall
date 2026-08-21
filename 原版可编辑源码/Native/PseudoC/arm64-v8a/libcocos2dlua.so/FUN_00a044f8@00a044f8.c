
bool FUN_00a044f8(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  undefined8 uVar5;
  uint local_3c;
  long local_38;
  
                    /* try { // try from 00a04504 to 00b0452b has its CatchHandler @ 00a0446c */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
                    /* try { // try from 00a0452c to 00b0453f has its CatchHandler @ 00a0459c */
    luaL_argerror(param_1,1,"lua_universe_network_OStream_readUInt32: expected 1 argument");
  }
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
                    /* try { // try from 00a04584 to 00b045b7 has its CatchHandler @ 00a0446c */
    luaL_error(param_1,&DAT_012f798a);
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    local_3c = 0;
    universe::network::OStream::operator>>(this,&local_3c);
    uVar5 = NEON_ucvtf((ulong)local_3c);
                    /* try { // try from 00a0457c to 00b04583 has its CatchHandler @ 00a04598 */
    lua_pushnumber(uVar5,param_1);
  }
                    /* catch() { ... } // from try @ 00a044d8 with catch @ 00a04598
                       catch() { ... } // from try @ 00a0457c with catch @ 00a04598 */
                    /* catch() { ... } // from try @ 00a044bc with catch @ 00a0459c
                       catch() { ... } // from try @ 00a0452c with catch @ 00a0459c */
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

