
/* lua_cocos2dx_studio_ZOrderFrame_setZOrder(lua_State*) */

undefined4 lua_cocos2dx_studio_ZOrderFrame_setZOrder(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
                    /* try { // try from 00944bd0 to 00a44ce7 has its CatchHandler @ 00944bd0
                       catch() { ... } // from try @ 00944bd0 with catch @ 00944bd0
                       catch() { ... } // from try @ 00944d68 with catch @ 00944bd0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccs.ZOrderFrame:setZOrder");
    if ((uVar4 & 1) != 0) {
      *(int *)(lVar3 + 0x58) = local_3c;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00944c88;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ZOrderFrame_setZOrder\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ZOrderFrame:setZOrder",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00944c88:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

