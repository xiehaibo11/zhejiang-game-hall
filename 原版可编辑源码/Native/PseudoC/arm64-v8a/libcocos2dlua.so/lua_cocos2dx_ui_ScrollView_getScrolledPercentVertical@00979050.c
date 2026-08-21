
/* lua_cocos2dx_ui_ScrollView_getScrolledPercentVertical(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_getScrolledPercentVertical(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  float fVar2;
  
                    /* catch() { ... } // from try @ 00979018 with catch @ 00979050 */
                    /* try { // try from 00979064 to 00a79133 has its CatchHandler @ 00979064
                       catch() { ... } // from try @ 00979064 with catch @ 00979064
                       catch() { ... } // from try @ 009791b4 with catch @ 00979064 */
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::ScrollView::getScrolledPercentVertical(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:getScrolledPercentVertical",iVar1,0);
  }
  return iVar1 == 0;
}

