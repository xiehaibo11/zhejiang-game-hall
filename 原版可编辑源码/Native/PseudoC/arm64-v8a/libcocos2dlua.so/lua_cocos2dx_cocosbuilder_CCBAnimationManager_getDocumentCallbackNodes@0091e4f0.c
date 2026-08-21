
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackNodes(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackNodes(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  Vector *pVVar2;
  
                    /* catch() { ... } // from try @ 0091e3fc with catch @ 0091e4fc */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocosbuilder::CCBAnimationManager::getDocumentCallbackNodes(this);
    ccvector_to_luaval<cocos2d::Node*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getDocumentCallbackNodes",iVar1,0);
  }
  return iVar1 == 0;
}

