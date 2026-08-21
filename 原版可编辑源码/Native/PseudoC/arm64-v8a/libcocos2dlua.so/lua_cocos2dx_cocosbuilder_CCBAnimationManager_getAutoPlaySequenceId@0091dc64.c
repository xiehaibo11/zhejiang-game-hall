
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getAutoPlaySequenceId(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getAutoPlaySequenceId(lua_State *param_1)

{
  int iVar1;
  int iVar2;
  CCBAnimationManager *this;
  
                    /* try { // try from 0091dc6c to 00a1dd23 has its CatchHandler @ 0091dc6c
                       catch() { ... } // from try @ 0091dc6c with catch @ 0091dc6c
                       catch() { ... } // from try @ 0091dda4 with catch @ 0091dc6c */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = cocosbuilder::CCBAnimationManager::getAutoPlaySequenceId(this);
    tolua_pushnumber((double)iVar2,param_1);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012c6cf2,
               iVar1,0);
  }
  return iVar1 == 0;
}

