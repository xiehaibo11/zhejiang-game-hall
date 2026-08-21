
/* lua_cocos2dx_studio_ActionTimeline_addAnimationInfo(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_addAnimationInfo(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong local_90 [2];
  void *local_80;
  undefined8 uStack_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00948598 to 00a485af has its CatchHandler @ 00948718 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:addAnimationInfo",iVar2 + -1,1);
    bVar6 = false;
    goto LAB_0094867c;
  }
  local_50 = (long *)0x0;
                    /* try { // try from 009485b4 to 00a485df has its CatchHandler @ 00948714 */
  local_90[1] = 0;
  local_90[0] = 0;
  uStack_78 = 0;
  local_80 = (void *)0x0;
  uVar4 = luaval_to_animationInfo
                    (param_1,2,(AnimationInfo *)local_90,"ccs.ActionTimeline:addAnimationInfo");
  bVar6 = (uVar4 & 1) == 0;
  if (bVar6) {
                    /* try { // try from 0094862c to 00a48653 has its CatchHandler @ 00948710 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionTimeline_addAnimationInfo\'"
                ,0);
  }
  else {
    (**(code **)(*plVar3 + 0xf8))(plVar3,local_90);
                    /* try { // try from 009485ec to 00a4861f has its CatchHandler @ 0094871c */
    lua_settop(param_1,1);
  }
  bVar6 = !bVar6;
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00948668:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 00948654 to 00a4867f has its CatchHandler @ 00948558 */
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00948668;
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
LAB_0094867c:
                    /* try { // try from 00948680 to 00a48693 has its CatchHandler @ 00948718 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00948698 to 00a486ab has its CatchHandler @ 0094871c */
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

