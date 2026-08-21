
/* lua_cocos2dx_ui_TabControl_insertTab(lua_State*) */

undefined4 lua_cocos2dx_ui_TabControl_insertTab(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  TabControl *this;
  ulong uVar4;
  Layout *pLVar5;
  undefined4 uVar6;
  TabHeader *unaff_x22;
  uint uVar7;
  int local_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 0099a60c with catch @ 0099a70c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (TabControl *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_int32(param_1,2,&local_4c,"ccui.TabControl:insertTab");
    if (param_1 != (lua_State *)0x0) {
      iVar2 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 0099a838 with catch @ 0099a788
                       catch() { ... } // from try @ 0099a8a0 with catch @ 0099a788
                       catch() { ... } // from try @ 0099a8e0 with catch @ 0099a788
                       catch() { ... } // from try @ 0099a930 with catch @ 0099a788
                       catch() { ... } // from try @ 0099a980 with catch @ 0099a788
                       catch() { ... } // from try @ 0099a9ec with catch @ 0099a788 */
      if ((iVar2 < 3) ||
         (uVar4 = luaval_is_usertype(param_1,3,"ccui.TabHeader",0), (uVar4 & 1) == 0)) {
        uVar7 = 0;
      }
      else {
        unaff_x22 = (TabHeader *)tolua_tousertype(param_1,3,0);
        uVar7 = 1;
      }
      iVar2 = lua_gettop(param_1);
      if (((3 < iVar2) && (uVar4 = luaval_is_usertype(param_1,4,"ccui.Layout",0), (uVar4 & 1) != 0))
         && (pLVar5 = (Layout *)tolua_tousertype(param_1,4,0), (uVar3 & uVar7) != 0)) {
                    /* try { // try from 0099a82c to 00a9a837 has its CatchHandler @ 0099aa60 */
        cocos2d::ui::TabControl::insertTab(this,local_4c,unaff_x22,pLVar5);
                    /* try { // try from 0099a838 to 00a9a893 has its CatchHandler @ 0099a788 */
        uVar6 = 1;
        lua_settop(param_1,1);
        goto LAB_0099a860;
      }
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ui_TabControl_insertTab\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TabControl:insertTab",iVar2 + -1,3);
  }
  uVar6 = 0;
LAB_0099a860:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

