
/* lua_cocos2dx_TransitionScene_hideOutShowIn(lua_State*) */

bool lua_cocos2dx_TransitionScene_hideOutShowIn(lua_State *param_1)

{
  int iVar1;
  TransitionScene *this;
  
  this = (TransitionScene *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    cocos2d::TransitionScene::hideOutShowIn(this);
    lua_settop(param_1,1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TransitionScene:hideOutShowIn",iVar1,0);
  }
  return iVar1 == 0;
}

