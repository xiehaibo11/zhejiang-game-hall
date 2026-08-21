
/* lua_cocos2dx_ui_Layout_getBackGroundColorVector(lua_State*) */

bool lua_cocos2dx_ui_Layout_getBackGroundColorVector(lua_State *param_1)

{
  int iVar1;
  Layout *this;
  Vec2 *pVVar2;
  
  this = (Layout *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vec2 *)cocos2d::ui::Layout::getBackGroundColorVector(this);
    vec2_to_luaval(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:getBackGroundColorVector",iVar1,0);
  }
  return iVar1 == 0;
}

