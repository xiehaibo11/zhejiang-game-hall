
/* lua_cocos2dx_ui_Layout_removeBackGroundImage(lua_State*) */

bool lua_cocos2dx_ui_Layout_removeBackGroundImage(lua_State *param_1)

{
  int iVar1;
  Layout *this;
  
  this = (Layout *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::ui::Layout::removeBackGroundImage(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Layout:removeBackGroundImage",iVar1,0);
                    /* try { // try from 0096a5b8 to 00a6a5eb has its CatchHandler @ 0096a6b8 */
  }
  return iVar1 == 0;
}

