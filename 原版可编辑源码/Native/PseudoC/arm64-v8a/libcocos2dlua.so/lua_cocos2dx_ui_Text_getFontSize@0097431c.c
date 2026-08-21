
/* lua_cocos2dx_ui_Text_getFontSize(lua_State*) */

bool lua_cocos2dx_ui_Text_getFontSize(lua_State *param_1)

{
  int iVar1;
  Text *this;
  float fVar2;
  
  this = (Text *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    fVar2 = (float)cocos2d::ui::Text::getFontSize(this);
    tolua_pushnumber((double)fVar2,param_1);
  }
  else {
                    /* try { // try from 0097435c to 00a74393 has its CatchHandler @ 00974418 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Text:getFontSize",iVar1,0);
  }
  return iVar1 == 0;
}

