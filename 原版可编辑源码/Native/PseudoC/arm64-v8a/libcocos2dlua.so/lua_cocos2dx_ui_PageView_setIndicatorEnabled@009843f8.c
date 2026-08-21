
/* lua_cocos2dx_ui_PageView_setIndicatorEnabled(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_setIndicatorEnabled(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PageView *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccui.PageView:setIndicatorEnabled");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::PageView::setIndicatorEnabled(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009844b4;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_PageView_setIndicatorEnabled\'",0);
  }
  else {
                    /* try { // try from 00984484 to 00a8448f has its CatchHandler @ 009844c4 */
                    /* try { // try from 00984490 to 00a844cb has its CatchHandler @ 0098430c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:setIndicatorEnabled",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009844b4:
                    /* catch() { ... } // from try @ 009843c8 with catch @ 009844bc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00984484 with catch @ 009844c4 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

