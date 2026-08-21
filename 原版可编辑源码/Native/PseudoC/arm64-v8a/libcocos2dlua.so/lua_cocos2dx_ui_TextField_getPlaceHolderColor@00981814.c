
/* lua_cocos2dx_ui_TextField_getPlaceHolderColor(lua_State*) */

bool lua_cocos2dx_ui_TextField_getPlaceHolderColor(lua_State *param_1)

{
  int iVar1;
  TextField *this;
  Color4B *pCVar2;
  
  this = (TextField *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pCVar2 = (Color4B *)cocos2d::ui::TextField::getPlaceHolderColor(this);
    color4b_to_luaval(param_1,pCVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextField:getPlaceHolderColor",iVar1,0);
  }
  return iVar1 == 0;
}

