
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopEffect(lua_State*) */

undefined4 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopEffect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_uint32(param_1,2,&local_3c,"cc.SimpleAudioEngine:stopEffect");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x88))(plVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0090c480;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_stopEffect\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:stopEffect",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0090c480:
                    /* catch() { ... } // from try @ 0090c320 with catch @ 0090c484 */
                    /* catch() { ... } // from try @ 0090c2fc with catch @ 0090c488 */
                    /* catch() { ... } // from try @ 0090c2e0 with catch @ 0090c48c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0090c278 with catch @ 0090c490 */
                    /* catch() { ... } // from try @ 0090c258 with catch @ 0090c494 */
                    /* catch() { ... } // from try @ 0090c384 with catch @ 0090c498 */
                    /* catch() { ... } // from try @ 0090c350 with catch @ 0090c49c */
                    /* catch() { ... } // from try @ 0090c2ac with catch @ 0090c4a0 */
                    /* catch() { ... } // from try @ 0090c224 with catch @ 0090c4a4 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

