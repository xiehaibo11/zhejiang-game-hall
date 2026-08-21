
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadBackgroundMusic(lua_State*) */

undefined4 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadBackgroundMusic(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,
                       "cc.SimpleAudioEngine:preloadBackgroundMusic");
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 0090b318 to 00a0b34b has its CatchHandler @ 0090b39c */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_preloadBackgroundMusic\'"
                  ,0);
      uVar6 = 0;
    }
    else {
      pvVar1 = (void *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pvVar1 = local_40;
      }
      (**(code **)*puVar4)(puVar4,pvVar1);
                    /* try { // try from 0090b2cc to 00a0b2ff has its CatchHandler @ 0090b3cc */
      uVar6 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 0090b300 to 00a0b313 has its CatchHandler @ 0090b398 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:preloadBackgroundMusic",iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 0090b34c to 00a0b3e7 has its CatchHandler @ 0090b1cc */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

