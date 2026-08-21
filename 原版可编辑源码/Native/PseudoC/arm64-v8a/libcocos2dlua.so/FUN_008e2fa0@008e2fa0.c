
undefined8 FUN_008e2fa0(lua_State *param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong local_50;
  ulong local_48;
  char *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 008e2580 with catch @ 008e2fa8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008e2528 with catch @ 008e2fc8 */
  lVar4 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (char *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"fairygui.GList:setDefaultItem");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GList_setDefaultItem\'",0);
    }
    else if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_50 !=
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar4 + 0x308)) {
      uVar5 = local_50 >> 1 & 0x7f;
      pcVar2 = (char *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        uVar5 = local_48;
        pcVar2 = local_40;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar4 + 0x308),pcVar2,uVar5);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GList:setDefaultItem",iVar3 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

