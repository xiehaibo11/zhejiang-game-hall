
/* lua_cocos2dx_studio_Tween_gotoAndPlay(lua_State*) */

undefined4 lua_cocos2dx_studio_Tween_gotoAndPlay(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccs.Tween:gotoAndPlay");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0xb0))(plVar3,local_3c);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009301a0;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_Tween_gotoAndPlay\'",0)
    ;
  }
  else {
                    /* try { // try from 00930168 to 00a3019b has its CatchHandler @ 00930268 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.Tween:gotoAndPlay",iVar2 + -1,1);
  }
                    /* try { // try from 0093019c to 00a301af has its CatchHandler @ 00930234 */
  uVar5 = 0;
LAB_009301a0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009301b4 to 00a301e7 has its CatchHandler @ 00930238 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

