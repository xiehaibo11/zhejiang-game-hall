
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_setAutoPlaySequenceId(lua_State*) */

undefined4 lua_cocos2dx_cocosbuilder_CCBAnimationManager_setAutoPlaySequenceId(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  CCBAnimationManager *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 0091c610 to 00a1c6af has its CatchHandler @ 0091c610
                       catch() { ... } // from try @ 0091c610 with catch @ 0091c610
                       catch() { ... } // from try @ 0091c730 with catch @ 0091c610 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.CCBAnimationManager:setAutoPlaySequenceId");
    if ((uVar3 & 1) != 0) {
      cocosbuilder::CCBAnimationManager::setAutoPlaySequenceId(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0091c6b8;
    }
                    /* try { // try from 0091c6b0 to 00a1c6e3 has its CatchHandler @ 0091c7b0 */
    tolua_error(param_1,&DAT_012c63c5,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:setAutoPlaySequenceId",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0091c6b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

