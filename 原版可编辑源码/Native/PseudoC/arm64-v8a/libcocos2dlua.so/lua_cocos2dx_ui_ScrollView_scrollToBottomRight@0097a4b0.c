
/* lua_cocos2dx_ui_ScrollView_scrollToBottomRight(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToBottomRight(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  bool local_54 [4];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0097a4e0 to 00a7a567 has its CatchHandler @ 0097a4e0
                       catch() { ... } // from try @ 0097a4e0 with catch @ 0097a4e0
                       catch() { ... } // from try @ 0097a5d4 with catch @ 0097a4e0 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&local_50,"ccui.ScrollView:scrollToBottomRight");
    uVar5 = luaval_to_boolean(param_1,3,local_54,"ccui.ScrollView:scrollToBottomRight");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x728))((float)local_50,plVar3,local_54[0]);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_0097a5a0;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_scrollToBottomRight\'",0
               );
  }
  else {
                    /* try { // try from 0097a568 to 00a7a587 has its CatchHandler @ 0097a620 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:scrollToBottomRight",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_0097a5a0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0097a5c0 to 00a7a5d3 has its CatchHandler @ 0097a61c */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

