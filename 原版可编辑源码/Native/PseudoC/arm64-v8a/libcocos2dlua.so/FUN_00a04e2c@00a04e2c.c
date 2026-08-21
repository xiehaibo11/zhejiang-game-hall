
bool FUN_00a04e2c(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  float local_3c;
  long local_38;
  
                    /* try { // try from 00a04e2c to 00b04ecf has its CatchHandler @ 00a0501c */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,"lua_universe_network_OStream_readFloat: expected 1 argument");
  }
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_network_OStream_readFloat: invalid \'cobj\'");
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    local_3c = 0.0;
    universe::network::OStream::operator>>(this,&local_3c);
    lua_pushnumber((double)local_3c,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00a04ee8 to 00b04f13 has its CatchHandler @ 00a05018 */
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

