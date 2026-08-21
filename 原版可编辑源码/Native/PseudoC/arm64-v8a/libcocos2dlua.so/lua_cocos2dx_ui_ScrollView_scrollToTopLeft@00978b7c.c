
/* lua_cocos2dx_ui_ScrollView_scrollToTopLeft(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToTopLeft(lua_State *param_1)

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
  if (iVar2 + -1 == 2) {
                    /* try { // try from 00978bdc to 00a78c0f has its CatchHandler @ 00978cdc */
    uVar4 = luaval_to_number(param_1,2,&local_50,"ccui.ScrollView:scrollToTopLeft");
    uVar5 = luaval_to_boolean(param_1,3,local_54,"ccui.ScrollView:scrollToTopLeft");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
                    /* try { // try from 00978c10 to 00a78c23 has its CatchHandler @ 00978ca8 */
      (**(code **)(*plVar3 + 0x710))((float)local_50,plVar3,local_54[0]);
                    /* try { // try from 00978c28 to 00a78c5b has its CatchHandler @ 00978cac */
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00978c6c;
    }
                    /* try { // try from 00978c5c to 00a78cf7 has its CatchHandler @ 00978a4c */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_scrollToTopLeft\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:scrollToTopLeft",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00978c6c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

