
bool FUN_00a041c4(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  undefined8 uVar5;
  byte local_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
                    /* try { // try from 00a041f8 to 00b0422b has its CatchHandler @ 00a042f8 */
    luaL_argerror(param_1,1,"lua_universe_network_OStream_readUInt8: expected 1 argument");
  }
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_network_OStream_readUInt8: invalid \'cobj\'");
  }
  else {
                    /* try { // try from 00a0422c to 00b0423f has its CatchHandler @ 00a042c4 */
    this = (OStream *)universe::get_instance(param_1,1);
    local_3c[0] = 0;
    universe::network::OStream::operator>>(this,local_3c);
                    /* try { // try from 00a04244 to 00b04277 has its CatchHandler @ 00a042c8 */
    uVar5 = NEON_ucvtf((ulong)local_3c[0]);
    lua_pushnumber(uVar5,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00a04278 to 00b04313 has its CatchHandler @ 00a03fc0 */
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

