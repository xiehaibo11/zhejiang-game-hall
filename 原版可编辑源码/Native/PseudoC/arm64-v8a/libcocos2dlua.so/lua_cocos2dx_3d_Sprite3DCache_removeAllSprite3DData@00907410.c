
/* lua_cocos2dx_3d_Sprite3DCache_removeAllSprite3DData(lua_State*) */

bool lua_cocos2dx_3d_Sprite3DCache_removeAllSprite3DData(lua_State *param_1)

{
  int iVar1;
  Sprite3DCache *this;
  
  this = (Sprite3DCache *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00907404 with catch @ 00907468 */
    cocos2d::Sprite3DCache::removeAllSprite3DData(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Sprite3DCache:removeAllSprite3DData",iVar1,0);
  }
                    /* try { // try from 0090747c to 00a07533 has its CatchHandler @ 0090747c
                       catch() { ... } // from try @ 0090747c with catch @ 0090747c
                       catch() { ... } // from try @ 009075b4 with catch @ 0090747c */
  return iVar1 == 0;
}

