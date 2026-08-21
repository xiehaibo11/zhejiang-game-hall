
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackControlEvents(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackControlEvents
               (lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  vector *pvVar2;
  
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pvVar2 = (vector *)cocosbuilder::CCBAnimationManager::getDocumentCallbackControlEvents(this);
    ccvaluevector_to_luaval(param_1,pvVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getDocumentCallbackControlEvents",iVar1,0);
                    /* try { // try from 0091d9b8 to 00a1d9eb has its CatchHandler @ 0091dab8 */
  }
  return iVar1 == 0;
}

