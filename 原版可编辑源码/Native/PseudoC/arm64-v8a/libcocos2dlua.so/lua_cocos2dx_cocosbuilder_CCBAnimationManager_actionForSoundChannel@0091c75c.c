
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_actionForSoundChannel(lua_State*) */

undefined8 lua_cocos2dx_cocosbuilder_CCBAnimationManager_actionForSoundChannel(lua_State *param_1)

{
  int iVar1;
  CCBAnimationManager *this;
  ulong uVar2;
  CCBSequenceProperty *pCVar3;
  void *pvVar4;
  
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 0091c6e4 with catch @ 0091c77c */
                    /* catch() { ... } // from try @ 0091c6fc with catch @ 0091c780 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* catch() { ... } // from try @ 0091c6b0 with catch @ 0091c7b0 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.CCBSequenceProperty",0), (uVar2 & 1) != 0)) {
      pCVar3 = (CCBSequenceProperty *)tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)cocosbuilder::CCBAnimationManager::actionForSoundChannel(this,pCVar3);
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
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_actionForSoundChannel\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:actionForSoundChannel",iVar1 + -1,1);
  }
  return 0;
}

