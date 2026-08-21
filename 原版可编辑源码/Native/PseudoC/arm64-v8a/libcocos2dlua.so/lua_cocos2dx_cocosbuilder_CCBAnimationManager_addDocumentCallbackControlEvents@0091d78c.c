
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentCallbackControlEvents(lua_State*) */

undefined4
lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentCallbackControlEvents(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  CCBAnimationManager *pCVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pCVar3 = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,
                            "cc.CCBAnimationManager:addDocumentCallbackControlEvents");
    if ((uVar4 & 1) != 0) {
      cocosbuilder::CCBAnimationManager::addDocumentCallbackControlEvents(pCVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0091d848;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_addDocumentCallbackControlEvents\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:addDocumentCallbackControlEvents",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0091d848:
                    /* try { // try from 0091d848 to 00a1d893 has its CatchHandler @ 0091d848
                       catch() { ... } // from try @ 0091d848 with catch @ 0091d848
                       catch() { ... } // from try @ 0091d898 with catch @ 0091d848 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

