
/* lua_cocos2dx_MenuItemToggle_initWithItem(lua_State*) */

undefined8 lua_cocos2dx_MenuItemToggle_initWithItem(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  MenuItemToggle *this;
  ulong uVar3;
  MenuItem *pMVar4;
  
  this = (MenuItemToggle *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.MenuItem",0), (uVar3 & 1) != 0)) {
      pMVar4 = (MenuItem *)tolua_tousertype(param_1,2,0);
      uVar2 = cocos2d::MenuItemToggle::initWithItem(this,pMVar4);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_MenuItemToggle_initWithItem\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemToggle:initWithItem",iVar1 + -1,1);
  }
  return 0;
}

