
/* lua_cocos2dx_ui_ScrollView_scrollToBottom(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToBottom(lua_State *param_1)

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
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00978478 to 00a784d3 has its CatchHandler @ 00978558 */
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&local_50,"ccui.ScrollView:scrollToBottom");
    uVar5 = luaval_to_boolean(param_1,3,local_54,"ccui.ScrollView:scrollToBottom");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x6f0))((float)local_50,plVar3,local_54[0]);
                    /* try { // try from 009784d4 to 00a78503 has its CatchHandler @ 00978428 */
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00978520;
    }
                    /* try { // try from 00978518 to 00a78573 has its CatchHandler @ 00978428 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_scrollToBottom\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012da375,
               iVar2 + -1,2);
                    /* try { // try from 00978504 to 00a78517 has its CatchHandler @ 00978558 */
  }
  uVar6 = 0;
LAB_00978520:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

