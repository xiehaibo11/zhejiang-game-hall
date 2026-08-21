
/* lua_cocos2dx_SpriteBatchNode_increaseAtlasCapacity(lua_State*) */

bool lua_cocos2dx_SpriteBatchNode_increaseAtlasCapacity(lua_State *param_1)

{
  int iVar1;
  SpriteBatchNode *this;
  
  this = (SpriteBatchNode *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::SpriteBatchNode::increaseAtlasCapacity(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SpriteBatchNode:increaseAtlasCapacity",iVar1,0);
  }
  return iVar1 == 0;
}

