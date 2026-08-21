
/* lua_cocos2dx_ui_TextAtlas_getStringLength(lua_State*) */

bool lua_cocos2dx_ui_TextAtlas_getStringLength(lua_State *param_1)

{
  int iVar1;
  TextAtlas *this;
  long lVar2;
  
  this = (TextAtlas *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    lVar2 = cocos2d::ui::TextAtlas::getStringLength(this);
    tolua_pushnumber((double)lVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextAtlas:getStringLength",iVar1,0);
  }
  return iVar1 == 0;
}

