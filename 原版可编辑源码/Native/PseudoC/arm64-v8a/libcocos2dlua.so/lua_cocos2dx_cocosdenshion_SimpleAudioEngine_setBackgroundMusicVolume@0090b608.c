
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setBackgroundMusicVolume(lua_State*) */

undefined4 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setBackgroundMusicVolume(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0090b4c0 with catch @ 0090b61c
                       catch() { ... } // from try @ 0090b524 with catch @ 0090b61c
                       catch() { ... } // from try @ 0090b578 with catch @ 0090b61c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0090b440 with catch @ 0090b620
                       catch() { ... } // from try @ 0090b4f0 with catch @ 0090b620 */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0090b658 to 00a0b697 has its CatchHandler @ 0090b658
                       catch() { ... } // from try @ 0090b658 with catch @ 0090b658
                       catch() { ... } // from try @ 0090b71c with catch @ 0090b658
                       catch() { ... } // from try @ 0090b79c with catch @ 0090b658
                       catch() { ... } // from try @ 0090b7f4 with catch @ 0090b658 */
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.SimpleAudioEngine:setBackgroundMusicVolume");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x48))((float)local_40,plVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_0090b6d0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setBackgroundMusicVolume\'"
                ,0);
  }
  else {
                    /* try { // try from 0090b698 to 00a0b6e7 has its CatchHandler @ 0090b890 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:setBackgroundMusicVolume",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0090b6d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

