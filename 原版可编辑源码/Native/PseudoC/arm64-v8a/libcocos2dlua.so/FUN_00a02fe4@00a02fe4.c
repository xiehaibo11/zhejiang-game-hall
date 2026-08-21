
undefined8 FUN_00a02fe4(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  char local_3c [4];
  long local_38;
  
                    /* try { // try from 00a02fec to 00b0301f has its CatchHandler @ 00a030ec */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
                    /* try { // try from 00a03020 to 00b03033 has its CatchHandler @ 00a030b8 */
    luaL_argerror(param_1,2,"lua_universe_network_IStream_writeInt8: expected 2 argument");
  }
                    /* try { // try from 00a03038 to 00b0306b has its CatchHandler @ 00a030bc */
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,&DAT_012f6af4);
  }
  else {
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::get_int(param_1,2,(int *)local_3c,"lua_universe_network_IStream_writeInt8");
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00a0306c to 00b03107 has its CatchHandler @ 00a02eec */
      universe::network::AUpdates::operator<<(this,local_3c[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

