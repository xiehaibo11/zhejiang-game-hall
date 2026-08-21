
/* lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener(lua_State*) */

undefined8 lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
                    /* try { // try from 009517ec to 00a5181f has its CatchHandler @ 00951870 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00951820 to 00a518bb has its CatchHandler @ 009516a0 */
  if (iVar2 + -1 == 2) {
    local_40 = (long *)0x0;
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_spine_SkeletonAnimation_setTrackCompleteListener\'"
                ,0);
    if (alStack_60 == local_40) {
      pcVar3 = *(code **)(*local_40 + 0x20);
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_00951890;
      pcVar3 = *(code **)(*local_40 + 0x28);
    }
    (*pcVar3)();
  }
  else {
                    /* catch() { ... } // from try @ 009517d4 with catch @ 0095186c */
                    /* catch() { ... } // from try @ 009517ec with catch @ 00951870 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonAnimation:setTrackCompleteListener",iVar2 + -1,2);
  }
LAB_00951890:
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 009517a0 with catch @ 009518a0 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

