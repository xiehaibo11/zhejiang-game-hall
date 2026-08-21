
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_debug(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_debug(lua_State *param_1)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 0091e79c with catch @ 0091e834 */
                    /* catch() { ... } // from try @ 0091e7b4 with catch @ 0091e838 */
  tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 0091e884 to 00a1e907 has its CatchHandler @ 0091e884
                       catch() { ... } // from try @ 0091e884 with catch @ 0091e884
                       catch() { ... } // from try @ 0091e988 with catch @ 0091e884 */
    cocosbuilder::CCBAnimationManager::debug();
    lua_settop(param_1,1);
  }
  else {
                    /* catch() { ... } // from try @ 0091e768 with catch @ 0091e868 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:debug",iVar1,0);
  }
  return iVar1 == 0;
}

