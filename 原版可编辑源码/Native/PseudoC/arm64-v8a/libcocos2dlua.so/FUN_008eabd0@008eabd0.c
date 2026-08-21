
undefined8 FUN_008eabd0(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    local_40[1] = 0;
    local_30 = (void *)0x0;
    local_40[0] = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)local_40,"fairygui.UIPackage:removePackage");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_UIPackage_removePackage\'",0
                 );
    }
    else {
                    /* try { // try from 008eac24 to 009eac7b has its CatchHandler @ 008eac24
                       catch() { ... } // from try @ 008eac24 with catch @ 008eac24
                       catch() { ... } // from try @ 008eacc0 with catch @ 008eac24
                       catch() { ... } // from try @ 008ead48 with catch @ 008eac24
                       catch() { ... } // from try @ 008eada8 with catch @ 008eac24 */
      fairygui::UIPackage::removePackage((basic_string *)local_40);
    }
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "fairygui.UIPackage:removePackage",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 008eac7c to 009eacbf has its CatchHandler @ 008eade8 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

