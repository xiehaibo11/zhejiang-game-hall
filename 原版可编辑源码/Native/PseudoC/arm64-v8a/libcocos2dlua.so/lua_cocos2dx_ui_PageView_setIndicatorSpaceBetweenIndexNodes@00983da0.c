
/* lua_cocos2dx_ui_PageView_setIndicatorSpaceBetweenIndexNodes(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_setIndicatorSpaceBetweenIndexNodes(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PageView *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00983dc4 to 00a83e0b has its CatchHandler @ 00983dc4
                       catch(type#1 @ 00000000) { ... } // from try @ 00983dc4 with catch @ 00983dc4
                       catch(type#1 @ 00000000) { ... } // from try @ 00983e50 with catch @ 00983dc4
                        */
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccui.PageView:setIndicatorSpaceBetweenIndexNodes")
    ;
    if ((uVar3 & 1) != 0) {
                    /* try { // try from 00983e0c to 00a83e17 has its CatchHandler @ 00983e9c */
      cocos2d::ui::PageView::setIndicatorSpaceBetweenIndexNodes(this,(float)local_40);
      uVar4 = 1;
                    /* try { // try from 00983e20 to 00a83e23 has its CatchHandler @ 00983e84 */
      lua_settop(param_1,1);
      goto LAB_00983e60;
    }
                    /* try { // try from 00983e48 to 00a83e4f has its CatchHandler @ 00983e80 */
                    /* try { // try from 00983e50 to 00a83eb3 has its CatchHandler @ 00983dc4 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_PageView_setIndicatorSpaceBetweenIndexNodes\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:setIndicatorSpaceBetweenIndexNodes",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00983e60:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00983e48 with catch @ 00983e80
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00983e20 with catch @ 00983e84
                        */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

