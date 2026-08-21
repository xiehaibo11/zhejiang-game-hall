
/* lua_cocos2dx_ui_ScrollView_getScrollBarWidth(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_getScrollBarWidth(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  float fVar2;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::ScrollView::getScrollBarWidth(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:getScrollBarWidth",iVar1,0);
                    /* try { // try from 0097aac0 to 00a7ab13 has its CatchHandler @ 0097aac0
                       catch() { ... } // from try @ 0097aac0 with catch @ 0097aac0
                       catch() { ... } // from try @ 0097ab6c with catch @ 0097aac0
                       catch() { ... } // from try @ 0097abb4 with catch @ 0097aac0 */
  }
  return iVar1 == 0;
}

