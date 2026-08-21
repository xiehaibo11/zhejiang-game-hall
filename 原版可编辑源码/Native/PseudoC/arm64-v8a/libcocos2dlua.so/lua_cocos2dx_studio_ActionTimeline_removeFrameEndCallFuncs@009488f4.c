
/* lua_cocos2dx_studio_ActionTimeline_removeFrameEndCallFuncs(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionTimeline_removeFrameEndCallFuncs(lua_State *param_1)

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
                    /* try { // try from 00948928 to 00a4892b has its CatchHandler @ 00948960 */
                    /* try { // try from 0094892c to 00a48973 has its CatchHandler @ 009488dc */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccs.ActionTimeline:removeFrameEndCallFuncs");
    if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 00948928 with catch @ 00948960 */
      (**(code **)(*plVar3 + 0x130))(plVar3,local_3c);
                    /* try { // try from 00948974 to 00a48b63 has its CatchHandler @ 00948974
                       catch() { ... } // from try @ 00948974 with catch @ 00948974
                       catch() { ... } // from try @ 00948be4 with catch @ 00948974 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009489b8;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionTimeline_removeFrameEndCallFuncs\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionTimeline:removeFrameEndCallFuncs",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009489b8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

