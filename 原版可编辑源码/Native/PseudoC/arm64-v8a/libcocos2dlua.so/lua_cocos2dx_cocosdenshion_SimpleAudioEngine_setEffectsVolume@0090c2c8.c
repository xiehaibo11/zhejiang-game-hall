
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setEffectsVolume(lua_State*) */

undefined4 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setEffectsVolume(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0090c2e0 to 00a0c2f7 has its CatchHandler @ 0090c48c */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0090c2fc to 00a0c313 has its CatchHandler @ 0090c488 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 0090c320 to 00a0c33f has its CatchHandler @ 0090c484 */
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.SimpleAudioEngine:setEffectsVolume");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x58))((float)local_40,plVar3);
      uVar5 = 1;
                    /* try { // try from 0090c350 to 00a0c367 has its CatchHandler @ 0090c49c */
      lua_settop(param_1,1);
      goto LAB_0090c390;
    }
                    /* try { // try from 0090c384 to 00a0c3a7 has its CatchHandler @ 0090c498 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_setEffectsVolume\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:setEffectsVolume",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0090c390:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0090c3a8 to 00a0c4bf has its CatchHandler @ 0090c1a0 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

