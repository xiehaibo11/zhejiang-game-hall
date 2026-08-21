
/* lua_cocos2dx_spine_SkeletonAnimation_setTrackInterruptListener(lua_State*) */

undefined8 lua_cocos2dx_spine_SkeletonAnimation_setTrackInterruptListener(lua_State *param_1)

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
    tolua_error(param_1,&DAT_012d1d09,0);
    if (alStack_60 == local_40) {
      pcVar3 = *(code **)(*local_40 + 0x20);
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_0095212c;
      pcVar3 = *(code **)(*local_40 + 0x28);
    }
    (*pcVar3)();
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonAnimation:setTrackInterruptListener",iVar2 + -1,2);
  }
LAB_0095212c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00952140 to 00a5218b has its CatchHandler @ 00952140
                       catch() { ... } // from try @ 00952140 with catch @ 00952140
                       catch() { ... } // from try @ 00952190 with catch @ 00952140 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

