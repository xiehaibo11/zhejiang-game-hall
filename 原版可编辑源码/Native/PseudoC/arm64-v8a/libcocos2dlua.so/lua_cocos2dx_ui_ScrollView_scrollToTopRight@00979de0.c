
/* lua_cocos2dx_ui_ScrollView_scrollToTopRight(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToTopRight(lua_State *param_1)

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
  
                    /* try { // try from 00979dec to 00a79def has its CatchHandler @ 00979eb8 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00979e00 to 00a79e0b has its CatchHandler @ 00979eb4 */
                    /* try { // try from 00979e0c to 00a79e33 has its CatchHandler @ 00979d28 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
                    /* try { // try from 00979e34 to 00a79e47 has its CatchHandler @ 00979eb4 */
    uVar4 = luaval_to_number(param_1,2,&local_50,"ccui.ScrollView:scrollToTopRight");
                    /* try { // try from 00979e5c to 00a79e5f has its CatchHandler @ 00979f04 */
    uVar5 = luaval_to_boolean(param_1,3,local_54,"ccui.ScrollView:scrollToTopRight");
                    /* try { // try from 00979e60 to 00a79ecf has its CatchHandler @ 00979d28 */
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x718))((float)local_50,plVar3,local_54[0]);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00979ed0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979dec with catch @ 00979eb8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979db8 with catch @ 00979ebc
                        */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_scrollToTopRight\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:scrollToTopRight",iVar2 + -1,2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00979d7c with catch @ 00979eb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00979dd4 with catch @ 00979eb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00979e00 with catch @ 00979eb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00979e34 with catch @ 00979eb4
                        */
  }
  uVar6 = 0;
LAB_00979ed0:
                    /* try { // try from 00979ed0 to 00a79ed3 has its CatchHandler @ 00979f00 */
                    /* try { // try from 00979ed4 to 00a79f17 has its CatchHandler @ 00979d28 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

