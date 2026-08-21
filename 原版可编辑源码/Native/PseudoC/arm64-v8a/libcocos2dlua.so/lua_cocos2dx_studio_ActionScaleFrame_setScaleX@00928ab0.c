
/* lua_cocos2dx_studio_ActionScaleFrame_setScaleX(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionScaleFrame_setScaleX(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionScaleFrame *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* try { // try from 00928ab0 to 00a28ab3 has its CatchHandler @ 00928b00 */
                    /* try { // try from 00928ab4 to 00a28b23 has its CatchHandler @ 00928a40 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionScaleFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* catch() { ... } // from try @ 00928ab0 with catch @ 00928b00 */
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccs.ActionScaleFrame:setScaleX");
                    /* catch() { ... } // from try @ 00928a8c with catch @ 00928b10 */
    if ((uVar3 & 1) != 0) {
      cocostudio::ActionScaleFrame::setScaleX(this,(float)local_40);
                    /* try { // try from 00928b24 to 00a28c53 has its CatchHandler @ 00928b24
                       catch() { ... } // from try @ 00928b24 with catch @ 00928b24
                       catch() { ... } // from try @ 00928cd4 with catch @ 00928b24 */
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00928b70;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionScaleFrame_setScaleX\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionScaleFrame:setScaleX",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00928b70:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

