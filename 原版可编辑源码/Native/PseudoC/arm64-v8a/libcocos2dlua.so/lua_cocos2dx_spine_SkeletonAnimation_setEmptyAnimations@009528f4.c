
/* lua_cocos2dx_spine_SkeletonAnimation_setEmptyAnimations(lua_State*) */

undefined4 lua_cocos2dx_spine_SkeletonAnimation_setEmptyAnimations(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 009528fc to 00a5292f has its CatchHandler @ 00952980 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00952930 to 00a529cb has its CatchHandler @ 009527b0 */
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"sp.SkeletonAnimation:setEmptyAnimations");
    if ((uVar3 & 1) != 0) {
      spine::SkeletonAnimation::setEmptyAnimations((float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009529b4;
    }
    tolua_error(param_1,&DAT_012d2031,0);
  }
  else {
                    /* catch() { ... } // from try @ 009528e4 with catch @ 0095297c */
                    /* catch() { ... } // from try @ 009528fc with catch @ 00952980 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",0x12d2009,
               iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 009528b0 with catch @ 009529b0 */
  uVar4 = 0;
LAB_009529b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

