
undefined8 FUN_009e6f30(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Unzipper *this;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_Unzipper_setKey: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.Unzipper");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_Unzipper_add: invalid \'cobj\'");
  }
  else {
    this = (Unzipper *)universe::get_instance(param_1,1);
    local_50[1] = 0;
    local_40 = (void *)0x0;
    local_50[0] = 0;
    uVar3 = universe::get_string(param_1,2,(basic_string *)local_50,"lua_universe_Unzipper_setKey");
    if ((uVar3 & 1) != 0) {
      universe::Unzipper::setKey(this,(basic_string *)local_50);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009e7014 to 00ae706b has its CatchHandler @ 009e7014
                       catch() { ... } // from try @ 009e7014 with catch @ 009e7014
                       catch() { ... } // from try @ 009e7070 with catch @ 009e7014 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

