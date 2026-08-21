
/* lua_cocos2dx_ui_LoadingBar_setScale9Enabled(lua_State*) */

undefined4 lua_cocos2dx_ui_LoadingBar_setScale9Enabled(lua_State *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00977440 to 00a77453 has its CatchHandler @ 00977498 */
  bVar2 = (bool)tolua_tousertype(param_1,1,0);
                    /* try { // try from 00977454 to 00a774b3 has its CatchHandler @ 00977388 */
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar4 = luaval_to_boolean(param_1,2,local_3c,"ccui.LoadingBar:setScale9Enabled");
    if ((uVar4 & 1) != 0) {
      cocos2d::ui::LoadingBar::setScale9Enabled(bVar2);
                    /* catch() { ... } // from try @ 009773f4 with catch @ 00977494 */
                    /* catch() { ... } // from try @ 009773d8 with catch @ 00977498
                       catch() { ... } // from try @ 00977440 with catch @ 00977498 */
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009774dc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_LoadingBar_setScale9Enabled\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d9fde,
               iVar3 + -1,1);
  }
  uVar5 = 0;
LAB_009774dc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

