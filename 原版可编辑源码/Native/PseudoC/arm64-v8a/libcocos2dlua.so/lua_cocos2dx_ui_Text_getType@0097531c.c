
/* lua_cocos2dx_ui_Text_getType(lua_State*) */

bool lua_cocos2dx_ui_Text_getType(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  Text *this;
  
  this = (Text *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocos2d::ui::Text::getType(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.Text:getType",iVar1,0);
  }
  return iVar1 == 0;
}

