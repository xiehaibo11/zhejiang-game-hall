
/* lua_cocos2dx_MenuItemToggle_addSubItem(lua_State*) */

undefined4 lua_cocos2dx_MenuItemToggle_addSubItem(lua_State *param_1)

{
  int iVar1;
  MenuItemToggle *this;
  ulong uVar2;
  MenuItem *pMVar3;
  
  this = (MenuItemToggle *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.MenuItem",0), (uVar2 & 1) != 0)) {
      pMVar3 = (MenuItem *)tolua_tousertype(param_1,2,0);
      cocos2d::MenuItemToggle::addSubItem(this,pMVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_MenuItemToggle_addSubItem\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemToggle:addSubItem",iVar1 + -1,1);
  }
  return 0;
}

