
bool FUN_00a04290(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  short local_3c [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
                    /* catch() { ... } // from try @ 00a0422c with catch @ 00a042c4 */
                    /* catch() { ... } // from try @ 00a04244 with catch @ 00a042c8 */
    luaL_argerror(param_1,1,&DAT_012f77f2);
  }
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_network_OStream_readInt16: invalid \'cobj\'");
  }
  else {
                    /* catch() { ... } // from try @ 00a041f8 with catch @ 00a042f8 */
    this = (OStream *)universe::get_instance(param_1,1);
    local_3c[0] = 0;
    universe::network::OStream::operator>>(this,local_3c);
    lua_pushnumber((double)(int)local_3c[0],param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

