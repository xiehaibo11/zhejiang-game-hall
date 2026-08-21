
/* lua_cocos2dx_spine_SkeletonAnimation_setInterruptListener(lua_State*) */

void lua_cocos2dx_spine_SkeletonAnimation_setInterruptListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  SkeletonAnimation *this;
  undefined8 uVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (SkeletonAnimation *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d1fdf,
               iVar2 + -1,1);
    uVar3 = 0;
    goto LAB_00952894;
  }
  local_50 = (long *)0x0;
  spine::SkeletonAnimation::setInterruptListener(this,(function *)alStack_70);
  lua_settop(param_1,1);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_0095288c:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_0095288c;
  }
  uVar3 = 1;
LAB_00952894:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009528b0 to 00a528e3 has its CatchHandler @ 009529b0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

