
/* lua_cocos2dx_studio_ActionFrame_setFrameType(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionFrame_setFrameType(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionFrame *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
                    /* try { // try from 00927dc0 to 00a27e0b has its CatchHandler @ 00927dc0
                       catch() { ... } // from try @ 00927dc0 with catch @ 00927dc0
                       catch() { ... } // from try @ 00927e10 with catch @ 00927dc0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00927e0c to 00a27e0f has its CatchHandler @ 00927e60 */
                    /* try { // try from 00927e10 to 00a27e73 has its CatchHandler @ 00927dc0 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.ActionFrame:setFrameType");
    if ((uVar3 & 1) != 0) {
      cocostudio::ActionFrame::setFrameType(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00927e78;
    }
                    /* catch() { ... } // from try @ 00927e0c with catch @ 00927e60 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionFrame_setFrameType\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionFrame:setFrameType",iVar2 + -1,1);
  }
                    /* try { // try from 00927e74 to 00a27f2b has its CatchHandler @ 00927e74
                       catch() { ... } // from try @ 00927e74 with catch @ 00927e74
                       catch() { ... } // from try @ 00927fac with catch @ 00927e74 */
  uVar4 = 0;
LAB_00927e78:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

