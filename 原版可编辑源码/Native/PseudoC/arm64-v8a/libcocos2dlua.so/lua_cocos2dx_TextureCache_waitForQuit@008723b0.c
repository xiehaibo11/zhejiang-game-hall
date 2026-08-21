
/* lua_cocos2dx_TextureCache_waitForQuit(lua_State*) */

bool lua_cocos2dx_TextureCache_waitForQuit(lua_State *param_1)

{
  int iVar1;
  TextureCache *this;
  
  this = (TextureCache *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::TextureCache::waitForQuit(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TextureCache:waitForQuit",iVar1,0);
  }
  return iVar1 == 0;
}

