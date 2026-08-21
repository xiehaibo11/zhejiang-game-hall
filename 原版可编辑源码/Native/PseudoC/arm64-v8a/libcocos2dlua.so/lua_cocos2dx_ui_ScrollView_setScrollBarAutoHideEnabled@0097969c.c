
/* lua_cocos2dx_ui_ScrollView_setScrollBarAutoHideEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setScrollBarAutoHideEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 009795f4 with catch @ 009796d4
                       catch() { ... } // from try @ 00979680 with catch @ 009796d4 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.ScrollView:setScrollBarAutoHideEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ScrollView::setScrollBarAutoHideEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00979758;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setScrollBarAutoHideEnabled\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setScrollBarAutoHideEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00979758:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

