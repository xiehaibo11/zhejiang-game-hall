
bool FUN_00a0435c(lua_State *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  OStream *this;
  undefined8 uVar5;
  ushort local_3c [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = lua_gettop();
  if (iVar3 != 1) {
    luaL_argerror(param_1,1,&DAT_012f7865);
  }
  uVar4 = universe::is_class(param_1,1,"un.network.OStream");
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    luaL_error(param_1,"lua_universe_network_OStream_readUInt16: invalid \'cobj\'");
  }
  else {
    this = (OStream *)universe::get_instance(param_1,1);
    local_3c[0] = 0;
    universe::network::OStream::operator>>(this,local_3c);
    uVar5 = NEON_ucvtf((ulong)local_3c[0]);
    lua_pushnumber(uVar5,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return !bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

