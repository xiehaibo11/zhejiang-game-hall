
/* lua_cocos2dx_studio_ActionFrame_setFrameTime(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionFrame_setFrameTime(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionFrame *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 00927b00 to 00a27b9b has its CatchHandler @ 009279e0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 00927ab4 with catch @ 00927b4c */
                    /* catch() { ... } // from try @ 00927acc with catch @ 00927b50 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccs.ActionFrame:setFrameTime");
    if ((uVar3 & 1) != 0) {
      cocostudio::ActionFrame::setFrameTime(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00927bb8;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionFrame_setFrameTime\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 00927a80 with catch @ 00927b80 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionFrame:setFrameTime",iVar2 + -1,1);
                    /* try { // try from 00927b9c to 00a27c23 has its CatchHandler @ 00927b9c
                       catch() { ... } // from try @ 00927b9c with catch @ 00927b9c
                       catch() { ... } // from try @ 00927ca4 with catch @ 00927b9c */
  }
  uVar4 = 0;
LAB_00927bb8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

