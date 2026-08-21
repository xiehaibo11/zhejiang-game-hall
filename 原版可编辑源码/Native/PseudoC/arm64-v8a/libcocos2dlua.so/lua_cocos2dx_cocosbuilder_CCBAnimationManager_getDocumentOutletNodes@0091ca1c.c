
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentOutletNodes(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentOutletNodes(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  Vector *pVVar2;
  
                    /* try { // try from 0091ca1c to 00a1cab7 has its CatchHandler @ 0091c8fc */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pVVar2 = (Vector *)cocosbuilder::CCBAnimationManager::getDocumentOutletNodes(this);
    ccvector_to_luaval<cocos2d::Node*>(param_1,pVVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getDocumentOutletNodes",iVar1,0);
                    /* catch() { ... } // from try @ 0091c9d0 with catch @ 0091ca68 */
                    /* catch() { ... } // from try @ 0091c9e8 with catch @ 0091ca6c */
  }
  return iVar1 == 0;
}

