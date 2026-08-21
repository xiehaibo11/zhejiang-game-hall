
/* lua_cocos2dx_MenuItemSprite_setNormalImage(lua_State*) */

undefined4 lua_cocos2dx_MenuItemSprite_setNormalImage(lua_State *param_1)

{
  int iVar1;
  MenuItemSprite *this;
  ulong uVar2;
  Node *pNVar3;
  
  this = (MenuItemSprite *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar2 & 1) != 0)) {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      cocos2d::MenuItemSprite::setNormalImage(this,pNVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_MenuItemSprite_setNormalImage\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemSprite:setNormalImage",iVar1 + -1,1);
  }
  return 0;
}

