
/* lua_cocos2dx_ui_ScrollView_getScrollBarAutoHideTime(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_getScrollBarAutoHideTime(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  float fVar2;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::ScrollView::getScrollBarAutoHideTime(this);
                    /* try { // try from 0097a808 to 00a7a88f has its CatchHandler @ 0097a808
                       catch() { ... } // from try @ 0097a808 with catch @ 0097a808
                       catch() { ... } // from try @ 0097a8fc with catch @ 0097a808 */
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:getScrollBarAutoHideTime",iVar1,0);
  }
  return iVar1 == 0;
}

