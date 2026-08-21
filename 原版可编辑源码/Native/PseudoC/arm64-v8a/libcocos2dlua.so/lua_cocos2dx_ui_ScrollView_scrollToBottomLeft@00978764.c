
/* lua_cocos2dx_ui_ScrollView_scrollToBottomLeft(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToBottomLeft(lua_State *param_1)

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
    uVar4 = luaval_to_number(param_1,2,&local_50,"ccui.ScrollView:scrollToBottomLeft");
                    /* catch() { ... } // from try @ 009786c0 with catch @ 009787d0
                       catch() { ... } // from try @ 00978740 with catch @ 009787d0 */
    uVar5 = luaval_to_boolean(param_1,3,local_54,"ccui.ScrollView:scrollToBottomLeft");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x720))((float)local_50,plVar3,local_54[0]);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00978854;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_scrollToBottomLeft\'",0)
    ;
  }
  else {
                    /* try { // try from 00978828 to 00a78877 has its CatchHandler @ 00978828
                       catch() { ... } // from try @ 00978828 with catch @ 00978828
                       catch() { ... } // from try @ 009788bc with catch @ 00978828
                       catch() { ... } // from try @ 00978900 with catch @ 00978828 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012da49a,
               iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00978854:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00978878 to 00a788bb has its CatchHandler @ 0097896c */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

