
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic(lua_State*) */

undefined4 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 uVar8;
  bool local_64 [4];
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 3) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,
                       "cc.SimpleAudioEngine:playBackgroundMusic");
                    /* try { // try from 0090c12c to 00a0c13f has its CatchHandler @ 0090c184 */
    pvVar1 = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pvVar1 = local_50;
    }
                    /* try { // try from 0090c140 to 00a0c19f has its CatchHandler @ 0090c03c */
    uVar5 = luaval_to_boolean(param_1,3,local_64,"cc.SimpleAudioEngine:playBackgroundMusic");
    if ((uVar4 & uVar5 & 1) != 0) {
      (**(code **)(*plVar6 + 8))(plVar6,pvVar1,local_64[0]);
      lua_settop(param_1,1);
      goto LAB_0090c180;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic\'"
                ,0);
LAB_0090c1e0:
    uVar8 = 0;
  }
  else {
    if (iVar3 != 2) {
                    /* try { // try from 0090c1a0 to 00a0c223 has its CatchHandler @ 0090c1a0
                       catch() { ... } // from try @ 0090c1a0 with catch @ 0090c1a0
                       catch() { ... } // from try @ 0090c3a8 with catch @ 0090c1a0 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.SimpleAudioEngine:playBackgroundMusic",iVar3 + -1,1);
      uVar8 = 0;
      goto LAB_0090c1f4;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
                    /* try { // try from 0090c0b0 to 00a0c0c7 has its CatchHandler @ 0090c184 */
    uVar7 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,
                       "cc.SimpleAudioEngine:playBackgroundMusic");
    if ((uVar7 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_playBackgroundMusic\'"
                  ,0);
      goto LAB_0090c1e0;
    }
    pvVar1 = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pvVar1 = local_50;
    }
                    /* try { // try from 0090c0e4 to 00a0c0f7 has its CatchHandler @ 0090c180 */
    (**(code **)(*plVar6 + 8))(plVar6,pvVar1,0);
    lua_settop(param_1,1);
                    /* try { // try from 0090c0f8 to 00a0c12b has its CatchHandler @ 0090c03c */
LAB_0090c180:
                    /* catch() { ... } // from try @ 0090c0e4 with catch @ 0090c180 */
    uVar8 = 1;
                    /* catch() { ... } // from try @ 0090c0b0 with catch @ 0090c184
                       catch() { ... } // from try @ 0090c12c with catch @ 0090c184 */
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_0090c1f4:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

