
/* lua_cocos2dx_studio_ActionTimeline_setLastFrameCallFunc(lua_State*) */

void lua_cocos2dx_studio_ActionTimeline_setLastFrameCallFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionTimeline *pAVar3;
  undefined8 uVar4;
  code *pcVar5;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pAVar3 = (ActionTimeline *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00947950 to 00a47963 has its CatchHandler @ 009479e8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
                    /* try { // try from 0094799c to 00a47a37 has its CatchHandler @ 009477ec */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:setLastFrameCallFunc",iVar2 + -1,1);
    uVar4 = 0;
    goto LAB_00947a08;
  }
                    /* try { // try from 00947968 to 00a4799b has its CatchHandler @ 009479ec */
  local_50 = (long *)0x0;
  local_80 = (long *)0x0;
  cocostudio::timeline::ActionTimeline::setLastFrameCallFunc(pAVar3,alStack_a0);
  if (alStack_a0 == local_80) {
    pcVar5 = *(code **)(*local_80 + 0x20);
LAB_009479c8:
    (*pcVar5)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar5 = *(code **)(*local_80 + 0x28);
    goto LAB_009479c8;
  }
  lua_settop(param_1,1);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00947a00:
    (*pcVar5)();
  }
  else {
                    /* catch() { ... } // from try @ 00947950 with catch @ 009479e8 */
    if (local_50 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00947968 with catch @ 009479ec */
      pcVar5 = *(code **)(*local_50 + 0x28);
      goto LAB_00947a00;
    }
  }
  uVar4 = 1;
LAB_00947a08:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0094791c with catch @ 00947a1c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

