
/* lua_cocos2dx_ui_ScrollView_jumpToPercentVertical(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_jumpToPercentVertical(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00979168 to 00a7917b has its CatchHandler @ 00979200 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 00979180 to 00a791b3 has its CatchHandler @ 00979204 */
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"ccui.ScrollView:jumpToPercentVertical");
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 009791b4 to 00a7924f has its CatchHandler @ 00979064 */
      (**(code **)(*plVar3 + 0x788))((float)local_40,plVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00979208;
    }
                    /* catch() { ... } // from try @ 00979168 with catch @ 00979200 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ui_ScrollView_jumpToPercentVertical\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:jumpToPercentVertical",iVar2 + -1,1);
  }
                    /* catch() { ... } // from try @ 00979180 with catch @ 00979204 */
  uVar5 = 0;
LAB_00979208:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

