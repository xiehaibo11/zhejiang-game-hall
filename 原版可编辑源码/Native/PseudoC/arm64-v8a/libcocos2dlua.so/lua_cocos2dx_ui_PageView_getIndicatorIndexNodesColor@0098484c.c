
/* lua_cocos2dx_ui_PageView_getIndicatorIndexNodesColor(lua_State*) */

bool lua_cocos2dx_ui_PageView_getIndicatorIndexNodesColor(lua_State *param_1)

{
  int iVar1;
  PageView *this;
  Color3B *pCVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009847f0 with catch @ 00984858
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009847e8 with catch @ 0098485c
                        */
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pCVar2 = (Color3B *)cocos2d::ui::PageView::getIndicatorIndexNodesColor(this);
    color3b_to_luaval(param_1,pCVar2);
  }
  else {
                    /* try { // try from 0098487c to 00a8487f has its CatchHandler @ 00984880 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098487c with catch @ 00984880
                        */
                    /* try { // try from 00984884 to 00a84887 has its CatchHandler @ 00984890 */
                    /* try { // try from 00984888 to 00a84893 has its CatchHandler @ 00984784 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00984884 with catch @ 00984890
                        */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:getIndicatorIndexNodesColor",iVar1,0);
  }
  return iVar1 == 0;
}

