
/* lua_cocos2dx_ui_ScrollView_getInnerContainerSize(lua_State*) */

bool lua_cocos2dx_ui_ScrollView_getInnerContainerSize(lua_State *param_1)

{
  int iVar1;
  ScrollView *this;
  Size *pSVar2;
  
  this = (ScrollView *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pSVar2 = (Size *)cocos2d::ui::ScrollView::getInnerContainerSize(this);
    size_to_luaval(param_1,pSVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:getInnerContainerSize",iVar1,0);
  }
  return iVar1 == 0;
}

