
/* lua_cocos2dx_ui_ScrollView_scrollToPercentHorizontal(lua_State*) */

undefined4 lua_cocos2dx_ui_ScrollView_scrollToPercentHorizontal(lua_State *param_1)

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
                    /* try { // try from 009780d4 to 00a780e7 has its CatchHandler @ 00978144 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
                    /* try { // try from 009780e8 to 00a7815f has its CatchHandler @ 00978010 */
  if (iVar2 + -1 == 3) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"ccui.ScrollView:scrollToPercentHorizontal");
    uVar5 = luaval_to_number(param_1,3,&local_58,"ccui.ScrollView:scrollToPercentHorizontal");
                    /* catch() { ... } // from try @ 0097808c with catch @ 00978128 */
    uVar6 = luaval_to_boolean(param_1,4,local_5c,"ccui.ScrollView:scrollToPercentHorizontal");
                    /* catch() { ... } // from try @ 0097807c with catch @ 00978140 */
                    /* catch() { ... } // from try @ 00978060 with catch @ 00978144
                       catch() { ... } // from try @ 009780d4 with catch @ 00978144 */
    if ((((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      (**(code **)(*plVar3 + 0x738))((float)dStack_50,(float)local_58,plVar3,local_5c[0]);
      uVar7 = 1;
      lua_settop(param_1,1);
      goto LAB_009781b8;
    }
    tolua_error(param_1,&DAT_012da213,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012da1e9,
               iVar2 + -1,3);
  }
  uVar7 = 0;
LAB_009781b8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 009781d0 to 00a7821f has its CatchHandler @ 009781d0
                       catch() { ... } // from try @ 009781d0 with catch @ 009781d0
                       catch() { ... } // from try @ 00978258 with catch @ 009781d0
                       catch() { ... } // from try @ 009782cc with catch @ 009781d0 */
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

