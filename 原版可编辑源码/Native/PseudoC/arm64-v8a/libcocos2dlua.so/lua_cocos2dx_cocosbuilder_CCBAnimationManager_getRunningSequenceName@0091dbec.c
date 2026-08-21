
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRunningSequenceName(lua_State*) */

bool lua_cocos2dx_cocosbuilder_CCBAnimationManager_getRunningSequenceName(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  undefined8 uVar2;
  
                    /* try { // try from 0091dc00 to 00a1dc03 has its CatchHandler @ 0091dc58 */
                    /* try { // try from 0091dc04 to 00a1dc6b has its CatchHandler @ 0091dbb4 */
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    uVar2 = cocosbuilder::CCBAnimationManager::getRunningSequenceName(this);
    tolua_pushstring(param_1,uVar2);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012c6cc4,
               iVar1,0);
  }
                    /* catch() { ... } // from try @ 0091dc00 with catch @ 0091dc58 */
  return iVar1 == 0;
}

