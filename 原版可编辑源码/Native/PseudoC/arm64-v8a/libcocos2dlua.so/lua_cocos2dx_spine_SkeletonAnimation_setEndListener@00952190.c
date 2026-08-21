
/* lua_cocos2dx_spine_SkeletonAnimation_setEndListener(lua_State*) */

void lua_cocos2dx_spine_SkeletonAnimation_setEndListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SkeletonAnimation *this;
  undefined8 uVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00952190 to 00a521ff has its CatchHandler @ 00952140 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SkeletonAnimation *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "sp.SkeletonAnimation:setEndListener",iVar2 + -1,1);
    uVar3 = 0;
    goto LAB_0095224c;
  }
  local_50 = (long *)0x0;
  spine::SkeletonAnimation::setEndListener(this,(function *)alStack_70);
                    /* catch() { ... } // from try @ 0095218c with catch @ 009521ec */
  lua_settop(param_1,1);
                    /* try { // try from 00952200 to 00a522ff has its CatchHandler @ 00952200
                       catch() { ... } // from try @ 00952200 with catch @ 00952200
                       catch() { ... } // from try @ 00952380 with catch @ 00952200 */
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00952244:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00952244;
  }
  uVar3 = 1;
LAB_0095224c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

