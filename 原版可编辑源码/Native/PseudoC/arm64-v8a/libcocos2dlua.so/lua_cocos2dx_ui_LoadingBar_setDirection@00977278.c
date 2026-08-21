
/* lua_cocos2dx_ui_LoadingBar_setDirection(lua_State*) */

undefined4 lua_cocos2dx_ui_LoadingBar_setDirection(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  LoadingBar *pLVar3;
  ulong uVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pLVar3 = (LoadingBar *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009772b0 to 00a772e7 has its CatchHandler @ 0097736c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccui.LoadingBar:setDirection");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::LoadingBar::setDirection(pLVar3,local_3c);
                    /* try { // try from 009772e8 to 00a77317 has its CatchHandler @ 00977260 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00977334;
    }
                    /* try { // try from 0097732c to 00a77387 has its CatchHandler @ 00977260 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_LoadingBar_setDirection\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LoadingBar:setDirection",iVar2 + -1,1);
                    /* try { // try from 00977318 to 00a7732b has its CatchHandler @ 0097736c */
  }
  uVar5 = 0;
LAB_00977334:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

