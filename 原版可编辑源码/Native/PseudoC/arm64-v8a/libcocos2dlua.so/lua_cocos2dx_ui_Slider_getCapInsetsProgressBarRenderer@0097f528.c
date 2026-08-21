
/* lua_cocos2dx_ui_Slider_getCapInsetsProgressBarRenderer(lua_State*) */

bool lua_cocos2dx_ui_Slider_getCapInsetsProgressBarRenderer(lua_State *param_1)

{
  int iVar1;
  Slider *this;
  Rect *pRVar2;
  
  this = (Slider *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pRVar2 = (Rect *)cocos2d::ui::Slider::getCapInsetsProgressBarRenderer(this);
    rect_to_luaval(param_1,pRVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Slider:getCapInsetsProgressBarRenderer",iVar1,0);
  }
  return iVar1 == 0;
}

