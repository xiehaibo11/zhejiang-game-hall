
bool FUN_00a04ef8(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  double local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a04f14 to 00b04f47 has its CatchHandler @ 00a04db4 */
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,&DAT_012f7f2f);
  }
                    /* try { // try from 00a04f48 to 00b04f5b has its CatchHandler @ 00a0501c */
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_network_OStream_readDouble: invalid \'cobj\'");
  }
  else {
                    /* try { // try from 00a04f5c to 00b050b7 has its CatchHandler @ 00a04db4 */
    this = (OStream *)universe::get_instance(param_1,1);
    local_40 = 0.0;
    universe::network::OStream::operator>>(this,&local_40);
    lua_pushnumber(local_40,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

