
undefined8 FUN_00a034dc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  AUpdates *this;
  longlong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,&DAT_012f6e69);
  }
  uVar3 = universe::is_class(param_1,1,"un.network.IStream");
                    /* try { // try from 00a03534 to 00b0353b has its CatchHandler @ 00a03708 */
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 00a0357c to 00b035af has its CatchHandler @ 00a034d8 */
    luaL_error(param_1,&DAT_012f6ea6);
  }
  else {
                    /* try { // try from 00a03540 to 00b0357b has its CatchHandler @ 00a03710 */
    this = (AUpdates *)universe::get_instance(param_1,1);
    uVar3 = universe::get_long_long(param_1,2,&local_40,"lua_universe_network_IStream_writeInt64");
    if ((uVar3 & 1) != 0) {
      universe::network::AUpdates::operator<<(this,local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

