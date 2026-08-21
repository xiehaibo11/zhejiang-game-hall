
/* lua_cocos2dx_ui_ScrollView_setInnerContainerSize(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_setInnerContainerSize(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ScrollView *this;
  ulong uVar3;
  undefined4 uVar4;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 00978d78 with catch @ 00978ea0 */
  if (iVar2 + -1 == 1) {
    cocos2d::Size::Size(aSStack_40);
    uVar3 = luaval_to_size(param_1,2,aSStack_40,"ccui.ScrollView:setInnerContainerSize");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::ScrollView::setInnerContainerSize(this,aSStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00978f28;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_setInnerContainerSize\'"
                ,0);
  }
  else {
                    /* catch() { ... } // from try @ 00978d50 with catch @ 00978efc
                       catch() { ... } // from try @ 00978de4 with catch @ 00978efc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:setInnerContainerSize",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00978f28:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

