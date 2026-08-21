
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentOutletNode(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentOutletNode(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  ulong uVar2;
  Node *pNVar3;
  
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 0091df6c with catch @ 0091dfc4 */
                    /* try { // try from 0091dfd8 to 00a1e08f has its CatchHandler @ 0091dfd8
                       catch() { ... } // from try @ 0091dfd8 with catch @ 0091dfd8
                       catch() { ... } // from try @ 0091e110 with catch @ 0091dfd8 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar2 & 1) != 0)) {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      cocosbuilder::CCBAnimationManager::addDocumentOutletNode(this,pNVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentOutletNode\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:addDocumentOutletNode",iVar1 + -1,1);
  }
  return 0;
}

