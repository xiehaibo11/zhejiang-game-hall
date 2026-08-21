
undefined8 FUN_00a0318c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  short local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,0x12f6bef);
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,&LAB_012f6c2c);
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::get_int(param_1,2,(int *)local_3c,"lua_universe_network_IStream_writeInt16");
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

