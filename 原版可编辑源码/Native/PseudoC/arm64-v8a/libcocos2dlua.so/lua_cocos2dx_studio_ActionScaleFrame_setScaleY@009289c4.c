
/* lua_cocos2dx_studio_ActionScaleFrame_setScaleY(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionScaleFrame_setScaleY(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionScaleFrame *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionScaleFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccs.ActionScaleFrame:setScaleY");
    if ((uVar3 & 1) != 0) {
      cocostudio::ActionScaleFrame::setScaleY(this,(float)local_40);
                    /* try { // try from 00928a40 to 00a28a8b has its CatchHandler @ 00928a40
                       catch() { ... } // from try @ 00928a40 with catch @ 00928a40
                       catch() { ... } // from try @ 00928ab4 with catch @ 00928a40 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00928a84;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionScaleFrame_setScaleY\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionScaleFrame:setScaleY",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00928a84:
                    /* try { // try from 00928a8c to 00a28a8f has its CatchHandler @ 00928b10 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

