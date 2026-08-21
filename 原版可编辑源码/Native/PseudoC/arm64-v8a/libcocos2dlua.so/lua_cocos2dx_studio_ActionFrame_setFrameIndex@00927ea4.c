
/* lua_cocos2dx_studio_ActionFrame_setFrameIndex(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionFrame_setFrameIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionFrame *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.ActionFrame:setFrameIndex");
    if ((uVar3 & 1) != 0) {
      cocostudio::ActionFrame::setFrameIndex(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00927f60;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionFrame_setFrameIndex\'",0)
    ;
  }
  else {
                    /* try { // try from 00927f2c to 00a27f5f has its CatchHandler @ 0092802c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionFrame:setFrameIndex",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00927f60:
                    /* try { // try from 00927f60 to 00a27f73 has its CatchHandler @ 00927ff8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00927f78 to 00a27fab has its CatchHandler @ 00927ffc */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

