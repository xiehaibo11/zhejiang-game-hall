
/* lua_cocos2dx_3d_Sprite3DCache_destroyInstance(lua_State*) */

bool lua_cocos2dx_3d_Sprite3DCache_destroyInstance(lua_State *param_1)

{
  int iVar1;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::Sprite3DCache::destroyInstance();
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Sprite3DCache:destroyInstance",iVar1,0);
  }
  return iVar1 == 0;
}

