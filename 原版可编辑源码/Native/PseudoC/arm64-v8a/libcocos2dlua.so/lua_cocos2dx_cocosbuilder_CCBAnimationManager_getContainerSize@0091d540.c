
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getContainerSize(lua_State*) */

undefined8 lua_cocos2dx_cocosbuilder_CCBAnimationManager_getContainerSize(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  ulong uVar2;
  Node *pNVar3;
  Size *pSVar4;
  
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 0091d528 with catch @ 0091d580 */
                    /* try { // try from 0091d594 to 00a1d64b has its CatchHandler @ 0091d594
                       catch() { ... } // from try @ 0091d594 with catch @ 0091d594
                       catch() { ... } // from try @ 0091d6cc with catch @ 0091d594 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar2 & 1) != 0)) {
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      pSVar4 = (Size *)cocosbuilder::CCBAnimationManager::getContainerSize(this,pNVar3);
      size_to_luaval(param_1,pSVar4);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_getContainerSize\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getContainerSize",iVar1 + -1,1);
  }
  return 0;
}

