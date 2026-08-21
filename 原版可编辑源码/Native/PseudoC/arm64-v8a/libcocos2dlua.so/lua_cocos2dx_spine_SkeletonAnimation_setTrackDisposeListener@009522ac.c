
/* lua_cocos2dx_spine_SkeletonAnimation_setTrackDisposeListener(lua_State*) */

undefined8 lua_cocos2dx_spine_SkeletonAnimation_setTrackDisposeListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_40 = (long *)0x0;
                    /* try { // try from 00952300 to 00a52333 has its CatchHandler @ 00952400 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_spine_SkeletonAnimation_setTrackDisposeListener\'"
                ,0);
    if (alStack_60 == local_40) {
      pcVar3 = *(code **)(*local_40 + 0x20);
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_00952350;
      pcVar3 = *(code **)(*local_40 + 0x28);
    }
                    /* try { // try from 0095234c to 00a5237f has its CatchHandler @ 009523d0 */
    (*pcVar3)();
  }
  else {
                    /* try { // try from 00952334 to 00a52347 has its CatchHandler @ 009523cc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonAnimation:setTrackDisposeListener",iVar2 + -1,2);
  }
LAB_00952350:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

