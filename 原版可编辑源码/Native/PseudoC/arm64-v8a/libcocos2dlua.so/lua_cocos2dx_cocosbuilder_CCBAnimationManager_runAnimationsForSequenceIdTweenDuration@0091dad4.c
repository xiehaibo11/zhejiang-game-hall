
/* lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(lua_State*)
    */

undefined4
lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration
          (lua_State *param_1)

{
  long lVar1;
  int iVar2;
  CCBAnimationManager *this;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (CCBAnimationManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_int32(param_1,2,&local_4c,
                            "cc.CCBAnimationManager:runAnimationsForSequenceIdTweenDuration");
    uVar4 = luaval_to_number(param_1,3,&local_58,
                             "cc.CCBAnimationManager:runAnimationsForSequenceIdTweenDuration");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      cocosbuilder::CCBAnimationManager::runAnimationsForSequenceIdTweenDuration
                (this,local_4c,(float)local_58);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0091dbbc;
    }
                    /* try { // try from 0091dbb4 to 00a1dbff has its CatchHandler @ 0091dbb4
                       catch() { ... } // from try @ 0091dbb4 with catch @ 0091dbb4
                       catch() { ... } // from try @ 0091dc04 with catch @ 0091dbb4 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBAnimationManager:runAnimationsForSequenceIdTweenDuration",iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_0091dbbc:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

