
undefined8 FUN_009e6dd8(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Unzipper *this;
  uint local_74;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
                    /* catch() { ... } // from try @ 009e6d74 with catch @ 009e6e08 */
                    /* catch() { ... } // from try @ 009e6c80 with catch @ 009e6e10 */
                    /* catch() { ... } // from try @ 009e6bf0 with catch @ 009e6e18 */
    luaL_argerror(param_1,2,"lua_universe_Unzipper_setListener: expected 2 argument");
  }
                    /* catch() { ... } // from try @ 009e6b98 with catch @ 009e6e20 */
                    /* catch() { ... } // from try @ 009e6b34 with catch @ 009e6e28 */
  uVar3 = universe::is_class(param_1,1,"un.Unzipper");
                    /* catch() { ... } // from try @ 009e6a74 with catch @ 009e6e30 */
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_Unzipper_setListener: invalid \'cobj\'");
  }
  else {
    this = (Unzipper *)universe::get_instance(param_1,1);
    uVar3 = universe::create_function
                      (param_1,2,(int *)&local_74,(Literally *)this,
                       "lua_universe_Unzipper_setListener");
    if ((uVar3 & 1) != 0) {
      local_60 = (ulong)local_74;
      local_70 = &PTR_FUN_016a0988;
      plStack_68 = param_1;
      local_50 = &local_70;
      universe::Unzipper::setListener(this,(function *)&local_70);
      if (&local_70 == local_50) {
        (*(code *)(*local_50)[4])();
      }
      else if (local_50 != (undefined ***)0x0) {
        (*(code *)(*local_50)[5])();
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

