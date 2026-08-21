
/* lua_cocos2dx_ui_Layout_getBackGroundImageColor(lua_State*) */

bool lua_cocos2dx_ui_Layout_getBackGroundImageColor(lua_State *param_1)

{
  int iVar1;
  Layout *this;
  Color3B *pCVar2;
  
  this = (Layout *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pCVar2 = (Color3B *)cocos2d::ui::Layout::getBackGroundImageColor(this);
    color3b_to_luaval(param_1,pCVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:getBackGroundImageColor",iVar1,0);
  }
  return iVar1 == 0;
}

