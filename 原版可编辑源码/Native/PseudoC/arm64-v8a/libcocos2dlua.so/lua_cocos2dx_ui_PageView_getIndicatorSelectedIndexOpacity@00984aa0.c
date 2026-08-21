
/* lua_cocos2dx_ui_PageView_getIndicatorSelectedIndexOpacity(lua_State*) */

bool lua_cocos2dx_ui_PageView_getIndicatorSelectedIndexOpacity(lua_State *param_1)

{
  byte bVar1;
  int iVar2;
  PageView *this;
  
  this = (PageView *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    bVar1 = cocos2d::ui::PageView::getIndicatorSelectedIndexOpacity(this);
    tolua_pushnumber((double)bVar1,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.PageView:getIndicatorSelectedIndexOpacity",iVar2,0);
  }
  return iVar2 == 0;
}

