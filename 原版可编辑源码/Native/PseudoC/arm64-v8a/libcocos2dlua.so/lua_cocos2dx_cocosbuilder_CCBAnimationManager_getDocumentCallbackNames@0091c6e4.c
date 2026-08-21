
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackNames(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getDocumentCallbackNames(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  vector *pvVar2;
  
                    /* try { // try from 0091c6e4 to 00a1c6f7 has its CatchHandler @ 0091c77c */
                    /* try { // try from 0091c6fc to 00a1c72f has its CatchHandler @ 0091c780 */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pvVar2 = (vector *)cocosbuilder::CCBAnimationManager::getDocumentCallbackNames(this);
    ccvaluevector_to_luaval(param_1,pvVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getDocumentCallbackNames",iVar1,0);
                    /* try { // try from 0091c730 to 00a1c7cb has its CatchHandler @ 0091c610 */
  }
  return iVar1 == 0;
}

