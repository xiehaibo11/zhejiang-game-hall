
/* lua_cocos2dx_studio_InnerActionFrame_setStartFrameIndex(lua_State*) */

undefined4 lua_cocos2dx_studio_InnerActionFrame_setStartFrameIndex(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  InnerActionFrame *this;
  ulong uVar3;
  undefined4 uVar4;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0094342c to 00a4345f has its CatchHandler @ 009434e4 */
  this = (InnerActionFrame *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
                    /* try { // try from 00943460 to 00a4348f has its CatchHandler @ 009433f0 */
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"ccs.InnerActionFrame:setStartFrameIndex");
    if ((uVar3 & 1) != 0) {
      cocostudio::timeline::InnerActionFrame::setStartFrameIndex(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_009434c8;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_InnerActionFrame_setStartFrameIndex\'"
                ,0);
  }
  else {
                    /* try { // try from 00943490 to 00a434a3 has its CatchHandler @ 009434e4 */
                    /* try { // try from 009434a4 to 00a434ff has its CatchHandler @ 009433f0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.InnerActionFrame:setStartFrameIndex",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009434c8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 0094342c with catch @ 009434e4
                       catch() { ... } // from try @ 00943490 with catch @ 009434e4 */
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

