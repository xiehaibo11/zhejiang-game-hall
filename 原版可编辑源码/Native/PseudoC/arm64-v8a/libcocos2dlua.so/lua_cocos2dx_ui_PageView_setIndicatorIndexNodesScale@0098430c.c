
/* lua_cocos2dx_ui_PageView_setIndicatorIndexNodesScale(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_setIndicatorIndexNodesScale(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PageView *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 0098430c to 00a843c7 has its CatchHandler @ 0098430c
                       catch() { ... } // from try @ 0098430c with catch @ 0098430c
                       catch() { ... } // from try @ 009843d4 with catch @ 0098430c
                       catch() { ... } // from try @ 00984490 with catch @ 0098430c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.PageView:setIndicatorIndexNodesScale");
    if ((uVar3 & 1) != 0) {
      cocos2d::ui::PageView::setIndicatorIndexNodesScale(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009843cc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_PageView_setIndicatorIndexNodesScale\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:setIndicatorIndexNodesScale",iVar2 + -1,1);
  }
                    /* try { // try from 009843c8 to 00a843d3 has its CatchHandler @ 009844bc */
  uVar4 = 0;
LAB_009843cc:
                    /* try { // try from 009843d4 to 00a84483 has its CatchHandler @ 0098430c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

