
/* lua_cocos2dx_MenuItemLabel_getDisabledColor(lua_State*) */

bool lua_cocos2dx_MenuItemLabel_getDisabledColor(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    color3b_to_luaval(param_1,(Color3B *)(lVar2 + 0x338));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemLabel:getDisabledColor",iVar1,0);
  }
  return iVar1 == 0;
}

