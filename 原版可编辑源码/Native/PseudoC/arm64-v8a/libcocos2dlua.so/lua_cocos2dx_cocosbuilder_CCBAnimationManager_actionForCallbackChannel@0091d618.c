
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_actionForCallbackChannel(lua_State*) */

undefined8
lua_cocos2dx_cocosbuilder_CCBAnimationManager_actionForCallbackChannel(lua_State *param_1)

{
  int iVar1;
  CCBSequenceProperty *pCVar2;
  ulong uVar3;
  void *pvVar4;
  
  pCVar2 = (CCBSequenceProperty *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 0091d64c to 00a1d67f has its CatchHandler @ 0091d74c */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.CCBSequenceProperty",0), (uVar3 & 1) != 0)) {
                    /* try { // try from 0091d680 to 00a1d693 has its CatchHandler @ 0091d718 */
      tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)cocosbuilder::CCBAnimationManager::actionForCallbackChannel(pCVar2);
                    /* try { // try from 0091d698 to 00a1d6cb has its CatchHandler @ 0091d71c */
      if (pvVar4 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.Sequence");
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_actionForCallbackChannel\'"
                ,0);
  }
  else {
                    /* try { // try from 0091d6cc to 00a1d767 has its CatchHandler @ 0091d594 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:actionForCallbackChannel",iVar1 + -1,1);
  }
  return 0;
}

