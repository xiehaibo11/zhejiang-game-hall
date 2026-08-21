
/* lua_cocos2dx_SpriteFrame_getOriginalSize(lua_State*) */

bool lua_cocos2dx_SpriteFrame_getOriginalSize(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    size_to_luaval(param_1,(Size *)(lVar2 + 0x40));
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteFrame:getOriginalSize",iVar1,0);
  }
  return iVar1 == 0;
}

