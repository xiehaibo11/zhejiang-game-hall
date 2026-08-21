
/* lua_cocos2dx_ui_PageView_setIndicatorIndexNodesColor(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_setIndicatorIndexNodesColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PageView *this;
  ulong uVar3;
  undefined4 uVar4;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PageView *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00984e20 with catch @ 00984e94 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"ccui.PageView:setIndicatorIndexNodesColor");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::PageView::setIndicatorIndexNodesColor(this,aCStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00984f24;
    }
    tolua_error(param_1,&DAT_012ddc05,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:setIndicatorIndexNodesColor",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00984f24:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

