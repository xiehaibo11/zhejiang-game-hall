
undefined8 FUN_009e79ac(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Literally *pLVar4;
  uint local_74;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
                    /* catch() { ... } // from try @ 009e790c with catch @ 009e79ac */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 != 2) {
    luaL_argerror(param_1,2,"lua_universe_Http_setListener: expected 2 argument");
  }
  uVar3 = universe::is_class(param_1,1,"un.Http");
  if ((uVar3 & 1) == 0) {
    luaL_error(param_1,"lua_universe_Http_setListener: invalid \'cobj\'");
  }
  else {
    pLVar4 = (Literally *)universe::get_instance(param_1,1);
    uVar3 = universe::create_function
                      (param_1,2,(int *)&local_74,pLVar4,"lua_universe_Http_setListener");
    if ((uVar3 & 1) != 0) {
      local_60 = (ulong)local_74;
      local_70 = &PTR_FUN_016a0b68;
      plStack_68 = param_1;
      local_50 = &local_70;
      universe::Http::setListener((Http *)pLVar4,&local_70);
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

