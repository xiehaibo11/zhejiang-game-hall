
undefined8 FUN_008f8460(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 008f8478 to 009f8513 has its CatchHandler @ 008f8344 */
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = (bool)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"fairygui.FUIInput:setSingleLine");
    if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 008f83f8 with catch @ 008f84f8 */
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_FUIInput_setSingleLine\'",0)
      ;
    }
    else {
                    /* catch() { ... } // from try @ 008f842c with catch @ 008f84c4 */
                    /* catch() { ... } // from try @ 008f8444 with catch @ 008f84c8 */
      fairygui::FUIInput::setSingleLine(bVar2);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.FUIInput:setSingleLine",iVar3 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

