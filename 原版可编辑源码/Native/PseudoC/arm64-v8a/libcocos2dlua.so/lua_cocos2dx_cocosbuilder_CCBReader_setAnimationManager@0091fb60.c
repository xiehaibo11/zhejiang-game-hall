
/* lua_cocos2dx_cocosbuilder_CCBReader_setAnimationManager(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBReader_setAnimationManager(lua_State *param_1)

{
  int iVar1;
  CCBReader *this;
  ulong uVar2;
  CCBAnimationManager *pCVar3;
  
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.CCBAnimationManager",0), (uVar2 & 1) != 0)) {
      pCVar3 = (CCBAnimationManager *)tolua_tousertype(param_1,2,0);
      cocosbuilder::CCBReader::setAnimationManager(this,pCVar3);
      lua_settop(param_1,1);
      return 1;
    }
                    /* try { // try from 0091fc20 to 00a1fc6b has its CatchHandler @ 0091fc20
                       catch() { ... } // from try @ 0091fc20 with catch @ 0091fc20
                       catch() { ... } // from try @ 0091fc70 with catch @ 0091fc20 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBReader_setAnimationManager\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:setAnimationManager",iVar1 + -1,1);
  }
  return 0;
}

