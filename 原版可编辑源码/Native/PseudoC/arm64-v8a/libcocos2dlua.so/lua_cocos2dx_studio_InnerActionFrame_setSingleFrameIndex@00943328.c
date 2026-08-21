
/* lua_cocos2dx_studio_InnerActionFrame_setSingleFrameIndex(lua_State*) */

undefined4 lua_cocos2dx_studio_InnerActionFrame_setSingleFrameIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccs.InnerActionFrame:setSingleFrameIndex");
    if ((uVar4 & 1) != 0) {
      *(int *)(lVar3 + 100) = local_3c;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009433e0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_InnerActionFrame_setSingleFrameIndex\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.InnerActionFrame:setSingleFrameIndex",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009433e0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009433f0 to 00a4342b has its CatchHandler @ 009433f0
                       catch() { ... } // from try @ 009433f0 with catch @ 009433f0
                       catch() { ... } // from try @ 00943460 with catch @ 009433f0
                       catch() { ... } // from try @ 009434a4 with catch @ 009433f0 */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

