
/* lua_cocos2dx_studio_ActionTimeline_setCurrentFrame(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionTimeline_setCurrentFrame(lua_State *param_1)

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
                    /* try { // try from 009490a8 to 00a490f3 has its CatchHandler @ 009490a8
                       catch() { ... } // from try @ 009490a8 with catch @ 009490a8
                       catch() { ... } // from try @ 009490f8 with catch @ 009490a8 */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccs.ActionTimeline:setCurrentFrame");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0xd0))(plVar3,local_3c);
      uVar5 = 1;
                    /* try { // try from 009490f4 to 00a490f7 has its CatchHandler @ 00949130 */
      lua_settop(param_1,1);
                    /* try { // try from 009490f8 to 00a49143 has its CatchHandler @ 009490a8 */
      goto LAB_00949134;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionTimeline_setCurrentFrame\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:setCurrentFrame",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 009490f4 with catch @ 00949130 */
  uVar5 = 0;
LAB_00949134:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00949144 to 00a4923f has its CatchHandler @ 00949144
                       catch() { ... } // from try @ 00949144 with catch @ 00949144
                       catch() { ... } // from try @ 009492c0 with catch @ 00949144 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

