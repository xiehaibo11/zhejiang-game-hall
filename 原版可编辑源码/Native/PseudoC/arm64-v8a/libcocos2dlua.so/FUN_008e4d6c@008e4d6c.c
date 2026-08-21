
undefined8 FUN_008e4d6c(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 008e4cf8 with catch @ 008e4d90 */
                    /* catch() { ... } // from try @ 008e4d10 with catch @ 008e4d94 */
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 008e4cc4 with catch @ 008e4dc4 */
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"fairygui.GButton:setChangeStateOnClick");
    if ((uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_fairygui_GButton_setChangeStateOnClick\'",0);
    }
    else {
      *(bool *)(lVar3 + 0x34c) = local_3c[0];
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GButton:setChangeStateOnClick",iVar2 + -1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

