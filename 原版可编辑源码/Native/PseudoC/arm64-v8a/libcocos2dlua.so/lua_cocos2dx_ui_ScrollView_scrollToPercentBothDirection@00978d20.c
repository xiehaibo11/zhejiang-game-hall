
/* WARNING: Type propagation algorithm not settling */
/* lua_cocos2dx_ui_ScrollView_scrollToPercentBothDirection(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToPercentBothDirection(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  bool local_5c [4];
  double local_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00978d50 to 00a78d77 has its CatchHandler @ 00978efc */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
                    /* try { // try from 00978d78 to 00a78d83 has its CatchHandler @ 00978ea0 */
                    /* try { // try from 00978d84 to 00a78de3 has its CatchHandler @ 00978cf8 */
    local_58[1] = 0.0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)(local_58 + 1),
                           "ccui.ScrollView:scrollToPercentBothDirection");
    uVar5 = luaval_to_number(param_1,3,local_58,"ccui.ScrollView:scrollToPercentBothDirection");
    uVar6 = luaval_to_boolean(param_1,4,local_5c,"ccui.ScrollView:scrollToPercentBothDirection");
    if ((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
                    /* try { // try from 00978de4 to 00a78e27 has its CatchHandler @ 00978efc */
      (**(code **)(*plVar3 + 0x740))((float)local_58[0],plVar3,local_58 + 1,local_5c[0]);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_00978e34;
    }
                    /* try { // try from 00978e28 to 00a78f53 has its CatchHandler @ 00978cf8 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_scrollToPercentBothDirection\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:scrollToPercentBothDirection",iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_00978e34:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

