
/* lua_cocos2dx_studio_ActionTimeline_getAnimationInfo(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_getAnimationInfo(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  AnimationInfo *pAVar5;
  bool bVar6;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* try { // try from 00947ebc to 00a47f0b has its CatchHandler @ 00947ebc
                       catch() { ... } // from try @ 00947ebc with catch @ 00947ebc
                       catch() { ... } // from try @ 00947f64 with catch @ 00947ebc
                       catch() { ... } // from try @ 00947fac with catch @ 00947ebc */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 00947f0c to 00a47f3f has its CatchHandler @ 00947ff0 */
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"ccs.ActionTimeline:getAnimationInfo");
    bVar6 = (uVar4 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ActionTimeline_getAnimationInfo\'"
                  ,0);
    }
    else {
      pAVar5 = (AnimationInfo *)(**(code **)(*plVar3 + 0x110))(plVar3,&local_50);
      animationInfo_to_luaval(param_1,pAVar5);
    }
    bVar6 = !bVar6;
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
                    /* try { // try from 00947f4c to 00a47f63 has its CatchHandler @ 00947fec */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:getAnimationInfo",iVar2 + -1,1);
                    /* try { // try from 00947f64 to 00a47f97 has its CatchHandler @ 00947ebc */
    bVar6 = false;
  }
                    /* try { // try from 00947f98 to 00a47fab has its CatchHandler @ 00947ff0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00947fac to 00a4800b has its CatchHandler @ 00947ebc */
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

