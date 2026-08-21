
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getKeyframeCallbacks(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getKeyframeCallbacks(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  vector *pvVar2;
  
                    /* try { // try from 0091d900 to 00a1d9b7 has its CatchHandler @ 0091d900
                       catch() { ... } // from try @ 0091d900 with catch @ 0091d900
                       catch() { ... } // from try @ 0091da38 with catch @ 0091d900 */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pvVar2 = (vector *)cocosbuilder::CCBAnimationManager::getKeyframeCallbacks(this);
    ccvaluevector_to_luaval(param_1,pvVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getKeyframeCallbacks",iVar1,0);
  }
  return iVar1 == 0;
}

