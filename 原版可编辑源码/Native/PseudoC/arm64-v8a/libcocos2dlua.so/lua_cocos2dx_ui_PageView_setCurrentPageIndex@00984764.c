
/* lua_cocos2dx_ui_PageView_setCurrentPageIndex(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_setCurrentPageIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PageView *this;
  ulong uVar3;
  undefined4 uVar4;
  long local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009847fc with catch @ 00984784
                       catch(type#1 @ 00000000) { ... } // from try @ 00984888 with catch @ 00984784
                        */
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_ssize(param_1,2,&local_40,"ccui.PageView:setCurrentPageIndex");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::PageView::setCurrentPageIndex(this,local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00984820;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_PageView_setCurrentPageIndex\'",0);
  }
  else {
                    /* try { // try from 009847e8 to 00a847eb has its CatchHandler @ 0098485c */
                    /* try { // try from 009847f0 to 00a847fb has its CatchHandler @ 00984858 */
                    /* try { // try from 009847fc to 00a8487b has its CatchHandler @ 00984784 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:setCurrentPageIndex",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00984820:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

