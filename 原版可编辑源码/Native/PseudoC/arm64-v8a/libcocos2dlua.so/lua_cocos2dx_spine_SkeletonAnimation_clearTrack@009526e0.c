
/* lua_cocos2dx_spine_SkeletonAnimation_clearTrack(lua_State*) */

undefined4 lua_cocos2dx_spine_SkeletonAnimation_clearTrack(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
                    /* try { // try from 009526f0 to 00a5273b has its CatchHandler @ 009526f0
                       catch() { ... } // from try @ 009526f0 with catch @ 009526f0
                       catch() { ... } // from try @ 00952740 with catch @ 009526f0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 == 2) {
                    /* try { // try from 0095273c to 00a5273f has its CatchHandler @ 0095279c */
                    /* try { // try from 00952740 to 00a527af has its CatchHandler @ 009526f0 */
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"sp.SkeletonAnimation:clearTrack");
    if ((uVar4 & 1) == 0) {
                    /* catch() { ... } // from try @ 0095273c with catch @ 0095279c */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_spine_SkeletonAnimation_clearTrack\'"
                  ,0);
      goto LAB_009527a8;
    }
  }
  else if (iVar3 + -1 != 0) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonAnimation:clearTrack",iVar3 + -1,0);
LAB_009527a8:
    uVar5 = 0;
    goto LAB_009527ac;
  }
  spine::SkeletonAnimation::clearTrack(iVar2);
  uVar5 = 1;
  lua_settop(param_1,1);
LAB_009527ac:
                    /* try { // try from 009527b0 to 00a528af has its CatchHandler @ 009527b0
                       catch() { ... } // from try @ 009527b0 with catch @ 009527b0
                       catch() { ... } // from try @ 00952930 with catch @ 009527b0 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

