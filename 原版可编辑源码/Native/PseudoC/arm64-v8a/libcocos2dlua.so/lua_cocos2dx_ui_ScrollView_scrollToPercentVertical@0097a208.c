
/* lua_cocos2dx_ui_ScrollView_scrollToPercentVertical(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToPercentVertical(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  bool local_5c [4];
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 0097a248 to 00a7a2a3 has its CatchHandler @ 0097a328 */
  if (iVar2 + -1 == 3) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"ccui.ScrollView:scrollToPercentVertical");
    uVar5 = luaval_to_number(param_1,3,&local_58,"ccui.ScrollView:scrollToPercentVertical");
    uVar6 = luaval_to_boolean(param_1,4,local_5c,"ccui.ScrollView:scrollToPercentVertical");
                    /* try { // try from 0097a2a4 to 00a7a2d3 has its CatchHandler @ 0097a1f8 */
    if ((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x730))((float)dStack_50,(float)local_58,plVar3,local_5c[0]);
                    /* try { // try from 0097a2d4 to 00a7a2e7 has its CatchHandler @ 0097a328 */
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_0097a318;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_scrollToPercentVertical\'"
                ,0);
  }
  else {
                    /* try { // try from 0097a2e8 to 00a7a343 has its CatchHandler @ 0097a1f8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:scrollToPercentVertical",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_0097a318:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 0097a248 with catch @ 0097a328
                       catch() { ... } // from try @ 0097a2d4 with catch @ 0097a328 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0097a344 to 00a7a393 has its CatchHandler @ 0097a344
                       catch() { ... } // from try @ 0097a344 with catch @ 0097a344
                       catch() { ... } // from try @ 0097a3c8 with catch @ 0097a344
                       catch() { ... } // from try @ 0097a410 with catch @ 0097a344 */
  __stack_chk_fail();
}

