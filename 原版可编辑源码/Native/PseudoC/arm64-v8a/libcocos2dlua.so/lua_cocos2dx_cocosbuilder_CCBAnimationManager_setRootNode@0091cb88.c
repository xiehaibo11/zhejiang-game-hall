
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_setRootNode(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBAnimationManager_setRootNode(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  ulong uVar2;
  Node *pNVar3;
  
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar2 & 1) != 0)) {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      cocosbuilder::CCBAnimationManager::setRootNode(this,pNVar3);
      lua_settop(param_1,1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_setRootNode\'"
                ,0);
  }
  else {
                    /* try { // try from 0091cc30 to 00a1cce7 has its CatchHandler @ 0091cc30
                       catch() { ... } // from try @ 0091cc30 with catch @ 0091cc30
                       catch() { ... } // from try @ 0091cd68 with catch @ 0091cc30 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:setRootNode",iVar1 + -1,1);
  }
  return 0;
}

