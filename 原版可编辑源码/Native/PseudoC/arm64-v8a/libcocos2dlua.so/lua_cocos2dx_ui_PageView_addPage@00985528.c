
/* lua_cocos2dx_ui_PageView_addPage(lua_State*) */

undefined4 lua_cocos2dx_ui_PageView_addPage(lua_State *param_1)

{
  int iVar1;
  PageView *this;
  ulong uVar2;
  Widget *pWVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00985230 with catch @ 00985528
                        */
                    /* try { // try from 0098552c to 00a85563 has its CatchHandler @ 0098552c
                       catch() { ... } // from try @ 0098552c with catch @ 0098552c
                       catch() { ... } // from try @ 00985574 with catch @ 0098552c */
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 00985564 to 00a85573 has its CatchHandler @ 009855d8 */
                    /* try { // try from 00985574 to 00a855f3 has its CatchHandler @ 0098552c */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"ccui.Widget",0), (uVar2 & 1) != 0)) {
      pWVar3 = (Widget *)tolua_tousertype(param_1,2,0);
      cocos2d::ui::PageView::addPage(this,pWVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_PageView_addPage\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:addPage",iVar1 + -1,1);
                    /* catch() { ... } // from try @ 00985564 with catch @ 009855d8 */
  }
                    /* try { // try from 009855f4 to 00a8562b has its CatchHandler @ 009855f4
                       catch() { ... } // from try @ 009855f4 with catch @ 009855f4
                       catch() { ... } // from try @ 0098563c with catch @ 009855f4 */
  return 0;
}

