
/* lua_cocos2dx_ui_ScrollView_getScrollBarOpacity(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_getScrollBarOpacity(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  ScrollView *this;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0097a3b0 with catch @ 0097a450 */
                    /* catch() { ... } // from try @ 0097a394 with catch @ 0097a454
                       catch() { ... } // from try @ 0097a3fc with catch @ 0097a454 */
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    bVar1 = cocos2d::ui::ScrollView::getScrollBarOpacity(this);
    tolua_pushnumber((double)bVar1,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:getScrollBarOpacity",iVar2,0);
  }
  return iVar2 == 0;
}

