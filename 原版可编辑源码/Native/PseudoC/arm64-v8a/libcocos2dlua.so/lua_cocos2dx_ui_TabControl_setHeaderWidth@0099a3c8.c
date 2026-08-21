
/* lua_cocos2dx_ui_TabControl_setHeaderWidth(lua_State*) */

undefined4 lua_cocos2dx_ui_TabControl_setHeaderWidth(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  TabControl *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0099a2b8 with catch @ 0099a3c8
                       catch() { ... } // from try @ 0099a348 with catch @ 0099a3c8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (TabControl *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0099a404 to 00a9a60b has its CatchHandler @ 0099a404
                       catch() { ... } // from try @ 0099a404 with catch @ 0099a404
                       catch() { ... } // from try @ 0099a68c with catch @ 0099a404 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.TabControl:setHeaderWidth");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::TabControl::setHeaderWidth(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0099a488;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_TabControl_setHeaderWidth\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e2136,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0099a488:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

