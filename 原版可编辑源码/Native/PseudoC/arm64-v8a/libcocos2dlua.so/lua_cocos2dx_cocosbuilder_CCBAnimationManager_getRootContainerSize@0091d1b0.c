
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRootContainerSize(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRootContainerSize(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  Size *pSVar2;
  
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    pSVar2 = (Size *)cocosbuilder::CCBAnimationManager::getRootContainerSize(this);
    size_to_luaval(param_1,pSVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:getRootContainerSize",iVar1,0);
                    /* try { // try from 0091d1fc to 00a1d2df has its CatchHandler @ 0091d1fc
                       catch() { ... } // from try @ 0091d1fc with catch @ 0091d1fc
                       catch() { ... } // from try @ 0091d360 with catch @ 0091d1fc */
  }
  return iVar1 == 0;
}

