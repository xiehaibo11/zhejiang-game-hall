
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentOutletNames(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentOutletNames(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  vector *pvVar2;
  
                    /* catch() { ... } // from try @ 0091d680 with catch @ 0091d718 */
                    /* catch() { ... } // from try @ 0091d698 with catch @ 0091d71c */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pvVar2 = (vector *)cocosbuilder::CCBAnimationManager::getDocumentOutletNames(this);
    ccvaluevector_to_luaval(param_1,pvVar2);
  }
  else {
                    /* catch() { ... } // from try @ 0091d64c with catch @ 0091d74c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getDocumentOutletNames",iVar1,0);
  }
  return iVar1 == 0;
}

