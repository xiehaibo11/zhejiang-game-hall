
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_unloadEffect(lua_State*) */

undefined4 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_unloadEffect(lua_State *param_1)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 0090c5ec to 00a0c617 has its CatchHandler @ 0090c670 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0090c618 to 00a0c68b has its CatchHandler @ 0090c5a4 */
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.SimpleAudioEngine:unloadEffect");
    if ((uVar5 & 1) == 0) {
                    /* try { // try from 0090c68c to 00a0c6df has its CatchHandler @ 0090c68c
                       catch() { ... } // from try @ 0090c68c with catch @ 0090c68c
                       catch() { ... } // from try @ 0090c774 with catch @ 0090c68c
                       catch() { ... } // from try @ 0090c7bc with catch @ 0090c68c */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_unloadEffect\'"
                  ,0);
      uVar6 = 0;
    }
    else {
      pvVar1 = (void *)((ulong)&local_50 | 1);
      if ((local_50 & 1) != 0) {
        pvVar1 = local_40;
      }
      (**(code **)(*plVar4 + 0xa0))(plVar4,pvVar1);
      uVar6 = 1;
      lua_settop(param_1,1);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* catch() { ... } // from try @ 0090c5ec with catch @ 0090c670 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SimpleAudioEngine:unloadEffect",iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

