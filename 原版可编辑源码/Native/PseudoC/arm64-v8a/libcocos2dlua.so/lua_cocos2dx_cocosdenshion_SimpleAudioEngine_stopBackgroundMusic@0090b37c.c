
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopBackgroundMusic(lua_State*) */

undefined4 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopBackgroundMusic(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0090b300 with catch @ 0090b398 */
                    /* catch() { ... } // from try @ 0090b318 with catch @ 0090b39c */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
                    /* try { // try from 0090b3e8 to 00a0b43f has its CatchHandler @ 0090b3e8
                       catch() { ... } // from try @ 0090b3e8 with catch @ 0090b3e8
                       catch() { ... } // from try @ 0090b4c4 with catch @ 0090b3e8
                       catch() { ... } // from try @ 0090b548 with catch @ 0090b3e8
                       catch() { ... } // from try @ 0090b580 with catch @ 0090b3e8 */
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"cc.SimpleAudioEngine:stopBackgroundMusic");
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 0090b440 to 00a0b48f has its CatchHandler @ 0090b620 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopBackgroundMusic\'"
                  ,0);
      goto LAB_0090b450;
    }
    lVar5 = *plVar3;
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.SimpleAudioEngine:stopBackgroundMusic",iVar2 + -1,0);
LAB_0090b450:
      uVar6 = 0;
      goto LAB_0090b454;
    }
    lVar5 = *plVar3;
                    /* catch() { ... } // from try @ 0090b2cc with catch @ 0090b3cc */
    local_3c[0] = false;
  }
  (**(code **)(lVar5 + 0x10))(plVar3,local_3c[0]);
  uVar6 = 1;
  lua_settop(param_1,1);
LAB_0090b454:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

