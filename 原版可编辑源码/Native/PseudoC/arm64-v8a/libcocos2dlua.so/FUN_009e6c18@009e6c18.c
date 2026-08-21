
undefined8 FUN_009e6c18(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Unzipper *this;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 4) {
    luaL_argerror(param_1,4,"lua_universe_Unzipper_add: expected 4 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.Unzipper");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_Unzipper_add: invalid \'cobj\'");
  }
  else {
    this = (Unzipper *)universe::get_instance(param_1,1);
                    /* try { // try from 009e6c80 to 00ae6c93 has its CatchHandler @ 009e6e10 */
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    local_70 = (void *)0x0;
                    /* try { // try from 009e6c94 to 00ae6d73 has its CatchHandler @ 009e6a04 */
    local_80 = 0;
    uVar3 = universe::get_string(param_1,2,(basic_string *)&local_50,"lua_universe_Unzipper_add");
    if ((((uVar3 & 1) != 0) &&
        (uVar3 = universe::get_string
                           (param_1,3,(basic_string *)&local_68,"lua_universe_Unzipper_add"),
        (uVar3 & 1) != 0)) &&
       (uVar3 = universe::get_string
                          (param_1,4,(basic_string *)&local_80,"lua_universe_Unzipper_add"),
       (uVar3 & 1) != 0)) {
      universe::Unzipper::add
                (this,(basic_string *)&local_50,(basic_string *)&local_68,(basic_string *)&local_80)
      ;
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009e6d80 to 00ae6e67 has its CatchHandler @ 009e6a04 */
    __stack_chk_fail();
  }
                    /* try { // try from 009e6d74 to 00ae6d7f has its CatchHandler @ 009e6e08 */
  return 0;
}

