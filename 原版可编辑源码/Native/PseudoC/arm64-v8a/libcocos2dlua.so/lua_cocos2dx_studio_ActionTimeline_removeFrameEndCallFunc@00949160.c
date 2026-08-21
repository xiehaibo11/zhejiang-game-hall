
/* lua_cocos2dx_studio_ActionTimeline_removeFrameEndCallFunc(lua_State*) */

bool lua_cocos2dx_studio_ActionTimeline_removeFrameEndCallFunc(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  ulong local_58;
  undefined8 local_50;
  void *local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_50 = 0;
    local_48 = (void *)0x0;
    local_58 = 0;
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.ActionTimeline:removeFrameEndCallFunc");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_58,
                       "ccs.ActionTimeline:removeFrameEndCallFunc");
    bVar6 = (uVar3 & uVar4 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ActionTimeline_removeFrameEndCallFunc\'"
                  ,0);
    }
    else {
      (**(code **)(*plVar5 + 0x128))(plVar5,local_3c,&local_58);
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:removeFrameEndCallFunc",iVar2 + -1,2);
    bVar6 = false;
                    /* try { // try from 00949240 to 00a49273 has its CatchHandler @ 00949340 */
  }
                    /* try { // try from 00949274 to 00a49287 has its CatchHandler @ 0094930c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 0094928c to 00a492bf has its CatchHandler @ 00949310 */
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

