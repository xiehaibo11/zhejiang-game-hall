
/* lua_cocos2dx_ui_ScrollView_scrollToTop(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToTop(lua_State *param_1)

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
    uVar4 = luaval_to_number(param_1,2,&local_50,"ccui.ScrollView:scrollToTop");
    uVar5 = luaval_to_boolean(param_1,3,local_54,"ccui.ScrollView:scrollToTop");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
                    /* try { // try from 00978010 to 00a7805f has its CatchHandler @ 00978010
                       catch() { ... } // from try @ 00978010 with catch @ 00978010
                       catch() { ... } // from try @ 00978098 with catch @ 00978010
                       catch() { ... } // from try @ 009780e8 with catch @ 00978010 */
      (**(code **)(*plVar3 + 0x6f8))((float)local_50,plVar3,local_54[0]);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00978078;
    }
                    /* try { // try from 00978060 to 00a78077 has its CatchHandler @ 00978144 */
    tolua_error(param_1,&DAT_012da1a2,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:scrollToTop",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00978078:
                    /* try { // try from 0097807c to 00a7808b has its CatchHandler @ 00978140 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 0097808c to 00a78097 has its CatchHandler @ 00978128 */
                    /* try { // try from 00978098 to 00a780d3 has its CatchHandler @ 00978010 */
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

